/* FUN_140d2464 @ 0x140d2464 */

uint FUN_140d2464(uint param_1,uint param_2)

{
  if (param_1 < 0xb) {
    if ((0x2f < param_2) && (param_2 < param_1 + 0x30)) {
      return param_2 - 0x30;
    }
  }
  else {
    if (param_2 - 0x30 < 10) {
      return param_2 - 0x30;
    }
    if (param_2 - 0x61 < 6) {
      return param_2 - 0x57;
    }
    if (param_2 - 0x41 < 6) {
      return param_2 - 0x37;
    }
  }
  return 0xffffffff;
}

