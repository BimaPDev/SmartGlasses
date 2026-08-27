/* FUN_2c65a746 @ 0x2c65a746 */

undefined4
FUN_2c65a746(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined1 param_6,int param_7)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int local_68 [4];
  undefined1 auStack_56 [18];
  undefined1 auStack_44 [4];
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [4];
  int local_2c [2];
  
  local_38 = param_3;
  uStack_34 = param_4;
  iVar3 = FUN_2c65a49c(auStack_30,param_5 + 0x6c);
  uVar6 = *(uint *)(param_5 + 0xc);
  local_40 = iVar3 + 0x26;
  piVar8 = local_68;
  uVar7 = uVar6 & 0x4a;
  if (uVar7 == 0x40) {
    local_68[0] = 0;
  }
  else {
    local_68[0] = 0;
    if (uVar7 != 8) {
      local_68[0] = 1;
    }
  }
  local_3c = local_68[0];
  local_2c[0] = FUN_2c659d1a(auStack_44,param_7,local_40,uVar6);
  puVar5 = auStack_44 + -local_2c[0];
  if (*(char *)(iVar3 + 0x10) != '\0') {
    uVar1 = *(undefined1 *)(iVar3 + 0x25);
    iVar2 = -(local_2c[0] * 2 + 9U & 0xfffffff8);
    piVar8 = (int *)((int)local_68 + iVar2);
    puVar5 = auStack_56 + iVar2;
    *(undefined1 **)((int)local_68 + iVar2 + 8) = auStack_44 + -local_2c[0];
    *(int **)((int)local_68 + iVar2 + 0xc) = local_2c;
    *(int *)((int)local_68 + iVar2) = param_5;
    *(undefined1 **)((int)local_68 + iVar2 + 4) = puVar5;
    FUN_2c659c12(param_2,*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc),uVar1);
  }
  puVar4 = puVar5;
  if (((local_3c == 0) && ((int)(uVar6 << 0x16) < 0)) && (param_7 != 0)) {
    if (uVar7 == 0x40) {
      puVar4 = puVar5 + -1;
      *puVar4 = *(undefined1 *)(iVar3 + 0x2a);
      local_2c[0] = local_2c[0] + 1;
    }
    else {
      local_2c[0] = local_2c[0] + 2;
      puVar4 = puVar5 + -2;
      puVar5[-1] = *(undefined1 *)((local_40 - ((int)(uVar6 << 0x11) >> 0x1f)) + 2);
      *puVar4 = *(undefined1 *)(iVar3 + 0x2a);
    }
  }
  iVar3 = *(int *)(param_5 + 8);
  puVar5 = puVar4;
  piVar9 = piVar8;
  if (local_2c[0] < iVar3) {
    iVar2 = -(iVar3 + 7U & 0xfffffff8);
    piVar9 = (int *)((int)piVar8 + iVar2);
    puVar5 = (undefined1 *)((int)piVar8 + iVar2 + 0x10);
    *(undefined1 **)((int)piVar8 + iVar2 + 4) = puVar4;
    *(int **)((int)piVar8 + iVar2 + 8) = local_2c;
    *(undefined1 **)((int)piVar8 + iVar2) = puVar5;
    FUN_2c659cfe(param_2,param_6,iVar3,param_5);
  }
  *(undefined4 *)(param_5 + 8) = 0;
  *piVar9 = local_2c[0];
  FUN_2c65277c(param_1,local_38,uStack_34,puVar5);
  return param_1;
}

