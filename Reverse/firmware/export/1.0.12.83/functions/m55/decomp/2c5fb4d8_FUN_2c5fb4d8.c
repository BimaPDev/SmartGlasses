/* FUN_2c5fb4d8 @ 0x2c5fb4d8 */

void FUN_2c5fb4d8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  lv_obj_add_flag_invalidate(param_1,1);
  iVar1 = FUN_2c6041fc(param_1);
  if ((iVar1 != 0) && (iVar1 = iVar1 + -1, -1 < iVar1)) {
    do {
      uVar2 = *(undefined4 *)(**(int **)(param_1 + 8) + iVar1 * 4);
      iVar1 = iVar1 + -1;
      lv_obj_add_flag_invalidate(uVar2,1);
      FUN_2c5fb4d8(uVar2);
    } while (iVar1 != -1);
  }
  return;
}

