// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_ACTIVATIONFUNCDATACELL_H_
#define VERILATED_VTOP_ACTIVATIONFUNCDATACELL_H_  // guard

#include "verilated.h"

class Vtop__Syms;
class Vtop_FP32_Adder;


class Vtop_activationFuncDataCell final : public VerilatedModule {
  public:
    // CELLS
    Vtop_FP32_Adder* __PVT__x_b_and_c_adder;
    Vtop_FP32_Adder* __PVT__axx_bx_c_adder;
    Vtop_FP32_Adder* __PVT__io_o_data_adder;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(io_cfg_act_func_prop,1,0);
        VL_IN8(io_cfg_act_op,1,0);
        VL_IN8(io_cfg_act_en,0,0);
        CData/*0:0*/ __PVT___T_2;
        CData/*0:0*/ __PVT__i_sign_t_r;
        CData/*0:0*/ __PVT__i_sign_t_r_1;
        CData/*0:0*/ __PVT__i_sign_t_r_2;
        CData/*0:0*/ __PVT__i_sign_t_r_3;
        CData/*0:0*/ __PVT__i_sign_t_r_4;
        CData/*0:0*/ __PVT__i_sign_t_r_5;
        CData/*0:0*/ __PVT__i_sign_t_r_6;
        CData/*0:0*/ __PVT__i_sign_t_r_7;
        CData/*0:0*/ __PVT__i_sign_t_r_8;
        CData/*0:0*/ __PVT__i_sign_t_r_9;
        CData/*0:0*/ __PVT__i_sign_t_r_10;
        CData/*0:0*/ __PVT__i_sign_t_r_11;
        CData/*0:0*/ __PVT__i_sign_t;
        CData/*0:0*/ __PVT__o_data_prop;
        CData/*0:0*/ __PVT__r;
        CData/*0:0*/ __PVT__r_1;
        CData/*0:0*/ __PVT__r_2;
        CData/*0:0*/ __PVT__r_3;
        CData/*0:0*/ __PVT__r_4;
        CData/*0:0*/ __PVT__r_5;
        CData/*0:0*/ __PVT__r_6;
        CData/*0:0*/ __PVT__r_7;
        CData/*0:0*/ __PVT__r_8;
        CData/*0:0*/ __PVT__r_9;
        CData/*0:0*/ __PVT__r_10;
        CData/*0:0*/ __PVT__r_11;
        CData/*0:0*/ __PVT__r_12;
        CData/*0:0*/ __PVT__r_13;
        CData/*0:0*/ __PVT__r_14;
        CData/*0:0*/ __PVT__r_15;
        CData/*0:0*/ __PVT__r_16;
        CData/*0:0*/ __PVT__r_17;
        CData/*0:0*/ __PVT__MuxOut_1__DOT___o_act_coefficient_T_9;
        CData/*0:0*/ __PVT__MuxOut_1__DOT___o_act_coefficient_T_19;
        CData/*0:0*/ __PVT__MuxOut_1__DOT___o_act_coefficient_T_29;
        CData/*0:0*/ __PVT__MuxOut_1__DOT___o_act_coefficient_T_39;
        CData/*0:0*/ __PVT__x_x_muler__DOT__is_zero;
        CData/*0:0*/ __PVT__x_x_muler__DOT__valid_in_r;
        CData/*0:0*/ __PVT__x_x_muler__DOT__carry_r;
        CData/*0:0*/ __PVT__x_x_muler__DOT__carry;
        CData/*7:0*/ __PVT__x_x_muler__DOT__ze_r;
        CData/*0:0*/ __PVT__x_x_muler__DOT__out_z_r;
        CData/*0:0*/ __PVT__x_b_muler__DOT__is_zero;
        CData/*0:0*/ __PVT__x_b_muler__DOT__valid_in_r;
        CData/*0:0*/ __PVT__x_b_muler__DOT__carry_r;
        CData/*0:0*/ __PVT__x_b_muler__DOT__carry;
        CData/*7:0*/ __PVT__x_b_muler__DOT__ze_r;
        CData/*0:0*/ __PVT__x_b_muler__DOT__out_z_r;
        CData/*0:0*/ __PVT__a_x_x_muler__DOT__is_zero;
        CData/*0:0*/ __PVT__a_x_x_muler__DOT__valid_in_r;
        CData/*0:0*/ __PVT__a_x_x_muler__DOT__carry_r;
        CData/*0:0*/ __PVT__a_x_x_muler__DOT__carry;
        CData/*7:0*/ __PVT__a_x_x_muler__DOT__ze_r;
        CData/*0:0*/ __PVT__a_x_x_muler__DOT__out_z_r;
        VL_IN(io_i_data,31,0);
        VL_IN(io_cfg_act_coefficient_a_0,31,0);
        VL_IN(io_cfg_act_coefficient_a_1,31,0);
        VL_IN(io_cfg_act_coefficient_a_2,31,0);
    };
    struct {
        VL_IN(io_cfg_act_coefficient_a_3,31,0);
        VL_IN(io_cfg_act_coefficient_b_0,31,0);
        VL_IN(io_cfg_act_coefficient_b_1,31,0);
        VL_IN(io_cfg_act_coefficient_b_2,31,0);
        VL_IN(io_cfg_act_coefficient_b_3,31,0);
        VL_IN(io_cfg_act_coefficient_b_4,31,0);
        VL_IN(io_cfg_act_coefficient_c_0,31,0);
        VL_IN(io_cfg_act_coefficient_c_1,31,0);
        VL_IN(io_cfg_act_coefficient_c_2,31,0);
        VL_IN(io_cfg_act_coefficient_c_3,31,0);
        VL_IN(io_cfg_act_coefficient_c_4,31,0);
        VL_IN(io_cfg_act_range_0,31,0);
        VL_IN(io_cfg_act_range_1,31,0);
        VL_IN(io_cfg_act_range_2,31,0);
        VL_IN(io_cfg_act_range_3,31,0);
        VL_OUT(io_o_data,31,0);
        IData/*31:0*/ __PVT__io_o_data_adder_io_x;
        IData/*31:0*/ __PVT__i_data_t;
        IData/*31:0*/ __PVT__a_x_x_r;
        IData/*31:0*/ __PVT__x_b_and_c_r;
        IData/*31:0*/ __PVT__x_b_and_c_r_1;
        IData/*31:0*/ __PVT__axx_bx_c_r;
        IData/*31:0*/ __PVT__axx_bx_c_r_1;
        IData/*31:0*/ __PVT__axx_bx_c_r_2;
        IData/*31:0*/ __PVT__axx_bx_c_r_3;
        IData/*31:0*/ __PVT___o_data_t_T_3;
        IData/*31:0*/ __PVT__io_o_data_r;
        IData/*31:0*/ __PVT__io_o_data_r_1;
        IData/*31:0*/ __PVT__io_o_data_r_2;
        IData/*31:0*/ __PVT__io_o_data_r_3;
        IData/*31:0*/ __PVT__io_o_data_r_4;
        IData/*31:0*/ __PVT__MuxOut__DOT__o_act_coefficient_t;
        IData/*31:0*/ __PVT__MuxOut_1__DOT__o_act_coefficient_t;
        IData/*31:0*/ __PVT__MuxOut_2__DOT__o_act_coefficient_t;
        IData/*24:0*/ __PVT__x_x_muler__DOT__zf_1;
        IData/*31:0*/ __PVT__x_x_muler__DOT__io_z_r;
        IData/*24:0*/ __PVT__x_b_muler__DOT__zf_1;
        IData/*31:0*/ __PVT__x_b_muler__DOT__io_z_r;
        IData/*24:0*/ __PVT__a_x_x_muler__DOT__zf_1;
        IData/*31:0*/ __PVT__a_x_x_muler__DOT__io_z_r;
        QData/*47:0*/ __PVT__x_x_muler__DOT___zf_0_T_2;
        QData/*47:0*/ __PVT__x_b_muler__DOT___zf_0_T_2;
        QData/*47:0*/ __PVT__a_x_x_muler__DOT___zf_0_T_2;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_activationFuncDataCell(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_activationFuncDataCell();
    VL_UNCOPYABLE(Vtop_activationFuncDataCell);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
