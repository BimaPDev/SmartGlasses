/* FUN_2c469fac @ 0x2c469fac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c469fac(int param_1,int param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r1;
  int iVar2;
  undefined4 unaff_r4;
  undefined4 uVar3;
  undefined4 unaff_lr;
  undefined4 uStack_18;
  
  uVar3 = *(undefined4 *)(param_2 + 4);
  if ((param_1 < 2) || (iVar1 = FUN_2c66c540(uVar3,_LAB_2c46a00c,4), iVar1 != 0)) {
    iVar1 = FUN_2c66b624(uVar3,_LAB_2c46a010);
    UNRECOVERED_JUMPTABLE = _LAB_2c46a02c;
    if ((iVar1 != 0) &&
       (iVar1 = FUN_2c66b624(uVar3,_LAB_2c46a014), UNRECOVERED_JUMPTABLE = _LAB_2c46a030, iVar1 != 0
       )) {
      return iVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x2c46a004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)();
    return iVar1;
  }
  FUN_2c648600(_LAB_2c46a018);
  FUN_2c648600(_LAB_2c46a020,_LAB_2c46a010,_LAB_2c46a01c);
  FUN_2c648600(_LAB_2c46a020,_LAB_2c46a014,_LAB_2c46a024);
  iVar2 = *DAT_2c648674;
  uStack_18 = extraout_r1;
  iVar1 = FUN_2c66de7c(_LAB_2c648678,0x800,_LAB_2c46a028,&uStack_18,&uStack_18,iVar2,unaff_r4,
                       unaff_lr);
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
  if (*DAT_2c648674 != iVar2) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return 0;
}

