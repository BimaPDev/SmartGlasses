/* FUN_100e7cf8 @ 0x100e7cf8 */

void FUN_100e7cf8(int param_1)

{
  if (*DAT_100e7d14 == param_1) {
    *(byte *)(DAT_100e7d14 + 10) = *(byte *)(DAT_100e7d14 + 10) & 0xfc | 1;
  }
  return;
}

