/* FUN_1008d24c @ 0x1008d24c */

void FUN_1008d24c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = FUN_10094174(3,PTR_s_WEST_TOPDIR_thirdparty_lib_gui_l_1008d2f4,0x29,
                         PTR_s_lv_draw_transform_1008d2f8,
                         PTR_s_Asserted_at_expression___s___s__1008d2f0,
                         PTR_s_draw_ctx____NULL_1008d2ec,PTR_s_NULL_pointer_1008d2e8);
    FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_1008d300,PTR_DAT_1008d2fc,
                 PTR_s_WEST_TOPDIR_thirdparty_lib_gui_l_1008d2f4,0x29,uVar1);
    FUN_10119dc2(PTR_s_LVGL_fail_1008d304);
    FUN_1011a1f0(PTR_s_WEST_TOPDIR_thirdparty_lib_gui_l_1008d2f4,0x29,extraout_r2,extraout_r3);
  }
  if (*(code **)(param_1 + 0x2c) == (code *)0x0) {
    FUN_10094174(2,PTR_s_WEST_TOPDIR_thirdparty_lib_gui_l_1008d2f4,0x2b,
                 PTR_s_lv_draw_transform_1008d2f8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1008d2e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x2c))(param_1,param_2,param_3,param_4);
  return;
}

