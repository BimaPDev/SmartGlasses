/* FUN_100bf184 @ 0x100bf184 */

void FUN_100bf184(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_lr;
  
  iVar3 = DAT_100bf230;
  FUN_1011ea48(DAT_100bf230,0,0x1a8);
  *(undefined1 *)(iVar3 + 0x10) = 0x7f;
  uVar1 = DAT_100bf234;
  *(undefined1 *)(iVar3 + 0xf) = 0;
  *(undefined1 *)(iVar3 + 0x170) = 0;
  thunk_FUN_101146e4(iVar3 + 0x178,uVar1);
  puVar2 = DAT_100bf238;
  if (param_1 == 0) {
    *DAT_100bf238 = 0;
    puVar2[1] = 0;
  }
  FUN_1013ca1a(DAT_100bf23c,1);
  thunk_FUN_101146e4(DAT_100bf244,DAT_100bf240);
  thunk_FUN_101146e4(DAT_100bf24c,DAT_100bf248);
  thunk_FUN_101146e4(DAT_100bf254,DAT_100bf250);
  thunk_FUN_101146e4(DAT_100bf25c,DAT_100bf258);
  thunk_FUN_101146e4(DAT_100bf264,DAT_100bf260);
  FUN_10061c18(DAT_100bf26c,DAT_100bf268,0);
  FUN_1011dc0a(DAT_100bf24c,1000);
  FUN_10131bc4(DAT_100bf270);
  FUN_10131de2(DAT_100bf274);
  *(undefined1 *)(iVar3 + 0x12) = 0xff;
  if (param_1 == 0) {
    FUN_100c0454();
  }
  else {
    FUN_101323d0();
    FUN_101323e8();
  }
  FUN_1000ac58();
  iVar3 = FUN_1009e9f8(DAT_100c13fc);
  uVar4 = (DAT_100c1400 - DAT_100c1404) * 0x20 & 0xff00;
  if (iVar3 == 0) {
    FUN_100a5b78(uVar4 | 0x4080031,DAT_100c140c,DAT_100c1408,uVar4,param_4,unaff_lr);
    FUN_1009e86c(DAT_100c13fc);
    return;
  }
  FUN_100a5b78(DAT_100c1410 | uVar4,DAT_100c140c,DAT_100c1414,param_4);
  return;
}

