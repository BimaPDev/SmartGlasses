/* FUN_100d3fe0 @ 0x100d3fe0 */

void FUN_100d3fe0(byte param_1)

{
  *(byte *)*DAT_100d3ff0 = *(byte *)*DAT_100d3ff0 & 0xfd | (param_1 & 1) << 1;
  return;
}

