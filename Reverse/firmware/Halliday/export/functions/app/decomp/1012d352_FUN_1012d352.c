/* FUN_1012d352 @ 0x1012d352 */

uint FUN_1012d352(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[2] - param_1[7];
  if (param_3 <= uVar1) {
    uVar1 = param_3;
  }
  uVar2 = (*param_1 + param_1[2]) - param_1[1];
  if (uVar2 <= uVar1) {
    uVar1 = uVar2;
  }
  *param_2 = param_1[4] + param_1[7];
  return uVar1;
}

