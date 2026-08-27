/* FUN_2c63a60c @ 0x2c63a60c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c63a60c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 unaff_r4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_lr;
  
  iVar2 = FUN_2c66b624(*(undefined4 *)(param_2 + 4),_LAB_2c63a69c);
  if (iVar2 != 0) {
    FUN_2c674278(0,0x13);
    iVar2 = DAT_2c63a6a4;
    iVar5 = 0;
    uVar6 = *(undefined4 *)(param_2 + 4);
    uVar4 = _LAB_2c63a6a0;
    while (iVar3 = FUN_2c66b624(uVar6,uVar4), iVar1 = DAT_2c63a6b0, iVar3 != 0) {
      iVar5 = iVar5 + 1;
      if (iVar5 == 0x20) goto LAB_2c63a65e;
      uVar4 = *(undefined4 *)(iVar2 + iVar5 * 8);
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)(DAT_2c63a6a4 + iVar5 * 8 + 4);
    if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c63a652. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (*UNRECOVERED_JUMPTABLE_00)();
      return iVar2;
    }
LAB_2c63a65e:
    if (param_1 != 2) {
      iVar2 = 0;
      uVar4 = DAT_2c63a6ac;
      while (iVar5 = FUN_2c66b624(uVar6,uVar4), iVar5 != 0) {
        iVar2 = iVar2 + 1;
        if (iVar2 == 10) {
          return iVar5;
        }
        uVar4 = *(undefined4 *)(iVar1 + iVar2 * 8);
      }
      UNRECOVERED_JUMPTABLE_00 = *(code **)(DAT_2c63a6b0 + iVar2 * 8 + 4);
      iVar3 = 0;
      if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c63a69a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar2 = (*UNRECOVERED_JUMPTABLE_00)(*(undefined4 *)(param_2 + 8));
        return iVar2;
      }
    }
    return iVar3;
  }
  iVar5 = *DAT_2c648674;
  iVar2 = FUN_2c66de7c(_LAB_2c648678,0x800,_LAB_2c63a6a8,&stack0xfffffff4,&stack0xfffffff4,iVar5,
                       unaff_r4,unaff_lr);
  if (-1 < iVar2) {
    if (iVar2 < 0x7ff) {
      if (iVar2 == 0) goto LAB_2c648630;
    }
    else {
      iVar2 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      UNRECOVERED_JUMPTABLE_00 = (code *)FUN_2c648328();
      if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
        (*UNRECOVERED_JUMPTABLE_00)(_LAB_2c648678,iVar2);
      }
    }
    else {
      FUN_2c673a28(_LAB_2c648678,iVar2);
    }
  }
LAB_2c648630:
  if (*DAT_2c648674 != iVar5) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return 0;
}

