// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_DEQUANT_CELL_H_
#define VERILATED_VTOP_DEQUANT_CELL_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop_dequant_cell final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_en,0,0);
    VL_IN8(io_i_data,7,0);
    VL_IN8(io_zero_point,7,0);
    CData/*7:0*/ __PVT__sub_module__DOT__out;
    CData/*0:0*/ __PVT__convert_data_convert__DOT__i_sign;
    CData/*0:0*/ __PVT__convert_data_convert__DOT__float_sign;
    CData/*7:0*/ __PVT__convert_data_convert__DOT__float_exp;
    CData/*7:0*/ __PVT__convert_data_convert__DOT___GEN_35;
    CData/*0:0*/ __PVT__fp32_data_muler__DOT__is_zero;
    CData/*0:0*/ __PVT__fp32_data_muler__DOT__valid_in_r;
    CData/*0:0*/ __PVT__fp32_data_muler__DOT__carry_r;
    CData/*0:0*/ __PVT__fp32_data_muler__DOT__carry;
    CData/*7:0*/ __PVT__fp32_data_muler__DOT__ze_r;
    CData/*0:0*/ __PVT__fp32_data_muler__DOT__out_z_r;
    VL_IN(io_scale,31,0);
    VL_OUT(io_o_data,31,0);
    IData/*31:0*/ __PVT__convert_data_convert_io_i_data;
    IData/*30:0*/ __PVT__convert_data_convert__DOT__i_uint;
    IData/*22:0*/ __PVT__convert_data_convert__DOT__float_frac;
    IData/*22:0*/ __PVT__convert_data_convert__DOT___GEN_42;
    IData/*24:0*/ __PVT__fp32_data_muler__DOT__zf_1;
    IData/*31:0*/ __PVT__fp32_data_muler__DOT__io_z_r;
    QData/*47:0*/ __PVT__fp32_data_muler__DOT___zf_0_T_2;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_dequant_cell(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_dequant_cell();
    VL_UNCOPYABLE(Vtop_dequant_cell);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
