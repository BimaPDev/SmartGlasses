/* FUN_2c50dd40 @ 0x2c50dd40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c50dd40(int param_1)

{
  FUN_2c5eba54(*(undefined4 *)(param_1 + 0x24),_LAB_2c50dd94);
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
  if (*(int *)(param_1 + 0x28) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x28),1);
  }
  FUN_2c50ed7c(param_1 + 0x30);
  return;
}

