/* FUN_1402dbf4 @ 0x1402dbf4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1402dbf4(uint param_1)

{
  if (0x46 < param_1) {
    return 1;
  }
  if (param_1 < 0x14) {
    _DAT_40000038 = 1 << (param_1 & 0xff);
    return 0;
  }
  if (param_1 < 0x1e) {
    _DAT_40000040 = 1 << (param_1 - 0x14 & 0xff);
    return 0;
  }
  if (param_1 < 0x29) {
    _DAT_40000048 = 1 << (param_1 - 0x1e & 0xff);
    return 0;
  }
  if (param_1 < 0x3c) {
    *(int *)(DAT_1402dc74 + 0x14) = 1 << (param_1 - 0x29 & 0xff);
    return 0;
  }
  *(int *)(DAT_1402dc74 + 0xcc) = 1 << (param_1 - 0x3c & 0xff);
  return 0;
}

