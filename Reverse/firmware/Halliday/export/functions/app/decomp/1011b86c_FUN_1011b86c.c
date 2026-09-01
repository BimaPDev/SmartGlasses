/* FUN_1011b86c @ 0x1011b86c */

uint FUN_1011b86c(uint *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_1 == (uint *)0x0) || ((int)param_1[2] < (int)param_3)) {
    param_3 = 0;
    param_2[1] = 0;
  }
  else {
    if (param_1[3] <= *param_1) {
      *param_1 = 0;
    }
    uVar2 = *param_1;
    uVar1 = param_1[3] - uVar2;
    if (uVar1 < param_3) {
      param_2[1] = uVar1;
    }
    else {
      param_2[1] = param_3;
    }
    *param_2 = param_1[4] + uVar2;
  }
  return param_3;
}

