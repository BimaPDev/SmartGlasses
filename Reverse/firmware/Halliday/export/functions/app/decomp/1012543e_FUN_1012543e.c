/* FUN_1012543e @ 0x1012543e */

void FUN_1012543e(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int local_14;
  undefined4 uStack_10;
  
  iVar2 = param_1;
  local_14 = param_2;
  uStack_10 = param_3;
  iVar1 = FUN_10125436();
  local_14 = 0;
  FUN_10086f50(param_1,0x13,&local_14,0,iVar2);
  if (local_14 != iVar1) {
    FUN_10125af4(param_1);
  }
  if (*(int *)(param_1 + 8) == 0) {
    if (local_14 != 0) {
      FUN_10089398(param_1);
      *(int *)(*(int *)(param_1 + 8) + 0x1c) = local_14;
    }
  }
  else {
    *(int *)(*(int *)(param_1 + 8) + 0x1c) = local_14;
  }
  if (local_14 != iVar1) {
    FUN_10125af4(param_1);
  }
  return;
}

