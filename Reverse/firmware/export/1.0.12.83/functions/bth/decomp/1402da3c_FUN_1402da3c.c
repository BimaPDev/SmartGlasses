/* FUN_1402da3c @ 0x1402da3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1402da3c(uint param_1)

{
  if (0x3b < param_1) {
    return 1;
  }
  if (param_1 < 0x14) {
    _DAT_40000000 = 1 << (param_1 & 0xff);
    return 0;
  }
  if (param_1 < 0x1e) {
    _DAT_40000008 = 1 << (param_1 - 0x14 & 0xff);
    return 0;
  }
  if (param_1 < 0x29) {
    _DAT_40000010 = 1 << (param_1 - 0x1e & 0xff);
    return 0;
  }
  *(int *)(DAT_1402da9c + 0x40) = 1 << (param_1 - 0x29 & 0xff);
  return 0;
}

