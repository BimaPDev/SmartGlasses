/* FUN_100e0bb4 @ 0x100e0bb4 */

int FUN_100e0bb4(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_2c [36];
  
  iVar1 = DAT_100e0c10;
  for (uVar2 = 0; (int)uVar2 < (int)((*DAT_100e0c0c & 0x7ff) >> 7); uVar2 = uVar2 + 1) {
    if (param_1 == iVar1) goto LAB_100e0bce;
    iVar1 = iVar1 + 0x60;
  }
  uVar2 = 0xffffffea;
LAB_100e0bce:
  FUN_100e083c(auStack_2c,uVar2 & 0xff);
  iVar1 = FUN_10131934(auStack_2c,param_1,0x60);
  if (iVar1 != 0) {
    FUN_100a5b78(DAT_100e0c20 | (DAT_100e0c18 - DAT_100e0c14) * 0x20 & 0xff00U,DAT_100e0c1c,iVar1);
  }
  return iVar1;
}

