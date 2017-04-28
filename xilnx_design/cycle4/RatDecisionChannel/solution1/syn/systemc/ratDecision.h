// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _ratDecision_HH_
#define _ratDecision_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "ratDecision_recentdatapoints_data.h"
#include "ratDecision_recentVBools_data.h"
#include "ratDecision_AXILiteS_s_axi.h"

namespace ap_rtl {

template<unsigned int C_S_AXI_AXILITES_ADDR_WIDTH = 7,
         unsigned int C_S_AXI_AXILITES_DATA_WIDTH = 32>
struct ratDecision : public sc_module {
    // Port declarations 20
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_logic > s_axi_AXILiteS_AWVALID;
    sc_out< sc_logic > s_axi_AXILiteS_AWREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_AWADDR;
    sc_in< sc_logic > s_axi_AXILiteS_WVALID;
    sc_out< sc_logic > s_axi_AXILiteS_WREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_WDATA;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH/8> > s_axi_AXILiteS_WSTRB;
    sc_in< sc_logic > s_axi_AXILiteS_ARVALID;
    sc_out< sc_logic > s_axi_AXILiteS_ARREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_ARADDR;
    sc_out< sc_logic > s_axi_AXILiteS_RVALID;
    sc_in< sc_logic > s_axi_AXILiteS_RREADY;
    sc_out< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_RDATA;
    sc_out< sc_lv<2> > s_axi_AXILiteS_RRESP;
    sc_out< sc_logic > s_axi_AXILiteS_BVALID;
    sc_in< sc_logic > s_axi_AXILiteS_BREADY;
    sc_out< sc_lv<2> > s_axi_AXILiteS_BRESP;
    sc_out< sc_logic > interrupt;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    ratDecision(sc_module_name name);
    SC_HAS_PROCESS(ratDecision);

