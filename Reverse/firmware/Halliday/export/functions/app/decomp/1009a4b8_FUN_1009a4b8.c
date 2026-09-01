/* FUN_1009a4b8 @ 0x1009a4b8 */

void FUN_1009a4b8(void)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 in_r3;
  undefined4 extraout_r3;
  undefined8 uVar2;
  
  iVar1 = FUN_1008dd3c();
  if (iVar1 == 0) {
    uVar2 = FUN_10094174(3,DAT_1009a53c,0x46,DAT_1009a540,DAT_1009a538,DAT_1009a534,DAT_1009a530,
                         in_r3);
    FUN_10119dc2(DAT_1009a548,DAT_1009a544,DAT_1009a53c,0x46,uVar2);
    FUN_10119dc2(DAT_1009a54c);
    FUN_1011a1f0(DAT_1009a53c,0x46,extraout_r2,extraout_r3);
    FUN_10094174(2,DAT_1009a53c,0x48,DAT_1009a540,DAT_1009a550);
    return;
  }
  FUN_1012819e(iVar1,DAT_1009a554);
  FUN_101281a2(iVar1,DAT_1009a558);
  FUN_101281a6(iVar1,DAT_1009a55c);
  *(undefined4 *)(iVar1 + 0xc) = DAT_1009a560;
  return;
}

