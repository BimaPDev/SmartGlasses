/* FUN_2c625a88 @ 0x2c625a88 */

void FUN_2c625a88(int param_1)

{
  uint uVar1;
  int iVar2;
  byte local_11;
  undefined1 auStack_10 [4];
  int local_c;
  
  local_c = *DAT_2c625afc;
  do {
    while (*(char *)(param_1 + 0x10) == '\0') {
      local_11 = *(byte *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x14));
      uVar1 = (uint)local_11;
      iVar2 = *(int *)(param_1 + 0x14) + 1;
LAB_2c625ae8:
      *(uint *)(param_1 + 0x14) = iVar2 + uVar1;
      if (uVar1 == 0) goto LAB_2c625aca;
    }
    FUN_2c62de74(param_1,&local_11,1,0);
    uVar1 = (uint)local_11;
    if (*(char *)(param_1 + 0x10) == '\0') {
      iVar2 = *(int *)(param_1 + 0x14);
      goto LAB_2c625ae8;
    }
    FUN_2c62e030(param_1,uVar1,1);
    FUN_2c62e0f4(param_1,auStack_10);
  } while (local_11 != 0);
LAB_2c625aca:
  if (*DAT_2c625afc != local_c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

