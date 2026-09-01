/* FUN_1011df0c @ 0x1011df0c */

int FUN_1011df0c(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if ((uint)param_1[1] < (uint)(param_3 + iVar1)) {
    param_3 = param_1[1] - iVar1;
  }
  FUN_1011ea40(param_2,*param_1 + iVar1,param_3,iVar1,param_4);
  param_1[2] = param_1[2] + param_3;
  return param_3;
}

