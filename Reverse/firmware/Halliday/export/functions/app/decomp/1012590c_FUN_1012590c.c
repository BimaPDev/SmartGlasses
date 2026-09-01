/* FUN_1012590c @ 0x1012590c */

void FUN_1012590c(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_34 = param_2[1];
  local_38 = *param_2;
  local_28 = param_2[2];
  local_2c = param_2[3];
  local_30 = local_38;
  local_24 = local_34;
  local_20 = local_28;
  local_1c = local_2c;
  FUN_101258b0(param_1,&local_38);
  FUN_101258b0(param_1,&local_30,param_3,param_4);
  FUN_101258b0(param_1,&local_28,param_3,param_4);
  FUN_101258b0(param_1,&local_20,param_3,param_4);
  iVar1 = local_20;
  if (local_28 <= local_20) {
    iVar1 = local_28;
  }
  if (local_30 <= iVar1) {
    iVar1 = local_30;
  }
  if (local_38 < iVar1) {
    *param_2 = local_38;
  }
  else {
    *param_2 = iVar1;
  }
  iVar1 = local_20;
  if (local_20 < local_28) {
    iVar1 = local_28;
  }
  if (iVar1 < local_30) {
    iVar1 = local_30;
  }
  if (iVar1 < local_38) {
    param_2[2] = local_38;
  }
  else {
    param_2[2] = iVar1;
  }
  iVar1 = local_1c;
  if (local_24 <= local_1c) {
    iVar1 = local_24;
  }
  if (local_2c <= iVar1) {
    iVar1 = local_2c;
  }
  if (local_34 < iVar1) {
    param_2[1] = local_34;
  }
  else {
    param_2[1] = iVar1;
  }
  iVar1 = local_1c;
  if (local_1c < local_24) {
    iVar1 = local_24;
  }
  if (iVar1 < local_2c) {
    iVar1 = local_2c;
  }
  if (iVar1 < local_34) {
    param_2[3] = local_34;
  }
  else {
    param_2[3] = iVar1;
  }
  FUN_1012a862(param_2,5);
  return;
}

