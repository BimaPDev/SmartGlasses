/* FUN_2c633b18 @ 0x2c633b18 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c633b18(int param_1)

{
  undefined2 uVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 uStack_18;
  short sStack_16;
  int iStack_14;
  
  iStack_14 = *_LAB_2c633b90;
  FUN_2c637370(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x44),&uStack_18,0);
  sVar3 = FUN_2c6033b4(param_1,0,0x59);
  iVar4 = FUN_2c6033b4(param_1,0,0x57);
  uStack_18 = *(undefined2 *)(param_1 + 0x40);
  sStack_16 = ((sStack_16 + 1) - sVar3) - *(short *)(iVar4 + 8);
  uVar5 = FUN_2c637598(*(undefined4 *)(param_1 + 0x24),&uStack_18);
  uVar1 = *(undefined2 *)(param_1 + 0x40);
  FUN_2c63339c(param_1,uVar5);
  piVar2 = _LAB_2c633b90;
  *(undefined2 *)(param_1 + 0x40) = uVar1;
  if (*piVar2 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

