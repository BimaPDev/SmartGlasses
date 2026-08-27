/* FUN_140db56c @ 0x140db56c */

byte FUN_140db56c(uint param_1)

{
  byte bVar1;
  
  if (param_1 < 0x100) {
    bVar1 = *(byte *)(param_1 + DAT_140db57c) & 8;
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}

