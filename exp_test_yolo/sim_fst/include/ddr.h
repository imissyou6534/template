#ifndef _DDR_H_
#define _DDR_H_ 

#include "ddr.h"

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <opencv2/opencv.hpp>
#include <numeric>

using namespace std;
using namespace cv;

// unsigned long int ddr[180379648];

// unsigned long int WEIGHT_BASE ;
// unsigned long int BIAS_BASE   ;
// unsigned long int WEIGHT_SPACE;
// unsigned long int BIAS_SPACE  ;

// float depth;
// float depth_max;

// std::vector<int> layernumber;
// std::vector<int> layernumber_max;
// std::vector<std::string> layertype;

void init_fm_write_ddr(unsigned long int* ddr,Mat image);
void init_weight_write_ddr(unsigned long int* ddr);
void init_bias_write_ddr(unsigned long int* ddr);

#endif

