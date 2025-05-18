// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop_linebuf_unit_extend.h"

void Vtop_linebuf_unit_extend___ctor_var_reset(Vtop_linebuf_unit_extend* vlSelf);

Vtop_linebuf_unit_extend::Vtop_linebuf_unit_extend(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_linebuf_unit_extend___ctor_var_reset(this);
}

void Vtop_linebuf_unit_extend::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_linebuf_unit_extend::~Vtop_linebuf_unit_extend() {
}
