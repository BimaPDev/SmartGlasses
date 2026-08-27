/* FUN_2c529dd2 @ 0x2c529dd2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c529dd2(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 unaff_r4;
  code *UNRECOVERED_JUMPTABLE_00;
  char *pcVar6;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (((in_ZR || in_NG != in_OV) || (pcVar6 = *(char **)(param_2 + 4), pcVar6 == (char *)0x0)) ||
     ((*(byte *)(_LAB_2c529ec4 + *pcVar6) & 3) == 0)) {
LAB_2c529e60:
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x51,_LAB_2c529ee0,_LAB_2c529edc,_LAB_2c529ed8);
  }
  iVar5 = (int)pcVar6[1];
  if (iVar5 != 0) {
    pcVar4 = pcVar6 + 1;
    do {
      if (((*(byte *)(_LAB_2c529ec4 + iVar5) & 7) == 0) && (iVar5 != 0x5f)) goto LAB_2c529e60;
      pcVar4 = pcVar4 + 1;
      iVar5 = (int)*pcVar4;
    } while (iVar5 != 0);
  }
  iVar1 = FUN_2c66c540(pcVar6,_LAB_2c529ec8,4);
  iVar5 = _LAB_2c529ed0;
  if (iVar1 != 0) {
    iVar1 = 0;
    iVar2 = FUN_2c66b624(pcVar6,_LAB_2c529ecc);
    while (iVar2 != 0) {
      iVar1 = iVar1 + 1;
      if (iVar1 == 4) goto LAB_2c529eb2;
      iVar2 = FUN_2c66b624(pcVar6,*(undefined4 *)(iVar5 + iVar1 * 8));
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)(_LAB_2c529ed0 + iVar1 * 8 + 4);
    if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
      iVar5 = FUN_2c66b624(pcVar6,_LAB_2c529ecc);
      if ((iVar5 != 0) && (iVar5 = FUN_2c66b624(pcVar6,_LAB_2c529ed4), iVar5 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x2c529e5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*UNRECOVERED_JUMPTABLE_00)();
        return uVar3;
      }
                    /* WARNING: Could not recover jumptable at 0x2c529e7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE_00)(*(undefined4 *)(param_2 + 8));
      return uVar3;
    }
LAB_2c529eb2:
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x6c,_LAB_2c529ee0,_LAB_2c529edc,_LAB_2c529ef8);
  }
  FUN_2c648600(_LAB_2c529ee4);
  FUN_2c648600(_LAB_2c529ee8,_LAB_2c529ecc);
  FUN_2c648600(_LAB_2c529ee8,_LAB_2c529eec);
  FUN_2c648600(_LAB_2c529ee8,_LAB_2c529ed4);
  FUN_2c648600(_LAB_2c529ee8,_LAB_2c529ef0);
  iVar1 = *DAT_2c648674;
  iVar5 = FUN_2c66de7c(_LAB_2c648678,0x800,_LAB_2c529ef4,&stack0xfffffff4,&stack0xfffffff4,iVar1,
                       unaff_r4,unaff_lr);
  if (-1 < iVar5) {
    if (iVar5 < 0x7ff) {
      if (iVar5 == 0) goto LAB_2c648630;
    }
    else {
      iVar5 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      UNRECOVERED_JUMPTABLE_00 = (code *)FUN_2c648328();
      if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
        (*UNRECOVERED_JUMPTABLE_00)(_LAB_2c648678,iVar5);
      }
    }
    else {
      FUN_2c673a28(_LAB_2c648678,iVar5);
    }
  }
LAB_2c648630:
  if (*DAT_2c648674 != iVar1) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return 0;
}

