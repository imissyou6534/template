// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop_conv_win_3_3.h"

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2__conv_33_1__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2__conv_33_1__0\n"); );
    // Body
    vlSelf->__PVT__addtree_0__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_1__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9)))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__addtree_0__DOT__addtree_a1 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a2 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a3 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a4 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a5 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a6 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a7 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a8 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a9 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_0) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_0));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_33[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_41[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_41[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_33[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_41[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_41[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_33[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_41[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_41[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_33[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_41[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_41[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_33[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_41[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_41[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_33[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_41[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_41[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_33[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_41[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_41[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_33[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_41[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_41[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_33[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_41[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_41[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2__conv_33_2__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2__conv_33_2__0\n"); );
    // Body
    vlSelf->__PVT__addtree_0__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_1__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9)))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__addtree_0__DOT__addtree_a1 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a2 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a3 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a4 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a5 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a6 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a7 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a8 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a9 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_0) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_0));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_34[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_42[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_42[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_34[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_42[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_42[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_34[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_42[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_42[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_34[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_42[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_42[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_34[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_42[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_42[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_34[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_42[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_42[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_34[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_42[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_42[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_34[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_42[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_42[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_34[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_42[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_42[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2__conv_33_3__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2__conv_33_3__0\n"); );
    // Body
    vlSelf->__PVT__addtree_0__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_1__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9)))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__addtree_0__DOT__addtree_a1 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a2 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a3 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a4 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a5 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a6 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a7 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a8 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a9 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_0) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_0));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_35[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_43[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_43[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_35[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_43[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_43[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_35[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_43[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_43[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_35[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_43[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_43[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_35[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_43[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_43[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_35[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_43[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_43[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_35[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_43[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_43[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_35[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_43[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_43[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_35[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_43[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_43[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2__conv_33_4__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2__conv_33_4__0\n"); );
    // Body
    vlSelf->__PVT__addtree_0__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_1__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9)))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__addtree_0__DOT__addtree_a1 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a2 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a3 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a4 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a5 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a6 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a7 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a8 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a9 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_0) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_0));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_36[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_44[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_44[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_36[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_44[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_44[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_36[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_44[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_44[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_36[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_44[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_44[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_36[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_44[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_44[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_36[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_44[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_44[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_36[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_44[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_44[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_36[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_44[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_44[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_36[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_44[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_44[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2__conv_33_5__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2__conv_33_5__0\n"); );
    // Body
    vlSelf->__PVT__addtree_0__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_1__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9)))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__addtree_0__DOT__addtree_a1 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a2 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a3 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a4 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a5 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a6 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a7 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a8 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a9 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_0) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_0));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_37[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_45[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_45[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_37[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_45[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_45[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_37[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_45[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_45[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_37[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_45[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_45[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_37[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_45[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_45[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_37[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_45[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_45[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_37[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_45[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_45[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_37[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_45[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_45[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_37[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_45[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_45[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2__conv_33_6__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2__conv_33_6__0\n"); );
    // Body
    vlSelf->__PVT__addtree_0__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_1__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9)))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__addtree_0__DOT__addtree_a1 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a2 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a3 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a4 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a5 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a6 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a7 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a8 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a9 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_0) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_0));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_38[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_46[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_46[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_38[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_46[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_46[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_38[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_46[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_46[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_38[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_46[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_46[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_38[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_46[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_46[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_38[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_46[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_46[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_38[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_46[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_46[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_38[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_46[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_46[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_38[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_46[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_46[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2__conv_33_7__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2__conv_33_7__0\n"); );
    // Body
    vlSelf->__PVT__addtree_0__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_1__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9)))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__addtree_0__DOT__addtree_a1 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a2 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a3 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a4 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a5 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a6 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a7 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a8 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a9 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_0) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_0));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_39[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_47[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_47[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_39[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_47[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_47[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_39[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_47[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_47[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_39[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_47[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_47[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_39[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_47[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_47[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_39[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_47[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_47[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_39[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_47[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_47[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_39[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_47[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_47[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_39[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_47[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_47[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3__conv_33_0__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3__conv_33_0__0\n"); );
    // Body
    vlSelf->__PVT__addtree_0__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_1__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9)))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__addtree_0__DOT__addtree_a1 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a2 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a3 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a4 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a5 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a6 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a7 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a8 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a9 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_0) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_0));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_48[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_56[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_56[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_48[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_56[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_56[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_48[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_56[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_56[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_48[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_56[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_56[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_48[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_56[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_56[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_48[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_56[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_56[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_48[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_56[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_56[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_48[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_56[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_56[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_48[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_56[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_56[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3__conv_33_1__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3__conv_33_1__0\n"); );
    // Body
    vlSelf->__PVT__addtree_0__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_1__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9)))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__addtree_0__DOT__addtree_a1 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a2 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a3 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a4 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a5 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a6 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a7 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a8 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a9 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_0) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_0));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_49[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_57[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_57[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_49[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_57[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_57[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_49[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_57[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_57[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_49[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_57[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_57[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_49[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_57[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_57[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_49[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_57[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_57[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_49[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_57[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_57[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_49[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_57[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_57[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_49[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_57[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_57[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3__conv_33_2__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3__conv_33_2__0\n"); );
    // Body
    vlSelf->__PVT__addtree_0__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_1__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9)))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__addtree_0__DOT__addtree_a1 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a2 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a3 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a4 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a5 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a6 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a7 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a8 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a9 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_0) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_0));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_50[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_58[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_58[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_50[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_58[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_58[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_50[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_58[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_58[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_50[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_58[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_58[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_50[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_58[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_58[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_50[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_58[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_58[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_50[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_58[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_58[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_50[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_58[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_58[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_50[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_58[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_58[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3__conv_33_3__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3__conv_33_3__0\n"); );
    // Body
    vlSelf->__PVT__addtree_0__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_1__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9)))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__addtree_0__DOT__addtree_a1 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a2 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a3 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a4 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a5 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a6 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a7 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a8 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a9 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_0) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_0));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_51[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_59[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_59[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_51[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_59[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_59[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_51[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_59[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_59[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_51[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_59[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_59[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_51[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_59[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_59[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_51[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_59[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_59[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_51[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_59[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_59[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_51[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_59[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_59[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_51[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_59[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_59[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3__conv_33_4__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3__conv_33_4__0\n"); );
    // Body
    vlSelf->__PVT__addtree_0__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_1__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9)))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__addtree_0__DOT__addtree_a1 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a2 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a3 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a4 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a5 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a6 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a7 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a8 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a9 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_0) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_0));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_52[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_60[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_60[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_52[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_60[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_60[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_52[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_60[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_60[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_52[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_60[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_60[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_52[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_60[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_60[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_52[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_60[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_60[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_52[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_60[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_60[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_52[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_60[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_60[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_52[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_60[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_60[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3__conv_33_5__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3__conv_33_5__0\n"); );
    // Body
    vlSelf->__PVT__addtree_0__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_1__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9)))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__addtree_0__DOT__addtree_a1 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a2 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a3 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a4 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a5 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a6 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a7 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a8 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a9 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_0) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_0));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_53[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_61[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_61[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_53[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_61[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_61[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_53[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_61[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_61[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_53[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_61[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_61[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_53[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_61[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_61[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_53[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_61[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_61[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_53[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_61[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_61[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_53[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_61[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_61[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_53[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_61[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_61[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3__conv_33_6__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3__conv_33_6__0\n"); );
    // Body
    vlSelf->__PVT__addtree_0__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_1__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9)))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__addtree_0__DOT__addtree_a1 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a2 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a3 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a4 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a5 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a6 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a7 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a8 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a9 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_0) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_0));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_54[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_62[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_62[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_54[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_62[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_62[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_54[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_62[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_62[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_54[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_62[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_62[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_54[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_62[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_62[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_54[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_62[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_62[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_54[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_62[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_62[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_54[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_62[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_62[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_54[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_62[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_62[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3__conv_33_7__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3__conv_33_7__0\n"); );
    // Body
    vlSelf->__PVT__addtree_0__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_1__DOT__addtree_dout = (0x3ffffU 
                                                   & ((vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
                                                       + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2) 
                                                      + vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a1))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a2)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a3)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a4))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a5)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a6)))));
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                      << 2U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a7))) 
                        + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                        << 2U)) | (
                                                   (0x10000U 
                                                    & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a8)))) 
                       + ((0x20000U & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                       << 2U)) | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->__PVT__addtree_0__DOT__addtree_a9)))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2 
        = (0x3ffffU & ((((0x20000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                               >> 0xfU)) 
                                      << 0x11U)) | 
                         ((0x10000U & ((IData)((vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x10U)) | 
                          (0xffffU & (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT)))) 
                        + ((0x20000U & ((IData)((vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((IData)(
                                                   (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                    >> 0xfU)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT))))) 
                       + ((0x20000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                >> 0xfU)) 
                                       << 0x11U)) | 
                          ((0x10000U & ((IData)((vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                 >> 0xfU)) 
                                        << 0x10U)) 
                           | (0xffffU & (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT))))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES;
    vlSelf->__PVT__addtree_0__DOT__addtree_a1 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a2 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a3 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a4 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a5 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a6 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a7 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a8 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a9 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES 
        = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,25, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D)), 
                                          (0x1ffffffffffULL 
                                           & VL_EXTENDS_QI(41,16, (IData)(vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2)))));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2 
        = vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1;
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D 
        = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG) 
                         + VL_EXTENDS_II(25,24, vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG)));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_0) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_0));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_55[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_63[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_63[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_55[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_63[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_63[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_55[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_63[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_63[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_55[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_63[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_63[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_55[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_63[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_63[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_55[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_63[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_63[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_55[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_63[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_63[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_55[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_63[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_63[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_55[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_63[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_63[2U]));
}
