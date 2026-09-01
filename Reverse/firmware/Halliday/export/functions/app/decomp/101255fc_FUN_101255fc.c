/* FUN_101255fc @ 0x101255fc */

void FUN_101255fc(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int local_14;
  undefined4 uStack_10;
  
  local_14 = param_2;
  uStack_10 = param_3;
  iVar1 = FUN_10126ad8(param_1,8,&local_14,0,param_1);
  if (iVar1 == 1) {
    if (local_14 == param_2) {
      return;
    }
  }
  else if (iVar1 != 0) {
    return;
  }
  FUN_10126e00(param_1,param_2,0);
  return;
}

