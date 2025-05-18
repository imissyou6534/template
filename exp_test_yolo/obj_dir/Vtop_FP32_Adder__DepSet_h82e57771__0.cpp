// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop_FP32_Adder.h"
#include "Vtop__Syms.h"

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_0_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_0_adder__0\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__generate_ctrl_signal__DOT__ctrl_task_state_bn__DOT__running_state) {
        if (vlSelf->__PVT__y_gt_x_0) {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r 
                                         >> 0x1fU));
        } else {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r 
                                         >> 0x1fU));
        }
        vlSelf->__PVT__xs_ys_a = ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r 
                                   >> 0x1fU) == (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r 
                                                 >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((IData)(vlSelf->__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r 
                                                >> 0x17U)) 
                                           - ((IData)(vlSelf->__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r 
                                                  >> 0x17U))));
    }
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT__valid_1));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__generate_ctrl_signal__DOT__ctrl_task_state_bn__DOT__running_state));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_0_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_0_adder__1\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_0_adder__2(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_0_adder__2\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r));
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_1_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_1_adder__0\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__generate_ctrl_signal__DOT__ctrl_task_state_bn__DOT__running_state) {
        if (vlSelf->__PVT__y_gt_x_0) {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r 
                                         >> 0x1fU));
        } else {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r 
                                         >> 0x1fU));
        }
        vlSelf->__PVT__xs_ys_a = ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r 
                                   >> 0x1fU) == (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r 
                                                 >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((IData)(vlSelf->__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r 
                                                >> 0x17U)) 
                                           - ((IData)(vlSelf->__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r 
                                                  >> 0x17U))));
    }
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT__valid_1));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__generate_ctrl_signal__DOT__ctrl_task_state_bn__DOT__running_state));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_1_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_1_adder__1\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_1_adder__2(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_1_adder__2\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r));
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_2_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_2_adder__0\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__generate_ctrl_signal__DOT__ctrl_task_state_bn__DOT__running_state) {
        if (vlSelf->__PVT__y_gt_x_0) {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r 
                                         >> 0x1fU));
        } else {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r 
                                         >> 0x1fU));
        }
        vlSelf->__PVT__xs_ys_a = ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r 
                                   >> 0x1fU) == (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r 
                                                 >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((IData)(vlSelf->__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r 
                                                >> 0x17U)) 
                                           - ((IData)(vlSelf->__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r 
                                                  >> 0x17U))));
    }
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT__valid_1));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__generate_ctrl_signal__DOT__ctrl_task_state_bn__DOT__running_state));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_2_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_2_adder__1\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_2_adder__2(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_2_adder__2\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r));
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_3_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_3_adder__0\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__generate_ctrl_signal__DOT__ctrl_task_state_bn__DOT__running_state) {
        if (vlSelf->__PVT__y_gt_x_0) {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r 
                                         >> 0x1fU));
        } else {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r 
                                         >> 0x1fU));
        }
        vlSelf->__PVT__xs_ys_a = ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r 
                                   >> 0x1fU) == (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r 
                                                 >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((IData)(vlSelf->__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r 
                                                >> 0x17U)) 
                                           - ((IData)(vlSelf->__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r 
                                                  >> 0x17U))));
    }
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT__valid_1));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__generate_ctrl_signal__DOT__ctrl_task_state_bn__DOT__running_state));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_3_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_3_adder__1\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_3_adder__2(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_3_adder__2\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r));
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_4_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_4_adder__0\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__generate_ctrl_signal__DOT__ctrl_task_state_bn__DOT__running_state) {
        if (vlSelf->__PVT__y_gt_x_0) {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r 
                                         >> 0x1fU));
        } else {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r 
                                         >> 0x1fU));
        }
        vlSelf->__PVT__xs_ys_a = ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r 
                                   >> 0x1fU) == (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r 
                                                 >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((IData)(vlSelf->__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r 
                                                >> 0x17U)) 
                                           - ((IData)(vlSelf->__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r 
                                                  >> 0x17U))));
    }
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT__valid_1));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__generate_ctrl_signal__DOT__ctrl_task_state_bn__DOT__running_state));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_4_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_4_adder__1\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_4_adder__2(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_4_adder__2\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r));
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_5_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_5_adder__0\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__generate_ctrl_signal__DOT__ctrl_task_state_bn__DOT__running_state) {
        if (vlSelf->__PVT__y_gt_x_0) {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r 
                                         >> 0x1fU));
        } else {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r 
                                         >> 0x1fU));
        }
        vlSelf->__PVT__xs_ys_a = ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r 
                                   >> 0x1fU) == (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r 
                                                 >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((IData)(vlSelf->__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r 
                                                >> 0x17U)) 
                                           - ((IData)(vlSelf->__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r 
                                                  >> 0x17U))));
    }
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT__valid_1));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__generate_ctrl_signal__DOT__ctrl_task_state_bn__DOT__running_state));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_5_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_5_adder__1\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_5_adder__2(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_5_adder__2\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r));
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_6_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_6_adder__0\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__generate_ctrl_signal__DOT__ctrl_task_state_bn__DOT__running_state) {
        if (vlSelf->__PVT__y_gt_x_0) {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r 
                                         >> 0x1fU));
        } else {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r 
                                         >> 0x1fU));
        }
        vlSelf->__PVT__xs_ys_a = ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r 
                                   >> 0x1fU) == (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r 
                                                 >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((IData)(vlSelf->__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r 
                                                >> 0x17U)) 
                                           - ((IData)(vlSelf->__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r 
                                                  >> 0x17U))));
    }
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT__valid_1));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__generate_ctrl_signal__DOT__ctrl_task_state_bn__DOT__running_state));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_6_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_6_adder__1\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_6_adder__2(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_6_adder__2\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r));
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_7_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_7_adder__0\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__generate_ctrl_signal__DOT__ctrl_task_state_bn__DOT__running_state) {
        if (vlSelf->__PVT__y_gt_x_0) {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r 
                                         >> 0x1fU));
        } else {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r 
                                         >> 0x1fU));
        }
        vlSelf->__PVT__xs_ys_a = ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r 
                                   >> 0x1fU) == (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r 
                                                 >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((IData)(vlSelf->__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r 
                                                >> 0x17U)) 
                                           - ((IData)(vlSelf->__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r 
                                                  >> 0x17U))));
    }
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT__valid_1));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__generate_ctrl_signal__DOT__ctrl_task_state_bn__DOT__running_state));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_7_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_7_adder__1\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_7_adder__2(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_7_adder__2\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r));
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__x_b_and_c_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__x_b_and_c_adder__0\n"); );
    // Body
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        vlSelf->__PVT__yf1_a = ((IData)(vlSelf->__PVT__y_gt_x_0)
                                 ? vlSelf->__PVT___xf1_0_T_3
                                 : vlSelf->__PVT___xf1_0_T_1);
    }
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__x_b_and_c_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__x_b_and_c_adder__1\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
        vlSelf->__PVT__valid_2 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_2 = 0U;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if (vlSelf->__PVT__y_gt_x_0) {
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__x_b_muler__DOT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__x_b_muler__DOT__io_z_r 
                                         >> 0x1fU));
        } else {
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__x_b_and_c_r_1 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__x_b_and_c_r_1 
                                         >> 0x1fU));
        }
        vlSelf->__PVT__xs_ys_a = ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__x_b_and_c_r_1 
                                   >> 0x1fU) == (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__x_b_muler__DOT__io_z_r 
                                                 >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((IData)(vlSelf->__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__x_b_muler__DOT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__x_b_and_c_r_1 
                                                >> 0x17U)) 
                                           - ((IData)(vlSelf->__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__x_b_and_c_r_1 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__x_b_muler__DOT__io_z_r 
                                                  >> 0x17U))));
        vlSelf->__PVT__valid_1 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_1 = 0U;
    }
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__x_b_and_c_adder__2(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__x_b_and_c_adder__2\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__x_b_and_c_r_1 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__x_b_and_c_r_1));
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__x_b_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__x_b_muler__DOT__io_z_r));
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__x_b_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__x_b_and_c_r_1));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__axx_bx_c_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__axx_bx_c_adder__0\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if (vlSelf->__PVT__y_gt_x_0) {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__x_b_and_c_adder.__PVT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__x_b_and_c_adder.__PVT__io_z_r 
                                         >> 0x1fU));
        } else {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__axx_bx_c_r_3 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__axx_bx_c_r_3 
                                         >> 0x1fU));
        }
        vlSelf->__PVT__xs_ys_a = ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__axx_bx_c_r_3 
                                   >> 0x1fU) == (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__x_b_and_c_adder.__PVT__io_z_r 
                                                 >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((IData)(vlSelf->__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__x_b_and_c_adder.__PVT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__axx_bx_c_r_3 
                                                >> 0x17U)) 
                                           - ((IData)(vlSelf->__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__axx_bx_c_r_3 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__x_b_and_c_adder.__PVT__io_z_r 
                                                  >> 0x17U))));
    }
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT__valid_1));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__axx_bx_c_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__axx_bx_c_adder__1\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__axx_bx_c_r_3 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__axx_bx_c_r_3));
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__x_b_and_c_adder.__PVT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__x_b_and_c_adder.__PVT__io_z_r));
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__x_b_and_c_adder.__PVT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__axx_bx_c_r_3));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__io_o_data_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__io_o_data_adder__0\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if ((0x3f800000U > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__io_o_data_adder_io_x))) {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = 0x7fU;
            vlSelf->__PVT__xf1_a = 0x800000U;
        } else {
            vlSelf->__PVT__yf1_a = 0x800000U;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__io_o_data_adder_io_x 
                                            >> 0x17U));
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
        }
        vlSelf->__PVT__xs_ys_a = (1U & (~ (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__io_o_data_adder_io_x 
                                           >> 0x1fU)));
        vlSelf->__PVT__zs_a = ((0x3f800000U <= (0x7fffffffU 
                                                & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__io_o_data_adder_io_x)) 
                               & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__io_o_data_adder_io_x 
                                  >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((0x3f800000U 
                                             > (0x7fffffffU 
                                                & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__io_o_data_adder_io_x))
                                             ? 0x7fU
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__io_o_data_adder_io_x 
                                                >> 0x17U)) 
                                           - ((0x3f800000U 
                                               > (0x7fffffffU 
                                                  & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__io_o_data_adder_io_x))
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__io_o_data_adder_io_x 
                                                  >> 0x17U)
                                               : 0x7fU)));
    }
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT__valid_1));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__io_o_data_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__io_o_data_adder__1\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__io_o_data_adder_io_x 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__io_o_data_adder_io_x));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__x_b_and_c_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__x_b_and_c_adder__1\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
        vlSelf->__PVT__valid_2 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_2 = 0U;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if (vlSelf->__PVT__y_gt_x_0) {
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__x_b_muler__DOT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__x_b_muler__DOT__io_z_r 
                                         >> 0x1fU));
        } else {
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__x_b_and_c_r_1 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__x_b_and_c_r_1 
                                         >> 0x1fU));
        }
        vlSelf->__PVT__xs_ys_a = ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__x_b_and_c_r_1 
                                   >> 0x1fU) == (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__x_b_muler__DOT__io_z_r 
                                                 >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((IData)(vlSelf->__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__x_b_muler__DOT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__x_b_and_c_r_1 
                                                >> 0x17U)) 
                                           - ((IData)(vlSelf->__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__x_b_and_c_r_1 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__x_b_muler__DOT__io_z_r 
                                                  >> 0x17U))));
        vlSelf->__PVT__valid_1 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_1 = 0U;
    }
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__x_b_and_c_adder__2(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__x_b_and_c_adder__2\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__x_b_and_c_r_1 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__x_b_and_c_r_1));
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__x_b_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__x_b_muler__DOT__io_z_r));
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__x_b_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__x_b_and_c_r_1));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__axx_bx_c_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__axx_bx_c_adder__0\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if (vlSelf->__PVT__y_gt_x_0) {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__x_b_and_c_adder.__PVT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__x_b_and_c_adder.__PVT__io_z_r 
                                         >> 0x1fU));
        } else {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__axx_bx_c_r_3 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__axx_bx_c_r_3 
                                         >> 0x1fU));
        }
        vlSelf->__PVT__xs_ys_a = ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__axx_bx_c_r_3 
                                   >> 0x1fU) == (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__x_b_and_c_adder.__PVT__io_z_r 
                                                 >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((IData)(vlSelf->__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__x_b_and_c_adder.__PVT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__axx_bx_c_r_3 
                                                >> 0x17U)) 
                                           - ((IData)(vlSelf->__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__axx_bx_c_r_3 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__x_b_and_c_adder.__PVT__io_z_r 
                                                  >> 0x17U))));
    }
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT__valid_1));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__axx_bx_c_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__axx_bx_c_adder__1\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__axx_bx_c_r_3 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__axx_bx_c_r_3));
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__x_b_and_c_adder.__PVT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__x_b_and_c_adder.__PVT__io_z_r));
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__x_b_and_c_adder.__PVT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__axx_bx_c_r_3));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__io_o_data_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__io_o_data_adder__0\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if ((0x3f800000U > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__io_o_data_adder_io_x))) {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = 0x7fU;
            vlSelf->__PVT__xf1_a = 0x800000U;
        } else {
            vlSelf->__PVT__yf1_a = 0x800000U;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__io_o_data_adder_io_x 
                                            >> 0x17U));
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
        }
        vlSelf->__PVT__xs_ys_a = (1U & (~ (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__io_o_data_adder_io_x 
                                           >> 0x1fU)));
        vlSelf->__PVT__zs_a = ((0x3f800000U <= (0x7fffffffU 
                                                & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__io_o_data_adder_io_x)) 
                               & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__io_o_data_adder_io_x 
                                  >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((0x3f800000U 
                                             > (0x7fffffffU 
                                                & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__io_o_data_adder_io_x))
                                             ? 0x7fU
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__io_o_data_adder_io_x 
                                                >> 0x17U)) 
                                           - ((0x3f800000U 
                                               > (0x7fffffffU 
                                                  & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__io_o_data_adder_io_x))
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__io_o_data_adder_io_x 
                                                  >> 0x17U)
                                               : 0x7fU)));
    }
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT__valid_1));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__io_o_data_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__io_o_data_adder__1\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__io_o_data_adder_io_x 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__io_o_data_adder_io_x));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__x_b_and_c_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__x_b_and_c_adder__1\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
        vlSelf->__PVT__valid_2 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_2 = 0U;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if (vlSelf->__PVT__y_gt_x_0) {
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__x_b_muler__DOT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__x_b_muler__DOT__io_z_r 
                                         >> 0x1fU));
        } else {
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__x_b_and_c_r_1 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__x_b_and_c_r_1 
                                         >> 0x1fU));
        }
        vlSelf->__PVT__xs_ys_a = ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__x_b_and_c_r_1 
                                   >> 0x1fU) == (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__x_b_muler__DOT__io_z_r 
                                                 >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((IData)(vlSelf->__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__x_b_muler__DOT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__x_b_and_c_r_1 
                                                >> 0x17U)) 
                                           - ((IData)(vlSelf->__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__x_b_and_c_r_1 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__x_b_muler__DOT__io_z_r 
                                                  >> 0x17U))));
        vlSelf->__PVT__valid_1 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_1 = 0U;
    }
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__x_b_and_c_adder__2(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__x_b_and_c_adder__2\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__x_b_and_c_r_1 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__x_b_and_c_r_1));
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__x_b_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__x_b_muler__DOT__io_z_r));
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__x_b_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__x_b_and_c_r_1));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__axx_bx_c_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__axx_bx_c_adder__0\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if (vlSelf->__PVT__y_gt_x_0) {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__x_b_and_c_adder.__PVT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__x_b_and_c_adder.__PVT__io_z_r 
                                         >> 0x1fU));
        } else {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__axx_bx_c_r_3 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__axx_bx_c_r_3 
                                         >> 0x1fU));
        }
        vlSelf->__PVT__xs_ys_a = ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__axx_bx_c_r_3 
                                   >> 0x1fU) == (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__x_b_and_c_adder.__PVT__io_z_r 
                                                 >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((IData)(vlSelf->__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__x_b_and_c_adder.__PVT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__axx_bx_c_r_3 
                                                >> 0x17U)) 
                                           - ((IData)(vlSelf->__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__axx_bx_c_r_3 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__x_b_and_c_adder.__PVT__io_z_r 
                                                  >> 0x17U))));
    }
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT__valid_1));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__axx_bx_c_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__axx_bx_c_adder__1\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__axx_bx_c_r_3 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__axx_bx_c_r_3));
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__x_b_and_c_adder.__PVT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__x_b_and_c_adder.__PVT__io_z_r));
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__x_b_and_c_adder.__PVT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__axx_bx_c_r_3));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__io_o_data_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__io_o_data_adder__0\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if ((0x3f800000U > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__io_o_data_adder_io_x))) {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = 0x7fU;
            vlSelf->__PVT__xf1_a = 0x800000U;
        } else {
            vlSelf->__PVT__yf1_a = 0x800000U;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__io_o_data_adder_io_x 
                                            >> 0x17U));
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
        }
        vlSelf->__PVT__xs_ys_a = (1U & (~ (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__io_o_data_adder_io_x 
                                           >> 0x1fU)));
        vlSelf->__PVT__zs_a = ((0x3f800000U <= (0x7fffffffU 
                                                & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__io_o_data_adder_io_x)) 
                               & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__io_o_data_adder_io_x 
                                  >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((0x3f800000U 
                                             > (0x7fffffffU 
                                                & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__io_o_data_adder_io_x))
                                             ? 0x7fU
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__io_o_data_adder_io_x 
                                                >> 0x17U)) 
                                           - ((0x3f800000U 
                                               > (0x7fffffffU 
                                                  & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__io_o_data_adder_io_x))
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__io_o_data_adder_io_x 
                                                  >> 0x17U)
                                               : 0x7fU)));
    }
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT__valid_1));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__io_o_data_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__io_o_data_adder__1\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__io_o_data_adder_io_x 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__io_o_data_adder_io_x));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder__1\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
        vlSelf->__PVT__valid_2 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_2 = 0U;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if (vlSelf->__PVT__y_gt_x_0) {
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_muler__DOT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_muler__DOT__io_z_r 
                                         >> 0x1fU));
        } else {
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_and_c_r_1 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_and_c_r_1 
                                         >> 0x1fU));
        }
        vlSelf->__PVT__xs_ys_a = ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_and_c_r_1 
                                   >> 0x1fU) == (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_muler__DOT__io_z_r 
                                                 >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((IData)(vlSelf->__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_muler__DOT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_and_c_r_1 
                                                >> 0x17U)) 
                                           - ((IData)(vlSelf->__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_and_c_r_1 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_muler__DOT__io_z_r 
                                                  >> 0x17U))));
        vlSelf->__PVT__valid_1 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_1 = 0U;
    }
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder__2(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder__2\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_and_c_r_1 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_and_c_r_1));
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_muler__DOT__io_z_r));
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_and_c_r_1));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder__0\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if (vlSelf->__PVT__y_gt_x_0) {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__io_z_r 
                                         >> 0x1fU));
        } else {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__axx_bx_c_r_3 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__axx_bx_c_r_3 
                                         >> 0x1fU));
        }
        vlSelf->__PVT__xs_ys_a = ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__axx_bx_c_r_3 
                                   >> 0x1fU) == (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__io_z_r 
                                                 >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((IData)(vlSelf->__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__axx_bx_c_r_3 
                                                >> 0x17U)) 
                                           - ((IData)(vlSelf->__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__axx_bx_c_r_3 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__io_z_r 
                                                  >> 0x17U))));
    }
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT__valid_1));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder__1\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__axx_bx_c_r_3 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__axx_bx_c_r_3));
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__io_z_r));
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__axx_bx_c_r_3));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder__0\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if ((0x3f800000U > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__io_o_data_adder_io_x))) {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = 0x7fU;
            vlSelf->__PVT__xf1_a = 0x800000U;
        } else {
            vlSelf->__PVT__yf1_a = 0x800000U;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__io_o_data_adder_io_x 
                                            >> 0x17U));
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
        }
        vlSelf->__PVT__xs_ys_a = (1U & (~ (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__io_o_data_adder_io_x 
                                           >> 0x1fU)));
        vlSelf->__PVT__zs_a = ((0x3f800000U <= (0x7fffffffU 
                                                & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__io_o_data_adder_io_x)) 
                               & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__io_o_data_adder_io_x 
                                  >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((0x3f800000U 
                                             > (0x7fffffffU 
                                                & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__io_o_data_adder_io_x))
                                             ? 0x7fU
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__io_o_data_adder_io_x 
                                                >> 0x17U)) 
                                           - ((0x3f800000U 
                                               > (0x7fffffffU 
                                                  & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__io_o_data_adder_io_x))
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__io_o_data_adder_io_x 
                                                  >> 0x17U)
                                               : 0x7fU)));
    }
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT__valid_1));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder__1\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__io_o_data_adder_io_x 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__io_o_data_adder_io_x));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder__1\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
        vlSelf->__PVT__valid_2 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_2 = 0U;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if (vlSelf->__PVT__y_gt_x_0) {
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_muler__DOT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_muler__DOT__io_z_r 
                                         >> 0x1fU));
        } else {
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_and_c_r_1 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_and_c_r_1 
                                         >> 0x1fU));
        }
        vlSelf->__PVT__xs_ys_a = ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_and_c_r_1 
                                   >> 0x1fU) == (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_muler__DOT__io_z_r 
                                                 >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((IData)(vlSelf->__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_muler__DOT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_and_c_r_1 
                                                >> 0x17U)) 
                                           - ((IData)(vlSelf->__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_and_c_r_1 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_muler__DOT__io_z_r 
                                                  >> 0x17U))));
        vlSelf->__PVT__valid_1 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_1 = 0U;
    }
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder__2(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder__2\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_and_c_r_1 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_and_c_r_1));
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_muler__DOT__io_z_r));
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_and_c_r_1));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder__0\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if (vlSelf->__PVT__y_gt_x_0) {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__io_z_r 
                                         >> 0x1fU));
        } else {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__axx_bx_c_r_3 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__axx_bx_c_r_3 
                                         >> 0x1fU));
        }
        vlSelf->__PVT__xs_ys_a = ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__axx_bx_c_r_3 
                                   >> 0x1fU) == (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__io_z_r 
                                                 >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((IData)(vlSelf->__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__axx_bx_c_r_3 
                                                >> 0x17U)) 
                                           - ((IData)(vlSelf->__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__axx_bx_c_r_3 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__io_z_r 
                                                  >> 0x17U))));
    }
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT__valid_1));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder__1\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__axx_bx_c_r_3 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__axx_bx_c_r_3));
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__io_z_r));
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__axx_bx_c_r_3));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder__0\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if ((0x3f800000U > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__io_o_data_adder_io_x))) {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = 0x7fU;
            vlSelf->__PVT__xf1_a = 0x800000U;
        } else {
            vlSelf->__PVT__yf1_a = 0x800000U;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__io_o_data_adder_io_x 
                                            >> 0x17U));
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
        }
        vlSelf->__PVT__xs_ys_a = (1U & (~ (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__io_o_data_adder_io_x 
                                           >> 0x1fU)));
        vlSelf->__PVT__zs_a = ((0x3f800000U <= (0x7fffffffU 
                                                & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__io_o_data_adder_io_x)) 
                               & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__io_o_data_adder_io_x 
                                  >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((0x3f800000U 
                                             > (0x7fffffffU 
                                                & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__io_o_data_adder_io_x))
                                             ? 0x7fU
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__io_o_data_adder_io_x 
                                                >> 0x17U)) 
                                           - ((0x3f800000U 
                                               > (0x7fffffffU 
                                                  & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__io_o_data_adder_io_x))
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__io_o_data_adder_io_x 
                                                  >> 0x17U)
                                               : 0x7fU)));
    }
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT__valid_1));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder__1\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__io_o_data_adder_io_x 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__io_o_data_adder_io_x));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder__1\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
        vlSelf->__PVT__valid_2 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_2 = 0U;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if (vlSelf->__PVT__y_gt_x_0) {
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_muler__DOT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_muler__DOT__io_z_r 
                                         >> 0x1fU));
        } else {
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_and_c_r_1 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_and_c_r_1 
                                         >> 0x1fU));
        }
        vlSelf->__PVT__xs_ys_a = ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_and_c_r_1 
                                   >> 0x1fU) == (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_muler__DOT__io_z_r 
                                                 >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((IData)(vlSelf->__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_muler__DOT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_and_c_r_1 
                                                >> 0x17U)) 
                                           - ((IData)(vlSelf->__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_and_c_r_1 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_muler__DOT__io_z_r 
                                                  >> 0x17U))));
        vlSelf->__PVT__valid_1 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_1 = 0U;
    }
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder__2(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder__2\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_and_c_r_1 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_and_c_r_1));
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_muler__DOT__io_z_r));
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_and_c_r_1));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder__0\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if (vlSelf->__PVT__y_gt_x_0) {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__io_z_r 
                                         >> 0x1fU));
        } else {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__axx_bx_c_r_3 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__axx_bx_c_r_3 
                                         >> 0x1fU));
        }
        vlSelf->__PVT__xs_ys_a = ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__axx_bx_c_r_3 
                                   >> 0x1fU) == (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__io_z_r 
                                                 >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((IData)(vlSelf->__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__axx_bx_c_r_3 
                                                >> 0x17U)) 
                                           - ((IData)(vlSelf->__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__axx_bx_c_r_3 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__io_z_r 
                                                  >> 0x17U))));
    }
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT__valid_1));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder__1\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__axx_bx_c_r_3 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__axx_bx_c_r_3));
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__io_z_r));
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__axx_bx_c_r_3));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder__0\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if ((0x3f800000U > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__io_o_data_adder_io_x))) {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = 0x7fU;
            vlSelf->__PVT__xf1_a = 0x800000U;
        } else {
            vlSelf->__PVT__yf1_a = 0x800000U;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__io_o_data_adder_io_x 
                                            >> 0x17U));
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
        }
        vlSelf->__PVT__xs_ys_a = (1U & (~ (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__io_o_data_adder_io_x 
                                           >> 0x1fU)));
        vlSelf->__PVT__zs_a = ((0x3f800000U <= (0x7fffffffU 
                                                & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__io_o_data_adder_io_x)) 
                               & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__io_o_data_adder_io_x 
                                  >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((0x3f800000U 
                                             > (0x7fffffffU 
                                                & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__io_o_data_adder_io_x))
                                             ? 0x7fU
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__io_o_data_adder_io_x 
                                                >> 0x17U)) 
                                           - ((0x3f800000U 
                                               > (0x7fffffffU 
                                                  & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__io_o_data_adder_io_x))
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__io_o_data_adder_io_x 
                                                  >> 0x17U)
                                               : 0x7fU)));
    }
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT__valid_1));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder__1\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__io_o_data_adder_io_x 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__io_o_data_adder_io_x));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder__1\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
        vlSelf->__PVT__valid_2 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_2 = 0U;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if (vlSelf->__PVT__y_gt_x_0) {
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_muler__DOT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_muler__DOT__io_z_r 
                                         >> 0x1fU));
        } else {
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_and_c_r_1 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_and_c_r_1 
                                         >> 0x1fU));
        }
        vlSelf->__PVT__xs_ys_a = ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_and_c_r_1 
                                   >> 0x1fU) == (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_muler__DOT__io_z_r 
                                                 >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((IData)(vlSelf->__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_muler__DOT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_and_c_r_1 
                                                >> 0x17U)) 
                                           - ((IData)(vlSelf->__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_and_c_r_1 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_muler__DOT__io_z_r 
                                                  >> 0x17U))));
        vlSelf->__PVT__valid_1 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_1 = 0U;
    }
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder__2(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder__2\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_and_c_r_1 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_and_c_r_1));
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_muler__DOT__io_z_r));
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_and_c_r_1));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder__0\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if (vlSelf->__PVT__y_gt_x_0) {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__io_z_r 
                                         >> 0x1fU));
        } else {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__axx_bx_c_r_3 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__axx_bx_c_r_3 
                                         >> 0x1fU));
        }
        vlSelf->__PVT__xs_ys_a = ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__axx_bx_c_r_3 
                                   >> 0x1fU) == (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__io_z_r 
                                                 >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((IData)(vlSelf->__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__axx_bx_c_r_3 
                                                >> 0x17U)) 
                                           - ((IData)(vlSelf->__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__axx_bx_c_r_3 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__io_z_r 
                                                  >> 0x17U))));
    }
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT__valid_1));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder__1\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__axx_bx_c_r_3 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__axx_bx_c_r_3));
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__io_z_r));
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__axx_bx_c_r_3));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder__0\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if ((0x3f800000U > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__io_o_data_adder_io_x))) {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = 0x7fU;
            vlSelf->__PVT__xf1_a = 0x800000U;
        } else {
            vlSelf->__PVT__yf1_a = 0x800000U;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__io_o_data_adder_io_x 
                                            >> 0x17U));
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
        }
        vlSelf->__PVT__xs_ys_a = (1U & (~ (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__io_o_data_adder_io_x 
                                           >> 0x1fU)));
        vlSelf->__PVT__zs_a = ((0x3f800000U <= (0x7fffffffU 
                                                & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__io_o_data_adder_io_x)) 
                               & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__io_o_data_adder_io_x 
                                  >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((0x3f800000U 
                                             > (0x7fffffffU 
                                                & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__io_o_data_adder_io_x))
                                             ? 0x7fU
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__io_o_data_adder_io_x 
                                                >> 0x17U)) 
                                           - ((0x3f800000U 
                                               > (0x7fffffffU 
                                                  & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__io_o_data_adder_io_x))
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__io_o_data_adder_io_x 
                                                  >> 0x17U)
                                               : 0x7fU)));
    }
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT__valid_1));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder__1\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__io_o_data_adder_io_x 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__io_o_data_adder_io_x));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder__1\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
        vlSelf->__PVT__valid_2 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_2 = 0U;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if (vlSelf->__PVT__y_gt_x_0) {
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_muler__DOT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_muler__DOT__io_z_r 
                                         >> 0x1fU));
        } else {
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_and_c_r_1 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_and_c_r_1 
                                         >> 0x1fU));
        }
        vlSelf->__PVT__xs_ys_a = ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_and_c_r_1 
                                   >> 0x1fU) == (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_muler__DOT__io_z_r 
                                                 >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((IData)(vlSelf->__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_muler__DOT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_and_c_r_1 
                                                >> 0x17U)) 
                                           - ((IData)(vlSelf->__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_and_c_r_1 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_muler__DOT__io_z_r 
                                                  >> 0x17U))));
        vlSelf->__PVT__valid_1 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_1 = 0U;
    }
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder__2(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder__2\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_and_c_r_1 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_and_c_r_1));
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_muler__DOT__io_z_r));
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_and_c_r_1));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder__0\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if (vlSelf->__PVT__y_gt_x_0) {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__io_z_r 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__io_z_r 
                                         >> 0x1fU));
        } else {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_1;
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__axx_bx_c_r_3 
                                            >> 0x17U));
            vlSelf->__PVT__zs_a = (1U & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__axx_bx_c_r_3 
                                         >> 0x1fU));
        }
        vlSelf->__PVT__xs_ys_a = ((vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__axx_bx_c_r_3 
                                   >> 0x1fU) == (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__io_z_r 
                                                 >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((IData)(vlSelf->__PVT__y_gt_x_0)
                                             ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__io_z_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__axx_bx_c_r_3 
                                                >> 0x17U)) 
                                           - ((IData)(vlSelf->__PVT__y_gt_x_0)
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__axx_bx_c_r_3 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__io_z_r 
                                                  >> 0x17U))));
    }
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT__valid_1));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder__1\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__axx_bx_c_r_3 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__axx_bx_c_r_3));
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__io_z_r));
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__axx_bx_c_r_3));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder__0\n"); );
    // Body
    if (vlSelf->__PVT__valid_4) {
        vlSelf->__PVT__io_z_r = (((IData)(vlSelf->__PVT__zs_3) 
                                  << 0x1fU) | ((((IData)(vlSelf->__PVT__underflow_3)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0x1000000U 
                                                      & vlSelf->__PVT__zf_3)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ze_3))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__ze_3) 
                                                      - (IData)(vlSelf->__PVT__offset_3))))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelf->__PVT__underflow_3)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->__PVT__zf_3)
                                                       ? 
                                                      (vlSelf->__PVT__zf_3 
                                                       >> 1U)
                                                       : 
                                                      (vlSelf->__PVT__zf_3 
                                                       << (IData)(vlSelf->__PVT__offset_3)))))));
    }
    if (vlSelf->__PVT__valid_3) {
        vlSelf->__PVT__ze_3 = vlSelf->__PVT__ze_2;
        vlSelf->__PVT__zs_3 = vlSelf->__PVT__zs_2;
        vlSelf->__PVT__zf_3 = vlSelf->__PVT__zf_2;
        vlSelf->__PVT__offset_3 = (0x1fU & ((IData)(0x16U) 
                                            - (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__zf_2 
                                                             >> 0x11U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSelf->__PVT__zf_2 
                                                       >> 0x11U)))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__zf_2 
                                                                 >> 0x15U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x15U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0x16U)))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 3U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelf->__PVT__zf_2)
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 0x12U))))))
                                                   : (IData)(vlSelf->__PVT__off0__DOT___io_off_T_35)))));
        vlSelf->__PVT__valid_4 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_4 = 0U;
    }
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    if (vlSelf->__PVT__valid_2) {
        vlSelf->__PVT__ze_2 = vlSelf->__PVT__ze_1;
        vlSelf->__PVT__zs_2 = vlSelf->__PVT__zs_1;
        vlSelf->__PVT__zf_2 = (0x1ffffffU & ((IData)(vlSelf->__PVT__xs_ys_1)
                                              ? (vlSelf->__PVT__xf1_1 
                                                 + vlSelf->__PVT__yf2_1)
                                              : (0xffffffU 
                                                 & (vlSelf->__PVT__xf1_1 
                                                    - vlSelf->__PVT__yf2_1))));
        vlSelf->__PVT__valid_3 = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    } else {
        vlSelf->__PVT__valid_3 = 0U;
    }
    vlSelf->__PVT__off0__DOT___io_off_T_35 = (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__zf_2 
                                                            >> 9U)))) 
                                               << 3U) 
                                              | ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__zf_2 
                                                      >> 9U)))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 0xdU)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 0xdU)))
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xeU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 0xaU))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->__PVT__zf_2 
                                                                >> 5U)))) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__zf_2 
                                                          >> 5U)))
                                                      ? 
                                                     ((0x100U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 6U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->__PVT__zf_2)
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->__PVT__zf_2)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (vlSelf->__PVT__zf_2 
                                                           >> 2U))))))));
    if (vlSelf->__PVT__valid_1) {
        vlSelf->__PVT__xs_ys_1 = vlSelf->__PVT__xs_ys_a;
        vlSelf->__PVT__xf1_1 = vlSelf->__PVT__xf1_a;
        vlSelf->__PVT__yf2_1 = ((1U & (IData)(vlSelf->__PVT__xe_ye_a))
                                 ? (0x7fffffU & (((2U 
                                                   & (IData)(vlSelf->__PVT__xe_ye_a))
                                                   ? 
                                                  (vlSelf->__PVT__yf2_a3 
                                                   >> 2U)
                                                   : vlSelf->__PVT__yf2_a3) 
                                                 >> 1U))
                                 : ((2U & (IData)(vlSelf->__PVT__xe_ye_a))
                                     ? (0x3fffffU & 
                                        (vlSelf->__PVT__yf2_a3 
                                         >> 2U)) : 
                                    ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                      ? (0xfffffU & 
                                         (vlSelf->__PVT__yf2_a2 
                                          >> 4U)) : vlSelf->__PVT__yf2_a2)));
        vlSelf->__PVT__ze_1 = vlSelf->__PVT__ze_a;
        vlSelf->__PVT__zs_1 = vlSelf->__PVT__zs_a;
    }
    if (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en) {
        if ((0x3f800000U > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__io_o_data_adder_io_x))) {
            vlSelf->__PVT__yf1_a = vlSelf->__PVT___xf1_0_T_3;
            vlSelf->__PVT__ze_a = 0x7fU;
            vlSelf->__PVT__xf1_a = 0x800000U;
        } else {
            vlSelf->__PVT__yf1_a = 0x800000U;
            vlSelf->__PVT__ze_a = (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__io_o_data_adder_io_x 
                                            >> 0x17U));
            vlSelf->__PVT__xf1_a = vlSelf->__PVT___xf1_0_T_3;
        }
        vlSelf->__PVT__xs_ys_a = (1U & (~ (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__io_o_data_adder_io_x 
                                           >> 0x1fU)));
        vlSelf->__PVT__zs_a = ((0x3f800000U <= (0x7fffffffU 
                                                & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__io_o_data_adder_io_x)) 
                               & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__io_o_data_adder_io_x 
                                  >> 0x1fU));
        vlSelf->__PVT__xe_ye_a = (0xffU & (((0x3f800000U 
                                             > (0x7fffffffU 
                                                & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__io_o_data_adder_io_x))
                                             ? 0x7fU
                                             : (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__io_o_data_adder_io_x 
                                                >> 0x17U)) 
                                           - ((0x3f800000U 
                                               > (0x7fffffffU 
                                                  & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__io_o_data_adder_io_x))
                                               ? (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__io_o_data_adder_io_x 
                                                  >> 0x17U)
                                               : 0x7fU)));
    }
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT__valid_1));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__cfg_act_en));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT__yf2_a1 = (0xffffffU & ((0x10U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a0 
                                              >> 0x10U)
                                           : vlSelf->__PVT__yf2_a0));
    vlSelf->__PVT__yf2_a2 = (0xffffffU & ((8U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a1 
                                              >> 8U)
                                           : vlSelf->__PVT__yf2_a1));
    vlSelf->__PVT__yf2_a3 = (0xffffffU & ((4U & (IData)(vlSelf->__PVT__xe_ye_a))
                                           ? (vlSelf->__PVT__yf2_a2 
                                              >> 4U)
                                           : vlSelf->__PVT__yf2_a2));
}

VL_INLINE_OPT void Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder__1(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder__1\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__io_o_data_adder_io_x 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__io_o_data_adder_io_x));
}
