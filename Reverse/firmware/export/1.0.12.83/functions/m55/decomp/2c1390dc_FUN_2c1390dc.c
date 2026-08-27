/* FUN_2c1390dc @ 0x2c1390dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c1390dc(int *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  char cStack_10;
  int iStack_c;
  
  iStack_c = *_DAT_2c1391d0;
  if ((param_1 == (int *)0x0) || (param_2 < 0xe)) {
    FUN_2c135988(4,0xed,_DAT_2c1391e0,_DAT_2c1391e4,_DAT_2c1391ec,_DAT_2c1391d8);
  }
  else {
    iStack_1c = *param_1;
    iStack_18 = param_1[1];
    iStack_14 = param_1[2];
    cStack_10 = (char)param_1[3];
    if ((((iStack_1c == _DAT_2c1391d4) && (iStack_18 == _DAT_2c1391d4 + 0xf608e7)) &&
        (iStack_14 == _DAT_2c1391d4 + -0x3d42fd46)) && (cStack_10 == '\0')) {
      uVar1 = 2;
    }
    else {
      if (((iStack_1c != _DAT_2c1391d4) || (iStack_18 != _DAT_2c1391f0)) ||
         ((iStack_14 != _DAT_2c1391f4 || (cStack_10 != '\0')))) {
        FUN_2c135988(4,0x102,_DAT_2c1391e0,_DAT_2c1391e4,_DAT_2c1391dc,_DAT_2c1391d8);
        FUN_2c135c84(_DAT_2c1391e8,1,0xd,&iStack_1c);
        goto LAB_2c139140;
      }
      uVar1 = 1;
    }
    if (param_2 == 0xe) {
      uVar2 = 0;
      uVar3 = uVar2;
    }
    else {
      uVar2 = (int)param_1 + 0xe;
      uVar3 = param_2 - 0xe & 0xffff;
    }
    FUN_2c139008(uVar1,*(undefined1 *)((int)param_1 + 0xd),uVar2,uVar3);
  }
LAB_2c139140:
  if (*_DAT_2c1391d0 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c();
}

