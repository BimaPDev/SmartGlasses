/* FUN_1011fb6e @ 0x1011fb6e */

bool FUN_1011fb6e(uint param_1)

{
  if ((param_1 & 0x20000000) == 0) {
    return false;
  }
  param_1 = param_1 & 0x4003ffff;
  if (((0x1fff < param_1) && (0xffff < param_1 - 0x10000)) && (0x3bfff < param_1 + 0xc0000000)) {
    return param_1 - 0x35000 < 0x3c000;
  }
  return true;
}

