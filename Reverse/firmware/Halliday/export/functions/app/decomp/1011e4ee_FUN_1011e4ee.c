/* FUN_1011e4ee @ 0x1011e4ee */

void FUN_1011e4ee(short *param_1,short param_2)

{
  param_1[2] = (param_1[2] + param_2) - *param_1;
  *param_1 = param_2;
  return;
}

