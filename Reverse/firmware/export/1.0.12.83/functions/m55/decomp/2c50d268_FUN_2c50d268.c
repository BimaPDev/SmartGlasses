/* FUN_2c50d268 @ 0x2c50d268 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c50d268(int param_1)

{
  FUN_2c5eba54(*(undefined4 *)(param_1 + 0x24),_LAB_2c50d2b4);
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
  FUN_2c62e838(*(undefined4 *)(param_1 + 0x30),DAT_2c50ed9c);
  FUN_2c62e838(*(undefined4 *)(param_1 + 0x34),DAT_2c50eda0);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}

