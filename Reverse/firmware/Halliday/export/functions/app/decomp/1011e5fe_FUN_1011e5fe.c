/* FUN_1011e5fe @ 0x1011e5fe */

bool FUN_1011e5fe(short *param_1,short *param_2)

{
  if (((*param_1 <= param_2[2]) && (*param_2 <= param_1[2])) && (param_1[1] <= param_2[3])) {
    return param_2[1] <= param_1[3];
  }
  return false;
}

