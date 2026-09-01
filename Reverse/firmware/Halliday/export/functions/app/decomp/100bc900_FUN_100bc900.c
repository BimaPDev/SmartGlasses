/* FUN_100bc900 @ 0x100bc900 */

void FUN_100bc900(void)

{
  if ((((int)((uint)*(byte *)(DAT_100bc934 + 1) << 0x1b) < 0) && (*(int *)(DAT_100bc934 + 4) == 0))
     && (-1 < (int)((uint)*(byte *)(DAT_100bc934 + 1) << 0x1c))) {
    FUN_100a5b78(DAT_100bc940 | (DAT_100bc93c - DAT_100bc938) * 0x20 & 0xff00U,DAT_100bc948,
                 DAT_100bc944);
    FUN_100bc870();
    return;
  }
  return;
}

