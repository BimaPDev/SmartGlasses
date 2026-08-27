/* FUN_2c4d0d28 @ 0x2c4d0d28 */

byte FUN_2c4d0d28(int param_1,int param_2,int param_3)

{
  return *(byte *)(param_3 + param_1 + param_2 * 0x10 + 4) & 1;
}

