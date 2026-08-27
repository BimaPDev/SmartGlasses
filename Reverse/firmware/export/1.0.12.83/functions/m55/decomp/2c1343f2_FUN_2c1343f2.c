/* FUN_2c1343f2 @ 0x2c1343f2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c1343f2(uint param_1)

{
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    iRam58000034 = 1 << (param_1 & 0xff);
    return 0;
  }
  if (param_1 < 0x26) {
    iRam5800003c = 1 << (param_1 - 0x15 & 0xff);
    return 0;
  }
  if (param_1 < 0x3e) {
    iRam58000044 = 1 << (param_1 - 0x26 & 0xff);
    return 0;
  }
  if (0x50 < param_1) {
    if (param_1 == 0x5b) {
      func_0x2c134b00();
      func_0x2c134264();
    }
    *(int *)(_DAT_2c134474 + 200) = 1 << (param_1 - 0x51 & 0xff);
    return 0;
  }
  *(int *)(_DAT_2c134474 + 0x10) = 1 << (param_1 - 0x3e & 0xff);
  return 0;
}

