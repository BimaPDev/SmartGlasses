/* FUN_2c600c38 @ 0x2c600c38 */

byte FUN_2c600c38(int param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    bVar1 = *(byte *)(*(int *)(param_1 + 8) + 0x1a) >> 6;
  }
  return bVar1;
}

