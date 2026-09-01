/* FUN_100af4e0 @ 0x100af4e0 */

int FUN_100af4e0(uint param_1)

{
  if (param_1 == 0x2c) {
    return 0xac44;
  }
  if (param_1 < 0x2d) {
    if (param_1 == 0xb) {
      return 0x2b11;
    }
    if (param_1 == 0x16) {
      return 0x5622;
    }
  }
  else if (param_1 == 0x58) {
    return DAT_100af510;
  }
  return param_1 * 1000;
}

