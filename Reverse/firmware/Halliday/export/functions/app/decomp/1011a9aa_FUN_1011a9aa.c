/* FUN_1011a9aa @ 0x1011a9aa */

int FUN_1011a9aa(int param_1)

{
  if ((0x3ffffff < param_1 + 0xf0000000U) && (0x3ffffff < param_1 + 0xc8000000U)) {
    if (param_1 + 0xcc000000U < 0x4000000) {
      param_1 = param_1 + 0x8000000;
    }
    return param_1;
  }
  return param_1 + 0x4000000;
}

