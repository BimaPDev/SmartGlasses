/* FUN_140d3b34 @ 0x140d3b34 */

undefined4 *
FUN_140d3b34(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,undefined4 param_6,byte param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int *piVar9;
  int local_58 [4];
  undefined1 auStack_48 [4];
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_34 [4];
  undefined4 local_30;
  undefined1 uStack_2c;
  
  piVar9 = local_58;
  local_44 = *(uint *)(param_5 + 0xc);
  local_40 = param_3;
  local_3c = param_4;
  if ((local_44 & 1) == 0) {
    local_58[0] = param_5;
    local_58[1] = param_6;
    local_58[2] = (uint)param_7;
    FUN_140d39d2(&local_30,param_2,param_3,param_4);
    goto LAB_140d3b6c;
  }
  iVar5 = FUN_140d38a0(auStack_34,param_5 + 0x6c);
  if (param_7 == 0) {
    puVar7 = *(undefined1 **)(iVar5 + 0x1c);
    iVar5 = *(int *)(iVar5 + 0x20);
  }
  else {
    puVar7 = *(undefined1 **)(iVar5 + 0x14);
    iVar5 = *(int *)(iVar5 + 0x18);
  }
  if (iVar5 < *(int *)(param_5 + 8)) {
    iVar6 = *(int *)(param_5 + 8) - iVar5;
    iVar1 = -(iVar6 * 4 + 7U & 0xfffffff8);
    piVar9 = (int *)((int)local_58 + iVar1);
    puVar8 = auStack_48 + iVar1;
    FUN_140d2504(puVar8,iVar6,param_6);
    uVar3 = local_3c;
    uVar2 = local_40;
    *(undefined4 *)(param_5 + 8) = 0;
    if ((local_44 & 0xb0) != 0x20) {
      *(int *)((int)local_58 + iVar1) = iVar6;
      FUN_140c9770(&local_30,uVar2,uVar3,puVar8);
      local_40 = local_30;
      local_3c = CONCAT31(local_3c._1_3_,uStack_2c);
      goto LAB_140d3c22;
    }
    *(int *)((int)local_58 + iVar1) = iVar5;
    FUN_140c9770(&local_30,local_40,local_3c,puVar7);
    uVar4 = uStack_2c;
    uVar2 = local_30;
    *(int *)((int)local_58 + iVar1) = iVar6;
    local_40 = uVar2;
    local_3c = CONCAT31(local_3c._1_3_,uVar4);
    puVar7 = puVar8;
  }
  else {
    *(undefined4 *)(param_5 + 8) = 0;
LAB_140d3c22:
    *piVar9 = iVar5;
  }
  FUN_140c9770(&local_30,local_40,local_3c,puVar7);
LAB_140d3b6c:
  local_3c = CONCAT31(local_3c._1_3_,uStack_2c);
  *param_1 = local_30;
  param_1[1] = local_3c;
  return param_1;
}

