/* FUN_100ea8c8 @ 0x100ea8c8 */

void FUN_100ea8c8(int param_1)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 *puVar1;
  undefined8 uVar2;
  int *local_14 [2];
  
  puVar1 = *(undefined4 **)(param_1 + 0x5c);
  FUN_1013921a(*puVar1);
  if ((int)((uint)*(byte *)(param_1 + 0x1c) << 0x1f) < 0) {
    local_14[0] = (int *)0x0;
    thunk_FUN_100ee058(*puVar1,0x30,local_14);
    if ((local_14[0] == (int *)0x0) || (*local_14[0] != *(int *)(*(int *)(param_1 + 0x18) + 0x14)))
    {
      uVar2 = FUN_10094174(3,PTR_s_WEST_TOPDIR_framework_display_lv_100ea93c,0x1cb,
                           PTR_s__lvgl_render_start_cb_100ea940,
                           PTR_s_Asserted_at_expression___s_100ea938,
                           PTR_s_drawbuf____NULL____drawbuf_>data_100ea934);
      FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_100ea948,PTR_DAT_100ea944,
                   PTR_s_WEST_TOPDIR_framework_display_lv_100ea93c,0x1cb,uVar2);
      FUN_10119dc2(PTR_s_LVGL_fail_100ea94c);
      FUN_1011a1f0(PTR_s_WEST_TOPDIR_framework_display_lv_100ea93c,0x1cb,extraout_r2,extraout_r3);
    }
  }
  return;
}

