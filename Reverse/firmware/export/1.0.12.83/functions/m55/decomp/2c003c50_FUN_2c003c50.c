/* FUN_2c003c50 @ 0x2c003c50 */

uint FUN_2c003c50(int param_1)

{
  return *(uint *)(*(int *)(DAT_2c003c5c + param_1 * 4) + 0x10) & 0xff;
}

