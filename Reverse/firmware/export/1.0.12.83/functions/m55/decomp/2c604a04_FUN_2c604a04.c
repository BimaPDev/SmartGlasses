/* FUN_2c604a04 @ 0x2c604a04 */

byte FUN_2c604a04(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return *(byte *)(*(int *)(param_1 + 8) + 0x19) & 0xf;
  }
  return 0xf;
}

