// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop_activationFuncDataCell.h"

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__2(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__2\n"); );
    // Body
    if (vlSelf->__PVT__x_b_muler__DOT__valid_in_r) {
        vlSelf->__PVT__x_b_muler__DOT__io_z_r = (((IData)(vlSelf->__PVT__x_b_muler__DOT__out_z_r) 
                                                  << 0x1fU) 
                                                 | ((IData)(vlSelf->__PVT__x_b_muler__DOT__is_zero)
                                                     ? 0U
                                                     : 
                                                    ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__x_b_muler__DOT__ze_r) 
                                                          - 
                                                          ((IData)(vlSelf->__PVT__x_b_muler__DOT__carry)
                                                            ? 0x7eU
                                                            : 0x7fU)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((IData)(vlSelf->__PVT__x_b_muler__DOT__carry)
                                                            ? 
                                                           ((vlSelf->__PVT__x_b_muler__DOT__zf_1 
                                                             >> 2U) 
                                                            + 
                                                            (1U 
                                                             & (vlSelf->__PVT__x_b_muler__DOT__zf_1 
                                                                >> 1U)))
                                                            : 
                                                           ((vlSelf->__PVT__x_b_muler__DOT__zf_1 
                                                             >> 1U) 
                                                            + 
                                                            (1U 
                                                             & vlSelf->__PVT__x_b_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__x_b_and_c_r_1 = vlSelf->__PVT__x_b_and_c_r;
        vlSelf->__PVT__x_b_and_c_r = vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t;
        vlSelf->__PVT__x_b_muler__DOT__zf_1 = (0x1ffffffU 
                                               & (IData)(
                                                         (vlSelf->__PVT__x_b_muler__DOT___zf_0_T_2 
                                                          >> 0x16U)));
        vlSelf->__PVT__x_b_muler__DOT__out_z_r = ((vlSelf->__PVT__i_data_t 
                                                   ^ vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t) 
                                                  >> 0x1fU);
        vlSelf->__PVT__x_b_muler__DOT__is_zero = ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelf->__PVT__i_data_t 
                                                       >> 0x17U))) 
                                                  | (0U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                                                         >> 0x17U))));
        vlSelf->__PVT__x_b_muler__DOT__ze_r = (0xffU 
                                               & ((vlSelf->__PVT__i_data_t 
                                                   >> 0x17U) 
                                                  + 
                                                  (vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                                                   >> 0x17U)));
        vlSelf->__PVT__x_b_muler__DOT__valid_in_r = 
            (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__x_b_muler__DOT__valid_in_r = 0U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t = 0U;
        vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t = 0U;
        vlSelf->__PVT__i_data_t = 0U;
    } else if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_9) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_0;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_0;
        } else if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_19) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_1;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_1;
        } else if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_29) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_2;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_2;
        } else if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_39) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_3;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_3;
        } else {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_4;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_4;
        }
        vlSelf->__PVT__i_data_t = ((((1U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop)) 
                                     | (2U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop))) 
                                    & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r 
                                       >> 0x1fU)) ? 
                                   (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r)
                                    : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r);
    }
    vlSelf->__PVT__x_b_muler__DOT__carry = ((IData)(vlSelf->__PVT__x_b_muler__DOT__carry_r) 
                                            | (0x1ffffffU 
                                               == vlSelf->__PVT__x_b_muler__DOT__zf_1));
    vlSelf->__PVT__x_b_muler__DOT___zf_0_T_2 = (0xffffffffffffULL 
                                                & ((0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__i_data_t)))) 
                                                   * 
                                                   (0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t))))));
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__2(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__2\n"); );
    // Body
    if (vlSelf->__PVT__x_b_muler__DOT__valid_in_r) {
        vlSelf->__PVT__x_b_muler__DOT__io_z_r = (((IData)(vlSelf->__PVT__x_b_muler__DOT__out_z_r) 
                                                  << 0x1fU) 
                                                 | ((IData)(vlSelf->__PVT__x_b_muler__DOT__is_zero)
                                                     ? 0U
                                                     : 
                                                    ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__x_b_muler__DOT__ze_r) 
                                                          - 
                                                          ((IData)(vlSelf->__PVT__x_b_muler__DOT__carry)
                                                            ? 0x7eU
                                                            : 0x7fU)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((IData)(vlSelf->__PVT__x_b_muler__DOT__carry)
                                                            ? 
                                                           ((vlSelf->__PVT__x_b_muler__DOT__zf_1 
                                                             >> 2U) 
                                                            + 
                                                            (1U 
                                                             & (vlSelf->__PVT__x_b_muler__DOT__zf_1 
                                                                >> 1U)))
                                                            : 
                                                           ((vlSelf->__PVT__x_b_muler__DOT__zf_1 
                                                             >> 1U) 
                                                            + 
                                                            (1U 
                                                             & vlSelf->__PVT__x_b_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__x_b_and_c_r_1 = vlSelf->__PVT__x_b_and_c_r;
        vlSelf->__PVT__x_b_and_c_r = vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t;
        vlSelf->__PVT__x_b_muler__DOT__zf_1 = (0x1ffffffU 
                                               & (IData)(
                                                         (vlSelf->__PVT__x_b_muler__DOT___zf_0_T_2 
                                                          >> 0x16U)));
        vlSelf->__PVT__x_b_muler__DOT__out_z_r = ((vlSelf->__PVT__i_data_t 
                                                   ^ vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t) 
                                                  >> 0x1fU);
        vlSelf->__PVT__x_b_muler__DOT__is_zero = ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelf->__PVT__i_data_t 
                                                       >> 0x17U))) 
                                                  | (0U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                                                         >> 0x17U))));
        vlSelf->__PVT__x_b_muler__DOT__ze_r = (0xffU 
                                               & ((vlSelf->__PVT__i_data_t 
                                                   >> 0x17U) 
                                                  + 
                                                  (vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                                                   >> 0x17U)));
        vlSelf->__PVT__x_b_muler__DOT__valid_in_r = 
            (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__x_b_muler__DOT__valid_in_r = 0U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t = 0U;
        vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t = 0U;
        vlSelf->__PVT__i_data_t = 0U;
    } else if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_9) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_0;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_0;
        } else if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_19) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_1;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_1;
        } else if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_29) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_2;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_2;
        } else if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_39) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_3;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_3;
        } else {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_4;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_4;
        }
        vlSelf->__PVT__i_data_t = ((((1U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop)) 
                                     | (2U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop))) 
                                    & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r 
                                       >> 0x1fU)) ? 
                                   (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r)
                                    : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r);
    }
    vlSelf->__PVT__x_b_muler__DOT__carry = ((IData)(vlSelf->__PVT__x_b_muler__DOT__carry_r) 
                                            | (0x1ffffffU 
                                               == vlSelf->__PVT__x_b_muler__DOT__zf_1));
    vlSelf->__PVT__x_b_muler__DOT___zf_0_T_2 = (0xffffffffffffULL 
                                                & ((0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__i_data_t)))) 
                                                   * 
                                                   (0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t))))));
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__2(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__2\n"); );
    // Body
    if (vlSelf->__PVT__x_b_muler__DOT__valid_in_r) {
        vlSelf->__PVT__x_b_muler__DOT__io_z_r = (((IData)(vlSelf->__PVT__x_b_muler__DOT__out_z_r) 
                                                  << 0x1fU) 
                                                 | ((IData)(vlSelf->__PVT__x_b_muler__DOT__is_zero)
                                                     ? 0U
                                                     : 
                                                    ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__x_b_muler__DOT__ze_r) 
                                                          - 
                                                          ((IData)(vlSelf->__PVT__x_b_muler__DOT__carry)
                                                            ? 0x7eU
                                                            : 0x7fU)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((IData)(vlSelf->__PVT__x_b_muler__DOT__carry)
                                                            ? 
                                                           ((vlSelf->__PVT__x_b_muler__DOT__zf_1 
                                                             >> 2U) 
                                                            + 
                                                            (1U 
                                                             & (vlSelf->__PVT__x_b_muler__DOT__zf_1 
                                                                >> 1U)))
                                                            : 
                                                           ((vlSelf->__PVT__x_b_muler__DOT__zf_1 
                                                             >> 1U) 
                                                            + 
                                                            (1U 
                                                             & vlSelf->__PVT__x_b_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__x_b_and_c_r_1 = vlSelf->__PVT__x_b_and_c_r;
        vlSelf->__PVT__x_b_and_c_r = vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t;
        vlSelf->__PVT__x_b_muler__DOT__zf_1 = (0x1ffffffU 
                                               & (IData)(
                                                         (vlSelf->__PVT__x_b_muler__DOT___zf_0_T_2 
                                                          >> 0x16U)));
        vlSelf->__PVT__x_b_muler__DOT__out_z_r = ((vlSelf->__PVT__i_data_t 
                                                   ^ vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t) 
                                                  >> 0x1fU);
        vlSelf->__PVT__x_b_muler__DOT__is_zero = ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelf->__PVT__i_data_t 
                                                       >> 0x17U))) 
                                                  | (0U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                                                         >> 0x17U))));
        vlSelf->__PVT__x_b_muler__DOT__ze_r = (0xffU 
                                               & ((vlSelf->__PVT__i_data_t 
                                                   >> 0x17U) 
                                                  + 
                                                  (vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                                                   >> 0x17U)));
        vlSelf->__PVT__x_b_muler__DOT__valid_in_r = 
            (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__x_b_muler__DOT__valid_in_r = 0U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t = 0U;
        vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t = 0U;
        vlSelf->__PVT__i_data_t = 0U;
    } else if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_9) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_0;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_0;
        } else if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_19) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_1;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_1;
        } else if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_29) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_2;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_2;
        } else if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_39) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_3;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_3;
        } else {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_4;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_4;
        }
        vlSelf->__PVT__i_data_t = ((((1U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop)) 
                                     | (2U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop))) 
                                    & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r 
                                       >> 0x1fU)) ? 
                                   (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r)
                                    : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r);
    }
    vlSelf->__PVT__x_b_muler__DOT__carry = ((IData)(vlSelf->__PVT__x_b_muler__DOT__carry_r) 
                                            | (0x1ffffffU 
                                               == vlSelf->__PVT__x_b_muler__DOT__zf_1));
    vlSelf->__PVT__x_b_muler__DOT___zf_0_T_2 = (0xffffffffffffULL 
                                                & ((0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__i_data_t)))) 
                                                   * 
                                                   (0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t))))));
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__2(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__2\n"); );
    // Body
    if (vlSelf->__PVT__x_b_muler__DOT__valid_in_r) {
        vlSelf->__PVT__x_b_muler__DOT__io_z_r = (((IData)(vlSelf->__PVT__x_b_muler__DOT__out_z_r) 
                                                  << 0x1fU) 
                                                 | ((IData)(vlSelf->__PVT__x_b_muler__DOT__is_zero)
                                                     ? 0U
                                                     : 
                                                    ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__x_b_muler__DOT__ze_r) 
                                                          - 
                                                          ((IData)(vlSelf->__PVT__x_b_muler__DOT__carry)
                                                            ? 0x7eU
                                                            : 0x7fU)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((IData)(vlSelf->__PVT__x_b_muler__DOT__carry)
                                                            ? 
                                                           ((vlSelf->__PVT__x_b_muler__DOT__zf_1 
                                                             >> 2U) 
                                                            + 
                                                            (1U 
                                                             & (vlSelf->__PVT__x_b_muler__DOT__zf_1 
                                                                >> 1U)))
                                                            : 
                                                           ((vlSelf->__PVT__x_b_muler__DOT__zf_1 
                                                             >> 1U) 
                                                            + 
                                                            (1U 
                                                             & vlSelf->__PVT__x_b_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__x_b_and_c_r_1 = vlSelf->__PVT__x_b_and_c_r;
        vlSelf->__PVT__x_b_and_c_r = vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t;
        vlSelf->__PVT__x_b_muler__DOT__zf_1 = (0x1ffffffU 
                                               & (IData)(
                                                         (vlSelf->__PVT__x_b_muler__DOT___zf_0_T_2 
                                                          >> 0x16U)));
        vlSelf->__PVT__x_b_muler__DOT__out_z_r = ((vlSelf->__PVT__i_data_t 
                                                   ^ vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t) 
                                                  >> 0x1fU);
        vlSelf->__PVT__x_b_muler__DOT__is_zero = ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelf->__PVT__i_data_t 
                                                       >> 0x17U))) 
                                                  | (0U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                                                         >> 0x17U))));
        vlSelf->__PVT__x_b_muler__DOT__ze_r = (0xffU 
                                               & ((vlSelf->__PVT__i_data_t 
                                                   >> 0x17U) 
                                                  + 
                                                  (vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                                                   >> 0x17U)));
        vlSelf->__PVT__x_b_muler__DOT__valid_in_r = 
            (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__x_b_muler__DOT__valid_in_r = 0U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t = 0U;
        vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t = 0U;
        vlSelf->__PVT__i_data_t = 0U;
    } else if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_9) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_0;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_0;
        } else if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_19) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_1;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_1;
        } else if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_29) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_2;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_2;
        } else if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_39) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_3;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_3;
        } else {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_4;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_4;
        }
        vlSelf->__PVT__i_data_t = ((((1U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop)) 
                                     | (2U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop))) 
                                    & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r 
                                       >> 0x1fU)) ? 
                                   (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r)
                                    : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r);
    }
    vlSelf->__PVT__x_b_muler__DOT__carry = ((IData)(vlSelf->__PVT__x_b_muler__DOT__carry_r) 
                                            | (0x1ffffffU 
                                               == vlSelf->__PVT__x_b_muler__DOT__zf_1));
    vlSelf->__PVT__x_b_muler__DOT___zf_0_T_2 = (0xffffffffffffULL 
                                                & ((0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__i_data_t)))) 
                                                   * 
                                                   (0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t))))));
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__2(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__2\n"); );
    // Body
    if (vlSelf->__PVT__x_b_muler__DOT__valid_in_r) {
        vlSelf->__PVT__x_b_muler__DOT__io_z_r = (((IData)(vlSelf->__PVT__x_b_muler__DOT__out_z_r) 
                                                  << 0x1fU) 
                                                 | ((IData)(vlSelf->__PVT__x_b_muler__DOT__is_zero)
                                                     ? 0U
                                                     : 
                                                    ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__x_b_muler__DOT__ze_r) 
                                                          - 
                                                          ((IData)(vlSelf->__PVT__x_b_muler__DOT__carry)
                                                            ? 0x7eU
                                                            : 0x7fU)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((IData)(vlSelf->__PVT__x_b_muler__DOT__carry)
                                                            ? 
                                                           ((vlSelf->__PVT__x_b_muler__DOT__zf_1 
                                                             >> 2U) 
                                                            + 
                                                            (1U 
                                                             & (vlSelf->__PVT__x_b_muler__DOT__zf_1 
                                                                >> 1U)))
                                                            : 
                                                           ((vlSelf->__PVT__x_b_muler__DOT__zf_1 
                                                             >> 1U) 
                                                            + 
                                                            (1U 
                                                             & vlSelf->__PVT__x_b_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__x_b_and_c_r_1 = vlSelf->__PVT__x_b_and_c_r;
        vlSelf->__PVT__x_b_and_c_r = vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t;
        vlSelf->__PVT__x_b_muler__DOT__zf_1 = (0x1ffffffU 
                                               & (IData)(
                                                         (vlSelf->__PVT__x_b_muler__DOT___zf_0_T_2 
                                                          >> 0x16U)));
        vlSelf->__PVT__x_b_muler__DOT__out_z_r = ((vlSelf->__PVT__i_data_t 
                                                   ^ vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t) 
                                                  >> 0x1fU);
        vlSelf->__PVT__x_b_muler__DOT__is_zero = ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelf->__PVT__i_data_t 
                                                       >> 0x17U))) 
                                                  | (0U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                                                         >> 0x17U))));
        vlSelf->__PVT__x_b_muler__DOT__ze_r = (0xffU 
                                               & ((vlSelf->__PVT__i_data_t 
                                                   >> 0x17U) 
                                                  + 
                                                  (vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                                                   >> 0x17U)));
        vlSelf->__PVT__x_b_muler__DOT__valid_in_r = 
            (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__x_b_muler__DOT__valid_in_r = 0U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t = 0U;
        vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t = 0U;
        vlSelf->__PVT__i_data_t = 0U;
    } else if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_9) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_0;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_0;
        } else if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_19) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_1;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_1;
        } else if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_29) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_2;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_2;
        } else if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_39) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_3;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_3;
        } else {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_4;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_4;
        }
        vlSelf->__PVT__i_data_t = ((((1U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop)) 
                                     | (2U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop))) 
                                    & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r 
                                       >> 0x1fU)) ? 
                                   (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r)
                                    : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r);
    }
    vlSelf->__PVT__x_b_muler__DOT__carry = ((IData)(vlSelf->__PVT__x_b_muler__DOT__carry_r) 
                                            | (0x1ffffffU 
                                               == vlSelf->__PVT__x_b_muler__DOT__zf_1));
    vlSelf->__PVT__x_b_muler__DOT___zf_0_T_2 = (0xffffffffffffULL 
                                                & ((0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__i_data_t)))) 
                                                   * 
                                                   (0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t))))));
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__2(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__2\n"); );
    // Body
    if (vlSelf->__PVT__x_b_muler__DOT__valid_in_r) {
        vlSelf->__PVT__x_b_muler__DOT__io_z_r = (((IData)(vlSelf->__PVT__x_b_muler__DOT__out_z_r) 
                                                  << 0x1fU) 
                                                 | ((IData)(vlSelf->__PVT__x_b_muler__DOT__is_zero)
                                                     ? 0U
                                                     : 
                                                    ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__x_b_muler__DOT__ze_r) 
                                                          - 
                                                          ((IData)(vlSelf->__PVT__x_b_muler__DOT__carry)
                                                            ? 0x7eU
                                                            : 0x7fU)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((IData)(vlSelf->__PVT__x_b_muler__DOT__carry)
                                                            ? 
                                                           ((vlSelf->__PVT__x_b_muler__DOT__zf_1 
                                                             >> 2U) 
                                                            + 
                                                            (1U 
                                                             & (vlSelf->__PVT__x_b_muler__DOT__zf_1 
                                                                >> 1U)))
                                                            : 
                                                           ((vlSelf->__PVT__x_b_muler__DOT__zf_1 
                                                             >> 1U) 
                                                            + 
                                                            (1U 
                                                             & vlSelf->__PVT__x_b_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__x_b_and_c_r_1 = vlSelf->__PVT__x_b_and_c_r;
        vlSelf->__PVT__x_b_and_c_r = vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t;
        vlSelf->__PVT__x_b_muler__DOT__zf_1 = (0x1ffffffU 
                                               & (IData)(
                                                         (vlSelf->__PVT__x_b_muler__DOT___zf_0_T_2 
                                                          >> 0x16U)));
        vlSelf->__PVT__x_b_muler__DOT__out_z_r = ((vlSelf->__PVT__i_data_t 
                                                   ^ vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t) 
                                                  >> 0x1fU);
        vlSelf->__PVT__x_b_muler__DOT__is_zero = ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelf->__PVT__i_data_t 
                                                       >> 0x17U))) 
                                                  | (0U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                                                         >> 0x17U))));
        vlSelf->__PVT__x_b_muler__DOT__ze_r = (0xffU 
                                               & ((vlSelf->__PVT__i_data_t 
                                                   >> 0x17U) 
                                                  + 
                                                  (vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                                                   >> 0x17U)));
        vlSelf->__PVT__x_b_muler__DOT__valid_in_r = 
            (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__x_b_muler__DOT__valid_in_r = 0U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t = 0U;
        vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t = 0U;
        vlSelf->__PVT__i_data_t = 0U;
    } else if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_9) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_0;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_0;
        } else if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_19) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_1;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_1;
        } else if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_29) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_2;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_2;
        } else if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_39) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_3;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_3;
        } else {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_4;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_4;
        }
        vlSelf->__PVT__i_data_t = ((((1U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop)) 
                                     | (2U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop))) 
                                    & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r 
                                       >> 0x1fU)) ? 
                                   (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r)
                                    : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r);
    }
    vlSelf->__PVT__x_b_muler__DOT__carry = ((IData)(vlSelf->__PVT__x_b_muler__DOT__carry_r) 
                                            | (0x1ffffffU 
                                               == vlSelf->__PVT__x_b_muler__DOT__zf_1));
    vlSelf->__PVT__x_b_muler__DOT___zf_0_T_2 = (0xffffffffffffULL 
                                                & ((0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__i_data_t)))) 
                                                   * 
                                                   (0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t))))));
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__2(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__2\n"); );
    // Body
    if (vlSelf->__PVT__x_b_muler__DOT__valid_in_r) {
        vlSelf->__PVT__x_b_muler__DOT__io_z_r = (((IData)(vlSelf->__PVT__x_b_muler__DOT__out_z_r) 
                                                  << 0x1fU) 
                                                 | ((IData)(vlSelf->__PVT__x_b_muler__DOT__is_zero)
                                                     ? 0U
                                                     : 
                                                    ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__x_b_muler__DOT__ze_r) 
                                                          - 
                                                          ((IData)(vlSelf->__PVT__x_b_muler__DOT__carry)
                                                            ? 0x7eU
                                                            : 0x7fU)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((IData)(vlSelf->__PVT__x_b_muler__DOT__carry)
                                                            ? 
                                                           ((vlSelf->__PVT__x_b_muler__DOT__zf_1 
                                                             >> 2U) 
                                                            + 
                                                            (1U 
                                                             & (vlSelf->__PVT__x_b_muler__DOT__zf_1 
                                                                >> 1U)))
                                                            : 
                                                           ((vlSelf->__PVT__x_b_muler__DOT__zf_1 
                                                             >> 1U) 
                                                            + 
                                                            (1U 
                                                             & vlSelf->__PVT__x_b_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__x_b_and_c_r_1 = vlSelf->__PVT__x_b_and_c_r;
        vlSelf->__PVT__x_b_and_c_r = vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t;
        vlSelf->__PVT__x_b_muler__DOT__zf_1 = (0x1ffffffU 
                                               & (IData)(
                                                         (vlSelf->__PVT__x_b_muler__DOT___zf_0_T_2 
                                                          >> 0x16U)));
        vlSelf->__PVT__x_b_muler__DOT__out_z_r = ((vlSelf->__PVT__i_data_t 
                                                   ^ vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t) 
                                                  >> 0x1fU);
        vlSelf->__PVT__x_b_muler__DOT__is_zero = ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelf->__PVT__i_data_t 
                                                       >> 0x17U))) 
                                                  | (0U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                                                         >> 0x17U))));
        vlSelf->__PVT__x_b_muler__DOT__ze_r = (0xffU 
                                               & ((vlSelf->__PVT__i_data_t 
                                                   >> 0x17U) 
                                                  + 
                                                  (vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                                                   >> 0x17U)));
        vlSelf->__PVT__x_b_muler__DOT__valid_in_r = 
            (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__x_b_muler__DOT__valid_in_r = 0U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t = 0U;
        vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t = 0U;
        vlSelf->__PVT__i_data_t = 0U;
    } else if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_9) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_0;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_0;
        } else if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_19) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_1;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_1;
        } else if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_29) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_2;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_2;
        } else if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_39) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_3;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_3;
        } else {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_4;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_4;
        }
        vlSelf->__PVT__i_data_t = ((((1U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop)) 
                                     | (2U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop))) 
                                    & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r 
                                       >> 0x1fU)) ? 
                                   (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r)
                                    : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r);
    }
    vlSelf->__PVT__x_b_muler__DOT__carry = ((IData)(vlSelf->__PVT__x_b_muler__DOT__carry_r) 
                                            | (0x1ffffffU 
                                               == vlSelf->__PVT__x_b_muler__DOT__zf_1));
    vlSelf->__PVT__x_b_muler__DOT___zf_0_T_2 = (0xffffffffffffULL 
                                                & ((0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__i_data_t)))) 
                                                   * 
                                                   (0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t))))));
}

