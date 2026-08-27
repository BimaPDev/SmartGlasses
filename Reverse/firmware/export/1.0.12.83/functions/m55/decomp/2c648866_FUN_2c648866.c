/* FUN_2c648866 @ 0x2c648866 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c648866(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_r4;
  undefined4 uVar7;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (!in_ZR && in_NG == in_OV) {
    uVar7 = *(undefined4 *)(param_2 + 4);
    iVar5 = FUN_2c66c540(uVar7,_LAB_2c64892c,4,param_4,param_4);
    piVar2 = _LAB_2c64894c;
    if (iVar5 == 0) {
      if (*_LAB_2c64894c != 0) {
        return 0;
      }
      iVar5 = FUN_2c6440f0(_DAT_2c648950,0);
      pcVar3 = _DAT_2c648954;
      *piVar2 = iVar5;
      *pcVar3 = '\0';
      return iVar5;
    }
    iVar5 = FUN_2c66c540(uVar7,_LAB_2c648930,6);
    pcVar3 = _DAT_2c648954;
    if (iVar5 == 0) {
      cVar1 = *_DAT_2c648954;
      *_DAT_2c648958 = 1;
      if (cVar1 != '\0') {
        return 0;
      }
      func_0x2c674078();
      func_0x2c6744a8();
      func_0x2c6739d8();
      iVar5 = FUN_2c673bb8(3);
      *pcVar3 = '\x01';
      return iVar5;
    }
    iVar5 = FUN_2c66c540(uVar7,_LAB_2c648934,7);
    pcVar3 = _DAT_2c648954;
    if (iVar5 == 0) {
      cVar1 = *_DAT_2c648954;
      *_DAT_2c648958 = 0;
      if (cVar1 != '\0') {
        return 0;
      }
      func_0x2c674078();
      FUN_2c674178();
      iVar5 = FUN_2c673bb8(2);
      *pcVar3 = '\x01';
      return iVar5;
    }
    iVar5 = FUN_2c66c540(uVar7,_LAB_2c648938,4);
    piVar2 = _LAB_2c64894c;
    if (iVar5 == 0) {
      if (*_LAB_2c64894c == 0) {
        return 0;
      }
      iVar5 = func_0x2c646a4c();
      *piVar2 = 0;
      return iVar5;
    }
  }
  FUN_2c648600(_DAT_2c64893c);
  FUN_2c648600(_DAT_2c648940);
  FUN_2c648600(_DAT_2c648944);
  iVar6 = *DAT_2c648674;
  iVar5 = FUN_2c66de7c(_LAB_2c648678,0x800,_LAB_2c648948,&stack0xfffffff4,&stack0xfffffff4,iVar6,
                       unaff_r4,unaff_lr);
  if (-1 < iVar5) {
    if (iVar5 < 0x7ff) {
      if (iVar5 == 0) goto LAB_2c648630;
    }
    else {
      iVar5 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      pcVar4 = (code *)FUN_2c648328();
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(_LAB_2c648678,iVar5);
      }
    }
    else {
      FUN_2c673a28(_LAB_2c648678,iVar5);
    }
  }
LAB_2c648630:
  if (*DAT_2c648674 != iVar6) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return 0;
}

