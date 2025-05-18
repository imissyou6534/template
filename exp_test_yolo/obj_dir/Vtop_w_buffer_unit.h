// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_W_BUFFER_UNIT_H_
#define VERILATED_VTOP_W_BUFFER_UNIT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop_w_buffer_unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(io_write_addr_0,6,0);
    VL_IN8(io_write_addr_1,6,0);
    VL_IN8(io_write_addr_2,6,0);
    VL_IN8(io_write_addr_3,6,0);
    VL_IN8(io_write_addr_4,6,0);
    VL_IN8(io_write_addr_5,6,0);
    VL_IN8(io_write_addr_6,6,0);
    VL_IN8(io_write_addr_7,6,0);
    VL_IN8(io_write_en_0,0,0);
    VL_IN8(io_write_en_1,0,0);
    VL_IN8(io_write_en_2,0,0);
    VL_IN8(io_write_en_3,0,0);
    VL_IN8(io_write_en_4,0,0);
    VL_IN8(io_write_en_5,0,0);
    VL_IN8(io_write_en_6,0,0);
    VL_IN8(io_write_en_7,0,0);
    VL_IN8(io_read_addr,6,0);
    VL_INW(io_weight_in,71,0,3);
    VL_OUTW(io_weight_out_0,71,0,3);
    VL_OUTW(io_weight_out_1,71,0,3);
    VL_OUTW(io_weight_out_2,71,0,3);
    VL_OUTW(io_weight_out_3,71,0,3);
    VL_OUTW(io_weight_out_4,71,0,3);
    VL_OUTW(io_weight_out_5,71,0,3);
    VL_OUTW(io_weight_out_6,71,0,3);
    VL_OUTW(io_weight_out_7,71,0,3);
    VlWide<3>/*71:0*/ __PVT__TPRAM_WRAP__DOT__tpram_QA;
    VlWide<3>/*71:0*/ __PVT__TPRAM_WRAP_1__DOT__tpram_QA;
    VlWide<3>/*71:0*/ __PVT__TPRAM_WRAP_2__DOT__tpram_QA;
    VlWide<3>/*71:0*/ __PVT__TPRAM_WRAP_3__DOT__tpram_QA;
    VlWide<3>/*71:0*/ __PVT__TPRAM_WRAP_4__DOT__tpram_QA;
    VlWide<3>/*71:0*/ __PVT__TPRAM_WRAP_5__DOT__tpram_QA;
    VlWide<3>/*71:0*/ __PVT__TPRAM_WRAP_6__DOT__tpram_QA;
    VlWide<3>/*71:0*/ __PVT__TPRAM_WRAP_7__DOT__tpram_QA;
    VlUnpacked<VlWide<3>/*71:0*/, 128> __PVT__TPRAM_WRAP__DOT__tpram__DOT__mem;
    VlUnpacked<VlWide<3>/*71:0*/, 128> __PVT__TPRAM_WRAP_1__DOT__tpram__DOT__mem;
    VlUnpacked<VlWide<3>/*71:0*/, 128> __PVT__TPRAM_WRAP_2__DOT__tpram__DOT__mem;
    VlUnpacked<VlWide<3>/*71:0*/, 128> __PVT__TPRAM_WRAP_3__DOT__tpram__DOT__mem;
    VlUnpacked<VlWide<3>/*71:0*/, 128> __PVT__TPRAM_WRAP_4__DOT__tpram__DOT__mem;
    VlUnpacked<VlWide<3>/*71:0*/, 128> __PVT__TPRAM_WRAP_5__DOT__tpram__DOT__mem;
    VlUnpacked<VlWide<3>/*71:0*/, 128> __PVT__TPRAM_WRAP_6__DOT__tpram__DOT__mem;
    VlUnpacked<VlWide<3>/*71:0*/, 128> __PVT__TPRAM_WRAP_7__DOT__tpram__DOT__mem;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_w_buffer_unit(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_w_buffer_unit();
    VL_UNCOPYABLE(Vtop_w_buffer_unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
