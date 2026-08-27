/* FUN_2c6487ce @ 0x2c6487ce */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c6487ce(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  char in_ZR;
  
  if (in_ZR == '\0') {
LAB_2c6487d2:
    FUN_2c648600(_LAB_2c648820);
    FUN_2c648600(_DAT_2c648824);
    uVar2 = _DAT_2c648828;
  }
  else {
    uVar5 = FUN_2c66d654(*(undefined4 *)(param_2 + 4),0,0x10,param_4,param_4);
    uVar1 = FUN_2c66d654(*(undefined4 *)(param_2 + 8),0,0x10);
    if (0xf000 < uVar5) goto LAB_2c6487d2;
    FUN_2c673d68(uVar5 & 0xffff,uVar1);
    uVar2 = _DAT_2c64882c;
  }
  iVar6 = *DAT_2c648674;
  iVar3 = FUN_2c66de7c(_LAB_2c648678,0x800,uVar2,&stack0xfffffff4,&stack0xfffffff4,iVar6,unaff_r4,
                       unaff_lr);
  if (-1 < iVar3) {
    if (iVar3 < 0x7ff) {
      if (iVar3 == 0) goto LAB_2c648630;
    }
    else {
      iVar3 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      pcVar4 = (code *)FUN_2c648328();
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(_LAB_2c648678,iVar3);
      }
    }
    else {
      FUN_2c673a28(_LAB_2c648678,iVar3);
    }
  }
LAB_2c648630:
  if (*DAT_2c648674 == iVar6) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

