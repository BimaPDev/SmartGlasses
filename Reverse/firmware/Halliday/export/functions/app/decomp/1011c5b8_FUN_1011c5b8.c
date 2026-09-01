/* FUN_1011c5b8 @ 0x1011c5b8 */

uint FUN_1011c5b8(uint param_1)

{
  return ((param_1 >> 7) * 0x1b ^ param_1 << 1) & 0xff;
}

