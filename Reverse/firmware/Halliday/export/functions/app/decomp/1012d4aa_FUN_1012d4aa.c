/* FUN_1012d4aa @ 0x1012d4aa */

uint FUN_1012d4aa(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1[2];
  if ((*param_1 + uVar2) - param_1[1] < param_2) {
    param_2 = 0;
  }
  else {
    uVar1 = param_1[7] + param_2;
    if (uVar2 <= uVar1) {
      uVar1 = uVar1 - uVar2;
    }
    param_1[1] = param_1[1] + param_2;
    param_1[7] = uVar1;
  }
  return param_2;
}

