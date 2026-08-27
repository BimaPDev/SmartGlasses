/* FUN_2c516690 @ 0x2c516690 */

void FUN_2c516690(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_2c606b94(*(undefined4 *)(param_1 + 8),1);
  if (iVar1 != 0) {
    return;
  }
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 8),1);
  FUN_2c606abc(*(undefined4 *)(param_1 + 4),1);
  FUN_2c606abc(*(undefined4 *)(param_1 + 0x54),1);
  return;
}

