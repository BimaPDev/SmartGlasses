/* FUN_2c51f604 @ 0x2c51f604 */

void FUN_2c51f604(int param_1)

{
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x1fc) = 0;
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0xc),1);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x10),1);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x14),1);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x24),1);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x34),1);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x28),1);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x38),1);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x1e4),1);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x1f0),1);
  return;
}

