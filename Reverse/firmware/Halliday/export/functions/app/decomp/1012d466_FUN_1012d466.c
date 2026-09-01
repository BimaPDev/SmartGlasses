/* FUN_1012d466 @ 0x1012d466 */

uint FUN_1012d466(int *param_1,uint param_2)

{
  uint uVar1;
  
  if ((uint)(param_1[1] - *param_1) < param_2) {
    param_2 = 0;
  }
  else {
    *param_1 = *param_1 + param_2;
    uVar1 = param_1[6] + param_2;
    param_1[6] = uVar1;
    if ((uint)param_1[2] <= uVar1) {
      param_1[6] = uVar1 - param_1[2];
    }
  }
  return param_2;
}

