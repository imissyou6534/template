#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <opencv2/opencv.hpp>
#include <typeinfo>

#include "ddr.h"
#include "utils.h"
#include "verilogsim.h"
using namespace std;

extern VerilatedContext* contextp;
extern VerilatedFstC* tfp;
extern Vtop* top;

class Data2transfer{
    public:
        unsigned int dma_raddr;
        bool dma_rareq;
        unsigned int dma_rsize;
        bool dma_rbusy;
        unsigned long int dma_rdata;
        bool dma_rvalid;
        bool dma_rready=0;
        unsigned int dma_waddr;
        bool dma_wareq;
        unsigned int dma_wsize;
        bool dma_wbusy;
        unsigned long int dma_wdata;
        bool dma_wvalid;
        bool dma_wready=1;

        unsigned int raddr_offset;
        unsigned int rdata_cnt;
        unsigned int waddr_offset;
        unsigned int wdata_cnt;


        Data2transfer()
        {
            this->dma_wready = 1;
            this->dma_rbusy = 0;
            this->dma_wbusy = 0;
            this->dma_rvalid = 0;
            this->dma_rdata = 0;

            this->raddr_offset=0;
            this->waddr_offset=0;
            this->rdata_cnt = 0;
            this->wdata_cnt = 0;

        }

        void transfer_data()
        {
            this->dma_raddr = (top->dma_raddr-0x20000000)>>3;
            this->dma_rsize = top->dma_rsize;
            // 从ddr读取数据的时候这两个拉高
            this->dma_rareq = top->dma_rareq;
            top->dma_rbusy = this->dma_rbusy;
            top->dma_rvalid = this->dma_rvalid;
            this->dma_rready = top->dma_rready;
            top->dma_rdata = this->dma_rdata;

            this->dma_wsize = top->dma_wsize;
            this->dma_waddr = (top->dma_waddr-0x20000000)>>3;
            this->dma_wareq = top->dma_wareq;
            top->dma_wready = this->dma_wready;
            top->dma_wbusy = this->dma_wbusy;
            this->dma_wvalid = top->dma_wvalid;
            this->dma_wdata = top->dma_wdata;
        }
};

void tick(Data2transfer* data,unsigned long int* ddr);
void tick_nop(Data2transfer* data);


// extern unsigned long int* ddr;


// dma 输出要写入ddr的数据的初始地址，以及写入的长度
// 这里要实现dma传来数据的接受以及地址的增加

// 从ddr读取数据的时候，会传来读取数据的初始地址，要传输的数量
// 这里要实现地址增加，标记数据有效rvalid，并且传输数据的时候拉高busy

int main()
{
    try {
        // 动态分配数组，并初始化为零
        unsigned long int* ddr = new unsigned long int[6291456]();

        cv::Mat image = cv::imread("kite.jpg", cv::IMREAD_COLOR);
        cv::imshow("Image", image);
        cv::cvtColor(image, image, cv::COLOR_BGR2RGB);
        cv::resize(image, image, cv::Size(640, 640), 0, 0, cv::INTER_AREA);
        cout<<image.cols<<" "<<image.rows<<endl;
        init_fm_write_ddr(ddr,image);
        init_bias_write_ddr(ddr);
        init_weight_write_ddr(ddr);
        image.release();

        Data2transfer* data = new Data2transfer;


        sim_init();
        top->reset=1;
        tick_nop(data);
        tick_nop(data);
        top->reset=0;
        tick_nop(data);

        int wave_length = 500;
        for(int i=0;i<wave_length;i++)
        {
            // tick_nop(data);
            tick(data,ddr);
        }

        sim_exit();
        delete[] ddr;
    } catch (const std::bad_alloc& e) {
        std::cerr << "内存分配失败: " << e.what() << std::endl;
        return -1;
    }
}


void tick(Data2transfer* data,unsigned long int* ddr) {
    data->transfer_data();
    tick_up();
    if(data->dma_rareq)
    {
        tick_down();
        // tick_nop(data);
        data->dma_rbusy = 1;
        data->transfer_data();
        tick_nop(data);
        data->dma_rvalid = (data->dma_rsize - data->raddr_offset)>0;
        while(data->dma_rvalid)
        {
            data->dma_rdata = ddr[data->dma_raddr+data->raddr_offset];
            data->transfer_data();
            tick_nop(data);
            data->raddr_offset++;
            data->dma_rvalid = (data->dma_rsize - data->raddr_offset)>0;
        }
        data->raddr_offset = 0;
        data->dma_rbusy = 0;
        data->transfer_data();
        tick_nop(data);
    }
    else if(data->dma_wareq)
    {
        tick_down();
        // tick_nop(data);
        data->dma_wbusy = 1;
        data->transfer_data();
        tick_nop(data);
        // data->dma_rvalid = (data->dma_rsize - data->raddr_offset)>0;
        while((data->dma_wsize - data->waddr_offset)>0)
        {
            if(data->dma_wvalid)
            {
                ddr[data->dma_waddr+data->waddr_offset] = data->dma_wdata;
                data->waddr_offset++;
            }
            data->transfer_data();
            tick_nop(data);
        }
        data->waddr_offset = 0;
        data->dma_wbusy = 0;
        data->transfer_data();
        tick_nop(data);
    }
    else {
        data->transfer_data();
        tick_down();
    }
}

void tick_nop(Data2transfer* data)
{
    data->transfer_data();
    tick_up();
    data->transfer_data();
    tick_down();
}







