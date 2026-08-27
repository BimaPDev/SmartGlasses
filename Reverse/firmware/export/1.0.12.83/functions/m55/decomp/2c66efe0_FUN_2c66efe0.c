/* FUN_2c66efe0 @ 0x2c66efe0 */

void FUN_2c66efe0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 / param_3;
  iVar1 = param_2 - param_3 * iVar2;
  if (param_2 < 0) {
    if (0 < iVar1) {
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + param_3;
    }
  }
  else if (iVar1 < 0) {
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 - param_3;
  }
  *param_1 = iVar2;
  param_1[1] = iVar1;
  return;
}