    ~ratDecision();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    ratDecision_recentdatapoints_data* recentdatapoints_data_U;
    ratDecision_recentVBools_data* recentVBools_data_U;
    ratDecision_recentVBools_data* recentABools_data_U;
    ratDecision_AXILiteS_s_axi<C_S_AXI_AXILITES_ADDR_WIDTH,C_S_AXI_AXILITES_DATA_WIDTH>* ratDecision_AXILiteS_s_axi_U;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > ap_start;
    sc_signal< sc_logic > ap_done;
    sc_signal< sc_logic > ap_idle;
    sc_signal< sc_lv<14> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_31;
    sc_signal< sc_logic > ap_ready;
    sc_signal< sc_lv<1> > reset_A_V;
    sc_signal< sc_lv<1> > reset_V_V;
    sc_signal< sc_lv<1> > reset_params_V;
    sc_signal< sc_lv<32> > athresh;
    sc_signal< sc_lv<32> > vthresh;
    sc_signal< sc_lv<8> > a_flip;
    sc_signal< sc_lv<8> > v_flip;
    sc_signal< sc_lv<32> > a_length;
    sc_signal< sc_lv<32> > v_length;
    sc_signal< sc_lv<16> > data;
    sc_signal< sc_lv<32> > AstimDelay;
    sc_signal< sc_lv<32> > VstimDelay;
    sc_signal< sc_lv<32> > ACaptureThresh;
    sc_signal< sc_lv<32> > VCaptureThresh;
    sc_signal< sc_lv<32> > v_thresh;
    sc_signal< sc_lv<32> > a_thresh;
    sc_signal< sc_lv<8> > aflip;
    sc_signal< sc_lv<8> > vflip;
    sc_signal< sc_lv<32> > recentdatapoints_len;
    sc_signal< sc_lv<32> > recentdatapoints_head_i;
    sc_signal< sc_lv<32> > recentdatapoints_sum;
    sc_signal< sc_lv<3> > recentdatapoints_data_address0;
    sc_signal< sc_logic > recentdatapoints_data_ce0;
    sc_signal< sc_logic > recentdatapoints_data_we0;
    sc_signal< sc_lv<16> > recentdatapoints_data_q0;
    sc_signal< sc_lv<32> > AbeatDelay;
    sc_signal< sc_lv<32> > VbeatDelay;
    sc_signal< sc_lv<32> > VbeatFallDelay;
    sc_signal< sc_lv<32> > recentVBools_sum;
    sc_signal< sc_lv<32> > recentVBools_head_i;
    sc_signal< sc_lv<32> > recentVBools_len;
    sc_signal< sc_lv<6> > recentVBools_data_address0;
    sc_signal< sc_logic > recentVBools_data_ce0;
    sc_signal< sc_logic > recentVBools_data_we0;
    sc_signal< sc_lv<1> > recentVBools_data_q0;
    sc_signal< sc_lv<6> > recentVBools_data_address1;
    sc_signal< sc_logic > recentVBools_data_ce1;
    sc_signal< sc_lv<1> > recentVBools_data_q1;
    sc_signal< sc_lv<1> > last_sample_is_V_V;
    sc_signal< sc_lv<32> > recentABools_sum;
    sc_signal< sc_lv<32> > recentABools_head_i;
    sc_signal< sc_lv<32> > recentABools_len;
    sc_signal< sc_lv<6> > recentABools_data_address0;
    sc_signal< sc_logic > recentABools_data_ce0;
    sc_signal< sc_logic > recentABools_data_we0;
    sc_signal< sc_lv<1> > recentABools_data_q0;
    sc_signal< sc_lv<6> > recentABools_data_address1;
    sc_signal< sc_logic > recentABools_data_ce1;
    sc_signal< sc_lv<1> > recentABools_data_q1;
    sc_signal< sc_lv<1> > last_sample_is_A_V;
    sc_signal< sc_lv<16> > ap_return;
    sc_signal< sc_lv<16> > data_read_reg_1493;
    sc_signal< sc_lv<32> > val_assign_fu_424_p1;
    sc_signal< sc_lv<32> > val_assign_reg_1511;
    sc_signal< sc_lv<3> > recentdatapoints_data_addr_reg_1531;
    sc_signal< sc_lv<32> > tmp_6_fu_495_p3;
    sc_signal< sc_lv<32> > tmp_6_reg_1536;
    sc_signal< sc_lv<32> > tmp_7_fu_509_p3;
    sc_signal< sc_lv<32> > tmp_7_reg_1542;
    sc_signal< sc_lv<32> > tmp_38_i_fu_560_p3;
    sc_signal< sc_lv<32> > tmp_38_i_reg_1548;
    sc_signal< sc_logic > ap_sig_cseq_ST_st2_fsm_1;
    sc_signal< bool > ap_sig_176;
    sc_signal< sc_lv<32> > p_tmp_i_fu_585_p3;
    sc_signal< sc_lv<32> > p_tmp_i_reg_1554;
    sc_signal< sc_logic > ap_sig_cseq_ST_st3_fsm_2;
    sc_signal< bool > ap_sig_187;
    sc_signal< sc_lv<6> > recentVBools_data_addr_reg_1571;
    sc_signal< sc_lv<1> > tmp_s_fu_694_p2;
    sc_signal< sc_lv<1> > tmp_s_reg_1576;
    sc_signal< sc_logic > ap_sig_cseq_ST_st4_fsm_3;
    sc_signal< bool > ap_sig_200;
    sc_signal< sc_lv<1> > recentVBools_data_load_reg_1582;
    sc_signal< sc_lv<32> > tmp_3_fu_704_p2;
    sc_signal< sc_lv<32> > tmp_3_reg_1587;
    sc_signal< sc_logic > ap_sig_cseq_ST_st5_fsm_4;
    sc_signal< bool > ap_sig_210;
    sc_signal< sc_lv<32> > tmp_4_fu_714_p2;
    sc_signal< sc_lv<32> > tmp_4_reg_1594;
    sc_signal< sc_lv<32> > tmp_5_fu_724_p2;
    sc_signal< sc_lv<32> > tmp_5_reg_1601;
    sc_signal< sc_lv<32> > CircularBuffer_sum_read_assign_fu_764_p2;
    sc_signal< sc_lv<32> > CircularBuffer_sum_read_assign_reg_1608;
    sc_signal< sc_lv<32> > CircularBuffer_len_read_assign_1_fu_776_p3;
    sc_signal< sc_lv<32> > CircularBuffer_len_read_assign_1_reg_1614;
    sc_signal< sc_lv<32> > CircularBuffer_head_i_read_ass_fu_795_p3;
    sc_signal< sc_lv<32> > CircularBuffer_head_i_read_ass_reg_1622;
    sc_signal< sc_lv<1> > tmp_8_fu_809_p2;
    sc_signal< sc_lv<1> > tmp_8_reg_1628;
    sc_signal< sc_lv<32> > CircularBuffer_len_write_assig_fu_815_p2;
    sc_signal< sc_lv<32> > CircularBuffer_len_write_assig_reg_1632;
    sc_signal< sc_logic > ap_sig_cseq_ST_st6_fsm_5;
    sc_signal< bool > ap_sig_236;
    sc_signal< sc_lv<1> > not_tmp_i_i4_fu_883_p2;
    sc_signal< sc_lv<1> > not_tmp_i_i4_reg_1648;
    sc_signal< sc_lv<1> > toReturn_5_fu_893_p2;
    sc_signal< sc_lv<1> > toReturn_5_reg_1653;
    sc_signal< sc_logic > ap_sig_cseq_ST_st7_fsm_6;
    sc_signal< bool > ap_sig_249;
    sc_signal< sc_lv<1> > toReturn_6_fu_899_p2;
    sc_signal< sc_lv<1> > toReturn_6_reg_1658;
    sc_signal< sc_lv<1> > last_sample_is_V_V_load_load_fu_960_p1;
    sc_signal< sc_logic > ap_sig_cseq_ST_st8_fsm_7;
    sc_signal< bool > ap_sig_260;
    sc_signal< sc_lv<1> > tmp_i3_fu_976_p2;
    sc_signal< sc_lv<1> > tmp_i3_reg_1672;
    sc_signal< sc_lv<6> > recentABools_data_addr_reg_1687;
    sc_signal< sc_lv<1> > tmp_12_fu_1037_p2;
    sc_signal< sc_lv<1> > tmp_12_reg_1692;
    sc_signal< sc_logic > ap_sig_cseq_ST_st9_fsm_8;
    sc_signal< bool > ap_sig_277;
    sc_signal< sc_lv<1> > recentABools_data_load_reg_1698;
    sc_signal< sc_lv<32> > CircularBuffer_sum_read_assign_1_fu_1077_p2;
    sc_signal< sc_lv<32> > CircularBuffer_sum_read_assign_1_reg_1703;
    sc_signal< sc_logic > ap_sig_cseq_ST_st10_fsm_9;
    sc_signal< bool > ap_sig_287;
    sc_signal< sc_lv<32> > CircularBuffer_len_read_assign_3_fu_1089_p3;
    sc_signal< sc_lv<32> > CircularBuffer_len_read_assign_3_reg_1709;
    sc_signal< sc_lv<32> > CircularBuffer_head_i_read_ass_1_fu_1108_p3;
    sc_signal< sc_lv<32> > CircularBuffer_head_i_read_ass_1_reg_1717;
    sc_signal< sc_lv<1> > tmp_13_fu_1122_p2;
    sc_signal< sc_lv<1> > tmp_13_reg_1723;
    sc_signal< sc_lv<32> > CircularBuffer_len_write_assig_2_fu_1140_p2;
    sc_signal< sc_lv<32> > CircularBuffer_len_write_assig_2_reg_1727;
    sc_signal< sc_logic > ap_sig_cseq_ST_st11_fsm_10;
    sc_signal< bool > ap_sig_307;
    sc_signal< sc_lv<1> > not_tmp_i_i2_fu_1208_p2;
    sc_signal< sc_lv<1> > not_tmp_i_i2_reg_1743;
    sc_signal< sc_lv<1> > toReturn_7_fu_1218_p2;
    sc_signal< sc_lv<1> > toReturn_7_reg_1748;
    sc_signal< sc_logic > ap_sig_cseq_ST_st12_fsm_11;
    sc_signal< bool > ap_sig_320;
    sc_signal< sc_lv<1> > toReturn_8_fu_1224_p2;
    sc_signal< sc_lv<1> > toReturn_8_reg_1753;
    sc_signal< sc_lv<1> > last_sample_is_A_V_load_load_fu_1285_p1;
    sc_signal< sc_logic > ap_sig_cseq_ST_st13_fsm_12;
    sc_signal< bool > ap_sig_331;
    sc_signal< sc_lv<1> > tmp_22_fu_1319_p2;
    sc_signal< sc_lv<1> > tmp_22_reg_1770;
    sc_signal< sc_lv<1> > tmp_25_fu_1324_p2;
    sc_signal< sc_lv<1> > tmp_25_reg_1775;
    sc_signal< sc_lv<32> > ACaptureThresh_loc_reg_286;
    sc_signal< sc_lv<1> > reset_params_V_read_read_fu_178_p2;
    sc_signal< sc_lv<32> > VCaptureThresh_loc_reg_296;
    sc_signal< sc_lv<32> > CircularBuffer_sum_write_assig_1_fu_915_p2;
    sc_signal< sc_lv<32> > sum_phi_fu_309_p4;
    sc_signal< sc_lv<32> > sum_reg_306;
    sc_signal< sc_lv<32> > CircularBuffer_len_write_assig_1_fu_922_p2;
    sc_signal< sc_lv<32> > recentVBools_len_new_phi_fu_318_p4;
    sc_signal< sc_lv<32> > recentVBools_len_new_reg_315;
    sc_signal< sc_lv<32> > VbeatDelay_new_1_reg_324;
    sc_signal< sc_lv<1> > tmp_10_fu_942_p2;
    sc_signal< sc_lv<32> > VbeatFallDelay_new_1_reg_340;
    sc_signal< sc_lv<1> > last_sample_is_V_V_loc_2_reg_356;
    sc_signal< sc_lv<32> > CircularBuffer_sum_write_assig_3_fu_1240_p2;
    sc_signal< sc_lv<32> > sum_1_phi_fu_377_p4;
    sc_signal< sc_lv<32> > sum_1_reg_374;
    sc_signal< sc_lv<32> > CircularBuffer_len_write_assig_3_fu_1247_p2;
    sc_signal< sc_lv<32> > recentABools_len_new_phi_fu_386_p4;
    sc_signal< sc_lv<32> > recentABools_len_new_reg_383;
    sc_signal< sc_lv<32> > AbeatDelay_new_reg_392;
    sc_signal< sc_lv<1> > tmp_16_fu_1267_p2;
    sc_signal< sc_lv<1> > or_cond_fu_1301_p2;
    sc_signal< sc_lv<1> > tmp_19_reg_407;
    sc_signal< sc_lv<64> > tmp_i_4_fu_484_p1;
    sc_signal< sc_lv<64> > tmp_41_i_fu_631_p1;
    sc_signal< sc_lv<64> > tmp_i2_5_fu_640_p1;
    sc_signal< sc_lv<64> > tmp_28_i_i_fu_847_p1;
    sc_signal< sc_lv<64> > tmp_28_i_i9_fu_878_p1;
    sc_signal< sc_lv<64> > tmp_i3_6_fu_981_p1;
    sc_signal< sc_lv<64> > tmp_i4_7_fu_989_p1;
    sc_signal< sc_lv<64> > tmp_28_i_i1_fu_1172_p1;
    sc_signal< sc_lv<64> > tmp_28_i_i2_fu_1203_p1;
    sc_signal< sc_lv<32> > AstimDelay_new_fu_1418_p3;
    sc_signal< sc_logic > ap_sig_cseq_ST_st14_fsm_13;
    sc_signal< bool > ap_sig_434;
    sc_signal< sc_lv<32> > VstimDelay_new_fu_1468_p3;
    sc_signal< sc_lv<32> > tmp_37_i_fu_549_p2;
    sc_signal< sc_lv<32> > AstimDelay_load_op_fu_489_p2;
    sc_signal< sc_lv<32> > VstimDelay_load_op_fu_503_p2;
    sc_signal< sc_lv<32> > extLd_fu_531_p1;
    sc_signal< sc_lv<1> > tmp_i_fu_521_p2;
    sc_signal< sc_lv<32> > tmp_35_i_fu_535_p2;
    sc_signal< sc_lv<32> > recentdatapoints_sum_loc_i_fu_541_p3;
    sc_signal< sc_lv<32> > recentdatapoints_len_load_op_fu_554_p2;
    sc_signal< sc_lv<32> > tmp_39_i_fu_574_p2;
    sc_signal< sc_lv<1> > tmp_40_i_fu_579_p2;
    sc_signal< sc_lv<32> > i_fu_605_p2;
    sc_signal< sc_lv<1> > tmp_fu_610_p3;
    sc_signal< sc_lv<32> > i_1_fu_618_p2;
    sc_signal< sc_lv<32> > p_i_fu_623_p3;
    sc_signal< sc_lv<1> > tmp_i1_fu_645_p2;
    sc_signal< sc_lv<16> > datapointV_fu_650_p3;
    sc_signal< sc_lv<17> > datapointV_cast_fu_658_p1;
    sc_signal< sc_lv<1> > tmp_9_fu_666_p2;
    sc_signal< sc_lv<17> > datapointV_1_fu_672_p2;
    sc_signal< sc_lv<17> > p_s_fu_678_p3;
    sc_signal< sc_lv<32> > p_cast_fu_686_p1;
    sc_signal< sc_lv<32> > extLd1_fu_747_p1;
    sc_signal< sc_lv<1> > tmp_i2_fu_741_p2;
    sc_signal< sc_lv<32> > tmp_29_i_fu_750_p2;
    sc_signal< sc_lv<32> > CircularBuffer_int_60_sum_i_fu_756_p3;
    sc_signal< sc_lv<32> > val_assign_1_fu_730_p1;
    sc_signal< sc_lv<32> > CircularBuffer_len_read_assign_fu_770_p2;
    sc_signal< sc_lv<32> > tmp_33_i_fu_784_p2;
    sc_signal< sc_lv<1> > tmp_34_i_fu_789_p2;
    sc_signal< sc_lv<32> > i_2_fu_821_p2;
    sc_signal< sc_lv<1> > tmp_26_fu_825_p3;
    sc_signal< sc_lv<32> > i_3_fu_833_p2;
    sc_signal< sc_lv<32> > i_4_fu_839_p3;
    sc_signal< sc_lv<32> > i_5_fu_852_p2;
    sc_signal< sc_lv<1> > tmp_27_fu_856_p3;
    sc_signal< sc_lv<32> > i_6_fu_864_p2;
    sc_signal< sc_lv<32> > i_7_fu_870_p3;
    sc_signal< sc_lv<1> > not_tmp_i_i_fu_888_p2;
    sc_signal< sc_lv<32> > toReturn_i_cast_fu_904_p1;
    sc_signal< sc_lv<32> > CircularBuffer_sum_write_assig_fu_907_p2;
    sc_signal< sc_lv<32> > toReturn_i12_cast_fu_912_p1;
    sc_signal< sc_lv<31> > tmp_1_fu_928_p4;
    sc_signal< sc_lv<32> > tmp_2_fu_938_p1;
    sc_signal< sc_lv<16> > datapointA_fu_994_p3;
    sc_signal< sc_lv<17> > datapointA_cast_fu_1001_p1;
    sc_signal< sc_lv<1> > tmp_11_fu_1009_p2;
    sc_signal< sc_lv<17> > datapointA_1_fu_1015_p2;
    sc_signal< sc_lv<17> > p_1_fu_1021_p3;
    sc_signal< sc_lv<32> > p_1_cast_fu_1029_p1;
    sc_signal< sc_lv<32> > extLd2_fu_1060_p1;
    sc_signal< sc_lv<1> > tmp_i4_fu_1054_p2;
    sc_signal< sc_lv<32> > tmp_29_i1_fu_1063_p2;
    sc_signal< sc_lv<32> > CircularBuffer_int_60_sum_i1_fu_1069_p3;
    sc_signal< sc_lv<32> > val_assign_2_fu_1043_p1;
    sc_signal< sc_lv<32> > CircularBuffer_len_read_assign_2_fu_1083_p2;
    sc_signal< sc_lv<32> > tmp_33_i1_fu_1097_p2;
    sc_signal< sc_lv<1> > tmp_34_i1_fu_1102_p2;
    sc_signal< sc_lv<32> > i_8_fu_1146_p2;
    sc_signal< sc_lv<1> > tmp_28_fu_1150_p3;
    sc_signal< sc_lv<32> > i_9_fu_1158_p2;
    sc_signal< sc_lv<32> > i_10_fu_1164_p3;
    sc_signal< sc_lv<32> > i_11_fu_1177_p2;
    sc_signal< sc_lv<1> > tmp_29_fu_1181_p3;
    sc_signal< sc_lv<32> > i_12_fu_1189_p2;
    sc_signal< sc_lv<32> > i_13_fu_1195_p3;
    sc_signal< sc_lv<1> > not_tmp_i_i1_fu_1213_p2;
    sc_signal< sc_lv<32> > toReturn_i25_cast_fu_1229_p1;
    sc_signal< sc_lv<32> > CircularBuffer_sum_write_assig_2_fu_1232_p2;
    sc_signal< sc_lv<32> > toReturn_i38_cast_fu_1237_p1;
    sc_signal< sc_lv<31> > tmp_14_fu_1253_p4;
    sc_signal< sc_lv<32> > tmp_15_fu_1263_p1;
    sc_signal< sc_lv<1> > tmp_17_fu_1289_p2;
    sc_signal< sc_lv<1> > tmp_18_fu_1295_p2;
    sc_signal< sc_lv<1> > tmp_21_not_fu_1335_p2;
    sc_signal< sc_lv<1> > last_sample_is_V_V_loc_2_not_fu_1341_p2;
    sc_signal< sc_lv<1> > brmerge_fu_1347_p2;
    sc_signal< sc_lv<1> > tmp_20_fu_1353_p2;
    sc_signal< sc_lv<1> > sel_tmp_fu_1367_p2;
    sc_signal< sc_lv<13> > p_2_fu_1359_p3;
    sc_signal< sc_lv<1> > tmp_21_not_not_fu_1381_p2;
    sc_signal< sc_lv<1> > sel_tmp2_fu_1387_p2;
    sc_signal< sc_lv<13> > sel_tmp1_fu_1373_p3;
    sc_signal< sc_lv<1> > tmp_21_fu_1401_p2;
    sc_signal< sc_lv<13> > toReturn_1_fu_1393_p3;
    sc_signal< sc_lv<1> > or_cond1_fu_1407_p2;
    sc_signal< sc_lv<13> > toReturn_fu_1412_p2;
    sc_signal< sc_lv<1> > tmp_24_fu_1439_p2;
    sc_signal< sc_lv<1> > tmp1_fu_1451_p2;
    sc_signal< sc_lv<1> > tmp_23_fu_1433_p2;
    sc_signal< sc_lv<13> > toReturn_2_fu_1425_p3;
    sc_signal< sc_lv<1> > or_cond3_fu_1456_p2;
    sc_signal< sc_lv<13> > toReturn_4_fu_1462_p2;
    sc_signal< sc_lv<13> > toReturn_3_fu_1475_p3;
    sc_signal< sc_lv<14> > ap_NS_fsm;
    sc_signal< bool > ap_sig_151;
    sc_signal< bool > ap_sig_409;
    sc_signal< bool > ap_sig_405;
    sc_signal< bool > ap_sig_368;
    sc_signal< bool > ap_sig_366;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<14> ap_ST_st1_fsm_0;
    static const sc_lv<14> ap_ST_st2_fsm_1;
    static const sc_lv<14> ap_ST_st3_fsm_2;
    static const sc_lv<14> ap_ST_st4_fsm_3;
    static const sc_lv<14> ap_ST_st5_fsm_4;
    static const sc_lv<14> ap_ST_st6_fsm_5;
    static const sc_lv<14> ap_ST_st7_fsm_6;
    static const sc_lv<14> ap_ST_st8_fsm_7;
    static const sc_lv<14> ap_ST_st9_fsm_8;
    static const sc_lv<14> ap_ST_st10_fsm_9;
    static const sc_lv<14> ap_ST_st11_fsm_10;
    static const sc_lv<14> ap_ST_st12_fsm_11;
    static const sc_lv<14> ap_ST_st13_fsm_12;
    static const sc_lv<14> ap_ST_st14_fsm_13;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const int C_S_AXI_DATA_WIDTH;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_FFFFFFFF;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<17> ap_const_lv17_0;
    static const sc_lv<32> ap_const_lv32_3C;
    static const sc_lv<32> ap_const_lv32_FFFFFFFE;
    static const sc_lv<32> ap_const_lv32_3E;
    static const sc_lv<13> ap_const_lv13_1000;
    static const sc_lv<13> ap_const_lv13_0;
    static const sc_lv<13> ap_const_lv13_F0;
    static const sc_lv<32> ap_const_lv32_FA;
    static const sc_lv<13> ap_const_lv13_F00;
    static const sc_lv<13> ap_const_lv13_F;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_AstimDelay_load_op_fu_489_p2();
    void thread_AstimDelay_new_fu_1418_p3();
    void thread_CircularBuffer_head_i_read_ass_1_fu_1108_p3();
    void thread_CircularBuffer_head_i_read_ass_fu_795_p3();
    void thread_CircularBuffer_int_60_sum_i1_fu_1069_p3();
    void thread_CircularBuffer_int_60_sum_i_fu_756_p3();
    void thread_CircularBuffer_len_read_assign_1_fu_776_p3();
    void thread_CircularBuffer_len_read_assign_2_fu_1083_p2();
    void thread_CircularBuffer_len_read_assign_3_fu_1089_p3();
    void thread_CircularBuffer_len_read_assign_fu_770_p2();
    void thread_CircularBuffer_len_write_assig_1_fu_922_p2();
    void thread_CircularBuffer_len_write_assig_2_fu_1140_p2();
    void thread_CircularBuffer_len_write_assig_3_fu_1247_p2();
    void thread_CircularBuffer_len_write_assig_fu_815_p2();
    void thread_CircularBuffer_sum_read_assign_1_fu_1077_p2();
    void thread_CircularBuffer_sum_read_assign_fu_764_p2();
    void thread_CircularBuffer_sum_write_assig_1_fu_915_p2();
    void thread_CircularBuffer_sum_write_assig_2_fu_1232_p2();
    void thread_CircularBuffer_sum_write_assig_3_fu_1240_p2();
    void thread_CircularBuffer_sum_write_assig_fu_907_p2();
    void thread_VstimDelay_load_op_fu_503_p2();
    void thread_VstimDelay_new_fu_1468_p3();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_ap_rst_n_inv();
    void thread_ap_sig_151();
    void thread_ap_sig_176();
    void thread_ap_sig_187();
    void thread_ap_sig_200();
    void thread_ap_sig_210();
    void thread_ap_sig_236();
    void thread_ap_sig_249();
    void thread_ap_sig_260();
    void thread_ap_sig_277();
    void thread_ap_sig_287();
    void thread_ap_sig_307();
    void thread_ap_sig_31();
    void thread_ap_sig_320();
    void thread_ap_sig_331();
    void thread_ap_sig_366();
    void thread_ap_sig_368();
    void thread_ap_sig_405();
    void thread_ap_sig_409();
    void thread_ap_sig_434();
    void thread_ap_sig_cseq_ST_st10_fsm_9();
    void thread_ap_sig_cseq_ST_st11_fsm_10();
    void thread_ap_sig_cseq_ST_st12_fsm_11();
    void thread_ap_sig_cseq_ST_st13_fsm_12();
    void thread_ap_sig_cseq_ST_st14_fsm_13();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_cseq_ST_st2_fsm_1();
    void thread_ap_sig_cseq_ST_st3_fsm_2();
    void thread_ap_sig_cseq_ST_st4_fsm_3();
    void thread_ap_sig_cseq_ST_st5_fsm_4();
    void thread_ap_sig_cseq_ST_st6_fsm_5();
    void thread_ap_sig_cseq_ST_st7_fsm_6();
    void thread_ap_sig_cseq_ST_st8_fsm_7();
    void thread_ap_sig_cseq_ST_st9_fsm_8();
    void thread_brmerge_fu_1347_p2();
    void thread_datapointA_1_fu_1015_p2();
    void thread_datapointA_cast_fu_1001_p1();
    void thread_datapointA_fu_994_p3();
    void thread_datapointV_1_fu_672_p2();
    void thread_datapointV_cast_fu_658_p1();
    void thread_datapointV_fu_650_p3();
    void thread_extLd1_fu_747_p1();
    void thread_extLd2_fu_1060_p1();
    void thread_extLd_fu_531_p1();
    void thread_i_10_fu_1164_p3();
    void thread_i_11_fu_1177_p2();
    void thread_i_12_fu_1189_p2();
    void thread_i_13_fu_1195_p3();
    void thread_i_1_fu_618_p2();
    void thread_i_2_fu_821_p2();
    void thread_i_3_fu_833_p2();
    void thread_i_4_fu_839_p3();
    void thread_i_5_fu_852_p2();
    void thread_i_6_fu_864_p2();
    void thread_i_7_fu_870_p3();
    void thread_i_8_fu_1146_p2();
    void thread_i_9_fu_1158_p2();
    void thread_i_fu_605_p2();
    void thread_last_sample_is_A_V_load_load_fu_1285_p1();
    void thread_last_sample_is_V_V_load_load_fu_960_p1();
    void thread_last_sample_is_V_V_loc_2_not_fu_1341_p2();
    void thread_not_tmp_i_i1_fu_1213_p2();
    void thread_not_tmp_i_i2_fu_1208_p2();
    void thread_not_tmp_i_i4_fu_883_p2();
    void thread_not_tmp_i_i_fu_888_p2();
    void thread_or_cond1_fu_1407_p2();
    void thread_or_cond3_fu_1456_p2();
    void thread_or_cond_fu_1301_p2();
    void thread_p_1_cast_fu_1029_p1();
    void thread_p_1_fu_1021_p3();
    void thread_p_2_fu_1359_p3();
    void thread_p_cast_fu_686_p1();
    void thread_p_i_fu_623_p3();
    void thread_p_s_fu_678_p3();
    void thread_p_tmp_i_fu_585_p3();
    void thread_recentABools_data_address0();
    void thread_recentABools_data_address1();
    void thread_recentABools_data_ce0();
    void thread_recentABools_data_ce1();
    void thread_recentABools_data_we0();
    void thread_recentABools_len_new_phi_fu_386_p4();
    void thread_recentVBools_data_address0();
    void thread_recentVBools_data_address1();
    void thread_recentVBools_data_ce0();
    void thread_recentVBools_data_ce1();
    void thread_recentVBools_data_we0();
    void thread_recentVBools_len_new_phi_fu_318_p4();
    void thread_recentdatapoints_data_address0();
    void thread_recentdatapoints_data_ce0();
    void thread_recentdatapoints_data_we0();
    void thread_recentdatapoints_len_load_op_fu_554_p2();
    void thread_recentdatapoints_sum_loc_i_fu_541_p3();
    void thread_reset_params_V_read_read_fu_178_p2();
    void thread_sel_tmp1_fu_1373_p3();
    void thread_sel_tmp2_fu_1387_p2();
    void thread_sel_tmp_fu_1367_p2();
    void thread_sum_1_phi_fu_377_p4();
    void thread_sum_phi_fu_309_p4();
    void thread_tmp1_fu_1451_p2();
    void thread_tmp_10_fu_942_p2();
    void thread_tmp_11_fu_1009_p2();
    void thread_tmp_12_fu_1037_p2();
    void thread_tmp_13_fu_1122_p2();
    void thread_tmp_14_fu_1253_p4();
    void thread_tmp_15_fu_1263_p1();
    void thread_tmp_16_fu_1267_p2();
    void thread_tmp_17_fu_1289_p2();
    void thread_tmp_18_fu_1295_p2();
    void thread_tmp_1_fu_928_p4();
    void thread_tmp_20_fu_1353_p2();
    void thread_tmp_21_fu_1401_p2();
    void thread_tmp_21_not_fu_1335_p2();
    void thread_tmp_21_not_not_fu_1381_p2();
    void thread_tmp_22_fu_1319_p2();
    void thread_tmp_23_fu_1433_p2();
    void thread_tmp_24_fu_1439_p2();
    void thread_tmp_25_fu_1324_p2();
    void thread_tmp_26_fu_825_p3();
    void thread_tmp_27_fu_856_p3();
    void thread_tmp_28_fu_1150_p3();
    void thread_tmp_28_i_i1_fu_1172_p1();
    void thread_tmp_28_i_i2_fu_1203_p1();
    void thread_tmp_28_i_i9_fu_878_p1();
    void thread_tmp_28_i_i_fu_847_p1();
    void thread_tmp_29_fu_1181_p3();
    void thread_tmp_29_i1_fu_1063_p2();
    void thread_tmp_29_i_fu_750_p2();
    void thread_tmp_2_fu_938_p1();
    void thread_tmp_33_i1_fu_1097_p2();
    void thread_tmp_33_i_fu_784_p2();
    void thread_tmp_34_i1_fu_1102_p2();
    void thread_tmp_34_i_fu_789_p2();
    void thread_tmp_35_i_fu_535_p2();
    void thread_tmp_37_i_fu_549_p2();
    void thread_tmp_38_i_fu_560_p3();
    void thread_tmp_39_i_fu_574_p2();
    void thread_tmp_3_fu_704_p2();
    void thread_tmp_40_i_fu_579_p2();
    void thread_tmp_41_i_fu_631_p1();
    void thread_tmp_4_fu_714_p2();
    void thread_tmp_5_fu_724_p2();
    void thread_tmp_6_fu_495_p3();
    void thread_tmp_7_fu_509_p3();
    void thread_tmp_8_fu_809_p2();
    void thread_tmp_9_fu_666_p2();
    void thread_tmp_fu_610_p3();
    void thread_tmp_i1_fu_645_p2();
    void thread_tmp_i2_5_fu_640_p1();
    void thread_tmp_i2_fu_741_p2();
    void thread_tmp_i3_6_fu_981_p1();
    void thread_tmp_i3_fu_976_p2();
    void thread_tmp_i4_7_fu_989_p1();
    void thread_tmp_i4_fu_1054_p2();
    void thread_tmp_i_4_fu_484_p1();
    void thread_tmp_i_fu_521_p2();
    void thread_tmp_s_fu_694_p2();
    void thread_toReturn_1_fu_1393_p3();
    void thread_toReturn_2_fu_1425_p3();
    void thread_toReturn_3_fu_1475_p3();
    void thread_toReturn_4_fu_1462_p2();
    void thread_toReturn_5_fu_893_p2();
    void thread_toReturn_6_fu_899_p2();
    void thread_toReturn_7_fu_1218_p2();
    void thread_toReturn_8_fu_1224_p2();
    void thread_toReturn_fu_1412_p2();
    void thread_toReturn_i12_cast_fu_912_p1();
    void thread_toReturn_i25_cast_fu_1229_p1();
    void thread_toReturn_i38_cast_fu_1237_p1();
    void thread_toReturn_i_cast_fu_904_p1();
    void thread_val_assign_1_fu_730_p1();
    void thread_val_assign_2_fu_1043_p1();
    void thread_val_assign_fu_424_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif