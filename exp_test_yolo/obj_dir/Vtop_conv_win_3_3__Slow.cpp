// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop_conv_win_3_3.h"

void Vtop_conv_win_3_3___ctor_var_reset(Vtop_conv_win_3_3* vlSelf);

Vtop_conv_win_3_3::Vtop_conv_win_3_3(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_conv_win_3_3___ctor_var_reset(this);
}

void Vtop_conv_win_3_3::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_conv_win_3_3::~Vtop_conv_win_3_3() {
}
