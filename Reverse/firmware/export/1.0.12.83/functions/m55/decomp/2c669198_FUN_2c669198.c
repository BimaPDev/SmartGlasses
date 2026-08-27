/* FUN_2c669198 @ 0x2c669198 */

byte FUN_2c669198(uint param_1)

{
  byte bVar1;
  
  if (param_1 < 0x100) {
    bVar1 = *(byte *)(param_1 + DAT_2c6691a8) & 0x97;
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}

