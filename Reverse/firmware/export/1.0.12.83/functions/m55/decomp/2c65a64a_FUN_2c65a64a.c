/* FUN_2c65a64a @ 0x2c65a64a */

undefined4 *
FUN_2c65a64a(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,byte param_6,byte param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int local_58 [4];
  uint local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_34 [4];
  undefined4 local_30;
  undefined1 uStack_2c;
  
  piVar9 = local_58;
  local_58[1] = (int)param_6;
  local_44 = *(uint *)(param_5 + 0xc);
  local_40 = param_3;
  local_3c = param_4;
  if ((local_44 & 1) == 0) {
    local_58[0] = param_5;
    local_58[2] = (uint)param_7;
    FUN_2c65a4e4(&local_30,param_2,param_3,param_4);
    goto LAB_2c65a684;
  }
  local_48 = local_58[1];
  iVar5 = FUN_2c65a49c(auStack_34,param_5 + 0x6c);
  if (param_7 == 0) {
    iVar7 = *(int *)(iVar5 + 0x1c);
    iVar5 = *(int *)(iVar5 + 0x20);
  }
  else {
    iVar7 = *(int *)(iVar5 + 0x14);
    iVar5 = *(int *)(iVar5 + 0x18);
  }
  if (iVar5 < *(int *)(param_5 + 8)) {
    iVar6 = *(int *)(param_5 + 8) - iVar5;
    iVar1 = -(iVar6 + 7U & 0xfffffff8);
    piVar9 = (int *)((int)local_58 + iVar1);
    iVar8 = (int)&local_48 + iVar1;
    FUN_2c659024(iVar8,iVar6,local_48);
    uVar3 = local_3c;
    uVar2 = local_40;
    *(undefined4 *)(param_5 + 8) = 0;
    if ((local_44 & 0xb0) != 0x20) {
      *(int *)((int)local_58 + iVar1) = iVar6;
      FUN_2c65277c(&local_30,uVar2,uVar3,iVar8);
      local_40 = local_30;
      local_3c = CONCAT31(local_3c._1_3_,uStack_2c);
      goto LAB_2c65a738;
    }
    *(int *)((int)local_58 + iVar1) = iVar5;
    FUN_2c65277c(&local_30,local_40,local_3c,iVar7);
    uVar4 = uStack_2c;
    uVar2 = local_30;
    *(int *)((int)local_58 + iVar1) = iVar6;
    local_40 = uVar2;
    local_3c = CONCAT31(local_3c._1_3_,uVar4);
    iVar7 = iVar8;
  }
  else {
    *(undefined4 *)(param_5 + 8) = 0;
LAB_2c65a738:
    *piVar9 = iVar5;
  }
  FUN_2c65277c(&local_30,local_40,local_3c,iVar7);
LAB_2c65a684:
  local_3c = CONCAT31(local_3c._1_3_,uStack_2c);
  *param_1 = local_30;
  param_1[1] = local_3c;
  return param_1;
}

