/* FUN_1012809a @ 0x1012809a */

void FUN_1012809a(int *param_1,int param_2,int param_3,int param_4,short param_5,undefined4 param_6)

{
  int iVar1;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if ((param_4 == 0) && (param_5 == 0x100)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = param_2 + -1;
    param_1[3] = param_3 + -1;
  }
  else {
    local_24 = 0;
    local_20 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = param_2;
    local_1c = param_3;
    local_18 = param_2;
    local_14 = param_3;
    FUN_10093448(&local_30,param_4,param_5,param_6);
    FUN_10093448(&local_28,param_4,param_5,param_6);
    FUN_10093448(&local_20,param_4,param_5,param_6);
    FUN_10093448(&local_18,param_4,param_5,param_6);
    iVar1 = local_18;
    if (local_20 <= local_18) {
      iVar1 = local_20;
    }
    if (local_28 <= iVar1) {
      iVar1 = local_28;
    }
    if (local_30 <= iVar1) {
      iVar1 = local_30;
    }
    if (local_18 < local_20) {
      local_18 = local_20;
    }
    if (local_18 < local_28) {
      local_18 = local_28;
    }
    if (local_18 < local_30) {
      local_18 = local_30;
    }
    param_1[2] = local_18 + 2;
    *param_1 = iVar1 + -2;
    iVar1 = local_14;
    if (local_1c <= local_14) {
      iVar1 = local_1c;
    }
    if (local_24 <= iVar1) {
      iVar1 = local_24;
    }
    if (local_2c <= iVar1) {
      iVar1 = local_2c;
    }
    if (local_14 < local_1c) {
      local_14 = local_1c;
    }
    if (local_14 < local_24) {
      local_14 = local_24;
    }
    if (local_14 < local_2c) {
      local_14 = local_2c;
    }
    param_1[1] = iVar1 + -2;
    param_1[3] = local_14 + 2;
  }
  return;
}

