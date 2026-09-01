/* FUN_100e0f88 @ 0x100e0f88 */

void FUN_100e0f88(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_20 [16];
  
  iVar1 = FUN_100e0e08();
  if (iVar1 == 0) {
    iVar1 = FUN_100e0d7c();
    if (iVar1 == 0) {
      FUN_100a5b78(DAT_100e1000 | (DAT_100e0ff8 - DAT_100e0ffc) * 0x20 & 0xff00U,DAT_100e1004);
      return;
    }
    FUN_10137fec(iVar1,param_1);
  }
  FUN_10137ff6(auStack_20,param_2);
  iVar2 = iVar1 + 8;
  if (iVar2 != 0) {
    FUN_100e0ec8(iVar2,auStack_20);
  }
  FUN_100e0e70(1,param_1,iVar2);
  *(undefined1 *)(iVar1 + 6) = 1;
  FUN_100e0dc4(iVar1);
  FUN_100e0e44();
  FUN_10138082(0);
  return;
}

