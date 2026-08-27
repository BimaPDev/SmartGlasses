/* FUN_2c65eb04 @ 0x2c65eb04 */

void FUN_2c65eb04(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1] - (param_2 + param_3);
  if ((iVar1 != 0) && (param_3 != 0)) {
    iVar2 = *param_1;
    FUN_2c65e9c0(param_2 + iVar2,param_2 + param_3 + iVar2,iVar1,iVar2,param_4);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 - param_3;
  *(undefined1 *)(*param_1 + (iVar1 - param_3)) = 0;
  return;
}

