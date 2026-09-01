/* FUN_10124532 @ 0x10124532 */

void FUN_10124532(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x1c);
  *(byte *)(param_1 + 0x1c) = bVar1 | 8;
  if ((int)((uint)bVar1 << 0x1d) < 0) {
    FUN_10087344();
  }
  else {
    FUN_10087314();
  }
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xf7 | bVar1 & 8;
  return;
}

