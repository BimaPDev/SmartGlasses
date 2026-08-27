/* FUN_2c486ff6 @ 0x2c486ff6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c486ff6(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_r4;
  undefined4 uVar4;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  uVar4 = *(undefined4 *)(param_2 + 4);
  if ((in_ZR || in_NG != in_OV) || (iVar2 = FUN_2c66c540(uVar4,_LAB_2c487054,4), iVar2 != 0)) {
    iVar1 = _LAB_2c48705c;
    iVar2 = 0;
    iVar3 = FUN_2c66b624(uVar4,_DAT_2c487058);
    while (iVar3 != 0) {
      iVar2 = iVar2 + 1;
      if (iVar2 == 5) {
        return iVar3;
      }
      iVar3 = FUN_2c66b624(uVar4,*(undefined4 *)(iVar1 + iVar2 * 8));
    }
    UNRECOVERED_JUMPTABLE = *(code **)(_LAB_2c48705c + iVar2 * 8 + 4);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return 0;
    }
                    /* WARNING: Could not recover jumptable at 0x2c487044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
    return iVar2;
  }
  iVar3 = *DAT_2c648674;
  iVar2 = FUN_2c66de7c(_LAB_2c648678,0x800,_LAB_2c487060,&stack0xfffffff4,&stack0xfffffff4,iVar3,
                       unaff_r4,unaff_lr);
  if (-1 < iVar2) {
    if (iVar2 < 0x7ff) {
      if (iVar2 == 0) goto LAB_2c648630;
    }
    else {
      iVar2 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      UNRECOVERED_JUMPTABLE = (code *)FUN_2c648328();
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        (*UNRECOVERED_JUMPTABLE)(_LAB_2c648678,iVar2);
      }
    }
    else {
      FUN_2c673a28(_LAB_2c648678,iVar2);
    }
  }
LAB_2c648630:
  if (*DAT_2c648674 == iVar3) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

