// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_CONV_WIN_3_3_H_
#define VERILATED_VTOP_CONV_WIN_3_3_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop_conv_win_3_3 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clock,0,0);
        VL_IN8(__PVT__io_ifm_win_33_0,7,0);
        VL_IN8(__PVT__io_ifm_win_33_1,7,0);
        VL_IN8(__PVT__io_ifm_win_33_2,7,0);
        VL_IN8(__PVT__io_ifm_win_33_3,7,0);
        VL_IN8(__PVT__io_ifm_win_33_4,7,0);
        VL_IN8(__PVT__io_ifm_win_33_5,7,0);
        VL_IN8(__PVT__io_ifm_win_33_6,7,0);
        VL_IN8(__PVT__io_ifm_win_33_7,7,0);
        VL_IN8(__PVT__io_ifm_win_33_8,7,0);
        VL_IN8(__PVT__io_weight_win_33_ch1_0,7,0);
        VL_IN8(__PVT__io_weight_win_33_ch1_1,7,0);
        VL_IN8(__PVT__io_weight_win_33_ch1_2,7,0);
        VL_IN8(__PVT__io_weight_win_33_ch1_3,7,0);
        VL_IN8(__PVT__io_weight_win_33_ch1_4,7,0);
        VL_IN8(__PVT__io_weight_win_33_ch1_5,7,0);
        VL_IN8(__PVT__io_weight_win_33_ch1_6,7,0);
        VL_IN8(__PVT__io_weight_win_33_ch1_7,7,0);
        VL_IN8(__PVT__io_weight_win_33_ch1_8,7,0);
        VL_IN8(__PVT__io_weight_win_33_ch2_0,7,0);
        VL_IN8(__PVT__io_weight_win_33_ch2_1,7,0);
        VL_IN8(__PVT__io_weight_win_33_ch2_2,7,0);
        VL_IN8(__PVT__io_weight_win_33_ch2_3,7,0);
        VL_IN8(__PVT__io_weight_win_33_ch2_4,7,0);
        VL_IN8(__PVT__io_weight_win_33_ch2_5,7,0);
        VL_IN8(__PVT__io_weight_win_33_ch2_6,7,0);
        VL_IN8(__PVT__io_weight_win_33_ch2_7,7,0);
        VL_IN8(__PVT__io_weight_win_33_ch2_8,7,0);
        SData/*15:0*/ __PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1;
        SData/*15:0*/ __PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2;
        SData/*15:0*/ __PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1;
        SData/*15:0*/ __PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2;
        SData/*15:0*/ __PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1;
        SData/*15:0*/ __PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2;
        SData/*15:0*/ __PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1;
        SData/*15:0*/ __PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2;
        SData/*15:0*/ __PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1;
        SData/*15:0*/ __PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2;
        SData/*15:0*/ __PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1;
        SData/*15:0*/ __PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2;
        SData/*15:0*/ __PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1;
        SData/*15:0*/ __PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2;
        SData/*15:0*/ __PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1;
        SData/*15:0*/ __PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2;
        SData/*15:0*/ __PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1;
        SData/*15:0*/ __PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2;
        SData/*15:0*/ __PVT__addtree_0__DOT__addtree_a1;
        SData/*15:0*/ __PVT__addtree_0__DOT__addtree_a2;
        SData/*15:0*/ __PVT__addtree_0__DOT__addtree_a3;
        SData/*15:0*/ __PVT__addtree_0__DOT__addtree_a4;
        SData/*15:0*/ __PVT__addtree_0__DOT__addtree_a5;
        SData/*15:0*/ __PVT__addtree_0__DOT__addtree_a6;
        SData/*15:0*/ __PVT__addtree_0__DOT__addtree_a7;
        SData/*15:0*/ __PVT__addtree_0__DOT__addtree_a8;
        SData/*15:0*/ __PVT__addtree_0__DOT__addtree_a9;
        VL_OUT(__PVT__io_o_conv_ch1,17,0);
        VL_OUT(__PVT__io_o_conv_ch2,17,0);
        IData/*23:0*/ __PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG;
        IData/*23:0*/ __PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG;
        IData/*24:0*/ __PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D;
        IData/*23:0*/ __PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG;
        IData/*23:0*/ __PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG;
        IData/*24:0*/ __PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D;
        IData/*23:0*/ __PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG;
    };
    struct {
        IData/*23:0*/ __PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG;
        IData/*24:0*/ __PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D;
        IData/*23:0*/ __PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG;
        IData/*23:0*/ __PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG;
        IData/*24:0*/ __PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D;
        IData/*23:0*/ __PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG;
        IData/*23:0*/ __PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG;
        IData/*24:0*/ __PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D;
        IData/*23:0*/ __PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG;
        IData/*23:0*/ __PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG;
        IData/*24:0*/ __PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D;
        IData/*23:0*/ __PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG;
        IData/*23:0*/ __PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG;
        IData/*24:0*/ __PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D;
        IData/*23:0*/ __PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG;
        IData/*23:0*/ __PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG;
        IData/*24:0*/ __PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D;
        IData/*23:0*/ __PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG;
        IData/*23:0*/ __PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG;
        IData/*24:0*/ __PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D;
        IData/*17:0*/ __PVT__addtree_0__DOT__addtree_dout;
        IData/*17:0*/ __PVT__addtree_0__DOT__addtree__DOT__b1_d2;
        IData/*17:0*/ __PVT__addtree_0__DOT__addtree__DOT__b2_d2;
        IData/*17:0*/ __PVT__addtree_0__DOT__addtree__DOT__b3_d2;
        IData/*17:0*/ __PVT__addtree_1__DOT__addtree_dout;
        IData/*17:0*/ __PVT__addtree_1__DOT__addtree__DOT__b1_d2;
        IData/*17:0*/ __PVT__addtree_1__DOT__addtree__DOT__b2_d2;
        IData/*17:0*/ __PVT__addtree_1__DOT__addtree__DOT__b3_d2;
        QData/*40:0*/ __PVT__mult_0__DOT__cal_mult__DOT__MULT_RES;
        QData/*40:0*/ __PVT__mult_0__DOT__cal_mult__DOT__DOUT;
        QData/*40:0*/ __PVT__mult_1__DOT__cal_mult__DOT__MULT_RES;
        QData/*40:0*/ __PVT__mult_1__DOT__cal_mult__DOT__DOUT;
        QData/*40:0*/ __PVT__mult_2__DOT__cal_mult__DOT__MULT_RES;
        QData/*40:0*/ __PVT__mult_2__DOT__cal_mult__DOT__DOUT;
        QData/*40:0*/ __PVT__mult_3__DOT__cal_mult__DOT__MULT_RES;
        QData/*40:0*/ __PVT__mult_3__DOT__cal_mult__DOT__DOUT;
        QData/*40:0*/ __PVT__mult_4__DOT__cal_mult__DOT__MULT_RES;
        QData/*40:0*/ __PVT__mult_4__DOT__cal_mult__DOT__DOUT;
        QData/*40:0*/ __PVT__mult_5__DOT__cal_mult__DOT__MULT_RES;
        QData/*40:0*/ __PVT__mult_5__DOT__cal_mult__DOT__DOUT;
        QData/*40:0*/ __PVT__mult_6__DOT__cal_mult__DOT__MULT_RES;
        QData/*40:0*/ __PVT__mult_6__DOT__cal_mult__DOT__DOUT;
        QData/*40:0*/ __PVT__mult_7__DOT__cal_mult__DOT__MULT_RES;
        QData/*40:0*/ __PVT__mult_7__DOT__cal_mult__DOT__DOUT;
        QData/*40:0*/ __PVT__mult_8__DOT__cal_mult__DOT__MULT_RES;
        QData/*40:0*/ __PVT__mult_8__DOT__cal_mult__DOT__DOUT;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_conv_win_3_3(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_conv_win_3_3();
    VL_UNCOPYABLE(Vtop_conv_win_3_3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