VL_INLINE_OPT void Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__2(Vtop_activationFuncDataCell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_activationFuncDataCell___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__2\n"); );
    // Body
    if (vlSelf->__PVT__x_b_muler__DOT__valid_in_r) {
        vlSelf->__PVT__x_b_muler__DOT__io_z_r = (((IData)(vlSelf->__PVT__x_b_muler__DOT__out_z_r) 
                                                  << 0x1fU) 
                                                 | ((IData)(vlSelf->__PVT__x_b_muler__DOT__is_zero)
                                                     ? 0U
                                                     : 
                                                    ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__x_b_muler__DOT__ze_r) 
                                                          - 
                                                          ((IData)(vlSelf->__PVT__x_b_muler__DOT__carry)
                                                            ? 0x7eU
                                                            : 0x7fU)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((IData)(vlSelf->__PVT__x_b_muler__DOT__carry)
                                                            ? 
                                                           ((vlSelf->__PVT__x_b_muler__DOT__zf_1 
                                                             >> 2U) 
                                                            + 
                                                            (1U 
                                                             & (vlSelf->__PVT__x_b_muler__DOT__zf_1 
                                                                >> 1U)))
                                                            : 
                                                           ((vlSelf->__PVT__x_b_muler__DOT__zf_1 
                                                             >> 1U) 
                                                            + 
                                                            (1U 
                                                             & vlSelf->__PVT__x_b_muler__DOT__zf_1)))))));
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__x_b_and_c_r_1 = vlSelf->__PVT__x_b_and_c_r;
        vlSelf->__PVT__x_b_and_c_r = vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t;
        vlSelf->__PVT__x_b_muler__DOT__zf_1 = (0x1ffffffU 
                                               & (IData)(
                                                         (vlSelf->__PVT__x_b_muler__DOT___zf_0_T_2 
                                                          >> 0x16U)));
        vlSelf->__PVT__x_b_muler__DOT__out_z_r = ((vlSelf->__PVT__i_data_t 
                                                   ^ vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t) 
                                                  >> 0x1fU);
        vlSelf->__PVT__x_b_muler__DOT__is_zero = ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelf->__PVT__i_data_t 
                                                       >> 0x17U))) 
                                                  | (0U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                                                         >> 0x17U))));
        vlSelf->__PVT__x_b_muler__DOT__ze_r = (0xffU 
                                               & ((vlSelf->__PVT__i_data_t 
                                                   >> 0x17U) 
                                                  + 
                                                  (vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                                                   >> 0x17U)));
        vlSelf->__PVT__x_b_muler__DOT__valid_in_r = 
            (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__x_b_muler__DOT__valid_in_r = 0U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t = 0U;
        vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t = 0U;
        vlSelf->__PVT__i_data_t = 0U;
    } else if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_9) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_0;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_0;
        } else if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_19) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_1;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_1;
        } else if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_29) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_2;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_2;
        } else if (vlSelf->__PVT__MuxOut_1__DOT___o_act_coefficient_T_39) {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_3;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_3;
        } else {
            vlSelf->__PVT__MuxOut_2__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_c_4;
            vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t 
                = vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_coefficient_b_4;
        }
        vlSelf->__PVT__i_data_t = ((((1U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop)) 
                                     | (2U == (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_func_prop))) 
                                    & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r 
                                       >> 0x1fU)) ? 
                                   (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r)
                                    : vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r);
    }
    vlSelf->__PVT__x_b_muler__DOT__carry = ((IData)(vlSelf->__PVT__x_b_muler__DOT__carry_r) 
                                            | (0x1ffffffU 
                                               == vlSelf->__PVT__x_b_muler__DOT__zf_1));
    vlSelf->__PVT__x_b_muler__DOT___zf_0_T_2 = (0xffffffffffffULL 
                                                & ((0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__i_data_t)))) 
                                                   * 
                                                   (0x800000ULL 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__MuxOut_1__DOT__o_act_coefficient_t))))));
}
