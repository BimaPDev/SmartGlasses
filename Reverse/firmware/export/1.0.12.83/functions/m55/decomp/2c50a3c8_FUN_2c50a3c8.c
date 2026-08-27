/* FUN_2c50a3c8 @ 0x2c50a3c8 */

void FUN_2c50a3c8(int param_1)

{
  FUN_2c5eba54(*(undefined4 *)(param_1 + 0x2c),DAT_2c50a458);
  FUN_2c5eba54(*(undefined4 *)(param_1 + 0x50),DAT_2c50a458);
  if (*(int *)(param_1 + 0x10) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x10),1);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x14),1);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x18),1);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x1c),1);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x20),1);
  }
  FUN_2c50ed7c(param_1 + 0x1b4);
  FUN_2c50ed7c(param_1 + 0x250);
  FUN_2c50ed7c(param_1 + 0x7c);
  FUN_2c50ed7c(param_1 + 0x118);
  FUN_2c50ed7c(param_1 + 0x2ec);
  FUN_2c50ed7c(param_1 + 0x388);
  if (*(int *)(param_1 + 0x3c) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x3c),1);
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x60),1);
    return;
  }
  return;
}

