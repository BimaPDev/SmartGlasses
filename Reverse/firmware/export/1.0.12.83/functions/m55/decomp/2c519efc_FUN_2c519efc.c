/* FUN_2c519efc @ 0x2c519efc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c519efc(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  int iStack_14;
  
  iVar2 = FUN_2c5edef8();
  if (iVar2 != 0) {
    FUN_2c62be4c(*(undefined4 *)(param_1 + 0x38));
    FUN_2c62be74(*(undefined4 *)(param_1 + 0x38));
    *_LAB_2c519f24 = 1;
    return;
  }
  iVar2 = *(int *)(param_1 + 0x38);
  iStack_14 = *DAT_2c519ed0;
  FUN_2c62be40();
  *DAT_2c519ed4 = 0;
  FUN_2c5ee008();
  piVar1 = *(int **)(*(int *)(iVar2 + 0xc) + 0xc);
  if (piVar1 != (int *)0x0) {
    uStack_18 = 0;
    auStack_1c[0] = 1;
    (**(code **)(*piVar1 + 0x3c))(piVar1,auStack_1c);
  }
  if (*DAT_2c519ed0 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

