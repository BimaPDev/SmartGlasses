/* FUN_2c658fb4 @ 0x2c658fb4 */

int FUN_2c658fb4(uint param_1,uint param_2)

{
  if (param_1 < 0xb) {
    if ((param_2 < 0x30) || ((param_1 + 0x30 & 0xff) <= param_2)) {
      return -1;
    }
  }
  else if (9 < param_2 - 0x30) {
    if (param_2 - 0x61 < 6) {
      return param_2 - 0x57;
    }
    if (5 < param_2 - 0x41) {
      return -1;
    }
    return param_2 - 0x37;
  }
  return param_2 - 0x30;
}

