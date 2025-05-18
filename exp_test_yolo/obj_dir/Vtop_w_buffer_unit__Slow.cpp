// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop_w_buffer_unit.h"

void Vtop_w_buffer_unit___ctor_var_reset(Vtop_w_buffer_unit* vlSelf);

Vtop_w_buffer_unit::Vtop_w_buffer_unit(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_w_buffer_unit___ctor_var_reset(this);
}

void Vtop_w_buffer_unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_w_buffer_unit::~Vtop_w_buffer_unit() {
}
