// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop_conv_win_3_3.h"

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0__conv_33_0__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0__conv_33_0__0\n"); );
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
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_0[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_8[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_8[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_0[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_8[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_8[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_0[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_8[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_8[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_0[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_8[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_8[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_0[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_8[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_8[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_0[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_8[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_8[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_0[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_8[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_8[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_0[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_8[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_8[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_0[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_8[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_8[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0__conv_33_1__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0__conv_33_1__0\n"); );
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
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_1[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_9[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_9[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_1[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_9[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_9[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_1[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_9[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_9[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_1[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_9[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_9[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_1[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_9[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_9[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_1[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_9[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_9[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_1[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_9[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_9[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_1[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_9[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_9[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_1[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_9[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_9[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0__conv_33_2__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0__conv_33_2__0\n"); );
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
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_2[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_10[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_10[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_2[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_10[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_10[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_2[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_10[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_10[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_2[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_10[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_10[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_2[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_10[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_10[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_2[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_10[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_10[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_2[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_10[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_10[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_2[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_10[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_10[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_2[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_10[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_10[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0__conv_33_3__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0__conv_33_3__0\n"); );
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
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_3[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_11[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_11[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_3[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_11[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_11[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_3[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_11[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_11[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_3[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_11[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_11[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_3[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_11[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_11[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_3[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_11[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_11[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_3[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_11[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_11[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_3[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_11[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_11[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_3[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_11[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_11[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0__conv_33_4__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0__conv_33_4__0\n"); );
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
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_4[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_12[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_12[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_4[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_12[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_12[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_4[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_12[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_12[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_4[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_12[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_12[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_4[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_12[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_12[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_4[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_12[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_12[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_4[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_12[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_12[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_4[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_12[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_12[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_4[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_12[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_12[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0__conv_33_5__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0__conv_33_5__0\n"); );
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
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_5[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_13[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_13[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_5[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_13[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_13[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_5[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_13[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_13[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_5[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_13[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_13[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_5[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_13[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_13[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_5[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_13[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_13[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_5[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_13[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_13[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_5[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_13[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_13[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_5[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_13[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_13[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0__conv_33_6__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0__conv_33_6__0\n"); );
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
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_6[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_14[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_14[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_6[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_14[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_14[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_6[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_14[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_14[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_6[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_14[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_14[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_6[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_14[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_14[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_6[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_14[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_14[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_6[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_14[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_14[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_6[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_14[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_14[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_6[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_14[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_14[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0__conv_33_7__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0__conv_33_7__0\n"); );
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
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_7[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_15[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_15[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_7[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_15[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_15[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_7[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_15[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_15[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_7[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_15[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_15[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_7[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_15[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_15[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_7[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_15[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_15[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_7[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_15[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_15[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_7[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_15[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_15[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_7[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_15[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_15[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1__conv_33_0__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1__conv_33_0__0\n"); );
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
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_16[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_24[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_24[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_16[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_24[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_24[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_16[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_24[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_24[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_16[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_24[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_24[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_16[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_24[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_24[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_16[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_24[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_24[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_16[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_24[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_24[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_16[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_24[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_24[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_16[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_24[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_24[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1__conv_33_1__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1__conv_33_1__0\n"); );
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
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_17[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_25[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_25[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_17[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_25[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_25[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_17[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_25[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_25[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_17[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_25[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_25[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_17[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_25[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_25[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_17[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_25[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_25[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_17[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_25[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_25[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_17[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_25[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_25[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_1_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_17[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_25[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_25[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1__conv_33_2__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1__conv_33_2__0\n"); );
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
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_18[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_26[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_26[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_18[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_26[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_26[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_18[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_26[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_26[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_18[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_26[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_26[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_18[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_26[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_26[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_18[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_26[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_26[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_18[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_26[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_26[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_18[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_26[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_26[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_2_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_18[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_26[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_26[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1__conv_33_3__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1__conv_33_3__0\n"); );
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
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_19[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_27[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_27[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_19[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_27[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_27[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_19[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_27[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_27[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_19[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_27[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_27[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_19[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_27[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_27[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_19[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_27[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_27[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_19[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_27[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_27[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_19[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_27[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_27[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_3_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_19[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_27[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_27[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1__conv_33_4__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1__conv_33_4__0\n"); );
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
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_20[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_28[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_28[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_20[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_28[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_28[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_20[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_28[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_28[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_20[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_28[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_28[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_20[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_28[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_28[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_20[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_28[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_28[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_20[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_28[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_28[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_20[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_28[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_28[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_4_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_20[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_28[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_28[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1__conv_33_5__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1__conv_33_5__0\n"); );
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
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_21[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_29[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_29[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_21[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_29[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_29[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_21[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_29[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_29[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_21[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_29[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_29[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_21[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_29[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_29[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_21[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_29[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_29[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_21[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_29[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_29[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_21[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_29[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_29[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_5_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_21[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_29[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_29[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1__conv_33_6__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1__conv_33_6__0\n"); );
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
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_22[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_30[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_30[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_22[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_30[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_30[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_22[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_30[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_30[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_22[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_30[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_30[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_22[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_30[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_30[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_22[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_30[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_30[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_22[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_30[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_30[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_22[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_30[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_30[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_6_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_22[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_30[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_30[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1__conv_33_7__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1__conv_33_7__0\n"); );
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
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_23[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_31[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_31[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_23[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_31[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_31[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_23[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_31[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_31[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_23[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_31[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_31[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_23[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_31[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_31[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_23[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_31[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_31[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_23[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_31[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_31[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_23[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_31[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_31[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_7_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_23[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_31[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_31[2U]));
}

VL_INLINE_OPT void Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2__conv_33_0__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2__conv_33_0__0\n"); );
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
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_32[0U] 
                        << 0x10U));
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_40[0U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_40[0U]));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_1) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_1));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_32[0U] 
                        << 8U));
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_40[0U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_40[0U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_2) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_2));
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_32[0U]);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_40[0U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_40[0U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_3) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_3));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_32[0U] 
                        >> 8U));
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_40[0U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_40[0U] 
              >> 0x18U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_4) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_4));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_32[1U] 
                        << 0x10U));
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_40[1U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_40[1U]));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_5) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_5));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_32[1U] 
                        << 8U));
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_40[1U] 
                                           >> 0xfU)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_40[1U] 
                                             >> 8U)));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_6));
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_32[1U]);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_40[1U] 
                                           >> 0x17U)))) 
                         << 8U)) | (0xffU & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_40[1U] 
                                             >> 0x10U)));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_7));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_32[1U] 
                        >> 8U));
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_40[1U] 
                                     >> 0x1fU))) << 8U)) 
           | (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_40[1U] 
              >> 0x18U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__line_buf__DOT__buffer_0_io_line_o_data_8));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG 
        = (0xff0000U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_32[2U] 
                        << 0x10U));
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG 
        = ((0xffff00U & ((- (IData)((1U & (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_40[2U] 
                                           >> 7U)))) 
                         << 8U)) | (0xffU & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__weight_buf_io_weight_out_40[2U]));
}
