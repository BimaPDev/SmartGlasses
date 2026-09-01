/* FUN_100ea950 @ 0x100ea950 */

undefined4 FUN_100ea950(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined8 uVar2;
  
  if (param_1 < 0x10f) {
    if (param_1 == 0xb4) {
      uVar1 = 2;
    }
    else if (param_1 == 0x10e) {
      uVar1 = 1;
    }
    else if (param_1 == 0x5a) {
      uVar1 = 3;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar2 = FUN_10094174(3,PTR_s_WEST_TOPDIR_framework_display_lv_100ea9bc,0x278,
                         PTR_s__lvgl_rotate_flag_from_surface_100ea9c0,
                         PTR_s_Asserted_at_expression___s_100ea9b8,PTR_s_rotation_<__270_100ea9b4,
                         param_3);
    FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_100ea9c8,PTR_DAT_100ea9c4,
                 PTR_s_WEST_TOPDIR_framework_display_lv_100ea9bc,0x278,uVar2);
    FUN_10119dc2(PTR_s_LVGL_fail_100ea9cc);
    FUN_1011a1f0(PTR_s_WEST_TOPDIR_framework_display_lv_100ea9bc,0x278,extraout_r2,extraout_r3);
    uVar1 = 0;
  }
  return uVar1;
}

