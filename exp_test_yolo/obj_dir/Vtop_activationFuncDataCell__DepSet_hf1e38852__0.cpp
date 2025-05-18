// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop_FP32_Adder.h"
#include "Vtop__Syms.h"
#include "Vtop_activationFuncDataCell.h"

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__0(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__0\n"); );
    // Body
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__x_x_muler__DOT__carry_r = (1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__x_x_muler__DOT___zf_0_T_2 
                                                             >> 0x2fU)));
        vlSelf->__PVT__a_x_x_muler__DOT__carry_r = 
            (1U & (IData)((vlSelf->__PVT__a_x_x_muler__DOT___zf_0_T_2 
                           >> 0x2fU)));
        vlSelf->__PVT__x_b_muler__DOT__carry_r = (1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__x_b_muler__DOT___zf_0_T_2 
                                                             >> 0x2fU)));
        vlSelf->__PVT__i_sign_t = vlSelf->__PVT__i_sign_t_r_11;
        vlSelf->__PVT__r_17 = vlSelf->__PVT__r_16;
        vlSelf->__PVT__io_o_data_r_4 = vlSelf->__PVT__io_o_data_r_3;
        vlSelf->__PVT__i_sign_t_r_11 = vlSelf->__PVT__i_sign_t_r_10;
        vlSelf->__PVT__r_16 = vlSelf->__PVT__r_15;
        vlSelf->__PVT__io_o_data_r_3 = vlSelf->__PVT__io_o_data_r_2;
        vlSelf->__PVT__i_sign_t_r_10 = vlSelf->__PVT__i_sign_t_r_9;
        vlSelf->__PVT__r_15 = vlSelf->__PVT__r_14;
        vlSelf->__PVT__io_o_data_r_2 = vlSelf->__PVT__io_o_data_r_1;
        vlSelf->__PVT__i_sign_t_r_9 = vlSelf->__PVT__i_sign_t_r_8;
        vlSelf->__PVT__r_14 = vlSelf->__PVT__r_13;
        vlSelf->__PVT__io_o_data_r_1 = vlSelf->__PVT__io_o_data_r;
        vlSelf->__PVT__i_sign_t_r_8 = vlSelf->__PVT__i_sign_t_r_7;
        vlSelf->__PVT__r_13 = vlSelf->__PVT__r_12;
        vlSelf->__PVT__io_o_data_r = ((IData)(vlSelf->__PVT__o_data_prop)
                                       ? vlSelf->__PVT___o_data_t_T_3
                                       : vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r);
        vlSelf->__PVT__i_sign_t_r_7 = vlSelf->__PVT__i_sign_t_r_6;
        vlSelf->__PVT__r_12 = vlSelf->__PVT__r_11;
        vlSelf->__PVT__i_sign_t_r_6 = vlSelf->__PVT__i_sign_t_r_5;
        vlSelf->__PVT__r_11 = vlSelf->__PVT__r_10;
        vlSelf->__PVT__i_sign_t_r_5 = vlSelf->__PVT__i_sign_t_r_4;
        vlSelf->__PVT__r_10 = vlSelf->__PVT__r_9;
        vlSelf->__PVT__i_sign_t_r_4 = vlSelf->__PVT__i_sign_t_r_3;
        vlSelf->__PVT__r_9 = vlSelf->__PVT__r_8;
        vlSelf->__PVT__i_sign_t_r_3 = vlSelf->__PVT__i_sign_t_r_2;
        vlSelf->__PVT__r_8 = vlSelf->__PVT__r_7;
        vlSelf->__PVT__i_sign_t_r_2 = vlSelf->__PVT__i_sign_t_r_1;
        vlSelf->__PVT__r_7 = vlSelf->__PVT__r_6;
        vlSelf->__PVT__i_sign_t_r_1 = vlSelf->__PVT__i_sign_t_r;
        vlSelf->__PVT__r_6 = vlSelf->__PVT__r_5;
        vlSelf->__PVT__i_sign_t_r = (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r 
                                     >> 0x1fU);
        vlSelf->__PVT__r_5 = vlSelf->__PVT__r_4;
        vlSelf->__PVT__r_4 = vlSelf->__PVT__r_3;
        vlSelf->__PVT__r_3 = vlSelf->__PVT__r_2;
        vlSelf->__PVT__r_2 = vlSelf->__PVT__r_1;
        vlSelf->__PVT__r_1 = vlSelf->__PVT__r;
        vlSelf->__PVT__r = (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r 
                            >> 0x1fU);
    }
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__1(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__1\n"); );
    // Body
    vlSelf->__PVT___o_data_t_T_3 = (((~ (vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r 
                                         >> 0x1fU)) 
                                     << 0x1fU) | (0x7fffffffU 
                                                  & vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r));
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__axx_bx_c_r_3 = vlSelf->__PVT__axx_bx_c_r_2;
        vlSelf->__PVT__axx_bx_c_r_2 = vlSelf->__PVT__axx_bx_c_r_1;
        vlSelf->__PVT__axx_bx_c_r_1 = vlSelf->__PVT__axx_bx_c_r;
        vlSelf->__PVT__axx_bx_c_r = vlSelf->__PVT__a_x_x_muler__DOT__io_z_r;
    }
    if (vlSelf->__PVT__a_x_x_muler__DOT__valid_in_r) {
        vlSelf->__PVT__a_x_x_muler__DOT__io_z_r = (
                                                   ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__out_z_r) 
                                                    << 0x1fU) 
                                                   | ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__is_zero)
                                                       ? 0U
                                                       : 
                                                      ((0x7f800000U 
                                                        & (((IData)(vlSelf->__PVT__a_x_x_muler__DOT__ze_r) 
                                                            - 
                                                            ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__carry)
                                                              ? 0x7eU
                                                              : 0x7fU)) 
                                                           << 0x17U)) 
                                                       | (0x7fffffU 
                                                          & ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__carry)
                                                              ? 
                                                             ((vlSelf->__PVT__a_x_x_muler__DOT__zf_1 
                                                               >> 2U) 
                                                              + 
                                                              (1U 
                                                               & (vlSelf->__PVT__a_x_x_muler__DOT__zf_1 
                                                                  >> 1U)))
                                                              : 
                                                             ((vlSelf->__PVT__a_x_x_muler__DOT__zf_1 
                                                               >> 1U) 
                                                              + 
                                                              (1U 
                                                               & vlSelf->__PVT__a_x_x_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__a_x_x_muler__DOT__valid_in_r 
            = (1U & (~ (IData)(vlSymsp->TOP.reset)));
        vlSelf->__PVT__a_x_x_muler__DOT__zf_1 = (0x1ffffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__a_x_x_muler__DOT___zf_0_T_2 
                                                            >> 0x16U)));
    } else {
        vlSelf->__PVT__a_x_x_muler__DOT__valid_in_r = 0U;
    }
    vlSelf->__PVT__a_x_x_muler__DOT__carry = ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__carry_r) 
                                              | (0x1ffffffU 
                                                 == vlSelf->__PVT__a_x_x_muler__DOT__zf_1));
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__a_x_x_muler__DOT__out_z_r = 
            ((vlSelf->__PVT__a_x_x_r ^ vlSelf->__PVT__x_x_muler__DOT__io_z_r) 
             >> 0x1fU);
        vlSelf->__PVT__a_x_x_muler__DOT__is_zero = 
            ((0U == (0xffU & (vlSelf->__PVT__a_x_x_r 
                              >> 0x17U))) | (0U == 
                                             (0xffU 
                                              & (vlSelf->__PVT__x_x_muler__DOT__io_z_r 
                                                 >> 0x17U))));
        vlSelf->__PVT__a_x_x_muler__DOT__ze_r = (0xffU 
                                                 & ((vlSelf->__PVT__a_x_x_r 
                                                     >> 0x17U) 
                                                    + 
                                                    (vlSelf->__PVT__x_x_muler__DOT__io_z_r 
                                                     >> 0x17U)));
    }
    if (vlSelf->__PVT__x_x_muler__DOT__valid_in_r) {
        vlSelf->__PVT__x_x_muler__DOT__io_z_r = (((IData)(vlSelf->__PVT__x_x_muler__DOT__out_z_r) 
                                                  << 0x1fU) 
                                                 | ((IData)(vlSelf->__PVT__x_x_muler__DOT__is_zero)
                                                     ? 0U
                                                     : 
                                                    ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__x_x_muler__DOT__ze_r) 
                                                          - 
                                                          ((IData)(vlSelf->__PVT__x_x_muler__DOT__carry)
                                                            ? 0x7eU
                                                            : 0x7fU)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((IData)(vlSelf->__PVT__x_x_muler__DOT__carry)
                                                            ? 
                                                           ((vlSelf->__PVT__x_x_muler__DOT__zf_1 
                                                             >> 2U) 
                                                            + 
                                                            (1U 
                                                             & (vlSelf->__PVT__x_x_muler__DOT__zf_1 
                                                                >> 1U)))
                                                            : 
                                                           ((vlSelf->__PVT__x_x_muler__DOT__zf_1 
                                                             >> 1U) 
                                                            + 
                                                            (1U 
                                                             & vlSelf->__PVT__x_x_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__a_x_x_r = vlSelf->__PVT__MuxOut__DOT__o_act_coefficient_t;
        vlSelf->__PVT__x_x_muler__DOT__out_z_r = 0U;
        vlSelf->__PVT__x_x_muler__DOT__zf_1 = (0x1ffffffU 
                                               & (IData)(
                                                         (vlSelf->__PVT__x_x_muler__DOT___zf_0_T_2 
                                                          >> 0x16U)));
        vlSelf->__PVT__x_x_muler__DOT__is_zero = (0U 
                                                  == 
                                                  (0xffU 
                                                   & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r 
                                                      >> 0x17U)));
        vlSelf->__PVT__x_x_muler__DOT__ze_r = (0xffU 
                                               & ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U) 
                                                  + 
                                                  (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__MuxOut__DOT__o_act_coefficient_t = 0U;
    } else if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__MuxOut__DOT__o_act_coefficient_t 
            = ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_9)
                ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_0
                : ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_19)
                    ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_1
                    : ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_29)
                        ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_2
                        : ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_39)
                            ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_3
                            : 0U))));
    }
    vlSelf->__PVT__a_x_x_muler__DOT___zf_0_T_2 = (0xffffffffffffULL 
                                                  & ((0x800000ULL 
                                                      | (QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & vlSelf->__PVT__a_x_x_r)))) 
                                                     * 
                                                     (0x800000ULL 
                                                      | (QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & vlSelf->__PVT__x_x_muler__DOT__io_z_r))))));
    vlSelf->__PVT__x_x_muler__DOT__valid_in_r = ((~ (IData)(vlSymsp->TOP.reset)) 
                                                 & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en));
    vlSelf->__PVT__x_x_muler__DOT__carry = ((IData)(vlSelf->__PVT__x_x_muler__DOT__carry_r) 
                                            | (0x1ffffffU 
                                               == vlSelf->__PVT__x_x_muler__DOT__zf_1));
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__3(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__3\n"); );
    // Init
    IData/*31:0*/ __PVT__MuxOut_1__DOT___T_2;
    __PVT__MuxOut_1__DOT___T_2 = 0;
    // Body
    vlSelf->__PVT__x_x_muler__DOT___zf_0_T_2 = (0xffffffffffffULL 
                                                & ((0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r)))) 
                                                   * 
                                                   (0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r))))));
    vlSelf->io_o_data = ((0U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_op))
                          ? vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r
                          : (((IData)(vlSelf->__PVT__r_17) 
                              & (2U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop)))
                              ? vlSelf->__PVT__io_o_data_adder->__PVT__io_z_r
                              : vlSelf->__PVT__io_o_data_r_4));
    vlSelf->__PVT___T_2 = ((1U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop)) 
                           | (2U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop)));
    vlSelf->__PVT__o_data_prop = ((IData)(vlSelf->__PVT__i_sign_t) 
                                  & (IData)(vlSelf->__PVT___T_2));
    __PVT__MuxOut_1__DOT___T_2 = (((IData)(vlSelf->__PVT___T_2) 
                                   & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r 
                                      >> 0x1fU)) ? 
                                  (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r)
                                   : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r);
    vlSelf->__PVT__io_o_data_adder_io_x = ((IData)(vlSelf->__PVT__o_data_prop)
                                            ? vlSelf->__PVT___o_data_t_T_3
                                            : vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r);
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_9 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_0) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_0)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_19 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_1) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_1)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_29 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_2) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_2)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_39 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_3) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_3)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__0(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__0\n"); );
    // Body
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__x_x_muler__DOT__carry_r = (1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__x_x_muler__DOT___zf_0_T_2 
                                                             >> 0x2fU)));
        vlSelf->__PVT__a_x_x_muler__DOT__carry_r = 
            (1U & (IData)((vlSelf->__PVT__a_x_x_muler__DOT___zf_0_T_2 
                           >> 0x2fU)));
        vlSelf->__PVT__x_b_muler__DOT__carry_r = (1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__x_b_muler__DOT___zf_0_T_2 
                                                             >> 0x2fU)));
        vlSelf->__PVT__i_sign_t = vlSelf->__PVT__i_sign_t_r_11;
        vlSelf->__PVT__r_17 = vlSelf->__PVT__r_16;
        vlSelf->__PVT__io_o_data_r_4 = vlSelf->__PVT__io_o_data_r_3;
        vlSelf->__PVT__i_sign_t_r_11 = vlSelf->__PVT__i_sign_t_r_10;
        vlSelf->__PVT__r_16 = vlSelf->__PVT__r_15;
        vlSelf->__PVT__io_o_data_r_3 = vlSelf->__PVT__io_o_data_r_2;
        vlSelf->__PVT__i_sign_t_r_10 = vlSelf->__PVT__i_sign_t_r_9;
        vlSelf->__PVT__r_15 = vlSelf->__PVT__r_14;
        vlSelf->__PVT__io_o_data_r_2 = vlSelf->__PVT__io_o_data_r_1;
        vlSelf->__PVT__i_sign_t_r_9 = vlSelf->__PVT__i_sign_t_r_8;
        vlSelf->__PVT__r_14 = vlSelf->__PVT__r_13;
        vlSelf->__PVT__io_o_data_r_1 = vlSelf->__PVT__io_o_data_r;
        vlSelf->__PVT__i_sign_t_r_8 = vlSelf->__PVT__i_sign_t_r_7;
        vlSelf->__PVT__r_13 = vlSelf->__PVT__r_12;
        vlSelf->__PVT__io_o_data_r = ((IData)(vlSelf->__PVT__o_data_prop)
                                       ? vlSelf->__PVT___o_data_t_T_3
                                       : vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r);
        vlSelf->__PVT__i_sign_t_r_7 = vlSelf->__PVT__i_sign_t_r_6;
        vlSelf->__PVT__r_12 = vlSelf->__PVT__r_11;
        vlSelf->__PVT__i_sign_t_r_6 = vlSelf->__PVT__i_sign_t_r_5;
        vlSelf->__PVT__r_11 = vlSelf->__PVT__r_10;
        vlSelf->__PVT__i_sign_t_r_5 = vlSelf->__PVT__i_sign_t_r_4;
        vlSelf->__PVT__r_10 = vlSelf->__PVT__r_9;
        vlSelf->__PVT__i_sign_t_r_4 = vlSelf->__PVT__i_sign_t_r_3;
        vlSelf->__PVT__r_9 = vlSelf->__PVT__r_8;
        vlSelf->__PVT__i_sign_t_r_3 = vlSelf->__PVT__i_sign_t_r_2;
        vlSelf->__PVT__r_8 = vlSelf->__PVT__r_7;
        vlSelf->__PVT__i_sign_t_r_2 = vlSelf->__PVT__i_sign_t_r_1;
        vlSelf->__PVT__r_7 = vlSelf->__PVT__r_6;
        vlSelf->__PVT__i_sign_t_r_1 = vlSelf->__PVT__i_sign_t_r;
        vlSelf->__PVT__r_6 = vlSelf->__PVT__r_5;
        vlSelf->__PVT__i_sign_t_r = (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r 
                                     >> 0x1fU);
        vlSelf->__PVT__r_5 = vlSelf->__PVT__r_4;
        vlSelf->__PVT__r_4 = vlSelf->__PVT__r_3;
        vlSelf->__PVT__r_3 = vlSelf->__PVT__r_2;
        vlSelf->__PVT__r_2 = vlSelf->__PVT__r_1;
        vlSelf->__PVT__r_1 = vlSelf->__PVT__r;
        vlSelf->__PVT__r = (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r 
                            >> 0x1fU);
    }
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__1(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__1\n"); );
    // Body
    vlSelf->__PVT___o_data_t_T_3 = (((~ (vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r 
                                         >> 0x1fU)) 
                                     << 0x1fU) | (0x7fffffffU 
                                                  & vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r));
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__axx_bx_c_r_3 = vlSelf->__PVT__axx_bx_c_r_2;
        vlSelf->__PVT__axx_bx_c_r_2 = vlSelf->__PVT__axx_bx_c_r_1;
        vlSelf->__PVT__axx_bx_c_r_1 = vlSelf->__PVT__axx_bx_c_r;
        vlSelf->__PVT__axx_bx_c_r = vlSelf->__PVT__a_x_x_muler__DOT__io_z_r;
    }
    if (vlSelf->__PVT__a_x_x_muler__DOT__valid_in_r) {
        vlSelf->__PVT__a_x_x_muler__DOT__io_z_r = (
                                                   ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__out_z_r) 
                                                    << 0x1fU) 
                                                   | ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__is_zero)
                                                       ? 0U
                                                       : 
                                                      ((0x7f800000U 
                                                        & (((IData)(vlSelf->__PVT__a_x_x_muler__DOT__ze_r) 
                                                            - 
                                                            ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__carry)
                                                              ? 0x7eU
                                                              : 0x7fU)) 
                                                           << 0x17U)) 
                                                       | (0x7fffffU 
                                                          & ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__carry)
                                                              ? 
                                                             ((vlSelf->__PVT__a_x_x_muler__DOT__zf_1 
                                                               >> 2U) 
                                                              + 
                                                              (1U 
                                                               & (vlSelf->__PVT__a_x_x_muler__DOT__zf_1 
                                                                  >> 1U)))
                                                              : 
                                                             ((vlSelf->__PVT__a_x_x_muler__DOT__zf_1 
                                                               >> 1U) 
                                                              + 
                                                              (1U 
                                                               & vlSelf->__PVT__a_x_x_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__a_x_x_muler__DOT__valid_in_r 
            = (1U & (~ (IData)(vlSymsp->TOP.reset)));
        vlSelf->__PVT__a_x_x_muler__DOT__zf_1 = (0x1ffffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__a_x_x_muler__DOT___zf_0_T_2 
                                                            >> 0x16U)));
    } else {
        vlSelf->__PVT__a_x_x_muler__DOT__valid_in_r = 0U;
    }
    vlSelf->__PVT__a_x_x_muler__DOT__carry = ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__carry_r) 
                                              | (0x1ffffffU 
                                                 == vlSelf->__PVT__a_x_x_muler__DOT__zf_1));
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__a_x_x_muler__DOT__out_z_r = 
            ((vlSelf->__PVT__a_x_x_r ^ vlSelf->__PVT__x_x_muler__DOT__io_z_r) 
             >> 0x1fU);
        vlSelf->__PVT__a_x_x_muler__DOT__is_zero = 
            ((0U == (0xffU & (vlSelf->__PVT__a_x_x_r 
                              >> 0x17U))) | (0U == 
                                             (0xffU 
                                              & (vlSelf->__PVT__x_x_muler__DOT__io_z_r 
                                                 >> 0x17U))));
        vlSelf->__PVT__a_x_x_muler__DOT__ze_r = (0xffU 
                                                 & ((vlSelf->__PVT__a_x_x_r 
                                                     >> 0x17U) 
                                                    + 
                                                    (vlSelf->__PVT__x_x_muler__DOT__io_z_r 
                                                     >> 0x17U)));
    }
    if (vlSelf->__PVT__x_x_muler__DOT__valid_in_r) {
        vlSelf->__PVT__x_x_muler__DOT__io_z_r = (((IData)(vlSelf->__PVT__x_x_muler__DOT__out_z_r) 
                                                  << 0x1fU) 
                                                 | ((IData)(vlSelf->__PVT__x_x_muler__DOT__is_zero)
                                                     ? 0U
                                                     : 
                                                    ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__x_x_muler__DOT__ze_r) 
                                                          - 
                                                          ((IData)(vlSelf->__PVT__x_x_muler__DOT__carry)
                                                            ? 0x7eU
                                                            : 0x7fU)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((IData)(vlSelf->__PVT__x_x_muler__DOT__carry)
                                                            ? 
                                                           ((vlSelf->__PVT__x_x_muler__DOT__zf_1 
                                                             >> 2U) 
                                                            + 
                                                            (1U 
                                                             & (vlSelf->__PVT__x_x_muler__DOT__zf_1 
                                                                >> 1U)))
                                                            : 
                                                           ((vlSelf->__PVT__x_x_muler__DOT__zf_1 
                                                             >> 1U) 
                                                            + 
                                                            (1U 
                                                             & vlSelf->__PVT__x_x_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__a_x_x_r = vlSelf->__PVT__MuxOut__DOT__o_act_coefficient_t;
        vlSelf->__PVT__x_x_muler__DOT__out_z_r = 0U;
        vlSelf->__PVT__x_x_muler__DOT__zf_1 = (0x1ffffffU 
                                               & (IData)(
                                                         (vlSelf->__PVT__x_x_muler__DOT___zf_0_T_2 
                                                          >> 0x16U)));
        vlSelf->__PVT__x_x_muler__DOT__is_zero = (0U 
                                                  == 
                                                  (0xffU 
                                                   & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r 
                                                      >> 0x17U)));
        vlSelf->__PVT__x_x_muler__DOT__ze_r = (0xffU 
                                               & ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U) 
                                                  + 
                                                  (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__MuxOut__DOT__o_act_coefficient_t = 0U;
    } else if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__MuxOut__DOT__o_act_coefficient_t 
            = ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_9)
                ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_0
                : ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_19)
                    ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_1
                    : ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_29)
                        ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_2
                        : ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_39)
                            ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_3
                            : 0U))));
    }
    vlSelf->__PVT__a_x_x_muler__DOT___zf_0_T_2 = (0xffffffffffffULL 
                                                  & ((0x800000ULL 
                                                      | (QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & vlSelf->__PVT__a_x_x_r)))) 
                                                     * 
                                                     (0x800000ULL 
                                                      | (QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & vlSelf->__PVT__x_x_muler__DOT__io_z_r))))));
    vlSelf->__PVT__x_x_muler__DOT__valid_in_r = ((~ (IData)(vlSymsp->TOP.reset)) 
                                                 & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en));
    vlSelf->__PVT__x_x_muler__DOT__carry = ((IData)(vlSelf->__PVT__x_x_muler__DOT__carry_r) 
                                            | (0x1ffffffU 
                                               == vlSelf->__PVT__x_x_muler__DOT__zf_1));
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__3(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__3\n"); );
    // Init
    IData/*31:0*/ __PVT__MuxOut_1__DOT___T_2;
    __PVT__MuxOut_1__DOT___T_2 = 0;
    // Body
    vlSelf->__PVT__x_x_muler__DOT___zf_0_T_2 = (0xffffffffffffULL 
                                                & ((0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r)))) 
                                                   * 
                                                   (0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r))))));
    vlSelf->__PVT___T_2 = ((1U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop)) 
                           | (2U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop)));
    vlSelf->__PVT__o_data_prop = ((IData)(vlSelf->__PVT__i_sign_t) 
                                  & (IData)(vlSelf->__PVT___T_2));
    __PVT__MuxOut_1__DOT___T_2 = (((IData)(vlSelf->__PVT___T_2) 
                                   & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r 
                                      >> 0x1fU)) ? 
                                  (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r)
                                   : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r);
    vlSelf->__PVT__io_o_data_adder_io_x = ((IData)(vlSelf->__PVT__o_data_prop)
                                            ? vlSelf->__PVT___o_data_t_T_3
                                            : vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r);
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_9 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_0) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_0)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_19 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_1) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_1)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_29 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_2) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_2)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_39 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_3) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_3)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__0(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__0\n"); );
    // Body
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__x_x_muler__DOT__carry_r = (1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__x_x_muler__DOT___zf_0_T_2 
                                                             >> 0x2fU)));
        vlSelf->__PVT__a_x_x_muler__DOT__carry_r = 
            (1U & (IData)((vlSelf->__PVT__a_x_x_muler__DOT___zf_0_T_2 
                           >> 0x2fU)));
        vlSelf->__PVT__x_b_muler__DOT__carry_r = (1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__x_b_muler__DOT___zf_0_T_2 
                                                             >> 0x2fU)));
        vlSelf->__PVT__i_sign_t = vlSelf->__PVT__i_sign_t_r_11;
        vlSelf->__PVT__r_17 = vlSelf->__PVT__r_16;
        vlSelf->__PVT__io_o_data_r_4 = vlSelf->__PVT__io_o_data_r_3;
        vlSelf->__PVT__i_sign_t_r_11 = vlSelf->__PVT__i_sign_t_r_10;
        vlSelf->__PVT__r_16 = vlSelf->__PVT__r_15;
        vlSelf->__PVT__io_o_data_r_3 = vlSelf->__PVT__io_o_data_r_2;
        vlSelf->__PVT__i_sign_t_r_10 = vlSelf->__PVT__i_sign_t_r_9;
        vlSelf->__PVT__r_15 = vlSelf->__PVT__r_14;
        vlSelf->__PVT__io_o_data_r_2 = vlSelf->__PVT__io_o_data_r_1;
        vlSelf->__PVT__i_sign_t_r_9 = vlSelf->__PVT__i_sign_t_r_8;
        vlSelf->__PVT__r_14 = vlSelf->__PVT__r_13;
        vlSelf->__PVT__io_o_data_r_1 = vlSelf->__PVT__io_o_data_r;
        vlSelf->__PVT__i_sign_t_r_8 = vlSelf->__PVT__i_sign_t_r_7;
        vlSelf->__PVT__r_13 = vlSelf->__PVT__r_12;
        vlSelf->__PVT__io_o_data_r = ((IData)(vlSelf->__PVT__o_data_prop)
                                       ? vlSelf->__PVT___o_data_t_T_3
                                       : vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r);
        vlSelf->__PVT__i_sign_t_r_7 = vlSelf->__PVT__i_sign_t_r_6;
        vlSelf->__PVT__r_12 = vlSelf->__PVT__r_11;
        vlSelf->__PVT__i_sign_t_r_6 = vlSelf->__PVT__i_sign_t_r_5;
        vlSelf->__PVT__r_11 = vlSelf->__PVT__r_10;
        vlSelf->__PVT__i_sign_t_r_5 = vlSelf->__PVT__i_sign_t_r_4;
        vlSelf->__PVT__r_10 = vlSelf->__PVT__r_9;
        vlSelf->__PVT__i_sign_t_r_4 = vlSelf->__PVT__i_sign_t_r_3;
        vlSelf->__PVT__r_9 = vlSelf->__PVT__r_8;
        vlSelf->__PVT__i_sign_t_r_3 = vlSelf->__PVT__i_sign_t_r_2;
        vlSelf->__PVT__r_8 = vlSelf->__PVT__r_7;
        vlSelf->__PVT__i_sign_t_r_2 = vlSelf->__PVT__i_sign_t_r_1;
        vlSelf->__PVT__r_7 = vlSelf->__PVT__r_6;
        vlSelf->__PVT__i_sign_t_r_1 = vlSelf->__PVT__i_sign_t_r;
        vlSelf->__PVT__r_6 = vlSelf->__PVT__r_5;
        vlSelf->__PVT__i_sign_t_r = (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r 
                                     >> 0x1fU);
        vlSelf->__PVT__r_5 = vlSelf->__PVT__r_4;
        vlSelf->__PVT__r_4 = vlSelf->__PVT__r_3;
        vlSelf->__PVT__r_3 = vlSelf->__PVT__r_2;
        vlSelf->__PVT__r_2 = vlSelf->__PVT__r_1;
        vlSelf->__PVT__r_1 = vlSelf->__PVT__r;
        vlSelf->__PVT__r = (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r 
                            >> 0x1fU);
    }
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__1(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__1\n"); );
    // Body
    vlSelf->__PVT___o_data_t_T_3 = (((~ (vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r 
                                         >> 0x1fU)) 
                                     << 0x1fU) | (0x7fffffffU 
                                                  & vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r));
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__axx_bx_c_r_3 = vlSelf->__PVT__axx_bx_c_r_2;
        vlSelf->__PVT__axx_bx_c_r_2 = vlSelf->__PVT__axx_bx_c_r_1;
        vlSelf->__PVT__axx_bx_c_r_1 = vlSelf->__PVT__axx_bx_c_r;
        vlSelf->__PVT__axx_bx_c_r = vlSelf->__PVT__a_x_x_muler__DOT__io_z_r;
    }
    if (vlSelf->__PVT__a_x_x_muler__DOT__valid_in_r) {
        vlSelf->__PVT__a_x_x_muler__DOT__io_z_r = (
                                                   ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__out_z_r) 
                                                    << 0x1fU) 
                                                   | ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__is_zero)
                                                       ? 0U
                                                       : 
                                                      ((0x7f800000U 
                                                        & (((IData)(vlSelf->__PVT__a_x_x_muler__DOT__ze_r) 
                                                            - 
                                                            ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__carry)
                                                              ? 0x7eU
                                                              : 0x7fU)) 
                                                           << 0x17U)) 
                                                       | (0x7fffffU 
                                                          & ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__carry)
                                                              ? 
                                                             ((vlSelf->__PVT__a_x_x_muler__DOT__zf_1 
                                                               >> 2U) 
                                                              + 
                                                              (1U 
                                                               & (vlSelf->__PVT__a_x_x_muler__DOT__zf_1 
                                                                  >> 1U)))
                                                              : 
                                                             ((vlSelf->__PVT__a_x_x_muler__DOT__zf_1 
                                                               >> 1U) 
                                                              + 
                                                              (1U 
                                                               & vlSelf->__PVT__a_x_x_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__a_x_x_muler__DOT__valid_in_r 
            = (1U & (~ (IData)(vlSymsp->TOP.reset)));
        vlSelf->__PVT__a_x_x_muler__DOT__zf_1 = (0x1ffffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__a_x_x_muler__DOT___zf_0_T_2 
                                                            >> 0x16U)));
    } else {
        vlSelf->__PVT__a_x_x_muler__DOT__valid_in_r = 0U;
    }
    vlSelf->__PVT__a_x_x_muler__DOT__carry = ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__carry_r) 
                                              | (0x1ffffffU 
                                                 == vlSelf->__PVT__a_x_x_muler__DOT__zf_1));
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__a_x_x_muler__DOT__out_z_r = 
            ((vlSelf->__PVT__a_x_x_r ^ vlSelf->__PVT__x_x_muler__DOT__io_z_r) 
             >> 0x1fU);
        vlSelf->__PVT__a_x_x_muler__DOT__is_zero = 
            ((0U == (0xffU & (vlSelf->__PVT__a_x_x_r 
                              >> 0x17U))) | (0U == 
                                             (0xffU 
                                              & (vlSelf->__PVT__x_x_muler__DOT__io_z_r 
                                                 >> 0x17U))));
        vlSelf->__PVT__a_x_x_muler__DOT__ze_r = (0xffU 
                                                 & ((vlSelf->__PVT__a_x_x_r 
                                                     >> 0x17U) 
                                                    + 
                                                    (vlSelf->__PVT__x_x_muler__DOT__io_z_r 
                                                     >> 0x17U)));
    }
    if (vlSelf->__PVT__x_x_muler__DOT__valid_in_r) {
        vlSelf->__PVT__x_x_muler__DOT__io_z_r = (((IData)(vlSelf->__PVT__x_x_muler__DOT__out_z_r) 
                                                  << 0x1fU) 
                                                 | ((IData)(vlSelf->__PVT__x_x_muler__DOT__is_zero)
                                                     ? 0U
                                                     : 
                                                    ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__x_x_muler__DOT__ze_r) 
                                                          - 
                                                          ((IData)(vlSelf->__PVT__x_x_muler__DOT__carry)
                                                            ? 0x7eU
                                                            : 0x7fU)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((IData)(vlSelf->__PVT__x_x_muler__DOT__carry)
                                                            ? 
                                                           ((vlSelf->__PVT__x_x_muler__DOT__zf_1 
                                                             >> 2U) 
                                                            + 
                                                            (1U 
                                                             & (vlSelf->__PVT__x_x_muler__DOT__zf_1 
                                                                >> 1U)))
                                                            : 
                                                           ((vlSelf->__PVT__x_x_muler__DOT__zf_1 
                                                             >> 1U) 
                                                            + 
                                                            (1U 
                                                             & vlSelf->__PVT__x_x_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__a_x_x_r = vlSelf->__PVT__MuxOut__DOT__o_act_coefficient_t;
        vlSelf->__PVT__x_x_muler__DOT__out_z_r = 0U;
        vlSelf->__PVT__x_x_muler__DOT__zf_1 = (0x1ffffffU 
                                               & (IData)(
                                                         (vlSelf->__PVT__x_x_muler__DOT___zf_0_T_2 
                                                          >> 0x16U)));
        vlSelf->__PVT__x_x_muler__DOT__is_zero = (0U 
                                                  == 
                                                  (0xffU 
                                                   & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r 
                                                      >> 0x17U)));
        vlSelf->__PVT__x_x_muler__DOT__ze_r = (0xffU 
                                               & ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U) 
                                                  + 
                                                  (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__MuxOut__DOT__o_act_coefficient_t = 0U;
    } else if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__MuxOut__DOT__o_act_coefficient_t 
            = ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_9)
                ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_0
                : ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_19)
                    ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_1
                    : ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_29)
                        ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_2
                        : ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_39)
                            ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_3
                            : 0U))));
    }
    vlSelf->__PVT__a_x_x_muler__DOT___zf_0_T_2 = (0xffffffffffffULL 
                                                  & ((0x800000ULL 
                                                      | (QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & vlSelf->__PVT__a_x_x_r)))) 
                                                     * 
                                                     (0x800000ULL 
                                                      | (QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & vlSelf->__PVT__x_x_muler__DOT__io_z_r))))));
    vlSelf->__PVT__x_x_muler__DOT__valid_in_r = ((~ (IData)(vlSymsp->TOP.reset)) 
                                                 & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en));
    vlSelf->__PVT__x_x_muler__DOT__carry = ((IData)(vlSelf->__PVT__x_x_muler__DOT__carry_r) 
                                            | (0x1ffffffU 
                                               == vlSelf->__PVT__x_x_muler__DOT__zf_1));
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__3(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__3\n"); );
    // Init
    IData/*31:0*/ __PVT__MuxOut_1__DOT___T_2;
    __PVT__MuxOut_1__DOT___T_2 = 0;
    // Body
    vlSelf->__PVT__x_x_muler__DOT___zf_0_T_2 = (0xffffffffffffULL 
                                                & ((0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r)))) 
                                                   * 
                                                   (0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r))))));
    vlSelf->__PVT___T_2 = ((1U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop)) 
                           | (2U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop)));
    vlSelf->__PVT__o_data_prop = ((IData)(vlSelf->__PVT__i_sign_t) 
                                  & (IData)(vlSelf->__PVT___T_2));
    __PVT__MuxOut_1__DOT___T_2 = (((IData)(vlSelf->__PVT___T_2) 
                                   & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r 
                                      >> 0x1fU)) ? 
                                  (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r)
                                   : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r);
    vlSelf->__PVT__io_o_data_adder_io_x = ((IData)(vlSelf->__PVT__o_data_prop)
                                            ? vlSelf->__PVT___o_data_t_T_3
                                            : vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r);
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_9 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_0) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_0)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_19 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_1) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_1)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_29 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_2) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_2)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_39 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_3) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_3)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__0(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__0\n"); );
    // Body
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__x_x_muler__DOT__carry_r = (1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__x_x_muler__DOT___zf_0_T_2 
                                                             >> 0x2fU)));
        vlSelf->__PVT__a_x_x_muler__DOT__carry_r = 
            (1U & (IData)((vlSelf->__PVT__a_x_x_muler__DOT___zf_0_T_2 
                           >> 0x2fU)));
        vlSelf->__PVT__x_b_muler__DOT__carry_r = (1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__x_b_muler__DOT___zf_0_T_2 
                                                             >> 0x2fU)));
        vlSelf->__PVT__i_sign_t = vlSelf->__PVT__i_sign_t_r_11;
        vlSelf->__PVT__r_17 = vlSelf->__PVT__r_16;
        vlSelf->__PVT__io_o_data_r_4 = vlSelf->__PVT__io_o_data_r_3;
        vlSelf->__PVT__i_sign_t_r_11 = vlSelf->__PVT__i_sign_t_r_10;
        vlSelf->__PVT__r_16 = vlSelf->__PVT__r_15;
        vlSelf->__PVT__io_o_data_r_3 = vlSelf->__PVT__io_o_data_r_2;
        vlSelf->__PVT__i_sign_t_r_10 = vlSelf->__PVT__i_sign_t_r_9;
        vlSelf->__PVT__r_15 = vlSelf->__PVT__r_14;
        vlSelf->__PVT__io_o_data_r_2 = vlSelf->__PVT__io_o_data_r_1;
        vlSelf->__PVT__i_sign_t_r_9 = vlSelf->__PVT__i_sign_t_r_8;
        vlSelf->__PVT__r_14 = vlSelf->__PVT__r_13;
        vlSelf->__PVT__io_o_data_r_1 = vlSelf->__PVT__io_o_data_r;
        vlSelf->__PVT__i_sign_t_r_8 = vlSelf->__PVT__i_sign_t_r_7;
        vlSelf->__PVT__r_13 = vlSelf->__PVT__r_12;
        vlSelf->__PVT__io_o_data_r = ((IData)(vlSelf->__PVT__o_data_prop)
                                       ? vlSelf->__PVT___o_data_t_T_3
                                       : vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r);
        vlSelf->__PVT__i_sign_t_r_7 = vlSelf->__PVT__i_sign_t_r_6;
        vlSelf->__PVT__r_12 = vlSelf->__PVT__r_11;
        vlSelf->__PVT__i_sign_t_r_6 = vlSelf->__PVT__i_sign_t_r_5;
        vlSelf->__PVT__r_11 = vlSelf->__PVT__r_10;
        vlSelf->__PVT__i_sign_t_r_5 = vlSelf->__PVT__i_sign_t_r_4;
        vlSelf->__PVT__r_10 = vlSelf->__PVT__r_9;
        vlSelf->__PVT__i_sign_t_r_4 = vlSelf->__PVT__i_sign_t_r_3;
        vlSelf->__PVT__r_9 = vlSelf->__PVT__r_8;
        vlSelf->__PVT__i_sign_t_r_3 = vlSelf->__PVT__i_sign_t_r_2;
        vlSelf->__PVT__r_8 = vlSelf->__PVT__r_7;
        vlSelf->__PVT__i_sign_t_r_2 = vlSelf->__PVT__i_sign_t_r_1;
        vlSelf->__PVT__r_7 = vlSelf->__PVT__r_6;
        vlSelf->__PVT__i_sign_t_r_1 = vlSelf->__PVT__i_sign_t_r;
        vlSelf->__PVT__r_6 = vlSelf->__PVT__r_5;
        vlSelf->__PVT__i_sign_t_r = (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r 
                                     >> 0x1fU);
        vlSelf->__PVT__r_5 = vlSelf->__PVT__r_4;
        vlSelf->__PVT__r_4 = vlSelf->__PVT__r_3;
        vlSelf->__PVT__r_3 = vlSelf->__PVT__r_2;
        vlSelf->__PVT__r_2 = vlSelf->__PVT__r_1;
        vlSelf->__PVT__r_1 = vlSelf->__PVT__r;
        vlSelf->__PVT__r = (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r 
                            >> 0x1fU);
    }
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__1(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__1\n"); );
    // Body
    vlSelf->__PVT___o_data_t_T_3 = (((~ (vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r 
                                         >> 0x1fU)) 
                                     << 0x1fU) | (0x7fffffffU 
                                                  & vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r));
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__axx_bx_c_r_3 = vlSelf->__PVT__axx_bx_c_r_2;
        vlSelf->__PVT__axx_bx_c_r_2 = vlSelf->__PVT__axx_bx_c_r_1;
        vlSelf->__PVT__axx_bx_c_r_1 = vlSelf->__PVT__axx_bx_c_r;
        vlSelf->__PVT__axx_bx_c_r = vlSelf->__PVT__a_x_x_muler__DOT__io_z_r;
    }
    if (vlSelf->__PVT__a_x_x_muler__DOT__valid_in_r) {
        vlSelf->__PVT__a_x_x_muler__DOT__io_z_r = (
                                                   ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__out_z_r) 
                                                    << 0x1fU) 
                                                   | ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__is_zero)
                                                       ? 0U
                                                       : 
                                                      ((0x7f800000U 
                                                        & (((IData)(vlSelf->__PVT__a_x_x_muler__DOT__ze_r) 
                                                            - 
                                                            ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__carry)
                                                              ? 0x7eU
                                                              : 0x7fU)) 
                                                           << 0x17U)) 
                                                       | (0x7fffffU 
                                                          & ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__carry)
                                                              ? 
                                                             ((vlSelf->__PVT__a_x_x_muler__DOT__zf_1 
                                                               >> 2U) 
                                                              + 
                                                              (1U 
                                                               & (vlSelf->__PVT__a_x_x_muler__DOT__zf_1 
                                                                  >> 1U)))
                                                              : 
                                                             ((vlSelf->__PVT__a_x_x_muler__DOT__zf_1 
                                                               >> 1U) 
                                                              + 
                                                              (1U 
                                                               & vlSelf->__PVT__a_x_x_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__a_x_x_muler__DOT__valid_in_r 
            = (1U & (~ (IData)(vlSymsp->TOP.reset)));
        vlSelf->__PVT__a_x_x_muler__DOT__zf_1 = (0x1ffffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__a_x_x_muler__DOT___zf_0_T_2 
                                                            >> 0x16U)));
    } else {
        vlSelf->__PVT__a_x_x_muler__DOT__valid_in_r = 0U;
    }
    vlSelf->__PVT__a_x_x_muler__DOT__carry = ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__carry_r) 
                                              | (0x1ffffffU 
                                                 == vlSelf->__PVT__a_x_x_muler__DOT__zf_1));
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__a_x_x_muler__DOT__out_z_r = 
            ((vlSelf->__PVT__a_x_x_r ^ vlSelf->__PVT__x_x_muler__DOT__io_z_r) 
             >> 0x1fU);
        vlSelf->__PVT__a_x_x_muler__DOT__is_zero = 
            ((0U == (0xffU & (vlSelf->__PVT__a_x_x_r 
                              >> 0x17U))) | (0U == 
                                             (0xffU 
                                              & (vlSelf->__PVT__x_x_muler__DOT__io_z_r 
                                                 >> 0x17U))));
        vlSelf->__PVT__a_x_x_muler__DOT__ze_r = (0xffU 
                                                 & ((vlSelf->__PVT__a_x_x_r 
                                                     >> 0x17U) 
                                                    + 
                                                    (vlSelf->__PVT__x_x_muler__DOT__io_z_r 
                                                     >> 0x17U)));
    }
    if (vlSelf->__PVT__x_x_muler__DOT__valid_in_r) {
        vlSelf->__PVT__x_x_muler__DOT__io_z_r = (((IData)(vlSelf->__PVT__x_x_muler__DOT__out_z_r) 
                                                  << 0x1fU) 
                                                 | ((IData)(vlSelf->__PVT__x_x_muler__DOT__is_zero)
                                                     ? 0U
                                                     : 
                                                    ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__x_x_muler__DOT__ze_r) 
                                                          - 
                                                          ((IData)(vlSelf->__PVT__x_x_muler__DOT__carry)
                                                            ? 0x7eU
                                                            : 0x7fU)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((IData)(vlSelf->__PVT__x_x_muler__DOT__carry)
                                                            ? 
                                                           ((vlSelf->__PVT__x_x_muler__DOT__zf_1 
                                                             >> 2U) 
                                                            + 
                                                            (1U 
                                                             & (vlSelf->__PVT__x_x_muler__DOT__zf_1 
                                                                >> 1U)))
                                                            : 
                                                           ((vlSelf->__PVT__x_x_muler__DOT__zf_1 
                                                             >> 1U) 
                                                            + 
                                                            (1U 
                                                             & vlSelf->__PVT__x_x_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__a_x_x_r = vlSelf->__PVT__MuxOut__DOT__o_act_coefficient_t;
        vlSelf->__PVT__x_x_muler__DOT__out_z_r = 0U;
        vlSelf->__PVT__x_x_muler__DOT__zf_1 = (0x1ffffffU 
                                               & (IData)(
                                                         (vlSelf->__PVT__x_x_muler__DOT___zf_0_T_2 
                                                          >> 0x16U)));
        vlSelf->__PVT__x_x_muler__DOT__is_zero = (0U 
                                                  == 
                                                  (0xffU 
                                                   & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r 
                                                      >> 0x17U)));
        vlSelf->__PVT__x_x_muler__DOT__ze_r = (0xffU 
                                               & ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U) 
                                                  + 
                                                  (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__MuxOut__DOT__o_act_coefficient_t = 0U;
    } else if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__MuxOut__DOT__o_act_coefficient_t 
            = ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_9)
                ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_0
                : ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_19)
                    ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_1
                    : ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_29)
                        ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_2
                        : ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_39)
                            ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_3
                            : 0U))));
    }
    vlSelf->__PVT__a_x_x_muler__DOT___zf_0_T_2 = (0xffffffffffffULL 
                                                  & ((0x800000ULL 
                                                      | (QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & vlSelf->__PVT__a_x_x_r)))) 
                                                     * 
                                                     (0x800000ULL 
                                                      | (QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & vlSelf->__PVT__x_x_muler__DOT__io_z_r))))));
    vlSelf->__PVT__x_x_muler__DOT__valid_in_r = ((~ (IData)(vlSymsp->TOP.reset)) 
                                                 & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en));
    vlSelf->__PVT__x_x_muler__DOT__carry = ((IData)(vlSelf->__PVT__x_x_muler__DOT__carry_r) 
                                            | (0x1ffffffU 
                                               == vlSelf->__PVT__x_x_muler__DOT__zf_1));
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__3(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__3\n"); );
    // Init
    IData/*31:0*/ __PVT__MuxOut_1__DOT___T_2;
    __PVT__MuxOut_1__DOT___T_2 = 0;
    // Body
    vlSelf->__PVT__x_x_muler__DOT___zf_0_T_2 = (0xffffffffffffULL 
                                                & ((0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r)))) 
                                                   * 
                                                   (0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r))))));
    vlSelf->__PVT___T_2 = ((1U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop)) 
                           | (2U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop)));
    vlSelf->__PVT__o_data_prop = ((IData)(vlSelf->__PVT__i_sign_t) 
                                  & (IData)(vlSelf->__PVT___T_2));
    __PVT__MuxOut_1__DOT___T_2 = (((IData)(vlSelf->__PVT___T_2) 
                                   & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r 
                                      >> 0x1fU)) ? 
                                  (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r)
                                   : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r);
    vlSelf->__PVT__io_o_data_adder_io_x = ((IData)(vlSelf->__PVT__o_data_prop)
                                            ? vlSelf->__PVT___o_data_t_T_3
                                            : vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r);
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_9 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_0) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_0)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_19 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_1) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_1)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_29 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_2) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_2)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_39 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_3) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_3)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__0(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__0\n"); );
    // Body
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__x_x_muler__DOT__carry_r = (1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__x_x_muler__DOT___zf_0_T_2 
                                                             >> 0x2fU)));
        vlSelf->__PVT__a_x_x_muler__DOT__carry_r = 
            (1U & (IData)((vlSelf->__PVT__a_x_x_muler__DOT___zf_0_T_2 
                           >> 0x2fU)));
        vlSelf->__PVT__x_b_muler__DOT__carry_r = (1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__x_b_muler__DOT___zf_0_T_2 
                                                             >> 0x2fU)));
        vlSelf->__PVT__i_sign_t = vlSelf->__PVT__i_sign_t_r_11;
        vlSelf->__PVT__r_17 = vlSelf->__PVT__r_16;
        vlSelf->__PVT__io_o_data_r_4 = vlSelf->__PVT__io_o_data_r_3;
        vlSelf->__PVT__i_sign_t_r_11 = vlSelf->__PVT__i_sign_t_r_10;
        vlSelf->__PVT__r_16 = vlSelf->__PVT__r_15;
        vlSelf->__PVT__io_o_data_r_3 = vlSelf->__PVT__io_o_data_r_2;
        vlSelf->__PVT__i_sign_t_r_10 = vlSelf->__PVT__i_sign_t_r_9;
        vlSelf->__PVT__r_15 = vlSelf->__PVT__r_14;
        vlSelf->__PVT__io_o_data_r_2 = vlSelf->__PVT__io_o_data_r_1;
        vlSelf->__PVT__i_sign_t_r_9 = vlSelf->__PVT__i_sign_t_r_8;
        vlSelf->__PVT__r_14 = vlSelf->__PVT__r_13;
        vlSelf->__PVT__io_o_data_r_1 = vlSelf->__PVT__io_o_data_r;
        vlSelf->__PVT__i_sign_t_r_8 = vlSelf->__PVT__i_sign_t_r_7;
        vlSelf->__PVT__r_13 = vlSelf->__PVT__r_12;
        vlSelf->__PVT__io_o_data_r = ((IData)(vlSelf->__PVT__o_data_prop)
                                       ? vlSelf->__PVT___o_data_t_T_3
                                       : vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r);
        vlSelf->__PVT__i_sign_t_r_7 = vlSelf->__PVT__i_sign_t_r_6;
        vlSelf->__PVT__r_12 = vlSelf->__PVT__r_11;
        vlSelf->__PVT__i_sign_t_r_6 = vlSelf->__PVT__i_sign_t_r_5;
        vlSelf->__PVT__r_11 = vlSelf->__PVT__r_10;
        vlSelf->__PVT__i_sign_t_r_5 = vlSelf->__PVT__i_sign_t_r_4;
        vlSelf->__PVT__r_10 = vlSelf->__PVT__r_9;
        vlSelf->__PVT__i_sign_t_r_4 = vlSelf->__PVT__i_sign_t_r_3;
        vlSelf->__PVT__r_9 = vlSelf->__PVT__r_8;
        vlSelf->__PVT__i_sign_t_r_3 = vlSelf->__PVT__i_sign_t_r_2;
        vlSelf->__PVT__r_8 = vlSelf->__PVT__r_7;
        vlSelf->__PVT__i_sign_t_r_2 = vlSelf->__PVT__i_sign_t_r_1;
        vlSelf->__PVT__r_7 = vlSelf->__PVT__r_6;
        vlSelf->__PVT__i_sign_t_r_1 = vlSelf->__PVT__i_sign_t_r;
        vlSelf->__PVT__r_6 = vlSelf->__PVT__r_5;
        vlSelf->__PVT__i_sign_t_r = (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r 
                                     >> 0x1fU);
        vlSelf->__PVT__r_5 = vlSelf->__PVT__r_4;
        vlSelf->__PVT__r_4 = vlSelf->__PVT__r_3;
        vlSelf->__PVT__r_3 = vlSelf->__PVT__r_2;
        vlSelf->__PVT__r_2 = vlSelf->__PVT__r_1;
        vlSelf->__PVT__r_1 = vlSelf->__PVT__r;
        vlSelf->__PVT__r = (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r 
                            >> 0x1fU);
    }
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__1(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__1\n"); );
    // Body
    vlSelf->__PVT___o_data_t_T_3 = (((~ (vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r 
                                         >> 0x1fU)) 
                                     << 0x1fU) | (0x7fffffffU 
                                                  & vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r));
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__axx_bx_c_r_3 = vlSelf->__PVT__axx_bx_c_r_2;
        vlSelf->__PVT__axx_bx_c_r_2 = vlSelf->__PVT__axx_bx_c_r_1;
        vlSelf->__PVT__axx_bx_c_r_1 = vlSelf->__PVT__axx_bx_c_r;
        vlSelf->__PVT__axx_bx_c_r = vlSelf->__PVT__a_x_x_muler__DOT__io_z_r;
    }
    if (vlSelf->__PVT__a_x_x_muler__DOT__valid_in_r) {
        vlSelf->__PVT__a_x_x_muler__DOT__io_z_r = (
                                                   ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__out_z_r) 
                                                    << 0x1fU) 
                                                   | ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__is_zero)
                                                       ? 0U
                                                       : 
                                                      ((0x7f800000U 
                                                        & (((IData)(vlSelf->__PVT__a_x_x_muler__DOT__ze_r) 
                                                            - 
                                                            ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__carry)
                                                              ? 0x7eU
                                                              : 0x7fU)) 
                                                           << 0x17U)) 
                                                       | (0x7fffffU 
                                                          & ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__carry)
                                                              ? 
                                                             ((vlSelf->__PVT__a_x_x_muler__DOT__zf_1 
                                                               >> 2U) 
                                                              + 
                                                              (1U 
                                                               & (vlSelf->__PVT__a_x_x_muler__DOT__zf_1 
                                                                  >> 1U)))
                                                              : 
                                                             ((vlSelf->__PVT__a_x_x_muler__DOT__zf_1 
                                                               >> 1U) 
                                                              + 
                                                              (1U 
                                                               & vlSelf->__PVT__a_x_x_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__a_x_x_muler__DOT__valid_in_r 
            = (1U & (~ (IData)(vlSymsp->TOP.reset)));
        vlSelf->__PVT__a_x_x_muler__DOT__zf_1 = (0x1ffffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__a_x_x_muler__DOT___zf_0_T_2 
                                                            >> 0x16U)));
    } else {
        vlSelf->__PVT__a_x_x_muler__DOT__valid_in_r = 0U;
    }
    vlSelf->__PVT__a_x_x_muler__DOT__carry = ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__carry_r) 
                                              | (0x1ffffffU 
                                                 == vlSelf->__PVT__a_x_x_muler__DOT__zf_1));
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__a_x_x_muler__DOT__out_z_r = 
            ((vlSelf->__PVT__a_x_x_r ^ vlSelf->__PVT__x_x_muler__DOT__io_z_r) 
             >> 0x1fU);
        vlSelf->__PVT__a_x_x_muler__DOT__is_zero = 
            ((0U == (0xffU & (vlSelf->__PVT__a_x_x_r 
                              >> 0x17U))) | (0U == 
                                             (0xffU 
                                              & (vlSelf->__PVT__x_x_muler__DOT__io_z_r 
                                                 >> 0x17U))));
        vlSelf->__PVT__a_x_x_muler__DOT__ze_r = (0xffU 
                                                 & ((vlSelf->__PVT__a_x_x_r 
                                                     >> 0x17U) 
                                                    + 
                                                    (vlSelf->__PVT__x_x_muler__DOT__io_z_r 
                                                     >> 0x17U)));
    }
    if (vlSelf->__PVT__x_x_muler__DOT__valid_in_r) {
        vlSelf->__PVT__x_x_muler__DOT__io_z_r = (((IData)(vlSelf->__PVT__x_x_muler__DOT__out_z_r) 
                                                  << 0x1fU) 
                                                 | ((IData)(vlSelf->__PVT__x_x_muler__DOT__is_zero)
                                                     ? 0U
                                                     : 
                                                    ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__x_x_muler__DOT__ze_r) 
                                                          - 
                                                          ((IData)(vlSelf->__PVT__x_x_muler__DOT__carry)
                                                            ? 0x7eU
                                                            : 0x7fU)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((IData)(vlSelf->__PVT__x_x_muler__DOT__carry)
                                                            ? 
                                                           ((vlSelf->__PVT__x_x_muler__DOT__zf_1 
                                                             >> 2U) 
                                                            + 
                                                            (1U 
                                                             & (vlSelf->__PVT__x_x_muler__DOT__zf_1 
                                                                >> 1U)))
                                                            : 
                                                           ((vlSelf->__PVT__x_x_muler__DOT__zf_1 
                                                             >> 1U) 
                                                            + 
                                                            (1U 
                                                             & vlSelf->__PVT__x_x_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__a_x_x_r = vlSelf->__PVT__MuxOut__DOT__o_act_coefficient_t;
        vlSelf->__PVT__x_x_muler__DOT__out_z_r = 0U;
        vlSelf->__PVT__x_x_muler__DOT__zf_1 = (0x1ffffffU 
                                               & (IData)(
                                                         (vlSelf->__PVT__x_x_muler__DOT___zf_0_T_2 
                                                          >> 0x16U)));
        vlSelf->__PVT__x_x_muler__DOT__is_zero = (0U 
                                                  == 
                                                  (0xffU 
                                                   & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r 
                                                      >> 0x17U)));
        vlSelf->__PVT__x_x_muler__DOT__ze_r = (0xffU 
                                               & ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U) 
                                                  + 
                                                  (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__MuxOut__DOT__o_act_coefficient_t = 0U;
    } else if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__MuxOut__DOT__o_act_coefficient_t 
            = ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_9)
                ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_0
                : ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_19)
                    ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_1
                    : ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_29)
                        ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_2
                        : ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_39)
                            ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_3
                            : 0U))));
    }
    vlSelf->__PVT__a_x_x_muler__DOT___zf_0_T_2 = (0xffffffffffffULL 
                                                  & ((0x800000ULL 
                                                      | (QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & vlSelf->__PVT__a_x_x_r)))) 
                                                     * 
                                                     (0x800000ULL 
                                                      | (QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & vlSelf->__PVT__x_x_muler__DOT__io_z_r))))));
    vlSelf->__PVT__x_x_muler__DOT__valid_in_r = ((~ (IData)(vlSymsp->TOP.reset)) 
                                                 & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en));
    vlSelf->__PVT__x_x_muler__DOT__carry = ((IData)(vlSelf->__PVT__x_x_muler__DOT__carry_r) 
                                            | (0x1ffffffU 
                                               == vlSelf->__PVT__x_x_muler__DOT__zf_1));
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__3(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__3\n"); );
    // Init
    IData/*31:0*/ __PVT__MuxOut_1__DOT___T_2;
    __PVT__MuxOut_1__DOT___T_2 = 0;
    // Body
    vlSelf->__PVT__x_x_muler__DOT___zf_0_T_2 = (0xffffffffffffULL 
                                                & ((0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r)))) 
                                                   * 
                                                   (0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r))))));
    vlSelf->__PVT___T_2 = ((1U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop)) 
                           | (2U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop)));
    vlSelf->__PVT__o_data_prop = ((IData)(vlSelf->__PVT__i_sign_t) 
                                  & (IData)(vlSelf->__PVT___T_2));
    __PVT__MuxOut_1__DOT___T_2 = (((IData)(vlSelf->__PVT___T_2) 
                                   & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r 
                                      >> 0x1fU)) ? 
                                  (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r)
                                   : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r);
    vlSelf->__PVT__io_o_data_adder_io_x = ((IData)(vlSelf->__PVT__o_data_prop)
                                            ? vlSelf->__PVT___o_data_t_T_3
                                            : vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r);
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_9 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_0) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_0)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_19 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_1) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_1)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_29 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_2) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_2)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_39 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_3) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_3)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__0(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__0\n"); );
    // Body
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__x_x_muler__DOT__carry_r = (1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__x_x_muler__DOT___zf_0_T_2 
                                                             >> 0x2fU)));
        vlSelf->__PVT__a_x_x_muler__DOT__carry_r = 
            (1U & (IData)((vlSelf->__PVT__a_x_x_muler__DOT___zf_0_T_2 
                           >> 0x2fU)));
        vlSelf->__PVT__x_b_muler__DOT__carry_r = (1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__x_b_muler__DOT___zf_0_T_2 
                                                             >> 0x2fU)));
        vlSelf->__PVT__i_sign_t = vlSelf->__PVT__i_sign_t_r_11;
        vlSelf->__PVT__r_17 = vlSelf->__PVT__r_16;
        vlSelf->__PVT__io_o_data_r_4 = vlSelf->__PVT__io_o_data_r_3;
        vlSelf->__PVT__i_sign_t_r_11 = vlSelf->__PVT__i_sign_t_r_10;
        vlSelf->__PVT__r_16 = vlSelf->__PVT__r_15;
        vlSelf->__PVT__io_o_data_r_3 = vlSelf->__PVT__io_o_data_r_2;
        vlSelf->__PVT__i_sign_t_r_10 = vlSelf->__PVT__i_sign_t_r_9;
        vlSelf->__PVT__r_15 = vlSelf->__PVT__r_14;
        vlSelf->__PVT__io_o_data_r_2 = vlSelf->__PVT__io_o_data_r_1;
        vlSelf->__PVT__i_sign_t_r_9 = vlSelf->__PVT__i_sign_t_r_8;
        vlSelf->__PVT__r_14 = vlSelf->__PVT__r_13;
        vlSelf->__PVT__io_o_data_r_1 = vlSelf->__PVT__io_o_data_r;
        vlSelf->__PVT__i_sign_t_r_8 = vlSelf->__PVT__i_sign_t_r_7;
        vlSelf->__PVT__r_13 = vlSelf->__PVT__r_12;
        vlSelf->__PVT__io_o_data_r = ((IData)(vlSelf->__PVT__o_data_prop)
                                       ? vlSelf->__PVT___o_data_t_T_3
                                       : vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r);
        vlSelf->__PVT__i_sign_t_r_7 = vlSelf->__PVT__i_sign_t_r_6;
        vlSelf->__PVT__r_12 = vlSelf->__PVT__r_11;
        vlSelf->__PVT__i_sign_t_r_6 = vlSelf->__PVT__i_sign_t_r_5;
        vlSelf->__PVT__r_11 = vlSelf->__PVT__r_10;
        vlSelf->__PVT__i_sign_t_r_5 = vlSelf->__PVT__i_sign_t_r_4;
        vlSelf->__PVT__r_10 = vlSelf->__PVT__r_9;
        vlSelf->__PVT__i_sign_t_r_4 = vlSelf->__PVT__i_sign_t_r_3;
        vlSelf->__PVT__r_9 = vlSelf->__PVT__r_8;
        vlSelf->__PVT__i_sign_t_r_3 = vlSelf->__PVT__i_sign_t_r_2;
        vlSelf->__PVT__r_8 = vlSelf->__PVT__r_7;
        vlSelf->__PVT__i_sign_t_r_2 = vlSelf->__PVT__i_sign_t_r_1;
        vlSelf->__PVT__r_7 = vlSelf->__PVT__r_6;
        vlSelf->__PVT__i_sign_t_r_1 = vlSelf->__PVT__i_sign_t_r;
        vlSelf->__PVT__r_6 = vlSelf->__PVT__r_5;
        vlSelf->__PVT__i_sign_t_r = (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r 
                                     >> 0x1fU);
        vlSelf->__PVT__r_5 = vlSelf->__PVT__r_4;
        vlSelf->__PVT__r_4 = vlSelf->__PVT__r_3;
        vlSelf->__PVT__r_3 = vlSelf->__PVT__r_2;
        vlSelf->__PVT__r_2 = vlSelf->__PVT__r_1;
        vlSelf->__PVT__r_1 = vlSelf->__PVT__r;
        vlSelf->__PVT__r = (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r 
                            >> 0x1fU);
    }
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__1(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__1\n"); );
    // Body
    vlSelf->__PVT___o_data_t_T_3 = (((~ (vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r 
                                         >> 0x1fU)) 
                                     << 0x1fU) | (0x7fffffffU 
                                                  & vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r));
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__axx_bx_c_r_3 = vlSelf->__PVT__axx_bx_c_r_2;
        vlSelf->__PVT__axx_bx_c_r_2 = vlSelf->__PVT__axx_bx_c_r_1;
        vlSelf->__PVT__axx_bx_c_r_1 = vlSelf->__PVT__axx_bx_c_r;
        vlSelf->__PVT__axx_bx_c_r = vlSelf->__PVT__a_x_x_muler__DOT__io_z_r;
    }
    if (vlSelf->__PVT__a_x_x_muler__DOT__valid_in_r) {
        vlSelf->__PVT__a_x_x_muler__DOT__io_z_r = (
                                                   ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__out_z_r) 
                                                    << 0x1fU) 
                                                   | ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__is_zero)
                                                       ? 0U
                                                       : 
                                                      ((0x7f800000U 
                                                        & (((IData)(vlSelf->__PVT__a_x_x_muler__DOT__ze_r) 
                                                            - 
                                                            ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__carry)
                                                              ? 0x7eU
                                                              : 0x7fU)) 
                                                           << 0x17U)) 
                                                       | (0x7fffffU 
                                                          & ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__carry)
                                                              ? 
                                                             ((vlSelf->__PVT__a_x_x_muler__DOT__zf_1 
                                                               >> 2U) 
                                                              + 
                                                              (1U 
                                                               & (vlSelf->__PVT__a_x_x_muler__DOT__zf_1 
                                                                  >> 1U)))
                                                              : 
                                                             ((vlSelf->__PVT__a_x_x_muler__DOT__zf_1 
                                                               >> 1U) 
                                                              + 
                                                              (1U 
                                                               & vlSelf->__PVT__a_x_x_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__a_x_x_muler__DOT__valid_in_r 
            = (1U & (~ (IData)(vlSymsp->TOP.reset)));
        vlSelf->__PVT__a_x_x_muler__DOT__zf_1 = (0x1ffffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__a_x_x_muler__DOT___zf_0_T_2 
                                                            >> 0x16U)));
    } else {
        vlSelf->__PVT__a_x_x_muler__DOT__valid_in_r = 0U;
    }
    vlSelf->__PVT__a_x_x_muler__DOT__carry = ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__carry_r) 
                                              | (0x1ffffffU 
                                                 == vlSelf->__PVT__a_x_x_muler__DOT__zf_1));
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__a_x_x_muler__DOT__out_z_r = 
            ((vlSelf->__PVT__a_x_x_r ^ vlSelf->__PVT__x_x_muler__DOT__io_z_r) 
             >> 0x1fU);
        vlSelf->__PVT__a_x_x_muler__DOT__is_zero = 
            ((0U == (0xffU & (vlSelf->__PVT__a_x_x_r 
                              >> 0x17U))) | (0U == 
                                             (0xffU 
                                              & (vlSelf->__PVT__x_x_muler__DOT__io_z_r 
                                                 >> 0x17U))));
        vlSelf->__PVT__a_x_x_muler__DOT__ze_r = (0xffU 
                                                 & ((vlSelf->__PVT__a_x_x_r 
                                                     >> 0x17U) 
                                                    + 
                                                    (vlSelf->__PVT__x_x_muler__DOT__io_z_r 
                                                     >> 0x17U)));
    }
    if (vlSelf->__PVT__x_x_muler__DOT__valid_in_r) {
        vlSelf->__PVT__x_x_muler__DOT__io_z_r = (((IData)(vlSelf->__PVT__x_x_muler__DOT__out_z_r) 
                                                  << 0x1fU) 
                                                 | ((IData)(vlSelf->__PVT__x_x_muler__DOT__is_zero)
                                                     ? 0U
                                                     : 
                                                    ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__x_x_muler__DOT__ze_r) 
                                                          - 
                                                          ((IData)(vlSelf->__PVT__x_x_muler__DOT__carry)
                                                            ? 0x7eU
                                                            : 0x7fU)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((IData)(vlSelf->__PVT__x_x_muler__DOT__carry)
                                                            ? 
                                                           ((vlSelf->__PVT__x_x_muler__DOT__zf_1 
                                                             >> 2U) 
                                                            + 
                                                            (1U 
                                                             & (vlSelf->__PVT__x_x_muler__DOT__zf_1 
                                                                >> 1U)))
                                                            : 
                                                           ((vlSelf->__PVT__x_x_muler__DOT__zf_1 
                                                             >> 1U) 
                                                            + 
                                                            (1U 
                                                             & vlSelf->__PVT__x_x_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__a_x_x_r = vlSelf->__PVT__MuxOut__DOT__o_act_coefficient_t;
        vlSelf->__PVT__x_x_muler__DOT__out_z_r = 0U;
        vlSelf->__PVT__x_x_muler__DOT__zf_1 = (0x1ffffffU 
                                               & (IData)(
                                                         (vlSelf->__PVT__x_x_muler__DOT___zf_0_T_2 
                                                          >> 0x16U)));
        vlSelf->__PVT__x_x_muler__DOT__is_zero = (0U 
                                                  == 
                                                  (0xffU 
                                                   & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r 
                                                      >> 0x17U)));
        vlSelf->__PVT__x_x_muler__DOT__ze_r = (0xffU 
                                               & ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U) 
                                                  + 
                                                  (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__MuxOut__DOT__o_act_coefficient_t = 0U;
    } else if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__MuxOut__DOT__o_act_coefficient_t 
            = ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_9)
                ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_0
                : ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_19)
                    ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_1
                    : ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_29)
                        ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_2
                        : ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_39)
                            ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_3
                            : 0U))));
    }
    vlSelf->__PVT__a_x_x_muler__DOT___zf_0_T_2 = (0xffffffffffffULL 
                                                  & ((0x800000ULL 
                                                      | (QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & vlSelf->__PVT__a_x_x_r)))) 
                                                     * 
                                                     (0x800000ULL 
                                                      | (QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & vlSelf->__PVT__x_x_muler__DOT__io_z_r))))));
    vlSelf->__PVT__x_x_muler__DOT__valid_in_r = ((~ (IData)(vlSymsp->TOP.reset)) 
                                                 & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en));
    vlSelf->__PVT__x_x_muler__DOT__carry = ((IData)(vlSelf->__PVT__x_x_muler__DOT__carry_r) 
                                            | (0x1ffffffU 
                                               == vlSelf->__PVT__x_x_muler__DOT__zf_1));
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__3(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__3\n"); );
    // Init
    IData/*31:0*/ __PVT__MuxOut_1__DOT___T_2;
    __PVT__MuxOut_1__DOT___T_2 = 0;
    // Body
    vlSelf->__PVT__x_x_muler__DOT___zf_0_T_2 = (0xffffffffffffULL 
                                                & ((0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r)))) 
                                                   * 
                                                   (0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r))))));
    vlSelf->__PVT___T_2 = ((1U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop)) 
                           | (2U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop)));
    vlSelf->__PVT__o_data_prop = ((IData)(vlSelf->__PVT__i_sign_t) 
                                  & (IData)(vlSelf->__PVT___T_2));
    __PVT__MuxOut_1__DOT___T_2 = (((IData)(vlSelf->__PVT___T_2) 
                                   & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r 
                                      >> 0x1fU)) ? 
                                  (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r)
                                   : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r);
    vlSelf->__PVT__io_o_data_adder_io_x = ((IData)(vlSelf->__PVT__o_data_prop)
                                            ? vlSelf->__PVT___o_data_t_T_3
                                            : vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r);
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_9 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_0) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_0)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_19 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_1) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_1)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_29 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_2) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_2)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_39 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_3) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_3)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__0(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__0\n"); );
    // Body
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__x_x_muler__DOT__carry_r = (1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__x_x_muler__DOT___zf_0_T_2 
                                                             >> 0x2fU)));
        vlSelf->__PVT__a_x_x_muler__DOT__carry_r = 
            (1U & (IData)((vlSelf->__PVT__a_x_x_muler__DOT___zf_0_T_2 
                           >> 0x2fU)));
        vlSelf->__PVT__x_b_muler__DOT__carry_r = (1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__x_b_muler__DOT___zf_0_T_2 
                                                             >> 0x2fU)));
        vlSelf->__PVT__i_sign_t = vlSelf->__PVT__i_sign_t_r_11;
        vlSelf->__PVT__r_17 = vlSelf->__PVT__r_16;
        vlSelf->__PVT__io_o_data_r_4 = vlSelf->__PVT__io_o_data_r_3;
        vlSelf->__PVT__i_sign_t_r_11 = vlSelf->__PVT__i_sign_t_r_10;
        vlSelf->__PVT__r_16 = vlSelf->__PVT__r_15;
        vlSelf->__PVT__io_o_data_r_3 = vlSelf->__PVT__io_o_data_r_2;
        vlSelf->__PVT__i_sign_t_r_10 = vlSelf->__PVT__i_sign_t_r_9;
        vlSelf->__PVT__r_15 = vlSelf->__PVT__r_14;
        vlSelf->__PVT__io_o_data_r_2 = vlSelf->__PVT__io_o_data_r_1;
        vlSelf->__PVT__i_sign_t_r_9 = vlSelf->__PVT__i_sign_t_r_8;
        vlSelf->__PVT__r_14 = vlSelf->__PVT__r_13;
        vlSelf->__PVT__io_o_data_r_1 = vlSelf->__PVT__io_o_data_r;
        vlSelf->__PVT__i_sign_t_r_8 = vlSelf->__PVT__i_sign_t_r_7;
        vlSelf->__PVT__r_13 = vlSelf->__PVT__r_12;
        vlSelf->__PVT__io_o_data_r = ((IData)(vlSelf->__PVT__o_data_prop)
                                       ? vlSelf->__PVT___o_data_t_T_3
                                       : vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r);
        vlSelf->__PVT__i_sign_t_r_7 = vlSelf->__PVT__i_sign_t_r_6;
        vlSelf->__PVT__r_12 = vlSelf->__PVT__r_11;
        vlSelf->__PVT__i_sign_t_r_6 = vlSelf->__PVT__i_sign_t_r_5;
        vlSelf->__PVT__r_11 = vlSelf->__PVT__r_10;
        vlSelf->__PVT__i_sign_t_r_5 = vlSelf->__PVT__i_sign_t_r_4;
        vlSelf->__PVT__r_10 = vlSelf->__PVT__r_9;
        vlSelf->__PVT__i_sign_t_r_4 = vlSelf->__PVT__i_sign_t_r_3;
        vlSelf->__PVT__r_9 = vlSelf->__PVT__r_8;
        vlSelf->__PVT__i_sign_t_r_3 = vlSelf->__PVT__i_sign_t_r_2;
        vlSelf->__PVT__r_8 = vlSelf->__PVT__r_7;
        vlSelf->__PVT__i_sign_t_r_2 = vlSelf->__PVT__i_sign_t_r_1;
        vlSelf->__PVT__r_7 = vlSelf->__PVT__r_6;
        vlSelf->__PVT__i_sign_t_r_1 = vlSelf->__PVT__i_sign_t_r;
        vlSelf->__PVT__r_6 = vlSelf->__PVT__r_5;
        vlSelf->__PVT__i_sign_t_r = (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r 
                                     >> 0x1fU);
        vlSelf->__PVT__r_5 = vlSelf->__PVT__r_4;
        vlSelf->__PVT__r_4 = vlSelf->__PVT__r_3;
        vlSelf->__PVT__r_3 = vlSelf->__PVT__r_2;
        vlSelf->__PVT__r_2 = vlSelf->__PVT__r_1;
        vlSelf->__PVT__r_1 = vlSelf->__PVT__r;
        vlSelf->__PVT__r = (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r 
                            >> 0x1fU);
    }
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__1(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__1\n"); );
    // Body
    vlSelf->__PVT___o_data_t_T_3 = (((~ (vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r 
                                         >> 0x1fU)) 
                                     << 0x1fU) | (0x7fffffffU 
                                                  & vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r));
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__axx_bx_c_r_3 = vlSelf->__PVT__axx_bx_c_r_2;
        vlSelf->__PVT__axx_bx_c_r_2 = vlSelf->__PVT__axx_bx_c_r_1;
        vlSelf->__PVT__axx_bx_c_r_1 = vlSelf->__PVT__axx_bx_c_r;
        vlSelf->__PVT__axx_bx_c_r = vlSelf->__PVT__a_x_x_muler__DOT__io_z_r;
    }
    if (vlSelf->__PVT__a_x_x_muler__DOT__valid_in_r) {
        vlSelf->__PVT__a_x_x_muler__DOT__io_z_r = (
                                                   ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__out_z_r) 
                                                    << 0x1fU) 
                                                   | ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__is_zero)
                                                       ? 0U
                                                       : 
                                                      ((0x7f800000U 
                                                        & (((IData)(vlSelf->__PVT__a_x_x_muler__DOT__ze_r) 
                                                            - 
                                                            ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__carry)
                                                              ? 0x7eU
                                                              : 0x7fU)) 
                                                           << 0x17U)) 
                                                       | (0x7fffffU 
                                                          & ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__carry)
                                                              ? 
                                                             ((vlSelf->__PVT__a_x_x_muler__DOT__zf_1 
                                                               >> 2U) 
                                                              + 
                                                              (1U 
                                                               & (vlSelf->__PVT__a_x_x_muler__DOT__zf_1 
                                                                  >> 1U)))
                                                              : 
                                                             ((vlSelf->__PVT__a_x_x_muler__DOT__zf_1 
                                                               >> 1U) 
                                                              + 
                                                              (1U 
                                                               & vlSelf->__PVT__a_x_x_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__a_x_x_muler__DOT__valid_in_r 
            = (1U & (~ (IData)(vlSymsp->TOP.reset)));
        vlSelf->__PVT__a_x_x_muler__DOT__zf_1 = (0x1ffffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__a_x_x_muler__DOT___zf_0_T_2 
                                                            >> 0x16U)));
    } else {
        vlSelf->__PVT__a_x_x_muler__DOT__valid_in_r = 0U;
    }
    vlSelf->__PVT__a_x_x_muler__DOT__carry = ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__carry_r) 
                                              | (0x1ffffffU 
                                                 == vlSelf->__PVT__a_x_x_muler__DOT__zf_1));
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__a_x_x_muler__DOT__out_z_r = 
            ((vlSelf->__PVT__a_x_x_r ^ vlSelf->__PVT__x_x_muler__DOT__io_z_r) 
             >> 0x1fU);
        vlSelf->__PVT__a_x_x_muler__DOT__is_zero = 
            ((0U == (0xffU & (vlSelf->__PVT__a_x_x_r 
                              >> 0x17U))) | (0U == 
                                             (0xffU 
                                              & (vlSelf->__PVT__x_x_muler__DOT__io_z_r 
                                                 >> 0x17U))));
        vlSelf->__PVT__a_x_x_muler__DOT__ze_r = (0xffU 
                                                 & ((vlSelf->__PVT__a_x_x_r 
                                                     >> 0x17U) 
                                                    + 
                                                    (vlSelf->__PVT__x_x_muler__DOT__io_z_r 
                                                     >> 0x17U)));
    }
    if (vlSelf->__PVT__x_x_muler__DOT__valid_in_r) {
        vlSelf->__PVT__x_x_muler__DOT__io_z_r = (((IData)(vlSelf->__PVT__x_x_muler__DOT__out_z_r) 
                                                  << 0x1fU) 
                                                 | ((IData)(vlSelf->__PVT__x_x_muler__DOT__is_zero)
                                                     ? 0U
                                                     : 
                                                    ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__x_x_muler__DOT__ze_r) 
                                                          - 
                                                          ((IData)(vlSelf->__PVT__x_x_muler__DOT__carry)
                                                            ? 0x7eU
                                                            : 0x7fU)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((IData)(vlSelf->__PVT__x_x_muler__DOT__carry)
                                                            ? 
                                                           ((vlSelf->__PVT__x_x_muler__DOT__zf_1 
                                                             >> 2U) 
                                                            + 
                                                            (1U 
                                                             & (vlSelf->__PVT__x_x_muler__DOT__zf_1 
                                                                >> 1U)))
                                                            : 
                                                           ((vlSelf->__PVT__x_x_muler__DOT__zf_1 
                                                             >> 1U) 
                                                            + 
                                                            (1U 
                                                             & vlSelf->__PVT__x_x_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__a_x_x_r = vlSelf->__PVT__MuxOut__DOT__o_act_coefficient_t;
        vlSelf->__PVT__x_x_muler__DOT__out_z_r = 0U;
        vlSelf->__PVT__x_x_muler__DOT__zf_1 = (0x1ffffffU 
                                               & (IData)(
                                                         (vlSelf->__PVT__x_x_muler__DOT___zf_0_T_2 
                                                          >> 0x16U)));
        vlSelf->__PVT__x_x_muler__DOT__is_zero = (0U 
                                                  == 
                                                  (0xffU 
                                                   & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r 
                                                      >> 0x17U)));
        vlSelf->__PVT__x_x_muler__DOT__ze_r = (0xffU 
                                               & ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U) 
                                                  + 
                                                  (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__MuxOut__DOT__o_act_coefficient_t = 0U;
    } else if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__MuxOut__DOT__o_act_coefficient_t 
            = ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_9)
                ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_0
                : ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_19)
                    ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_1
                    : ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_29)
                        ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_2
                        : ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_39)
                            ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_3
                            : 0U))));
    }
    vlSelf->__PVT__a_x_x_muler__DOT___zf_0_T_2 = (0xffffffffffffULL 
                                                  & ((0x800000ULL 
                                                      | (QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & vlSelf->__PVT__a_x_x_r)))) 
                                                     * 
                                                     (0x800000ULL 
                                                      | (QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & vlSelf->__PVT__x_x_muler__DOT__io_z_r))))));
    vlSelf->__PVT__x_x_muler__DOT__valid_in_r = ((~ (IData)(vlSymsp->TOP.reset)) 
                                                 & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en));
    vlSelf->__PVT__x_x_muler__DOT__carry = ((IData)(vlSelf->__PVT__x_x_muler__DOT__carry_r) 
                                            | (0x1ffffffU 
                                               == vlSelf->__PVT__x_x_muler__DOT__zf_1));
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__3(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__3\n"); );
    // Init
    IData/*31:0*/ __PVT__MuxOut_1__DOT___T_2;
    __PVT__MuxOut_1__DOT___T_2 = 0;
    // Body
    vlSelf->__PVT__x_x_muler__DOT___zf_0_T_2 = (0xffffffffffffULL 
                                                & ((0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r)))) 
                                                   * 
                                                   (0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r))))));
    vlSelf->__PVT___T_2 = ((1U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop)) 
                           | (2U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop)));
    vlSelf->__PVT__o_data_prop = ((IData)(vlSelf->__PVT__i_sign_t) 
                                  & (IData)(vlSelf->__PVT___T_2));
    __PVT__MuxOut_1__DOT___T_2 = (((IData)(vlSelf->__PVT___T_2) 
                                   & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r 
                                      >> 0x1fU)) ? 
                                  (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r)
                                   : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r);
    vlSelf->__PVT__io_o_data_adder_io_x = ((IData)(vlSelf->__PVT__o_data_prop)
                                            ? vlSelf->__PVT___o_data_t_T_3
                                            : vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r);
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_9 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_0) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_0)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_19 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_1) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_1)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_29 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_2) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_2)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_39 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_3) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_3)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__0(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__0\n"); );
    // Body
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__x_x_muler__DOT__carry_r = (1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__x_x_muler__DOT___zf_0_T_2 
                                                             >> 0x2fU)));
        vlSelf->__PVT__a_x_x_muler__DOT__carry_r = 
            (1U & (IData)((vlSelf->__PVT__a_x_x_muler__DOT___zf_0_T_2 
                           >> 0x2fU)));
        vlSelf->__PVT__x_b_muler__DOT__carry_r = (1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__x_b_muler__DOT___zf_0_T_2 
                                                             >> 0x2fU)));
        vlSelf->__PVT__i_sign_t = vlSelf->__PVT__i_sign_t_r_11;
        vlSelf->__PVT__r_17 = vlSelf->__PVT__r_16;
        vlSelf->__PVT__io_o_data_r_4 = vlSelf->__PVT__io_o_data_r_3;
        vlSelf->__PVT__i_sign_t_r_11 = vlSelf->__PVT__i_sign_t_r_10;
        vlSelf->__PVT__r_16 = vlSelf->__PVT__r_15;
        vlSelf->__PVT__io_o_data_r_3 = vlSelf->__PVT__io_o_data_r_2;
        vlSelf->__PVT__i_sign_t_r_10 = vlSelf->__PVT__i_sign_t_r_9;
        vlSelf->__PVT__r_15 = vlSelf->__PVT__r_14;
        vlSelf->__PVT__io_o_data_r_2 = vlSelf->__PVT__io_o_data_r_1;
        vlSelf->__PVT__i_sign_t_r_9 = vlSelf->__PVT__i_sign_t_r_8;
        vlSelf->__PVT__r_14 = vlSelf->__PVT__r_13;
        vlSelf->__PVT__io_o_data_r_1 = vlSelf->__PVT__io_o_data_r;
        vlSelf->__PVT__i_sign_t_r_8 = vlSelf->__PVT__i_sign_t_r_7;
        vlSelf->__PVT__r_13 = vlSelf->__PVT__r_12;
        vlSelf->__PVT__io_o_data_r = ((IData)(vlSelf->__PVT__o_data_prop)
                                       ? vlSelf->__PVT___o_data_t_T_3
                                       : vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r);
        vlSelf->__PVT__i_sign_t_r_7 = vlSelf->__PVT__i_sign_t_r_6;
        vlSelf->__PVT__r_12 = vlSelf->__PVT__r_11;
        vlSelf->__PVT__i_sign_t_r_6 = vlSelf->__PVT__i_sign_t_r_5;
        vlSelf->__PVT__r_11 = vlSelf->__PVT__r_10;
        vlSelf->__PVT__i_sign_t_r_5 = vlSelf->__PVT__i_sign_t_r_4;
        vlSelf->__PVT__r_10 = vlSelf->__PVT__r_9;
        vlSelf->__PVT__i_sign_t_r_4 = vlSelf->__PVT__i_sign_t_r_3;
        vlSelf->__PVT__r_9 = vlSelf->__PVT__r_8;
        vlSelf->__PVT__i_sign_t_r_3 = vlSelf->__PVT__i_sign_t_r_2;
        vlSelf->__PVT__r_8 = vlSelf->__PVT__r_7;
        vlSelf->__PVT__i_sign_t_r_2 = vlSelf->__PVT__i_sign_t_r_1;
        vlSelf->__PVT__r_7 = vlSelf->__PVT__r_6;
        vlSelf->__PVT__i_sign_t_r_1 = vlSelf->__PVT__i_sign_t_r;
        vlSelf->__PVT__r_6 = vlSelf->__PVT__r_5;
        vlSelf->__PVT__i_sign_t_r = (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r 
                                     >> 0x1fU);
        vlSelf->__PVT__r_5 = vlSelf->__PVT__r_4;
        vlSelf->__PVT__r_4 = vlSelf->__PVT__r_3;
        vlSelf->__PVT__r_3 = vlSelf->__PVT__r_2;
        vlSelf->__PVT__r_2 = vlSelf->__PVT__r_1;
        vlSelf->__PVT__r_1 = vlSelf->__PVT__r;
        vlSelf->__PVT__r = (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r 
                            >> 0x1fU);
    }
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__1(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__1\n"); );
    // Body
    vlSelf->__PVT___o_data_t_T_3 = (((~ (vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r 
                                         >> 0x1fU)) 
                                     << 0x1fU) | (0x7fffffffU 
                                                  & vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r));
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__axx_bx_c_r_3 = vlSelf->__PVT__axx_bx_c_r_2;
        vlSelf->__PVT__axx_bx_c_r_2 = vlSelf->__PVT__axx_bx_c_r_1;
        vlSelf->__PVT__axx_bx_c_r_1 = vlSelf->__PVT__axx_bx_c_r;
        vlSelf->__PVT__axx_bx_c_r = vlSelf->__PVT__a_x_x_muler__DOT__io_z_r;
    }
    if (vlSelf->__PVT__a_x_x_muler__DOT__valid_in_r) {
        vlSelf->__PVT__a_x_x_muler__DOT__io_z_r = (
                                                   ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__out_z_r) 
                                                    << 0x1fU) 
                                                   | ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__is_zero)
                                                       ? 0U
                                                       : 
                                                      ((0x7f800000U 
                                                        & (((IData)(vlSelf->__PVT__a_x_x_muler__DOT__ze_r) 
                                                            - 
                                                            ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__carry)
                                                              ? 0x7eU
                                                              : 0x7fU)) 
                                                           << 0x17U)) 
                                                       | (0x7fffffU 
                                                          & ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__carry)
                                                              ? 
                                                             ((vlSelf->__PVT__a_x_x_muler__DOT__zf_1 
                                                               >> 2U) 
                                                              + 
                                                              (1U 
                                                               & (vlSelf->__PVT__a_x_x_muler__DOT__zf_1 
                                                                  >> 1U)))
                                                              : 
                                                             ((vlSelf->__PVT__a_x_x_muler__DOT__zf_1 
                                                               >> 1U) 
                                                              + 
                                                              (1U 
                                                               & vlSelf->__PVT__a_x_x_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__a_x_x_muler__DOT__valid_in_r 
            = (1U & (~ (IData)(vlSymsp->TOP.reset)));
        vlSelf->__PVT__a_x_x_muler__DOT__zf_1 = (0x1ffffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__a_x_x_muler__DOT___zf_0_T_2 
                                                            >> 0x16U)));
    } else {
        vlSelf->__PVT__a_x_x_muler__DOT__valid_in_r = 0U;
    }
    vlSelf->__PVT__a_x_x_muler__DOT__carry = ((IData)(vlSelf->__PVT__a_x_x_muler__DOT__carry_r) 
                                              | (0x1ffffffU 
                                                 == vlSelf->__PVT__a_x_x_muler__DOT__zf_1));
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__a_x_x_muler__DOT__out_z_r = 
            ((vlSelf->__PVT__a_x_x_r ^ vlSelf->__PVT__x_x_muler__DOT__io_z_r) 
             >> 0x1fU);
        vlSelf->__PVT__a_x_x_muler__DOT__is_zero = 
            ((0U == (0xffU & (vlSelf->__PVT__a_x_x_r 
                              >> 0x17U))) | (0U == 
                                             (0xffU 
                                              & (vlSelf->__PVT__x_x_muler__DOT__io_z_r 
                                                 >> 0x17U))));
        vlSelf->__PVT__a_x_x_muler__DOT__ze_r = (0xffU 
                                                 & ((vlSelf->__PVT__a_x_x_r 
                                                     >> 0x17U) 
                                                    + 
                                                    (vlSelf->__PVT__x_x_muler__DOT__io_z_r 
                                                     >> 0x17U)));
    }
    if (vlSelf->__PVT__x_x_muler__DOT__valid_in_r) {
        vlSelf->__PVT__x_x_muler__DOT__io_z_r = (((IData)(vlSelf->__PVT__x_x_muler__DOT__out_z_r) 
                                                  << 0x1fU) 
                                                 | ((IData)(vlSelf->__PVT__x_x_muler__DOT__is_zero)
                                                     ? 0U
                                                     : 
                                                    ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__x_x_muler__DOT__ze_r) 
                                                          - 
                                                          ((IData)(vlSelf->__PVT__x_x_muler__DOT__carry)
                                                            ? 0x7eU
                                                            : 0x7fU)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((IData)(vlSelf->__PVT__x_x_muler__DOT__carry)
                                                            ? 
                                                           ((vlSelf->__PVT__x_x_muler__DOT__zf_1 
                                                             >> 2U) 
                                                            + 
                                                            (1U 
                                                             & (vlSelf->__PVT__x_x_muler__DOT__zf_1 
                                                                >> 1U)))
                                                            : 
                                                           ((vlSelf->__PVT__x_x_muler__DOT__zf_1 
                                                             >> 1U) 
                                                            + 
                                                            (1U 
                                                             & vlSelf->__PVT__x_x_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__a_x_x_r = vlSelf->__PVT__MuxOut__DOT__o_act_coefficient_t;
        vlSelf->__PVT__x_x_muler__DOT__out_z_r = 0U;
        vlSelf->__PVT__x_x_muler__DOT__zf_1 = (0x1ffffffU 
                                               & (IData)(
                                                         (vlSelf->__PVT__x_x_muler__DOT___zf_0_T_2 
                                                          >> 0x16U)));
        vlSelf->__PVT__x_x_muler__DOT__is_zero = (0U 
                                                  == 
                                                  (0xffU 
                                                   & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r 
                                                      >> 0x17U)));
        vlSelf->__PVT__x_x_muler__DOT__ze_r = (0xffU 
                                               & ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U) 
                                                  + 
                                                  (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__MuxOut__DOT__o_act_coefficient_t = 0U;
    } else if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__MuxOut__DOT__o_act_coefficient_t 
            = ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_9)
                ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_0
                : ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_19)
                    ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_1
                    : ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_29)
                        ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_2
                        : ((IData)(vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_39)
                            ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_a_3
                            : 0U))));
    }
    vlSelf->__PVT__a_x_x_muler__DOT___zf_0_T_2 = (0xffffffffffffULL 
                                                  & ((0x800000ULL 
                                                      | (QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & vlSelf->__PVT__a_x_x_r)))) 
                                                     * 
                                                     (0x800000ULL 
                                                      | (QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & vlSelf->__PVT__x_x_muler__DOT__io_z_r))))));
    vlSelf->__PVT__x_x_muler__DOT__valid_in_r = ((~ (IData)(vlSymsp->TOP.reset)) 
                                                 & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en));
    vlSelf->__PVT__x_x_muler__DOT__carry = ((IData)(vlSelf->__PVT__x_x_muler__DOT__carry_r) 
                                            | (0x1ffffffU 
                                               == vlSelf->__PVT__x_x_muler__DOT__zf_1));
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__3(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__3\n"); );
    // Init
    IData/*31:0*/ __PVT__MuxOut_1__DOT___T_2;
    __PVT__MuxOut_1__DOT___T_2 = 0;
    // Body
    vlSelf->__PVT___T_2 = ((1U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop)) 
                           | (2U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop)));
    vlSelf->__PVT__x_x_muler__DOT___zf_0_T_2 = (0xffffffffffffULL 
                                                & ((0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r)))) 
                                                   * 
                                                   (0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r))))));
    vlSelf->__PVT__o_data_prop = ((IData)(vlSelf->__PVT__i_sign_t) 
                                  & (IData)(vlSelf->__PVT___T_2));
    __PVT__MuxOut_1__DOT___T_2 = (((IData)(vlSelf->__PVT___T_2) 
                                   & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r 
                                      >> 0x1fU)) ? 
                                  (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r)
                                   : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r);
    vlSelf->__PVT__io_o_data_adder_io_x = ((IData)(vlSelf->__PVT__o_data_prop)
                                            ? vlSelf->__PVT___o_data_t_T_3
                                            : vlSelf->__PVT__axx_bx_c_adder->__PVT__io_z_r);
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_9 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_0) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_0)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_19 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_1) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_1)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_29 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_2) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_2)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
    vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_39 
        = (1U & (((__PVT__MuxOut_1__DOT___T_2 ^ vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_3) 
                  >> 0x1fU) ? (__PVT__MuxOut_1__DOT___T_2 
                               >> 0x1fU) : (((0x7fffffffU 
                                              & __PVT__MuxOut_1__DOT___T_2) 
                                             < (0x7fffffffU 
                                                & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_range_3)) 
                                            ^ (__PVT__MuxOut_1__DOT___T_2 
                                               >> 0x1fU))));
}
