/* FUN_100e0b60 @ 0x100e0b60 */

void FUN_100e0b60(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_2c [36];
  
  if ((int)((uint)*(byte *)(param_1 + 8) << 0x1d) < 0) {
    FUN_100c7054();
  }
  iVar2 = DAT_100e0bb0;
  for (uVar1 = 0; (int)uVar1 < (int)((*DAT_100e0bac & 0x7ff) >> 7); uVar1 = uVar1 + 1) {
    if (param_1 == iVar2) goto LAB_100e0b84;
    iVar2 = iVar2 + 0x60;
  }
  uVar1 = 0xffffffea;
LAB_100e0b84:
  FUN_100e083c(auStack_2c,uVar1 & 0xff);
  FUN_10132898(auStack_2c);
  FUN_1011ea48(param_1,0,0x60);
  return;
}

