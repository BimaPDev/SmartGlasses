/* FUN_2c65aa6e @ 0x2c65aa6e */

undefined4
FUN_2c65aa6e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined1 param_6,int param_7,int param_8)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  undefined8 uVar10;
  int local_80 [4];
  undefined1 auStack_6e [38];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [4];
  int local_2c [2];
  
  local_44 = param_7;
  local_48 = param_8;
  local_38 = param_3;
  uStack_34 = param_4;
  uVar10 = FUN_2c65a49c(auStack_30,param_5 + 0x6c);
  iVar5 = (int)uVar10;
  uVar6 = *(uint *)(param_5 + 0xc);
  local_80[0] = iVar5 + 0x26;
  piVar8 = local_80;
  uVar7 = uVar6 & 0x4a;
  if (uVar7 == 0x40) {
    local_80[2] = 0;
  }
  else {
    local_80[2] = 0;
    if (uVar7 != 8) {
      local_80[2] = 1;
    }
  }
  local_80[1] = uVar6;
  local_40 = local_80[0];
  local_3c = local_80[2];
  local_2c[0] = FUN_2c659d7c(&local_48,(int)((ulonglong)uVar10 >> 0x20),local_44,local_48);
  puVar4 = (undefined1 *)((int)&local_48 - local_2c[0]);
  if (*(char *)(iVar5 + 0x10) != '\0') {
    uVar1 = *(undefined1 *)(iVar5 + 0x25);
    iVar2 = -(local_2c[0] * 2 + 9U & 0xfffffff8);
    piVar8 = (int *)((int)local_80 + iVar2);
    puVar4 = auStack_6e + iVar2;
    *(undefined1 **)((int)local_80 + iVar2 + 8) = (undefined1 *)((int)&local_48 - local_2c[0]);
    *(int **)((int)local_80 + iVar2 + 0xc) = local_2c;
    *(int *)((int)local_80 + iVar2) = param_5;
    *(undefined1 **)((int)local_80 + iVar2 + 4) = puVar4;
    FUN_2c659c12(param_2,*(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0xc),uVar1);
  }
  puVar3 = puVar4;
  if (((local_3c == 0) && ((int)(uVar6 << 0x16) < 0)) && (local_44 != 0 || local_48 != 0)) {
    if (uVar7 == 0x40) {
      puVar3 = puVar4 + -1;
      *puVar3 = *(undefined1 *)(iVar5 + 0x2a);
      local_2c[0] = local_2c[0] + 1;
    }
    else {
      local_2c[0] = local_2c[0] + 2;
      puVar3 = puVar4 + -2;
      puVar4[-1] = *(undefined1 *)((local_40 - ((int)(uVar6 << 0x11) >> 0x1f)) + 2);
      *puVar3 = *(undefined1 *)(iVar5 + 0x2a);
    }
  }
  iVar5 = *(int *)(param_5 + 8);
  puVar4 = puVar3;
  piVar9 = piVar8;
  if (local_2c[0] < iVar5) {
    iVar2 = -(iVar5 + 7U & 0xfffffff8);
    piVar9 = (int *)((int)piVar8 + iVar2);
    puVar4 = (undefined1 *)((int)piVar8 + iVar2 + 0x10);
    *(undefined1 **)((int)piVar8 + iVar2 + 4) = puVar3;
    *(int **)((int)piVar8 + iVar2 + 8) = local_2c;
    *(undefined1 **)((int)piVar8 + iVar2) = puVar4;
    FUN_2c659cfe(param_2,param_6,iVar5,param_5);
  }
  *(undefined4 *)(param_5 + 8) = 0;
  *piVar9 = local_2c[0];
  FUN_2c65277c(param_1,local_38,uStack_34,puVar4);
  return param_1;
}

