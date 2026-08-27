/* FUN_140ccc2a @ 0x140ccc2a */

void FUN_140ccc2a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6,int param_7,int *param_8)

{
  int iVar1;
  int iVar2;
  
  if (param_5 == 0) {
    iVar2 = *param_8;
  }
  else {
    iVar2 = param_5 - param_7;
  }
  iVar1 = FUN_140ccb98(param_6,param_4,param_2,param_3,param_7,param_7 + iVar2,param_3);
  param_6 = iVar1 - param_6;
  if (param_5 != 0) {
    if (*param_8 != iVar2) {
      FUN_140e5278(iVar1,param_5);
    }
    param_6 = param_6 + (*param_8 - iVar2);
  }
  *param_8 = param_6;
  return;
}

