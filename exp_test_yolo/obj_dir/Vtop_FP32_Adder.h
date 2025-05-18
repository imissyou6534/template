// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_FP32_ADDER_H_
#define VERILATED_VTOP_FP32_ADDER_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop_FP32_Adder final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_valid_in,0,0);
    CData/*0:0*/ __PVT__y_gt_x_0;
    CData/*0:0*/ __PVT__zs_a;
    CData/*7:0*/ __PVT__ze_a;
    CData/*7:0*/ __PVT__xe_ye_a;
    CData/*0:0*/ __PVT__xs_ys_a;
    CData/*0:0*/ __PVT__valid_1;
    CData/*0:0*/ __PVT__xs_ys_1;
    CData/*7:0*/ __PVT__ze_1;
    CData/*0:0*/ __PVT__zs_1;
    CData/*0:0*/ __PVT__valid_2;
    CData/*7:0*/ __PVT__ze_2;
    CData/*0:0*/ __PVT__zs_2;
    CData/*0:0*/ __PVT__valid_3;
    CData/*7:0*/ __PVT__ze_3;
    CData/*0:0*/ __PVT__zs_3;
    CData/*4:0*/ __PVT__offset_3;
    CData/*0:0*/ __PVT__underflow_3;
    CData/*0:0*/ __PVT__valid_4;
    CData/*3:0*/ __PVT__off0__DOT___io_off_T_35;
    VL_IN(io_x,31,0);
    VL_IN(io_y,31,0);
    VL_OUT(io_z,31,0);
    IData/*23:0*/ __PVT___xf1_0_T_1;
    IData/*23:0*/ __PVT___xf1_0_T_3;
    IData/*23:0*/ __PVT__xf1_a;
    IData/*23:0*/ __PVT__yf1_a;
    IData/*23:0*/ __PVT__yf2_a0;
    IData/*23:0*/ __PVT__yf2_a1;
    IData/*23:0*/ __PVT__yf2_a2;
    IData/*23:0*/ __PVT__yf2_a3;
    IData/*23:0*/ __PVT__xf1_1;
    IData/*23:0*/ __PVT__yf2_1;
    IData/*24:0*/ __PVT__zf_2;
    IData/*24:0*/ __PVT__zf_3;
    IData/*31:0*/ __PVT__io_z_r;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_FP32_Adder(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_FP32_Adder();
    VL_UNCOPYABLE(Vtop_FP32_Adder);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
