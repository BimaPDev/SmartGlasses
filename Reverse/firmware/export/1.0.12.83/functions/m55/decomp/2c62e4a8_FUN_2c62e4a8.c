/* FUN_2c62e4a8 @ 0x2c62e4a8 */

int FUN_2c62e4a8(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  if ((param_3 <= param_1) && (param_3 >= param_2)) {
    return param_5;
  }
  if ((param_2 < param_1) || (param_3 < param_2)) {
    if ((param_1 <= param_3) && (param_3 <= param_2)) {
      return param_5;
    }
    if ((param_1 < param_2) || (param_3 > param_2)) {
      return ((param_5 - param_4) * (param_1 - param_2)) / (param_3 - param_2) + param_4;
    }
  }
  return param_4;
}

