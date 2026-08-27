/* FUN_2c5dcf6c @ 0x2c5dcf6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5dcf6c(short *param_1,short *param_2)

{
  int *piVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  short sStack_18;
  short sStack_16;
  int iStack_14;
  
  iStack_14 = *_LAB_2c5dd000;
  uVar3 = FUN_2c5ff4d8();
  func_0x2c5ff63c(uVar3,&sStack_18);
  piVar1 = _LAB_2c5dd000;
  iVar4 = (int)sStack_16;
  if (iVar4 != 0) {
    sStack_16 = 0;
    do {
      sStack_16 = (short)iVar4 + sStack_16;
      iVar5 = (int)((longlong)_LAB_2c5dd004 * (longlong)(iVar4 * 0x50) >> 0x25) -
              (iVar4 * 0x50 >> 0x1f);
      iVar4 = (int)(short)iVar5;
    } while (iVar5 != 0);
  }
  if (sStack_18 == 0) {
    sVar2 = 0;
  }
  else {
    sVar2 = 0;
    do {
      sVar2 = sVar2 + sStack_18;
      iVar4 = (int)((longlong)_LAB_2c5dd004 * (longlong)(sStack_18 * 0x50) >> 0x25) -
              (sStack_18 * 0x50 >> 0x1f);
      sStack_18 = (short)iVar4;
    } while (iVar4 != 0);
  }
  *param_1 = sVar2;
  *param_2 = sStack_16;
  if (*piVar1 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

