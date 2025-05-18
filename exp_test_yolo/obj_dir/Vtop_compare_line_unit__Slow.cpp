// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop_compare_line_unit.h"

void Vtop_compare_line_unit___ctor_var_reset(Vtop_compare_line_unit* vlSelf);

Vtop_compare_line_unit::Vtop_compare_line_unit(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_compare_line_unit___ctor_var_reset(this);
}

void Vtop_compare_line_unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_compare_line_unit::~Vtop_compare_line_unit() {
}
