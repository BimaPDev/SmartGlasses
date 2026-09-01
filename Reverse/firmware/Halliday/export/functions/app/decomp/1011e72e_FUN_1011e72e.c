/* FUN_1011e72e @ 0x1011e72e */

bool FUN_1011e72e(short *param_1,short *param_2)

{
  if (((*param_2 <= *param_1) && (param_2[1] <= param_1[1])) && (param_1[2] <= param_2[2])) {
    return param_1[3] <= param_2[3];
  }
  return false;
}

