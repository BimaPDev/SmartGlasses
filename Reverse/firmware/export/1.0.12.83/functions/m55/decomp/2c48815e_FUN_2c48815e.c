/* FUN_2c48815e @ 0x2c48815e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c48815e(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_r4;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  uVar5 = *(undefined4 *)(param_2 + 4);
  if ((in_ZR || in_NG != in_OV) || (iVar1 = FUN_2c66c540(uVar5,_LAB_2c4881b4,4), iVar1 != 0)) {
    iVar1 = _LAB_2c4881bc;
    iVar4 = 0;
    uVar3 = _LAB_2c4881b8;
    while (iVar2 = FUN_2c66b624(uVar5,uVar3), iVar2 != 0) {
      iVar4 = iVar4 + 1;
      if (iVar4 == 0x11) {
        return iVar2;
      }
      uVar3 = *(undefined4 *)(iVar1 + iVar4 * 8);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(_LAB_2c4881bc + iVar4 * 8 + 4);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return 0;
    }
                    /* WARNING: Could not recover jumptable at 0x2c4881a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
    return iVar1;
  }
  iVar4 = *DAT_2c648674;
  iVar1 = FUN_2c66de7c(_LAB_2c648678,0x800,_LAB_2c4881c0,&stack0xfffffff4,&stack0xfffffff4,iVar4,
                       unaff_r4,unaff_lr);
  if (-1 < iVar1) {
    if (iVar1 < 0x7ff) {
      if (iVar1 == 0) goto LAB_2c648630;
    }
    else {
      iVar1 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      UNRECOVERED_JUMPTABLE = (code *)FUN_2c648328();
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        (*UNRECOVERED_JUMPTABLE)(_LAB_2c648678,iVar1);
      }
    }
    else {
      FUN_2c673a28(_LAB_2c648678,iVar1);
    }
  }
LAB_2c648630:
  if (*DAT_2c648674 != iVar4) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return 0;
}

