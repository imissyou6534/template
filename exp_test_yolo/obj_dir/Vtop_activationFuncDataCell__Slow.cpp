// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop_activationFuncDataCell.h"

void Vtop_activationFuncDataCell___ctor_var_reset(Vtop_activationFuncDataCell* vlSelf);

Vtop_activationFuncDataCell::Vtop_activationFuncDataCell(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_activationFuncDataCell___ctor_var_reset(this);
}

void Vtop_activationFuncDataCell::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_activationFuncDataCell::~Vtop_activationFuncDataCell() {
}
