/* FUN_1012a90e @ 0x1012a90e */

undefined4 FUN_1012a90e(int *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_38 = *param_1;
  if ((*param_2 < local_38) || (iVar5 = param_1[2], iVar5 < *param_2)) {
    return 0;
  }
  iVar4 = param_1[1];
  if (param_2[1] < iVar4) {
    return 0;
  }
  iVar6 = param_1[3];
  if (iVar6 < param_2[1]) {
    return 0;
  }
  if (param_3 < 1) {
    return 1;
  }
  iVar3 = ((iVar5 + 1) - local_38) / 2;
  iVar2 = ((iVar6 + 1) - iVar4) / 2;
  if (iVar2 <= iVar3) {
    iVar3 = iVar2;
  }
  if (param_3 <= iVar3) {
    iVar3 = param_3;
  }
  iVar8 = local_38 + iVar3;
  iVar7 = iVar4 + iVar3;
  local_34 = iVar4;
  local_30 = iVar8;
  local_2c = iVar7;
  iVar2 = FUN_1012a90e(&local_38,param_2,0);
  if (iVar2 == 0) {
    local_34 = iVar6 - iVar3;
    local_2c = iVar6;
    iVar2 = FUN_1012a90e(&local_38,param_2,0);
    if (iVar2 == 0) {
      iVar2 = iVar5 - iVar3;
      local_38 = iVar2;
      local_30 = iVar5;
      iVar5 = FUN_1012a90e(&local_38,param_2,0);
      if (iVar5 == 0) {
        local_34 = iVar4;
        local_2c = iVar7;
        iVar5 = FUN_1012a90e(&local_38,param_2,0);
        if (iVar5 == 0) {
          return 1;
        }
        local_38 = iVar2 - iVar3;
        goto LAB_1012a988;
      }
      local_38 = iVar2 - iVar3;
    }
    else {
      local_30 = iVar8 + iVar3;
    }
    local_34 = (iVar6 - iVar3) - iVar3;
  }
  else {
    local_30 = iVar8 + iVar3;
LAB_1012a988:
    local_2c = iVar3 + iVar7;
  }
  uVar1 = FUN_1012a7fc(&local_38,param_2);
  return uVar1;
}

