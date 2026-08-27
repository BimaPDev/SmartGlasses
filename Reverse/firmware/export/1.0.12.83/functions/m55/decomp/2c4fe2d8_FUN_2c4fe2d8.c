/* FUN_2c4fe2d8 @ 0x2c4fe2d8 */

/* WARNING: Type propagation algorithm not settling */

bool FUN_2c4fe2d8(uint param_1)

{
  bool bVar1;
  
  if (param_1 - 0x21 < 0x1f) {
    if ((int)((DAT_2c4fe330 >> (param_1 - 0x21 & 0xff)) << 0x1f) < 0) {
      return true;
    }
  }
  else if (param_1 == 0xff0c) {
    return true;
  }
  bVar1 = 0x3001 < param_1;
  if (param_1 != 0x3002) {
    bVar1 = DAT_2c4fe334 + param_1 != 0;
  }
  if (!bVar1 || (param_1 == 0x3002 || DAT_2c4fe334 + param_1 == 1)) {
    return true;
  }
  return param_1 == 0xff1f || (param_1 == 0xff01 || param_1 == 0x3001);
}

