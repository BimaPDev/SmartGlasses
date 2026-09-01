/* FUN_10087270 @ 0x10087270 */

int FUN_10087270(void)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 in_r3;
  undefined4 extraout_r3;
  undefined8 uVar2;
  
  iVar1 = FUN_10094064(DAT_100872d8);
  if (iVar1 == 0) {
    uVar2 = FUN_10094174(3,DAT_100872e8,0x35,DAT_100872ec,DAT_100872e4,DAT_100872e0,DAT_100872dc,
                         in_r3);
    FUN_10119dc2(DAT_100872f4,DAT_100872f0,DAT_100872e8,0x35,uVar2);
    FUN_10119dc2(DAT_100872f8);
    FUN_1011a1f0(DAT_100872e8,0x35,extraout_r2,extraout_r3);
  }
  else {
    FUN_1012b008(iVar1,4);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(byte *)(iVar1 + 0x1c) = *(byte *)(iVar1 + 0x1c) & 0xf0 | 0xc;
  }
  return iVar1;
}

