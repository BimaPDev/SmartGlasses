/* FUN_101281b0 @ 0x101281b0 */

void FUN_101281b0(undefined4 param_1,int param_2,int param_3,int *param_4,int param_5,int param_6,
                 int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = *param_4;
  iVar3 = param_4[1];
  param_2 = param_2 + (param_3 * iVar3 + iVar2) * 2;
  iVar1 = param_4[2];
  param_5 = param_5 + (param_7[1] * param_6 + *param_7) * 2;
  piVar4 = param_4;
  for (; iVar3 <= param_4[3]; iVar3 = iVar3 + 1) {
    param_2 = FUN_1011ea40(param_2,param_5,((iVar1 + 1) - iVar2) * 2,param_2,piVar4);
    param_5 = param_5 + param_6 * 2;
    param_2 = param_2 + param_3 * 2;
  }
  return;
}