// void transfer_data(
//     unsigned int dma_raddr,
//     bool dma_rareq,
//     unsigned int dma_rsize,
//     bool dma_rbusy,
//     unsigned long int dma_rdata,
//     bool dma_rvalid,
//     bool dma_rready,
//     unsigned int dma_waddr,
//     bool dma_wareq,
//     unsigned int dma_wsize,
//     bool dma_wbusy,
//     unsigned long int dma_wdata,
//     bool dma_wvalid,
//     bool dma_wready
// )
// {
//     dma_raddr = top->io_dma_raddr;
//     dma_rsize = top->io_dma_rsize;
//     // 从ddr读取数据的时候这两个拉高
//     dma_rareq = top->io_dma_rareq;
//     top->io_dma_rbusy = dma_rbusy;
//     top->io_dma_rvalid = dma_rvalid;
//     dma_rready = top->io_dma_rready;
//     top->io_dma_rdata = dma_rdata;

//     dma_wsize = top->io_dma_wsize;
//     dma_waddr = top->io_dma_waddr;
//     dma_wareq = top->io_dma_wareq;
//     top->io_dma_wready = dma_wready;
//     top->io_dma_wbusy = dma_wbusy;
//     dma_wvalid = top->io_dma_wvalid;
//     dma_wdata = top->io_dma_wdata;
// }
// void transfer_data(
//     unsigned int dma_raddr,
//     bool dma_rareq,
//     unsigned int dma_rsize,
//     bool dma_rbusy,
//     unsigned long int dma_rdata,
//     bool dma_rvalid,
//     bool dma_rready,
//     unsigned int dma_waddr,
//     bool dma_wareq,
//     unsigned int dma_wsize,
//     bool dma_wbusy,
//     unsigned long int dma_wdata,
//     bool dma_wvalid,
//     bool dma_wready
// );


// ifstream file("quant_bin/B0.bin", ios::binary);
//     if (!file) { return 0;/* 错误处理 */ }
//     // 2. 获取文件大小并计算元素数量
//     // 将文件指针移动到文件末尾。
//     file.seekg(0, ios::end);
//     // 通过tellg获取文件指针的当前位置，即文件的大小（以字节为单位）
//     long int file_size = file.tellg();
//     // 指针回到开头
//     file.seekg(0, ios::beg);
//     long int num_elements = file_size / sizeof(int64_t);  // float 对应 float32

//     // 3. 读取数据到 vector
//     vector<int64_t> data(num_elements);
//     file.read(reinterpret_cast<char*>(data.data()), file_size);

//     // 4. 检查读取是否完整
//     if (file.gcount() != file_size) {
//         // 用于标准错误输出流
//         cerr << "读取字节数不匹配！" << endl;
//         return 1;
//     }

//     // 5. 输出数据（示例）
//     for (const auto& val : data) {
//         cout << val << " ";
//     }
//     cout << endl;

//     cv::Mat image = cv::imread("kite.jpg", cv::IMREAD_COLOR);
//     cv::imshow("Image", image);
//     cv::Mat rgb_image;
//     cv::cvtColor(image, rgb_image, cv::COLOR_BGR2RGB);
//     int height = image.rows;      // 图像高度
//     int width = image.cols;       // 图像宽度
//     int channels = image.channels(); // 通道数

//     // 打印 shape 信息
//     std::cout << "Image shape: (" << height << ", " << width << ", " << channels << ")" << std::endl;

//     // // uchar* data = image.data;
//     // int channels = image.channels();
//     // for (int i = 0; i < image.rows; i++) {
//     //     uchar* row_ptr = image.ptr<uchar>(i);  // 获取第i行的指针
//     //     for (int j = 0; j < image.cols * channels; j += channels) {
//     //         std::cout << "Pixel(" << i << "," << j/channels << "): ["
//     //                 << (int)row_ptr[j] << ", "     // B通道
//     //                 << (int)row_ptr[j + 1] << ", " // G通道
//     //                 << (int)row_ptr[j + 2] << "]"  // R通道
//     //                 << std::endl;
//     //     }
//     // }
//     cv::waitKey(0);


// unsigned int dma_raddr;
        // bool dma_rareq;
        // unsigned int dma_rsize;
        // bool dma_rbusy;
        // unsigned long int dma_rdata;
        // bool dma_rvalid;
        // bool dma_rready;
        // unsigned int dma_waddr;
        // bool dma_wareq;
        // unsigned int dma_wsize;
        // bool dma_wbusy;
        // unsigned long int dma_wdata;
        // bool dma_wvalid;
        // bool dma_wready;

        // dma_raddr = top->io_dma_raddr;
        // dma_rsize = top->io_dma_rsize;
        // // 从ddr读取数据的时候这两个拉高
        // dma_rareq = top->io_dma_rareq;
        // top->io_dma_rbusy = dma_rbusy;
        // top->io_dma_rvalid = dma_rvalid;
        // dma_rready = top->io_dma_rready;
        // top->io_dma_rdata = dma_rdata;

        // dma_wsize = top->io_dma_wsize;
        // dma_waddr = top->io_dma_waddr;
        // dma_wareq = top->io_dma_wareq;
        // top->io_dma_wready = dma_wready;
        // top->io_dma_wbusy = dma_wbusy;
        // dma_wvalid = top->io_dma_wvalid;
        // dma_wdata = top->io_dma_wdata;