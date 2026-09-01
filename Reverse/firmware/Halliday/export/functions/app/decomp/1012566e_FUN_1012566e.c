/* FUN_1012566e @ 0x1012566e */

void FUN_1012566e(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int local_14;
  undefined4 uStack_10;
  
  local_14 = param_2;
  uStack_10 = param_3;
  iVar1 = FUN_10126ad8(param_1,4,&local_14,0,param_1);
  if (iVar1 == 1) {
    if (local_14 == param_2) {
      return;
    }
  }
  else if (iVar1 != 0) {
    return;
  }
  FUN_10126dec(param_1,param_2,0);
  return;
}

