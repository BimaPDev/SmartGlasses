/* FUN_100e7d18 @ 0x100e7d18 */

void FUN_100e7d18(int param_1)

{
  if (*DAT_100e7d30 == param_1) {
    *(byte *)(DAT_100e7d30 + 10) = *(byte *)(DAT_100e7d30 + 10) & 0xfa;
  }
  return;
}

