/* FUN_2c636000 @ 0x2c636000 */

void FUN_2c636000(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x24) = DAT_2c636034;
  *(byte *)(param_2 + 0x28) = *(byte *)(param_2 + 0x28) | 1;
  lv_obj_add_flag_invalidate(param_2,2);
  lv_obj_add_flag_invalidate(param_2,8);
  lv_obj_add_flag_invalidate(param_2,0x400);
  return;
}

