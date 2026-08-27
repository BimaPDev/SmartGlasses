/* FUN_2c5ac4b0 @ 0x2c5ac4b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5ac4b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_20;
  int iStack_1c;
  
  if ((*(int *)(param_1 + 0x180) != 0) &&
     ((*(char *)(*(int *)(param_1 + 0x180) + 4) != '\0' || (iVar2 = func_0x2c5ae0c4(), iVar2 != 0)))
     ) {
    return;
  }
  FUN_2c5c55d8();
  uVar1 = _LAB_2c5ac4d8;
  iStack_1c = *DAT_2c5c5950;
  iVar2 = FUN_2c66b624(_LAB_2c5c5954,_LAB_2c5ac4d8,0,0);
  if (iVar2 == 0) {
    uStack_20 = _LAB_2c5c5958;
  }
  else {
    iVar2 = FUN_2c66b624(_LAB_2c5c5968,uVar1);
    if (iVar2 == 0) {
      uStack_20 = _LAB_2c5c596c;
    }
    else {
      iVar2 = func_0x2c5c52ec(uVar1,&uStack_20);
      if (iVar2 == 0) {
        if (*DAT_2c5c5950 != iStack_1c) {
                    /* WARNING: Subroutine does not return */
          stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5c5960,0xd9,_LAB_2c5c5964,_LAB_2c5c595c,uVar1,uStack_20);
}

