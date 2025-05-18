// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop_activationFuncDataCell.h"

VL_ATTR_COLD void Vtop_activationFuncDataCell___ctor_var_reset(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_i_data = VL_RAND_RESET_I(32);
    vlSelf->io_cfg_act_coefficient_a_0 = VL_RAND_RESET_I(32);
    vlSelf->io_cfg_act_coefficient_a_1 = VL_RAND_RESET_I(32);
    vlSelf->io_cfg_act_coefficient_a_2 = VL_RAND_RESET_I(32);
    vlSelf->io_cfg_act_coefficient_a_3 = VL_RAND_RESET_I(32);
    vlSelf->io_cfg_act_coefficient_b_0 = VL_RAND_RESET_I(32);
    vlSelf->io_cfg_act_coefficient_b_1 = VL_RAND_RESET_I(32);
    vlSelf->io_cfg_act_coefficient_b_2 = VL_RAND_RESET_I(32);
    vlSelf->io_cfg_act_coefficient_b_3 = VL_RAND_RESET_I(32);
    vlSelf->io_cfg_act_coefficient_b_4 = VL_RAND_RESET_I(32);
    vlSelf->io_cfg_act_coefficient_c_0 = VL_RAND_RESET_I(32);
    vlSelf->io_cfg_act_coefficient_c_1 = VL_RAND_RESET_I(32);
    vlSelf->io_cfg_act_coefficient_c_2 = VL_RAND_RESET_I(32);
    vlSelf->io_cfg_act_coefficient_c_3 = VL_RAND_RESET_I(32);
    vlSelf->io_cfg_act_coefficient_c_4 = VL_RAND_RESET_I(32);
    vlSelf->io_cfg_act_range_0 = VL_RAND_RESET_I(32);
    vlSelf->io_cfg_act_range_1 = VL_RAND_RESET_I(32);
    vlSelf->io_cfg_act_range_2 = VL_RAND_RESET_I(32);
    vlSelf->io_cfg_act_range_3 = VL_RAND_RESET_I(32);
    vlSelf->io_cfg_act_func_prop = VL_RAND_RESET_I(2);
    vlSelf->io_cfg_act_op = VL_RAND_RESET_I(2);
    vlSelf->io_cfg_act_en = VL_RAND_RESET_I(1);
    vlSelf->io_o_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_o_data_adder_io_x = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i_data_t = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__a_x_x_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x_b_and_c_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x_b_and_c_r_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i_sign_t_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_sign_t_r_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_sign_t_r_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_sign_t_r_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_sign_t_r_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_sign_t_r_5 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_sign_t_r_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_sign_t_r_7 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_sign_t_r_8 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_sign_t_r_9 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_sign_t_r_10 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_sign_t_r_11 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_sign_t = VL_RAND_RESET_I(1);
    vlSelf->__PVT__o_data_prop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axx_bx_c_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axx_bx_c_r_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axx_bx_c_r_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axx_bx_c_r_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___o_data_t_T_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_5 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_7 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_8 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_9 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_10 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_11 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_12 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_13 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_14 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_15 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_16 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_17 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_o_data_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_o_data_r_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_o_data_r_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_o_data_r_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_o_data_r_4 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__MuxOut__DOT__o_act_coefficient_t = VL_RAND_RESET_I(32);
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_9 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_19 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_29 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_39 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t = VL_RAND_RESET_I(32);
    vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x_x_muler__DOT__is_zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__x_x_muler__DOT___zf_0_T_2 = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__x_x_muler__DOT__zf_1 = VL_RAND_RESET_I(25);
    vlSelf->__PVT__x_x_muler__DOT__valid_in_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__x_x_muler__DOT__carry_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__x_x_muler__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->__PVT__x_x_muler__DOT__ze_r = VL_RAND_RESET_I(8);
    vlSelf->__PVT__x_x_muler__DOT__out_z_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__x_x_muler__DOT__io_z_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x_b_muler__DOT__is_zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__x_b_muler__DOT___zf_0_T_2 = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__x_b_muler__DOT__zf_1 = VL_RAND_RESET_I(25);
    vlSelf->__PVT__x_b_muler__DOT__valid_in_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__x_b_muler__DOT__carry_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__x_b_muler__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->__PVT__x_b_muler__DOT__ze_r = VL_RAND_RESET_I(8);
    vlSelf->__PVT__x_b_muler__DOT__out_z_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__x_b_muler__DOT__io_z_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__a_x_x_muler__DOT__is_zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__a_x_x_muler__DOT___zf_0_T_2 = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__a_x_x_muler__DOT__zf_1 = VL_RAND_RESET_I(25);
    vlSelf->__PVT__a_x_x_muler__DOT__valid_in_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__a_x_x_muler__DOT__carry_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__a_x_x_muler__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->__PVT__a_x_x_muler__DOT__ze_r = VL_RAND_RESET_I(8);
    vlSelf->__PVT__a_x_x_muler__DOT__out_z_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__a_x_x_muler__DOT__io_z_r = VL_RAND_RESET_I(32);
}
