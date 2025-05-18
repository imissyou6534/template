#ifndef _VERILOGSIM_H_
#define _VERILOGSIM_H_ 


#include "verilated.h"
#include "verilated_fst_c.h"
#include "../obj_dir/Vtop.h"

void sim_init(void);
void step_and_dump_wave();
void sim_exit();
void tick_up();
void tick_down();


#endif
