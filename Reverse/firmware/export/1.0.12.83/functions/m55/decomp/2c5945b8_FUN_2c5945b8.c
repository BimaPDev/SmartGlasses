/* FUN_2c5945b8 @ 0x2c5945b8 */

byte FUN_2c5945b8(int param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(char *)(param_1 + 4) != '\0') {
    bVar1 = *(byte *)(param_1 + 6) ^ 1;
  }
  return bVar1;
}

