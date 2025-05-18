#include "verilogsim.h"

VerilatedContext* contextp = NULL;
VerilatedFstC* tfp = NULL;
Vtop* top;

void sim_init() {
    contextp = new VerilatedContext;
    tfp = new VerilatedFstC;
    top = new Vtop;
    contextp->traceEverOn(true);
    top->trace(tfp,0);
    tfp->open("sim_fst/simx.fst");
}
void step_and_dump_wave() {
    top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
}
void sim_exit()
{
    step_and_dump_wave();
    tfp->close();
}
void tick_up()
{
    top->clock = 1;
    step_and_dump_wave();
}
void tick_down()
{
    top->clock = 0;
    step_and_dump_wave();
}
