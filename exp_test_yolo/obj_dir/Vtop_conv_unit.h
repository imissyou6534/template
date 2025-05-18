// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_CONV_UNIT_H_
#define VERILATED_VTOP_CONV_UNIT_H_  // guard

#include "verilated.h"

class Vtop__Syms;
class Vtop_conv_win_3_3;


class Vtop_conv_unit final : public VerilatedModule {
  public:
    // CELLS
    Vtop_conv_win_3_3* __PVT__conv_33_0;
    Vtop_conv_win_3_3* __PVT__conv_33_1;
    Vtop_conv_win_3_3* __PVT__conv_33_2;
    Vtop_conv_win_3_3* __PVT__conv_33_3;
    Vtop_conv_win_3_3* __PVT__conv_33_4;
    Vtop_conv_win_3_3* __PVT__conv_33_5;
    Vtop_conv_win_3_3* __PVT__conv_33_6;
    Vtop_conv_win_3_3* __PVT__conv_33_7;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(io_ifm_win_33_0,7,0);
        VL_IN8(io_ifm_win_33_1,7,0);
        VL_IN8(io_ifm_win_33_2,7,0);
        VL_IN8(io_ifm_win_33_3,7,0);
        VL_IN8(io_ifm_win_33_4,7,0);
        VL_IN8(io_ifm_win_33_5,7,0);
        VL_IN8(io_ifm_win_33_6,7,0);
        VL_IN8(io_ifm_win_33_7,7,0);
        VL_IN8(io_ifm_win_33_8,7,0);
        VL_IN8(io_ifm_win_33_9,7,0);
        VL_IN8(io_ifm_win_33_10,7,0);
        VL_IN8(io_ifm_win_33_11,7,0);
        VL_IN8(io_ifm_win_33_12,7,0);
        VL_IN8(io_ifm_win_33_13,7,0);
        VL_IN8(io_ifm_win_33_14,7,0);
        VL_IN8(io_ifm_win_33_15,7,0);
        VL_IN8(io_ifm_win_33_16,7,0);
        VL_IN8(io_ifm_win_33_17,7,0);
        VL_IN8(io_ifm_win_33_18,7,0);
        VL_IN8(io_ifm_win_33_19,7,0);
        VL_IN8(io_ifm_win_33_20,7,0);
        VL_IN8(io_ifm_win_33_21,7,0);
        VL_IN8(io_ifm_win_33_22,7,0);
        VL_IN8(io_ifm_win_33_23,7,0);
        VL_IN8(io_ifm_win_33_24,7,0);
        VL_IN8(io_ifm_win_33_25,7,0);
        VL_IN8(io_ifm_win_33_26,7,0);
        VL_IN8(io_ifm_win_33_27,7,0);
        VL_IN8(io_ifm_win_33_28,7,0);
        VL_IN8(io_ifm_win_33_29,7,0);
        VL_IN8(io_ifm_win_33_30,7,0);
        VL_IN8(io_ifm_win_33_31,7,0);
        VL_IN8(io_ifm_win_33_32,7,0);
        VL_IN8(io_ifm_win_33_33,7,0);
        VL_IN8(io_ifm_win_33_34,7,0);
        VL_IN8(io_ifm_win_33_35,7,0);
        VL_IN8(io_ifm_win_33_36,7,0);
        VL_IN8(io_ifm_win_33_37,7,0);
        VL_IN8(io_ifm_win_33_38,7,0);
        VL_IN8(io_ifm_win_33_39,7,0);
        VL_IN8(io_ifm_win_33_40,7,0);
        VL_IN8(io_ifm_win_33_41,7,0);
        VL_IN8(io_ifm_win_33_42,7,0);
        VL_IN8(io_ifm_win_33_43,7,0);
        VL_IN8(io_ifm_win_33_44,7,0);
        VL_IN8(io_ifm_win_33_45,7,0);
        VL_IN8(io_ifm_win_33_46,7,0);
        VL_IN8(io_ifm_win_33_47,7,0);
        VL_IN8(io_ifm_win_33_48,7,0);
        VL_IN8(io_ifm_win_33_49,7,0);
        VL_IN8(io_ifm_win_33_50,7,0);
        VL_IN8(io_ifm_win_33_51,7,0);
        VL_IN8(io_ifm_win_33_52,7,0);
        VL_IN8(io_ifm_win_33_53,7,0);
        VL_IN8(io_ifm_win_33_54,7,0);
        VL_IN8(io_ifm_win_33_55,7,0);
        VL_IN8(io_ifm_win_33_56,7,0);
        VL_IN8(io_ifm_win_33_57,7,0);
        VL_IN8(io_ifm_win_33_58,7,0);
        VL_IN8(io_ifm_win_33_59,7,0);
        VL_IN8(io_ifm_win_33_60,7,0);
        VL_IN8(io_ifm_win_33_61,7,0);
        VL_IN8(io_ifm_win_33_62,7,0);
    };
    struct {
        VL_IN8(io_ifm_win_33_63,7,0);
        VL_IN8(io_ifm_win_33_64,7,0);
        VL_IN8(io_ifm_win_33_65,7,0);
        VL_IN8(io_ifm_win_33_66,7,0);
        VL_IN8(io_ifm_win_33_67,7,0);
        VL_IN8(io_ifm_win_33_68,7,0);
        VL_IN8(io_ifm_win_33_69,7,0);
        VL_IN8(io_ifm_win_33_70,7,0);
        VL_IN8(io_ifm_win_33_71,7,0);
        VL_IN8(io_weight_win_33_ch1_0,7,0);
        VL_IN8(io_weight_win_33_ch1_1,7,0);
        VL_IN8(io_weight_win_33_ch1_2,7,0);
        VL_IN8(io_weight_win_33_ch1_3,7,0);
        VL_IN8(io_weight_win_33_ch1_4,7,0);
        VL_IN8(io_weight_win_33_ch1_5,7,0);
        VL_IN8(io_weight_win_33_ch1_6,7,0);
        VL_IN8(io_weight_win_33_ch1_7,7,0);
        VL_IN8(io_weight_win_33_ch1_8,7,0);
        VL_IN8(io_weight_win_33_ch1_9,7,0);
        VL_IN8(io_weight_win_33_ch1_10,7,0);
        VL_IN8(io_weight_win_33_ch1_11,7,0);
        VL_IN8(io_weight_win_33_ch1_12,7,0);
        VL_IN8(io_weight_win_33_ch1_13,7,0);
        VL_IN8(io_weight_win_33_ch1_14,7,0);
        VL_IN8(io_weight_win_33_ch1_15,7,0);
        VL_IN8(io_weight_win_33_ch1_16,7,0);
        VL_IN8(io_weight_win_33_ch1_17,7,0);
        VL_IN8(io_weight_win_33_ch1_18,7,0);
        VL_IN8(io_weight_win_33_ch1_19,7,0);
        VL_IN8(io_weight_win_33_ch1_20,7,0);
        VL_IN8(io_weight_win_33_ch1_21,7,0);
        VL_IN8(io_weight_win_33_ch1_22,7,0);
        VL_IN8(io_weight_win_33_ch1_23,7,0);
        VL_IN8(io_weight_win_33_ch1_24,7,0);
        VL_IN8(io_weight_win_33_ch1_25,7,0);
        VL_IN8(io_weight_win_33_ch1_26,7,0);
        VL_IN8(io_weight_win_33_ch1_27,7,0);
        VL_IN8(io_weight_win_33_ch1_28,7,0);
        VL_IN8(io_weight_win_33_ch1_29,7,0);
        VL_IN8(io_weight_win_33_ch1_30,7,0);
        VL_IN8(io_weight_win_33_ch1_31,7,0);
        VL_IN8(io_weight_win_33_ch1_32,7,0);
        VL_IN8(io_weight_win_33_ch1_33,7,0);
        VL_IN8(io_weight_win_33_ch1_34,7,0);
        VL_IN8(io_weight_win_33_ch1_35,7,0);
        VL_IN8(io_weight_win_33_ch1_36,7,0);
        VL_IN8(io_weight_win_33_ch1_37,7,0);
        VL_IN8(io_weight_win_33_ch1_38,7,0);
        VL_IN8(io_weight_win_33_ch1_39,7,0);
        VL_IN8(io_weight_win_33_ch1_40,7,0);
        VL_IN8(io_weight_win_33_ch1_41,7,0);
        VL_IN8(io_weight_win_33_ch1_42,7,0);
        VL_IN8(io_weight_win_33_ch1_43,7,0);
        VL_IN8(io_weight_win_33_ch1_44,7,0);
        VL_IN8(io_weight_win_33_ch1_45,7,0);
        VL_IN8(io_weight_win_33_ch1_46,7,0);
        VL_IN8(io_weight_win_33_ch1_47,7,0);
        VL_IN8(io_weight_win_33_ch1_48,7,0);
        VL_IN8(io_weight_win_33_ch1_49,7,0);
        VL_IN8(io_weight_win_33_ch1_50,7,0);
        VL_IN8(io_weight_win_33_ch1_51,7,0);
        VL_IN8(io_weight_win_33_ch1_52,7,0);
        VL_IN8(io_weight_win_33_ch1_53,7,0);
        VL_IN8(io_weight_win_33_ch1_54,7,0);
    };
    struct {
        VL_IN8(io_weight_win_33_ch1_55,7,0);
        VL_IN8(io_weight_win_33_ch1_56,7,0);
        VL_IN8(io_weight_win_33_ch1_57,7,0);
        VL_IN8(io_weight_win_33_ch1_58,7,0);
        VL_IN8(io_weight_win_33_ch1_59,7,0);
        VL_IN8(io_weight_win_33_ch1_60,7,0);
        VL_IN8(io_weight_win_33_ch1_61,7,0);
        VL_IN8(io_weight_win_33_ch1_62,7,0);
        VL_IN8(io_weight_win_33_ch1_63,7,0);
        VL_IN8(io_weight_win_33_ch1_64,7,0);
        VL_IN8(io_weight_win_33_ch1_65,7,0);
        VL_IN8(io_weight_win_33_ch1_66,7,0);
        VL_IN8(io_weight_win_33_ch1_67,7,0);
        VL_IN8(io_weight_win_33_ch1_68,7,0);
        VL_IN8(io_weight_win_33_ch1_69,7,0);
        VL_IN8(io_weight_win_33_ch1_70,7,0);
        VL_IN8(io_weight_win_33_ch1_71,7,0);
        VL_IN8(io_weight_win_33_ch2_0,7,0);
        VL_IN8(io_weight_win_33_ch2_1,7,0);
        VL_IN8(io_weight_win_33_ch2_2,7,0);
        VL_IN8(io_weight_win_33_ch2_3,7,0);
        VL_IN8(io_weight_win_33_ch2_4,7,0);
        VL_IN8(io_weight_win_33_ch2_5,7,0);
        VL_IN8(io_weight_win_33_ch2_6,7,0);
        VL_IN8(io_weight_win_33_ch2_7,7,0);
        VL_IN8(io_weight_win_33_ch2_8,7,0);
        VL_IN8(io_weight_win_33_ch2_9,7,0);
        VL_IN8(io_weight_win_33_ch2_10,7,0);
        VL_IN8(io_weight_win_33_ch2_11,7,0);
        VL_IN8(io_weight_win_33_ch2_12,7,0);
        VL_IN8(io_weight_win_33_ch2_13,7,0);
        VL_IN8(io_weight_win_33_ch2_14,7,0);
        VL_IN8(io_weight_win_33_ch2_15,7,0);
        VL_IN8(io_weight_win_33_ch2_16,7,0);
        VL_IN8(io_weight_win_33_ch2_17,7,0);
        VL_IN8(io_weight_win_33_ch2_18,7,0);
        VL_IN8(io_weight_win_33_ch2_19,7,0);
        VL_IN8(io_weight_win_33_ch2_20,7,0);
        VL_IN8(io_weight_win_33_ch2_21,7,0);
        VL_IN8(io_weight_win_33_ch2_22,7,0);
        VL_IN8(io_weight_win_33_ch2_23,7,0);
        VL_IN8(io_weight_win_33_ch2_24,7,0);
        VL_IN8(io_weight_win_33_ch2_25,7,0);
        VL_IN8(io_weight_win_33_ch2_26,7,0);
        VL_IN8(io_weight_win_33_ch2_27,7,0);
        VL_IN8(io_weight_win_33_ch2_28,7,0);
        VL_IN8(io_weight_win_33_ch2_29,7,0);
        VL_IN8(io_weight_win_33_ch2_30,7,0);
        VL_IN8(io_weight_win_33_ch2_31,7,0);
        VL_IN8(io_weight_win_33_ch2_32,7,0);
        VL_IN8(io_weight_win_33_ch2_33,7,0);
        VL_IN8(io_weight_win_33_ch2_34,7,0);
        VL_IN8(io_weight_win_33_ch2_35,7,0);
        VL_IN8(io_weight_win_33_ch2_36,7,0);
        VL_IN8(io_weight_win_33_ch2_37,7,0);
        VL_IN8(io_weight_win_33_ch2_38,7,0);
        VL_IN8(io_weight_win_33_ch2_39,7,0);
        VL_IN8(io_weight_win_33_ch2_40,7,0);
        VL_IN8(io_weight_win_33_ch2_41,7,0);
        VL_IN8(io_weight_win_33_ch2_42,7,0);
        VL_IN8(io_weight_win_33_ch2_43,7,0);
        VL_IN8(io_weight_win_33_ch2_44,7,0);
        VL_IN8(io_weight_win_33_ch2_45,7,0);
        VL_IN8(io_weight_win_33_ch2_46,7,0);
    };
    struct {
        VL_IN8(io_weight_win_33_ch2_47,7,0);
        VL_IN8(io_weight_win_33_ch2_48,7,0);
        VL_IN8(io_weight_win_33_ch2_49,7,0);
        VL_IN8(io_weight_win_33_ch2_50,7,0);
        VL_IN8(io_weight_win_33_ch2_51,7,0);
        VL_IN8(io_weight_win_33_ch2_52,7,0);
        VL_IN8(io_weight_win_33_ch2_53,7,0);
        VL_IN8(io_weight_win_33_ch2_54,7,0);
        VL_IN8(io_weight_win_33_ch2_55,7,0);
        VL_IN8(io_weight_win_33_ch2_56,7,0);
        VL_IN8(io_weight_win_33_ch2_57,7,0);
        VL_IN8(io_weight_win_33_ch2_58,7,0);
        VL_IN8(io_weight_win_33_ch2_59,7,0);
        VL_IN8(io_weight_win_33_ch2_60,7,0);
        VL_IN8(io_weight_win_33_ch2_61,7,0);
        VL_IN8(io_weight_win_33_ch2_62,7,0);
        VL_IN8(io_weight_win_33_ch2_63,7,0);
        VL_IN8(io_weight_win_33_ch2_64,7,0);
        VL_IN8(io_weight_win_33_ch2_65,7,0);
        VL_IN8(io_weight_win_33_ch2_66,7,0);
        VL_IN8(io_weight_win_33_ch2_67,7,0);
        VL_IN8(io_weight_win_33_ch2_68,7,0);
        VL_IN8(io_weight_win_33_ch2_69,7,0);
        VL_IN8(io_weight_win_33_ch2_70,7,0);
        VL_IN8(io_weight_win_33_ch2_71,7,0);
        VL_IN8(io_bias_valid,0,0);
        VL_IN(io_bias1,17,0);
        VL_IN(io_bias2,17,0);
        VL_OUT(io_o_conv_ch1,17,0);
        VL_OUT(io_o_conv_ch2,17,0);
        IData/*17:0*/ __PVT__addtree_0__DOT__temp_0;
        IData/*17:0*/ __PVT__addtree_0__DOT__temp_1;
        IData/*17:0*/ __PVT__addtree_0__DOT__temp_2;
        IData/*17:0*/ __PVT__addtree_0__DOT__temp_3;
        IData/*17:0*/ __PVT__addtree_1__DOT__temp_0;
        IData/*17:0*/ __PVT__addtree_1__DOT__temp_1;
        IData/*17:0*/ __PVT__addtree_1__DOT__temp_2;
        IData/*17:0*/ __PVT__addtree_1__DOT__temp_3;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_conv_unit(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_conv_unit();
    VL_UNCOPYABLE(Vtop_conv_unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
