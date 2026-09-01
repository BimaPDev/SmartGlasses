/* FUN_1003f0e4 @ 0x1003f0e4 */

void FUN_1003f0e4(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *DAT_1003f118;
  iVar1 = FUN_100bed9c();
  if (iVar1 == 2) {
    uVar2 = (*(byte *)(DAT_1003f11c + 1) & 0x3f) >> 5;
  }
  else {
    uVar2 = 0;
  }
  if (*DAT_1003f118 != iVar3) {
    FUN_1013cdc0(uVar2);
  }
  return;
}

