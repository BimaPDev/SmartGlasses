/* FUN_140cd544 @ 0x140cd544 */

undefined4
FUN_140cd544(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined1 param_6,int param_7)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int local_68 [4];
  undefined1 auStack_56 [18];
  undefined1 auStack_44 [4];
  int local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [4];
  int local_2c [2];
  
  local_38 = param_3;
  uStack_34 = param_4;
  iVar1 = FUN_140cd4fc(auStack_30,param_5 + 0x6c);
  uVar6 = *(uint *)(param_5 + 0xc);
  local_40 = iVar1 + 0x26;
  piVar8 = local_68;
  local_3c = uVar6 & 0x4a;
  iVar5 = param_7;
  if ((local_3c == 0x40) || (local_3c == 8)) {
    iVar7 = 0;
  }
  else {
    if (param_7 < 1) {
      iVar5 = -param_7;
    }
    iVar7 = 1;
  }
  local_68[0] = iVar7;
  local_2c[0] = FUN_140ccd76(auStack_44,iVar5,local_40,uVar6);
  puVar2 = auStack_44 + -local_2c[0];
  if (*(char *)(iVar1 + 0x10) != '\0') {
    uVar4 = *(undefined1 *)(iVar1 + 0x25);
    iVar5 = -(local_2c[0] * 2 + 9U & 0xfffffff8);
    piVar8 = (int *)((int)local_68 + iVar5);
    puVar2 = auStack_56 + iVar5;
    *(undefined1 **)((int)local_68 + iVar5 + 8) = auStack_44 + -local_2c[0];
    *(int **)((int)local_68 + iVar5 + 0xc) = local_2c;
    *(int *)((int)local_68 + iVar5) = param_5;
    *(undefined1 **)((int)local_68 + iVar5 + 4) = puVar2;
    FUN_140ccc6e(param_2,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),uVar4);
  }
  puVar3 = puVar2;
  if (iVar7 == 0) {
    if ((-1 < (int)(uVar6 << 0x16)) || (param_7 == 0)) goto LAB_140cd5f2;
    if (local_3c != 0x40) {
      local_2c[0] = local_2c[0] + 2;
      puVar3 = puVar2 + -2;
      puVar2[-1] = *(undefined1 *)((local_40 - ((int)(uVar6 << 0x11) >> 0x1f)) + 2);
      *puVar3 = *(undefined1 *)(iVar1 + 0x2a);
      goto LAB_140cd5f2;
    }
    uVar4 = *(undefined1 *)(iVar1 + 0x2a);
  }
  else if (param_7 < 0) {
    uVar4 = *(undefined1 *)(iVar1 + 0x26);
  }
  else {
    if (-1 < (int)(uVar6 << 0x14)) goto LAB_140cd5f2;
    uVar4 = *(undefined1 *)(iVar1 + 0x27);
  }
  puVar2[-1] = uVar4;
  puVar3 = puVar2 + -1;
  local_2c[0] = local_2c[0] + 1;
LAB_140cd5f2:
  iVar5 = *(int *)(param_5 + 8);
  puVar2 = puVar3;
  piVar9 = piVar8;
  if (local_2c[0] < iVar5) {
    iVar1 = -(iVar5 + 7U & 0xfffffff8);
    piVar9 = (int *)((int)piVar8 + iVar1);
    puVar2 = (undefined1 *)((int)piVar8 + iVar1 + 0x10);
    *(undefined1 **)((int)piVar8 + iVar1 + 4) = puVar3;
    *(int **)((int)piVar8 + iVar1 + 8) = local_2c;
    *(undefined1 **)((int)piVar8 + iVar1) = puVar2;
    FUN_140ccd5a(param_2,param_6,iVar5,param_5);
  }
  *(undefined4 *)(param_5 + 8) = 0;
  *piVar9 = local_2c[0];
  FUN_140c5900(param_1,local_38,uStack_34,puVar2);
  return param_1;
}

