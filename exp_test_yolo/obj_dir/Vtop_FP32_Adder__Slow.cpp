// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop_FP32_Adder.h"
#include "Vtop__Syms.h"

void Vtop_FP32_Adder___ctor_var_reset(Vtop_FP32_Adder* vlSelf);

Vtop_FP32_Adder::Vtop_FP32_Adder(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_FP32_Adder___ctor_var_reset(this);
}

void Vtop_FP32_Adder::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_FP32_Adder::~Vtop_FP32_Adder() {
}
