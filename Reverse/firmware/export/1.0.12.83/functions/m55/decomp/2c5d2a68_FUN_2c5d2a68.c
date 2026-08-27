/* FUN_2c5d2a68 @ 0x2c5d2a68 */

void FUN_2c5d2a68(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xf0) != 0)) {
    lv_obj_add_flag_invalidate(*(int *)(iVar1 + 0xf0),1);
    if (*(int *)(iVar1 + 0xf4) != 0) {
      FUN_2c62be40();
      return;
    }
  }
  return;
}

