// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop_FP32_Adder.h"
#include "Vtop__Syms.h"

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_0_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_0_adder__0\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r));
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r));
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
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_0.__PVT__fp32_data_muler__DOT__io_z_r));
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_1_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_1_adder__0\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r));
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r));
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
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_1.__PVT__fp32_data_muler__DOT__io_z_r));
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_2_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_2_adder__0\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r));
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r));
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
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_2.__PVT__fp32_data_muler__DOT__io_z_r));
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_3_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_3_adder__0\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r));
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r));
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
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_3.__PVT__fp32_data_muler__DOT__io_z_r));
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_4_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_4_adder__0\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r));
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r));
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
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_4.__PVT__fp32_data_muler__DOT__io_z_r));
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_5_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_5_adder__0\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r));
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r));
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
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_5.__PVT__fp32_data_muler__DOT__io_z_r));
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_6_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_6_adder__0\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r));
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r));
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
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_6.__PVT__fp32_data_muler__DOT__io_z_r));
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_7_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__bn_add_float_result_7_adder__0\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r));
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r));
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
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant_extra__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__dequant__DOT__cell_7.__PVT__fp32_data_muler__DOT__io_z_r));
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__x_b_and_c_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__x_b_and_c_adder__0\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__x_b_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__x_b_muler__DOT__io_z_r));
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__x_b_and_c_r_1 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__x_b_and_c_r_1));
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
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__x_b_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__x_b_and_c_r_1));
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__axx_bx_c_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__axx_bx_c_adder__0\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__x_b_and_c_adder.__PVT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__x_b_and_c_adder.__PVT__io_z_r));
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__axx_bx_c_r_3 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__axx_bx_c_r_3));
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
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__x_b_and_c_adder.__PVT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__axx_bx_c_r_3));
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__io_o_data_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell__io_o_data_adder__0\n"); );
    // Body
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
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__io_o_data_adder_io_x 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell.__PVT__io_o_data_adder_io_x));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__x_b_and_c_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__x_b_and_c_adder__0\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__x_b_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__x_b_muler__DOT__io_z_r));
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__x_b_and_c_r_1 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__x_b_and_c_r_1));
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
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__x_b_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__x_b_and_c_r_1));
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__axx_bx_c_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__axx_bx_c_adder__0\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__x_b_and_c_adder.__PVT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__x_b_and_c_adder.__PVT__io_z_r));
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__axx_bx_c_r_3 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__axx_bx_c_r_3));
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
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__x_b_and_c_adder.__PVT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__axx_bx_c_r_3));
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__io_o_data_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1__io_o_data_adder__0\n"); );
    // Body
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
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__io_o_data_adder_io_x 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_1.__PVT__io_o_data_adder_io_x));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__x_b_and_c_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__x_b_and_c_adder__0\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__x_b_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__x_b_muler__DOT__io_z_r));
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__x_b_and_c_r_1 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__x_b_and_c_r_1));
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
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__x_b_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__x_b_and_c_r_1));
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__axx_bx_c_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__axx_bx_c_adder__0\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__x_b_and_c_adder.__PVT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__x_b_and_c_adder.__PVT__io_z_r));
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__axx_bx_c_r_3 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__axx_bx_c_r_3));
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
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__x_b_and_c_adder.__PVT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__axx_bx_c_r_3));
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__io_o_data_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2__io_o_data_adder__0\n"); );
    // Body
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
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__io_o_data_adder_io_x 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_2.__PVT__io_o_data_adder_io_x));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder__0\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_muler__DOT__io_z_r));
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_and_c_r_1 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_and_c_r_1));
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
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__x_b_and_c_r_1));
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__axx_bx_c_adder__0\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__io_z_r));
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__axx_bx_c_r_3 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__axx_bx_c_r_3));
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
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__x_b_and_c_adder.__PVT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__axx_bx_c_r_3));
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3__io_o_data_adder__0\n"); );
    // Body
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
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__io_o_data_adder_io_x 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_3.__PVT__io_o_data_adder_io_x));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder__0\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_muler__DOT__io_z_r));
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_and_c_r_1 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_and_c_r_1));
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
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__x_b_and_c_r_1));
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__axx_bx_c_adder__0\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__io_z_r));
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__axx_bx_c_r_3 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__axx_bx_c_r_3));
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
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__x_b_and_c_adder.__PVT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__axx_bx_c_r_3));
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4__io_o_data_adder__0\n"); );
    // Body
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
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__io_o_data_adder_io_x 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_4.__PVT__io_o_data_adder_io_x));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder__0\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_muler__DOT__io_z_r));
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_and_c_r_1 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_and_c_r_1));
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
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__x_b_and_c_r_1));
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__axx_bx_c_adder__0\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__io_z_r));
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__axx_bx_c_r_3 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__axx_bx_c_r_3));
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
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__x_b_and_c_adder.__PVT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__axx_bx_c_r_3));
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5__io_o_data_adder__0\n"); );
    // Body
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
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__io_o_data_adder_io_x 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_5.__PVT__io_o_data_adder_io_x));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder__0\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_muler__DOT__io_z_r));
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_and_c_r_1 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_and_c_r_1));
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
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__x_b_and_c_r_1));
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__axx_bx_c_adder__0\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__io_z_r));
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__axx_bx_c_r_3 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__axx_bx_c_r_3));
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
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__x_b_and_c_adder.__PVT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__axx_bx_c_r_3));
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6__io_o_data_adder__0\n"); );
    // Body
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
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__io_o_data_adder_io_x 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_6.__PVT__io_o_data_adder_io_x));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder__0\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_muler__DOT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_muler__DOT__io_z_r));
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_and_c_r_1 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_and_c_r_1));
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
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_muler__DOT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__x_b_and_c_r_1));
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__axx_bx_c_adder__0\n"); );
    // Body
    vlSelf->__PVT___xf1_0_T_1 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__io_z_r 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__io_z_r));
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__axx_bx_c_r_3 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__axx_bx_c_r_3));
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
    vlSelf->__PVT__y_gt_x_0 = ((0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__x_b_and_c_adder.__PVT__io_z_r) 
                               > (0x7fffffffU & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__axx_bx_c_r_3));
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
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

VL_ATTR_COLD void Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder__0(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7__io_o_data_adder__0\n"); );
    // Body
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
    vlSelf->__PVT__underflow_3 = ((IData)(vlSelf->__PVT__ze_3) 
                                  < (IData)(vlSelf->__PVT__offset_3));
    vlSelf->__PVT__yf2_a0 = ((0U != (7U & ((IData)(vlSelf->__PVT__xe_ye_a) 
                                           >> 5U)))
                              ? 0U : vlSelf->__PVT__yf1_a);
    vlSelf->__PVT___xf1_0_T_3 = (((0U != (0xffU & (vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__io_o_data_adder_io_x 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSymsp->TOP__top__DOT__u_Accel_all__DOT__alu_act__DOT__actfunc__DOT__activationFuncDataCell_7.__PVT__io_o_data_adder_io_x));
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
