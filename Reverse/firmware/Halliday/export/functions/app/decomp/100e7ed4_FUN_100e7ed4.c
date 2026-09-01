/* FUN_100e7ed4 @ 0x100e7ed4 */

undefined4 FUN_100e7ed4(void)

{
  int iVar1;
  undefined4 in_r3;
  uint uVar2;
  
  FUN_10138c7c();
  iVar1 = FUN_1009e9f8(DAT_100e7f08);
  if (iVar1 == 0) {
    uVar2 = (DAT_100e7f10 - DAT_100e7f0c) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100e7f14 | uVar2,DAT_100e7f1c,DAT_100e7f18,uVar2,in_r3);
  }
  else {
    FUN_1009e7a0(DAT_100e7f08);
  }
  return 0;
}

