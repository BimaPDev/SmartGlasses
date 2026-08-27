/* FUN_1402db68 @ 0x1402db68 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1402db68(uint param_1)

{
  if (0x46 < param_1) {
    return 1;
  }
  if (param_1 < 0x14) {
    _DAT_40000034 = 1 << (param_1 & 0xff);
    return 0;
  }
  if (param_1 < 0x1e) {
    _DAT_4000003c = 1 << (param_1 - 0x14 & 0xff);
    return 0;
  }
  if (param_1 < 0x29) {
    _DAT_40000044 = 1 << (param_1 - 0x1e & 0xff);
    return 0;
  }
  if (0x3b < param_1) {
    if (param_1 == 0x46) {
      FUN_1402e17c();
      FUN_1402e4e0();
    }
    *(int *)(DAT_1402dbf0 + 200) = 1 << (param_1 - 0x3c & 0xff);
    return 0;
  }
  *(int *)(DAT_1402dbf0 + 0x10) = 1 << (param_1 - 0x29 & 0xff);
  return 0;
}

