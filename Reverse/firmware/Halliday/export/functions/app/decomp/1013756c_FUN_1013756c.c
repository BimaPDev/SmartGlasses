/* FUN_1013756c @ 0x1013756c */

undefined4 FUN_1013756c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = 6;
  uStack_10 = param_3;
  if ((param_1 == 0) || (-1 < *(char *)(param_1 + 0x60))) {
    FUN_100a5b78(DAT_100de0ec | (DAT_100de0e8 - DAT_100de0e4) * 0x20 & 0xff00U,DAT_100de0f0);
    uVar1 = 0xffffffea;
  }
  else {
    iVar2 = FUN_100de004(0,6,0,param_1 + 0xe8,param_1);
    if (iVar2 == 0) {
      uVar1 = 0xfffffff4;
    }
    else {
      uStack_14 = CONCAT31(uStack_14._1_3_,*(undefined1 *)(param_1 + 0xd2)) & 0xfffffffc;
      FUN_10137188(iVar2,&uStack_14,1);
      uVar1 = FUN_100ddd34(param_1,iVar2);
    }
  }
  return uVar1;
}

