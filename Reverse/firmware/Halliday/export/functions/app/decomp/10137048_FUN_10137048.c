/* FUN_10137048 @ 0x10137048 */

undefined4 FUN_10137048(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uStack_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  iVar2 = FUN_100dd8a8();
  if ((((iVar2 != 0) && (*(char *)(iVar2 + 0x60) < '\0')) && (*(char *)(iVar2 + 200) < '\0')) &&
     (iVar3 = FUN_100cb330(param_1), iVar3 == 0)) {
    uStack_14 = 7;
    if ((iVar2 == 0) || (-1 < *(char *)(iVar2 + 0x60))) {
      FUN_100a5b78(DAT_100de0ec | (DAT_100de0e8 - DAT_100de0e4) * 0x20 & 0xff00U,DAT_100de0f0);
      uVar1 = 0xffffffea;
    }
    else {
      iVar3 = FUN_100de004(0,7,0,iVar2 + 0xe8,iVar2);
      if (iVar3 == 0) {
        uVar1 = 0xfffffff4;
      }
      else {
        uStack_14 = CONCAT31(uStack_14._1_3_,*(undefined1 *)(iVar2 + 0xd2)) & 0xfffffffc;
        FUN_10137188(iVar3,&uStack_14,1);
        uVar1 = FUN_100ddd34(iVar2,iVar3);
      }
    }
    return uVar1;
  }
  return 0xfffffffb;
}

