/* FUN_1011ea70 @ 0x1011ea70 */

void FUN_1011ea70(undefined2 *param_1,short param_2,int param_3)

{
  undefined2 uVar1;
  
  if (param_3 == 1) {
    uVar1 = 4;
  }
  else {
    uVar1 = 0;
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = (short)param_1 + -0x7ff0;
  param_1[5] = param_2 + -0x10;
  param_1[6] = uVar1;
  param_1[7] = 0;
  return;
}

