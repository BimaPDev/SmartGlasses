/* FUN_2c633a90 @ 0x2c633a90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c633a90(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 uStack_18;
  short sStack_16;
  int iStack_14;
  
  iStack_14 = *_LAB_2c633b14;
  FUN_2c637370(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x44),&uStack_18,0);
  sVar2 = FUN_2c6033b4(param_1,0,0x59);
  iVar3 = FUN_2c6033b4(param_1,0,0x57);
  uStack_18 = *(undefined2 *)(param_1 + 0x40);
  sStack_16 = sVar2 + sStack_16 + 1 + *(short *)(iVar3 + 8);
  iVar5 = (int)sStack_16;
  iVar3 = FUN_2c6073f8(*(undefined4 *)(param_1 + 0x24));
  if (iVar5 < iVar3) {
    uVar4 = FUN_2c637598(*(undefined4 *)(param_1 + 0x24),&uStack_18);
    uVar1 = *(undefined2 *)(param_1 + 0x40);
    FUN_2c63339c(param_1,uVar4);
    *(undefined2 *)(param_1 + 0x40) = uVar1;
  }
  if (*_LAB_2c633b14 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

