/* FUN_1013110e @ 0x1013110e */

int FUN_1013110e(undefined1 *param_1,undefined1 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_c;
  
  *param_1 = param_2;
  param_1[1] = (char)param_3;
  param_1[2] = 0;
  local_c = param_4;
  iVar1 = FUN_1011ea40(param_1 + 3,&local_c,param_3,param_1 + 3,param_1);
  return iVar1 + param_3;
}

