/* FUN_140db534 @ 0x140db534 */

byte FUN_140db534(uint param_1)

{
  byte bVar1;
  
  if (param_1 < 0x100) {
    bVar1 = *(byte *)(param_1 + DAT_140db544) & 0x97;
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}

