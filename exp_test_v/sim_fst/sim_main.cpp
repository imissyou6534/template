#include <iostream>
// #include <opencv2/opencv.hpp>

#include "utils.h"
#include "verilogsim.h"
using namespace std;

extern VerilatedContext* contextp;
extern VerilatedFstC* tfp;
extern Vtop* top;

class Data2transfer{
    public:
        int in1;
        int in2;
        int out;
        int nums;

        Data2transfer()
        {
            this->nums = 0;
            this->in1 = 0;
            this->in2 = 0;
        }

        void transfer_data()
        {
            top->in1 = this->in1;
            top->in2 = this->in2;
            this->out = top->out;
        }
};

void tick(Data2transfer* data,int* ddr);
void tick_nop(Data2transfer* data);


int main()
{
    // 动态分配数组，并初始化为零
    // unsigned long int* ddr = new unsigned long int[6291456]();

    // cv::Mat image = cv::imread("kite.jpg", cv::IMREAD_COLOR);
    // cv::imshow("Image", image);
    // cv::cvtColor(image, image, cv::COLOR_BGR2RGB);
    // cv::resize(image, image, cv::Size(640, 640), 0, 0, cv::INTER_AREA);
    // cout<<image.cols<<" "<<image.rows<<endl;
    // image.release();

    int* ddr = new int[100]();

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
}


void tick(Data2transfer* data,int* ddr) {
    data->transfer_data();
    tick_up();
    data->in1 = randuint()%100;
    data->in2 = randuint()%100;
    ddr[data->nums%100]=data->out;
    data->nums++;
    data->transfer_data();
    tick_down();
}

void tick_nop(Data2transfer* data)
{
    data->transfer_data();
    tick_up();
    data->transfer_data();
    tick_down();
}

