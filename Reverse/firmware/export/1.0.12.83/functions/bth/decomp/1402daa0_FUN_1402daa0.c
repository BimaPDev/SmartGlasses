/* FUN_1402daa0 @ 0x1402daa0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1402daa0(uint param_1)

{
  if (0x3b < param_1) {
    return 1;
  }
  if (param_1 < 0x14) {
    _DAT_40000004 = 1 << (param_1 & 0xff);
    return 0;
  }
  if (param_1 < 0x1e) {
    _DAT_4000000c = 1 << (param_1 - 0x14 & 0xff);
    return 0;
  }
  if (param_1 < 0x29) {
    _DAT_40000014 = 1 << (param_1 - 0x1e & 0xff);
    return 0;
  }
  *(int *)(DAT_1402dafc + 0x44) = 1 << (param_1 - 0x29 & 0xff);
  return 0;
}

