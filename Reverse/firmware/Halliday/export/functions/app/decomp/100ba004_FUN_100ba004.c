/* FUN_100ba004 @ 0x100ba004 */

void FUN_100ba004(int param_1)

{
  if (((int)((uint)*(byte *)(param_1 + 8) << 0x1c) < 0) &&
     (-1 < (int)((uint)*(byte *)(param_1 + 8) << 0x1e))) {
    FUN_100a5b78(DAT_100ba04c | (DAT_100ba048 - DAT_100ba044) * 0x20 & 0xff00U,DAT_100ba054,
                 DAT_100ba050);
    *DAT_100ba058 = *DAT_100ba058 & 0xf3 | (byte)((((*DAT_100ba058 & 0xf) >> 2) + 1 & 3) << 2);
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
  }
  return;
}

