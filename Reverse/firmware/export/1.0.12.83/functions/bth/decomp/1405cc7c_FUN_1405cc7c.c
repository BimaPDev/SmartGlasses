/* FUN_1405cc7c @ 0x1405cc7c */

void FUN_1405cc7c(int param_1)

{
  byte bVar1;
  
  FUN_14065fe4(0x17,0xff,DAT_1405cca8,DAT_1405cca4);
  bVar1 = *(byte *)(DAT_1405ccac + 0x50) & 0xfb;
  if (-1 < param_1 << 0x18) {
    bVar1 = bVar1 | 4;
  }
  *(byte *)(DAT_1405ccac + 0x50) = bVar1;
  return;
}

