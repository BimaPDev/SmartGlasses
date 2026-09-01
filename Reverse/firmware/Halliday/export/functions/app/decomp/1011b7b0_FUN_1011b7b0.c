/* FUN_1011b7b0 @ 0x1011b7b0 */

undefined4 FUN_1011b7b0(int *param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    if (param_1[1] < param_2) {
      return 0xffffffff;
    }
  }
  else {
    if (param_3 == 1) {
      param_2 = param_2 + param_1[2];
      if ((param_2 < *param_1) || (*param_1 + param_1[1] < param_2)) {
        return 0xffffffff;
      }
      goto LAB_1011b7d4;
    }
    if (param_3 != 2) {
      return 0xffffffea;
    }
    if (0 < param_2) {
      return 0xffffffff;
    }
    param_2 = param_2 + param_1[1];
    if (param_2 < 0) {
      return 0xffffffff;
    }
  }
  param_2 = param_2 + *param_1;
LAB_1011b7d4:
  param_1[2] = param_2;
  return 0;
}

