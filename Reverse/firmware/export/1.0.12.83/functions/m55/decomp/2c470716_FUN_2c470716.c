/* FUN_2c470716 @ 0x2c470716 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c470716(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 unaff_r4;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (((in_ZR || in_NG != in_OV) || (pcVar9 = *(char **)(param_2 + 4), pcVar9 == (char *)0x0)) ||
     ((*(byte *)(_LAB_2c47082c + *pcVar9) & 3) == 0)) {
LAB_2c4707c6:
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x6c5,_LAB_2c47085c,_LAB_2c470858,_LAB_2c470854);
  }
  iVar7 = (int)pcVar9[1];
  if (iVar7 != 0) {
    pcVar6 = pcVar9 + 1;
    do {
      if (((*(byte *)(_LAB_2c47082c + iVar7) & 7) == 0) && (iVar7 != 0x5f)) goto LAB_2c4707c6;
      pcVar6 = pcVar6 + 1;
      iVar7 = (int)*pcVar6;
    } while (iVar7 != 0);
  }
  iVar2 = FUN_2c66c540(pcVar9,_LAB_2c470830,4);
  puVar1 = _LAB_2c470860;
  iVar7 = _LAB_2c470838;
  if (iVar2 != 0) {
    iVar2 = 0;
    uVar4 = _LAB_2c470834;
    while (iVar3 = FUN_2c66b624(pcVar9,uVar4), iVar3 != 0) {
      iVar2 = iVar2 + 1;
      if (iVar2 == 0x55) goto LAB_2c470816;
      uVar4 = *(undefined4 *)(iVar7 + iVar2 * 8);
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)(_LAB_2c470838 + iVar2 * 8 + 4);
    if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
      iVar7 = FUN_2c66b624(pcVar9,_LAB_2c47083c);
      if (((iVar7 != 0) && (iVar7 = FUN_2c66b624(pcVar9,_LAB_2c470840), iVar7 != 0)) &&
         ((iVar7 = FUN_2c66b624(pcVar9,_LAB_2c470844), iVar7 != 0 &&
          (((iVar7 = FUN_2c66b624(pcVar9,_LAB_2c470848), iVar7 != 0 &&
            (iVar7 = FUN_2c66b624(pcVar9,_LAB_2c47084c), iVar7 != 0)) &&
           (iVar7 = FUN_2c66b624(pcVar9,_LAB_2c470850), iVar7 != 0)))))) {
                    /* WARNING: Could not recover jumptable at 0x2c4707c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*UNRECOVERED_JUMPTABLE_00)();
        return uVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x2c4707e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*UNRECOVERED_JUMPTABLE_00)(*(undefined4 *)(param_2 + 8));
      return uVar4;
    }
LAB_2c470816:
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x6e8,_LAB_2c47085c,_LAB_2c470858,_LAB_2c470870);
  }
  FUN_2c648600(_LAB_2c470864);
  uVar4 = _LAB_2c470868;
  uVar5 = _LAB_2c470834;
  puVar8 = puVar1;
  while( true ) {
    FUN_2c648600(uVar4,uVar5);
    if (puVar1 + 0xaa == puVar8 + 2) break;
    uVar5 = *puVar8;
    puVar8 = puVar8 + 2;
  }
  iVar2 = *DAT_2c648674;
  iVar7 = FUN_2c66de7c(_LAB_2c648678,0x800,_LAB_2c47086c,&stack0xfffffff4,&stack0xfffffff4,iVar2,
                       unaff_r4,unaff_lr);
  if (-1 < iVar7) {
    if (iVar7 < 0x7ff) {
      if (iVar7 == 0) goto LAB_2c648630;
    }
    else {
      iVar7 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      UNRECOVERED_JUMPTABLE_00 = (code *)FUN_2c648328();
      if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
        (*UNRECOVERED_JUMPTABLE_00)(_LAB_2c648678,iVar7);
      }
    }
    else {
      FUN_2c673a28(_LAB_2c648678,iVar7);
    }
  }
LAB_2c648630:
  if (*DAT_2c648674 == iVar2) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

