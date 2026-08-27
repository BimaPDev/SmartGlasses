/* FUN_140cd93e @ 0x140cd93e */

undefined4
FUN_140cd93e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined1 param_6,int param_7,int param_8)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int local_80 [4];
  undefined1 auStack_6e [38];
  int local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  int local_34 [2];
  
  local_40 = param_3;
  uStack_3c = param_4;
  iVar1 = FUN_140cd4fc(auStack_38,param_5 + 0x6c);
  uVar7 = *(uint *)(param_5 + 0xc);
  local_80[0] = iVar1 + 0x26;
  piVar9 = local_80;
  local_44 = uVar7 & 0x4a;
  iVar5 = param_7;
  iVar6 = param_8;
  if ((local_44 == 0x40) || (local_44 == 8)) {
    iVar8 = 0;
  }
  else {
    if (param_8 < (int)(uint)(param_7 == 0)) {
      iVar5 = -param_7;
      iVar6 = -param_8 - (uint)(param_7 != 0);
    }
    iVar8 = 1;
  }
  local_80[1] = uVar7;
  local_80[2] = iVar8;
  local_48 = local_80[0];
  local_34[0] = FUN_140ccdd8(&local_48,local_80[0],iVar5,iVar6);
  puVar2 = (undefined1 *)((int)&local_48 - local_34[0]);
  if (*(char *)(iVar1 + 0x10) != '\0') {
    uVar4 = *(undefined1 *)(iVar1 + 0x25);
    iVar5 = -(local_34[0] * 2 + 9U & 0xfffffff8);
    piVar9 = (int *)((int)local_80 + iVar5);
    puVar2 = auStack_6e + iVar5;
    *(undefined1 **)((int)local_80 + iVar5 + 8) = (undefined1 *)((int)&local_48 - local_34[0]);
    *(int **)((int)local_80 + iVar5 + 0xc) = local_34;
    *(int *)((int)local_80 + iVar5) = param_5;
    *(undefined1 **)((int)local_80 + iVar5 + 4) = puVar2;
    FUN_140ccc6e(param_2,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),uVar4);
  }
  puVar3 = puVar2;
  if (iVar8 == 0) {
    if ((-1 < (int)(uVar7 << 0x16)) || (param_7 == 0 && param_8 == 0)) goto LAB_140cd9fe;
    if (local_44 != 0x40) {
      local_34[0] = local_34[0] + 2;
      puVar3 = puVar2 + -2;
      puVar2[-1] = *(undefined1 *)((local_48 - ((int)(uVar7 << 0x11) >> 0x1f)) + 2);
      *puVar3 = *(undefined1 *)(iVar1 + 0x2a);
      goto LAB_140cd9fe;
    }
    uVar4 = *(undefined1 *)(iVar1 + 0x2a);
  }
  else if (param_8 < 0) {
    uVar4 = *(undefined1 *)(iVar1 + 0x26);
  }
  else {
    if (-1 < (int)(uVar7 << 0x14)) goto LAB_140cd9fe;
    uVar4 = *(undefined1 *)(iVar1 + 0x27);
  }
  puVar2[-1] = uVar4;
  puVar3 = puVar2 + -1;
  local_34[0] = local_34[0] + 1;
LAB_140cd9fe:
  iVar5 = *(int *)(param_5 + 8);
  puVar2 = puVar3;
  piVar10 = piVar9;
  if (local_34[0] < iVar5) {
    iVar6 = -(iVar5 + 7U & 0xfffffff8);
    piVar10 = (int *)((int)piVar9 + iVar6);
    puVar2 = (undefined1 *)((int)piVar9 + iVar6 + 0x10);
    *(undefined1 **)((int)piVar9 + iVar6 + 4) = puVar3;
    *(int **)((int)piVar9 + iVar6 + 8) = local_34;
    *(undefined1 **)((int)piVar9 + iVar6) = puVar2;
    FUN_140ccd5a(param_2,param_6,iVar5,param_5);
  }
  *(undefined4 *)(param_5 + 8) = 0;
  *piVar10 = local_34[0];
  FUN_140c5900(param_1,local_40,uStack_3c,puVar2);
  return param_1;
}

