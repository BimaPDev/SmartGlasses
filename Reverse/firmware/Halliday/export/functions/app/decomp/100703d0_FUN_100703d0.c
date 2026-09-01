/* FUN_100703d0 @ 0x100703d0 */

void FUN_100703d0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  UNRECOVERED_JUMPTABLE = DAT_100705bc;
  puVar7 = DAT_100705b8;
  (*DAT_100705bc)(1);
  FUN_10119dc2(PTR_s_de_regs__100705c0);
  FUN_10119dc2(PTR_s_ctl_0x_08x_100705c4,*puVar7);
  FUN_10119dc2(PTR_s_gate_ctl_0x_08x_100705c8,puVar7[1]);
  FUN_10119dc2(PTR_s_reg_ud_0x_08x_100705cc,puVar7[2]);
  FUN_10119dc2(PTR_s_irq_ctl_0x_08x_100705d0,puVar7[3]);
  FUN_10119dc2(PTR_s_bg_size_0x_08x_100705d4,puVar7[4]);
  FUN_10119dc2(PTR_s_bg_color_0x_08x_100705d8,puVar7[5]);
  FUN_10119dc2(PTR_s_mem_opt_0x_08x_100705dc,puVar7[6]);
  FUN_10119dc2(PTR_s_en_0x_08x_100705e0,puVar7[7]);
  FUN_10119dc2(PTR_s_ctl2_0x_08x_100705e4,puVar7[8]);
  FUN_10119dc2(PTR_s_ctl1_0x_08x_100705e8,puVar7[9]);
  puVar3 = PTR_s_l_d_addr_0x_08x_10070678;
  puVar2 = PTR_s_l_d_size_0x_08x_10070674;
  puVar1 = PTR_s_l_d_pos_0x_08x_10070670;
  iVar4 = 0;
  puVar7 = (undefined4 *)PTR_DAT_100705ec;
  do {
    puVar6 = (undefined4 *)*puVar7;
    FUN_10119dc2(puVar1,iVar4,*puVar6);
    FUN_10119dc2(puVar2,iVar4,puVar6[1]);
    FUN_10119dc2(puVar3,iVar4,puVar6[2]);
    FUN_10119dc2(PTR_s_l_d_stride_0x_08x_100705f0,iVar4,puVar6[3]);
    FUN_10119dc2(PTR_s_l_d_length_0x_08x_100705f4,iVar4,puVar6[4]);
    iVar5 = iVar4 + 1;
    FUN_10119dc2(PTR_s_l_d_def_color_0x_08x_100705f8,iVar4,puVar6[7]);
    puVar6 = DAT_100705b8;
    iVar4 = iVar5;
    puVar7 = puVar7 + 1;
  } while (iVar5 != 3);
  FUN_10119dc2(PTR_s_alpha_ctl_0x_08x_100705fc,DAT_100705b8[0xc0]);
  FUN_10119dc2(PTR_s_alpha_pos_0x_08x_10070600,puVar6[0xc1]);
  FUN_10119dc2(PTR_s_alpha_size_0x_08x_10070604,puVar6[0xc2]);
  FUN_10119dc2(PTR_s_sta_0x_08x_10070608,puVar6[0xc3]);
  FUN_10119dc2(PTR_s_wb_addr_0x_08x_1007060c,puVar6[199]);
  FUN_10119dc2(PTR_s_wb_stride_0x_08x_10070610,puVar6[200]);
  FUN_10119dc2(PTR_s_color_fill_pos_0x_08x_10070614,puVar6[0xc9]);
  FUN_10119dc2(PTR_s_color_fill_size_0x_08x_10070618,puVar6[0xca]);
  FUN_10119dc2(PTR_s_fill_color_0x_08x_1007061c,puVar6[0xcb]);
  FUN_10119dc2(PTR_s_lx_abmp_ctl_0x_08x_10070620,puVar6[0xd0]);
  FUN_10119dc2(PTR_s_sc_lx_src_img_size_0x_08x_10070624,puVar6[0x180]);
  FUN_10119dc2(PTR_s_sc_lx_rate_0x_08x_10070628,puVar6[0x181]);
  FUN_10119dc2(PTR_s_sc_lx_pos_0x_08x_1007062c,puVar6[0x182]);
  FUN_10119dc2(PTR_s_rt_ctl_0x_08x_10070630,puVar6[0x100]);
  FUN_10119dc2(PTR_s_rt_img_size_0x_08x_10070634,puVar6[0x101]);
  FUN_10119dc2(PTR_s_rt_src_addr_0x_08x_10070638,puVar6[0x102]);
  FUN_10119dc2(PTR_s_rt_src_stride_0x_08x_1007063c,puVar6[0x103]);
  FUN_10119dc2(PTR_s_rt_dst_addr_0x_08x_10070640,puVar6[0x104]);
  FUN_10119dc2(PTR_s_rt_dst_stride_0x_08x_10070644,puVar6[0x105]);
  FUN_10119dc2(PTR_s_rt_start_height_0x_08x_10070648,puVar6[0x106]);
  FUN_10119dc2(PTR_s_rt_sw_x_xy_0x_08x_1007064c,puVar6[0x107]);
  FUN_10119dc2(PTR_s_rt_sw_y_xy_0x_08x_10070650,puVar6[0x108]);
  FUN_10119dc2(PTR_s_rt_sw_x0_0x_08x_10070654,puVar6[0x109]);
  FUN_10119dc2(PTR_s_rt_sw_y0_0x_08x_10070658,puVar6[0x10a]);
  FUN_10119dc2(PTR_s_rt_sw_first_dist_0x_08x_1007065c,puVar6[0x10b]);
  FUN_10119dc2(PTR_s_rt_r1m2_0x_08x_10070660,puVar6[0x10c]);
  FUN_10119dc2(PTR_s_rt_r0m2_0x_08x_10070664,puVar6[0x10d]);
  FUN_10119dc2(PTR_s_rt_fill_color_0x_08x_10070668,puVar6[0x10e]);
  FUN_10119dc2(PTR_s_rt_src_img_size_0x_08x_1007066c,puVar6[0x10f]);
                    /* WARNING: Could not recover jumptable at 0x100705b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0);
  return;
}

