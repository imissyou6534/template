// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop_conv_unit.h"

void Vtop_conv_unit___ctor_var_reset(Vtop_conv_unit* vlSelf);

Vtop_conv_unit::Vtop_conv_unit(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_conv_unit___ctor_var_reset(this);
}

void Vtop_conv_unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_conv_unit::~Vtop_conv_unit() {
}
