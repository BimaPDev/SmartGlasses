/* FUN_10092c64 @ 0x10092c64 */

int * FUN_10092c64(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  int *piVar5;
  undefined8 uVar6;
  
  piVar3 = (int *)FUN_10094064(DAT_10092e2c);
  if (piVar3 == (int *)0x0) {
    uVar6 = FUN_10094174(3,PTR_s_WEST_TOPDIR_thirdparty_lib_gui_l_10092e3c,0xe2,
                         PTR_s_lv_disp_drv_register_10092e40,
                         PTR_s_Asserted_at_expression___s___s__10092e38,PTR_s_disp____NULL_10092e34,
                         PTR_s_Out_of_memory_10092e30,param_4);
    FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_10092e48,PTR_DAT_10092e44,
                 PTR_s_WEST_TOPDIR_thirdparty_lib_gui_l_10092e3c,0xe2,uVar6);
    FUN_10119dc2(PTR_s_LVGL_fail_10092e4c);
    FUN_1011a1f0(PTR_s_WEST_TOPDIR_thirdparty_lib_gui_l_10092e3c,0xe2,extraout_r2,extraout_r3);
  }
  else {
    if (param_1[0x13] == 0) {
      iVar4 = FUN_10094254(param_1[0x16],PTR_s_lv_disp_drv_register_10092e40);
      if (iVar4 == 0) {
        uVar6 = FUN_10094174(3,PTR_s_WEST_TOPDIR_thirdparty_lib_gui_l_10092e3c,0xea,
                             PTR_s_lv_disp_drv_register_10092e40,
                             PTR_s_Asserted_at_expression___s___s__10092e38,
                             PTR_s_draw_ctx____NULL_10092e64,PTR_s_Out_of_memory_10092e30,param_4);
        FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_10092e48,PTR_DAT_10092e44,
                     PTR_s_WEST_TOPDIR_thirdparty_lib_gui_l_10092e3c,0xea,uVar6);
        FUN_10119dc2(PTR_s_LVGL_fail_10092e4c);
        FUN_1011a1f0(PTR_s_WEST_TOPDIR_thirdparty_lib_gui_l_10092e3c,0xea,extraout_r2_01,
                     extraout_r3_01);
        return (int *)0x0;
      }
      (*(code *)param_1[0x14])(param_1,iVar4);
      param_1[0x13] = iVar4;
    }
    FUN_1012a6ec(piVar3,0x268);
    puVar1 = DAT_10092e58;
    *piVar3 = (int)param_1;
    piVar3[0x95] = 1;
    FUN_1012b008(piVar3 + 0x96,0x10);
    puVar2 = PTR_FUN_1008bbc0_1_10092e5c;
    piVar5 = (int *)*puVar1;
    *puVar1 = piVar3;
    iVar4 = FUN_10094a1c(puVar2,1,piVar3);
    piVar3[1] = iVar4;
    if (iVar4 == 0) {
      uVar6 = FUN_10094174(3,PTR_s_WEST_TOPDIR_thirdparty_lib_gui_l_10092e3c,0xfd,
                           PTR_s_lv_disp_drv_register_10092e40,
                           PTR_s_Asserted_at_expression___s___s__10092e38,
                           PTR_s_disp_>refr_timer____NULL_10092e60,PTR_s_Out_of_memory_10092e30);
      FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_10092e48,PTR_DAT_10092e44,
                   PTR_s_WEST_TOPDIR_thirdparty_lib_gui_l_10092e3c,0xfd,uVar6);
      FUN_10119dc2(PTR_s_LVGL_fail_10092e4c);
      FUN_1011a1f0(PTR_s_WEST_TOPDIR_thirdparty_lib_gui_l_10092e3c,0xfd,extraout_r2_00,
                   extraout_r3_00);
      if (piVar3[1] == 0) {
        FUN_10094268(piVar3,PTR_s_lv_disp_drv_register_10092e40);
        return (int *)0x0;
      }
    }
    if (((int)((uint)*(byte *)(param_1 + 7) << 0x1e) < 0) &&
       (*(uint *)(param_1[6] + 0x18) < (uint)(*param_1 * param_1[1]))) {
      *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfd;
      FUN_10094174(2,PTR_s_WEST_TOPDIR_thirdparty_lib_gui_l_10092e3c,0x105,
                   PTR_s_lv_disp_drv_register_10092e40,
                   PTR_s_full_refresh_requires_at_least_s_10092e50);
    }
    *(undefined2 *)((int)piVar3 + 0x2a) = 0xffff;
    *(undefined1 *)((int)piVar3 + 0x29) = 0;
    iVar4 = FUN_10088ffc(0);
    piVar3[4] = iVar4;
    iVar4 = FUN_10088ffc(0);
    piVar3[7] = iVar4;
    iVar4 = FUN_10088ffc(0);
    if (piVar5 == (int *)0x0) {
      piVar5 = piVar3;
    }
    piVar3[8] = iVar4;
    FUN_1008abf0(piVar3[7],0,DAT_10092e54);
    FUN_1008abf0(piVar3[8],0,DAT_10092e54);
    FUN_10124c20(piVar3[7],2);
    FUN_10124c20(piVar3[8],2);
    FUN_10125f56(piVar3[7],0);
    FUN_10125f56(piVar3[8],0);
    FUN_10125af4(piVar3[4]);
    iVar4 = piVar3[1];
    *puVar1 = piVar5;
    FUN_1012b33a(iVar4);
  }
  return piVar3;
}

