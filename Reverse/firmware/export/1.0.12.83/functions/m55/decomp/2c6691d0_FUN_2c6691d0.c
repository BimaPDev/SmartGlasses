/* FUN_2c6691d0 @ 0x2c6691d0 */

byte FUN_2c6691d0(uint param_1)

{
  byte bVar1;
  
  if (param_1 < 0x100) {
    bVar1 = *(byte *)(param_1 + DAT_2c6691e0) & 8;
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}

