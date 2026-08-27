/* FUN_2c5e2f60 @ 0x2c5e2f60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c5e2f60(undefined4 param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 extraout_r1;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 uVar4;
  undefined4 unaff_lr;
  undefined8 uVar5;
  undefined4 uStack_c;
  
  uVar4 = *(undefined4 *)(param_2 + 4);
  iVar1 = FUN_2c66b624(uVar4,_LAB_2c5e2fa4);
  if (iVar1 == 0) {
    *_LAB_2c5e2fac = 1;
    FUN_2c5e2ed4();
    uVar4 = _LAB_2c5e2fb0;
    uStack_c = extraout_r1;
  }
  else {
    uVar5 = FUN_2c66b624(uVar4,_LAB_2c5e2fa8);
    uVar4 = _LAB_2c5e2fb4;
    uStack_c = (undefined4)((ulonglong)uVar5 >> 0x20);
    if ((int)uVar5 != 0) {
      return (int)uVar5;
    }
    *_LAB_2c5e2fac = 0;
  }
  iVar3 = *DAT_2c648674;
  iVar1 = FUN_2c66de7c(_LAB_2c648678,0x800,uVar4,&uStack_c,&uStack_c,iVar3,unaff_r4,unaff_lr);
  if (-1 < iVar1) {
    if (iVar1 < 0x7ff) {
      if (iVar1 == 0) goto LAB_2c648630;
    }
    else {
      iVar1 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      pcVar2 = (code *)FUN_2c648328();
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(_LAB_2c648678,iVar1);
      }
    }
    else {
      FUN_2c673a28(_LAB_2c648678,iVar1);
    }
  }
LAB_2c648630:
  if (*DAT_2c648674 == iVar3) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

