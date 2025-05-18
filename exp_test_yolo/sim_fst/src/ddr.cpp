#include "ddr.h"

// unsigned long int ddr[179101696]={0};
// unsigned long int* ddr = new unsigned long int[6291456]();

unsigned long int WEIGHT_BASE = 0x21000000-0x20000000;
unsigned long int BIAS_BASE   = 0x22CF8000-0x20000000;
unsigned long int WEIGHT_SPACE= 0x48000;
unsigned long int BIAS_SPACE  = 0x800;

float depth=0.33f;
float depth_max=1.0f;
// layernumber是每层卷积计算的数量
std::vector<int> layernumber = {
    1,
    1,
    2 + static_cast<int>(std::round(3 * depth)) * 2,
    1,
    2 + static_cast<int>(std::round(6 * depth)) * 2,
    1,
    2 + static_cast<int>(std::round(6 * depth)) * 2,
    1,
    2 + static_cast<int>(std::round(3 * depth)) * 2,
    2,
    0,
    0,
    2 + static_cast<int>(std::round(3 * depth)) * 2,
    0,
    0,
    2 + static_cast<int>(std::round(3 * depth)) * 2,
    1,
    0,
    2 + static_cast<int>(std::round(3 * depth)) * 2,
    1,
    0,
    2 + static_cast<int>(std::round(3 * depth)) * 2,
    9,
    9
};
// layernumber_max_cum-1，可以当作每一层最后一个卷积的序号
// 也就是下一层的第一个序号
static vector<int> layernumber_max_cum = {1,   2,  10,  11,  25,  26,  40,  41,  49,  51,  51,  51,  59,  59,  59,  67,  68,  68,  76,  77,  77,  85,  94, 103};
// std::vector<int> layernumber_max = {
//     1,
//     1,
//     2 + static_cast<int>(std::round(3 * depth_max)) * 2,
//     1,
//     2 + static_cast<int>(std::round(6 * depth_max)) * 2,
//     1,
//     2 + static_cast<int>(std::round(6 * depth_max)) * 2,
//     1,
//     2 + static_cast<int>(std::round(3 * depth_max)) * 2,
//     2,
//     0,
//     0,
//     2 + static_cast<int>(std::round(3 * depth_max)) * 2,
//     0,
//     0,
//     2 + static_cast<int>(std::round(3 * depth_max)) * 2,
//     1,
//     0,
//     2 + static_cast<int>(std::round(3 * depth_max)) * 2,
//     1,
//     0,
//     2 + static_cast<int>(std::round(3 * depth_max)) * 2,
//     9,
//     9
// };

// std::vector<std::string> layertype = {
//         "Conv", "Conv", "C2f", "Conv", "C2f", "Conv", "C2f", "Conv", "C2f",
//         "SPPF", "Upsample", "Concat", "C2f", "Upsample", "Concat", "C2f",
//         "Conv", "Concat", "C2f", "Conv", "Concat", "C2f", "detect_box",
//         "detect_cls"
//     };

void init_fm_write_ddr(unsigned long int* ddr,Mat image)
{
    unsigned long int ddr_addr=0;
    int channels = image.channels();
    for (int i = 0; i < image.rows; i++) {
        uchar* row_ptr = image.ptr<uchar>(i);  // 获取第i行的指针
        for (int j = 0; j < image.cols * channels; j += channels) {
            // 这里对输入图像进行了量化
            unsigned long int r = (unsigned long int)(row_ptr[j]/255.0f/0.0079f);
            unsigned long int g = (unsigned long int)(row_ptr[j+1]/255.0f/0.0079f);
            unsigned long int b = (unsigned long int)(row_ptr[j+2]/255.0f/0.0079f);
            ddr[ddr_addr]=r|(g<<8)|(b<<16);
            ddr_addr++;
        }
    }
}
void init_weight_write_ddr(unsigned long int* ddr)
{
    // int sum=0;
    // sum = accumulate(layernumber.begin(), layernumber.end(), 0);
    int layers = layernumber.size();
    int conv_layer=0;
    // 这个序号是考虑到所有的版本(n/s/m/l/x)
    int conv_layer_index=0;
    unsigned long int ddr_addr;
    for (int i = 0; i < layers; i++) {
        if(i==0)
        {
            conv_layer_index = 0;
        }
        else
        {
            conv_layer_index=layernumber_max_cum[i-1];
        }
        for (int j = 0;j<layernumber[i];j++)
        {
            string filename = "quant_bin/W" + to_string(conv_layer) + ".bin";
            vector<int64_t> data; // 存储读取的数据
            ifstream file(filename, ios::binary); // 打开二进制文件

            if (!file.is_open()) {
                cerr << "无法打开文件: " << filename << endl;
                continue;
            }
            file.seekg(0, ios::beg); // 回到文件开头
            int64_t value;
            // 每次读取sizeof(int64_t)字节，直到文件末尾
            while (file.read(reinterpret_cast<char*>(&value), sizeof(value))) {
                data.push_back(value);
            }
            file.close(); // 关闭文件
            ddr_addr = (WEIGHT_BASE + (conv_layer_index+j)*WEIGHT_SPACE)>>3;
            for (unsigned int k = 0; k < data.size(); k++) {
                ddr[ddr_addr] = data[k];
                ddr_addr++;
            }
            conv_layer++;
        }
    }
}

void init_bias_write_ddr(unsigned long int* ddr)
{
    // int sum=0;
    // sum = accumulate(layernumber.begin(), layernumber.end(), 0);
    int layers = layernumber.size();
    int conv_layer=0;
    // 这个序号是考虑到所有的版本(n/s/m/l/x)
    int conv_layer_index=0;
    unsigned long int ddr_addr;
    for (int i = 0; i < layers; i++) {
        if(i==0)
        {
            conv_layer_index = 0;
        }
        else
        {
            conv_layer_index=layernumber_max_cum[i-1];
        }
        for (int j = 0;j<layernumber[i];j++)
        {
            string filename = "quant_bin/B" + to_string(conv_layer) + ".bin";
            vector<int64_t> data; // 存储读取的数据
            ifstream file(filename, ios::binary); // 打开二进制文件

            if (!file.is_open()) {
                cerr << "无法打开文件: " << filename << endl;
                continue;
            }
            file.seekg(0, ios::beg); // 回到文件开头
            int64_t value;
            // 每次读取sizeof(int64_t)字节，直到文件末尾
            while (file.read(reinterpret_cast<char*>(&value), sizeof(value))) {
                data.push_back(value);
            }
            file.close(); // 关闭文件
            ddr_addr = (BIAS_BASE + (conv_layer_index+j)*BIAS_SPACE)>>3;
            for (unsigned int k = 0; k < data.size(); k++) {
                ddr[ddr_addr] = data[k];
                ddr_addr++;
            }
            conv_layer++;
        }
    }
}

