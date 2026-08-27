/* FUN_2c504e4c @ 0x2c504e4c */

void FUN_2c504e4c(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x10),1);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x14),1);
  }
  FUN_2c63dbf0(1,1,0);
  return;
}

