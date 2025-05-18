// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop_dequant_cell.h"

void Vtop_dequant_cell___ctor_var_reset(Vtop_dequant_cell* vlSelf);

Vtop_dequant_cell::Vtop_dequant_cell(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_dequant_cell___ctor_var_reset(this);
}

void Vtop_dequant_cell::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_dequant_cell::~Vtop_dequant_cell() {
}
