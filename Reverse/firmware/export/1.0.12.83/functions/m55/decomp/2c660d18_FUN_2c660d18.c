/* FUN_2c660d18 @ 0x2c660d18 */

undefined4
FUN_2c660d18(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int local_a0 [24];
  uint local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [4];
  int local_2c [2];
  
  local_38 = param_3;
  uStack_34 = param_4;
  iVar2 = FUN_2c660988(auStack_30,param_5 + 0x6c);
  uVar5 = *(uint *)(param_5 + 0xc);
  piVar6 = local_a0;
  local_40 = uVar5 & 0x4a;
  if (local_40 == 0x40) {
    local_a0[0] = 0;
  }
  else {
    local_a0[0] = 0;
    if (local_40 != 8) {
      local_a0[0] = 1;
    }
  }
  local_3c = local_a0[0];
  local_2c[0] = FUN_2c65fe52(&local_40,param_7,iVar2 + 0x2c,uVar5);
  piVar4 = local_a0 + (0x18 - local_2c[0]);
  if (*(char *)(iVar2 + 0x10) != '\0') {
    iVar1 = -(local_2c[0] * 8 + 8);
    piVar6 = (int *)((int)local_a0 + iVar1);
    piVar4 = (int *)((int)local_a0 + iVar1 + 0x18);
    *(int **)((int)local_a0 + iVar1 + 8) = local_a0 + (0x18 - local_2c[0]);
    *(int **)((int)local_a0 + iVar1 + 0xc) = local_2c;
    *(int *)((int)local_a0 + iVar1) = param_5;
    *(int **)((int)local_a0 + iVar1 + 4) = piVar4;
    FUN_2c65fe28(param_2,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc),
                 *(undefined4 *)(iVar2 + 0x28));
  }
  piVar3 = piVar4;
  if (((local_3c == 0) && ((int)(uVar5 << 0x16) < 0)) && (param_7 != 0)) {
    if (local_40 == 0x40) {
      piVar3 = piVar4 + -1;
      *piVar3 = *(int *)(iVar2 + 0x3c);
      local_2c[0] = local_2c[0] + 1;
    }
    else {
      local_2c[0] = local_2c[0] + 2;
      piVar3 = piVar4 + -2;
      piVar4[-1] = *(int *)(iVar2 + 0x2c + (2 - ((int)(uVar5 << 0x11) >> 0x1f)) * 4);
      *piVar3 = *(int *)(iVar2 + 0x3c);
    }
  }
  iVar2 = *(int *)(param_5 + 8);
  piVar4 = piVar3;
  piVar7 = piVar6;
  if (local_2c[0] < iVar2) {
    iVar1 = -(iVar2 * 4 + 7U & 0xfffffff8);
    piVar7 = (int *)((int)piVar6 + iVar1);
    piVar4 = (int *)((int)piVar6 + iVar1 + 0x10);
    *(int **)((int)piVar6 + iVar1 + 4) = piVar3;
    *(int **)((int)piVar6 + iVar1 + 8) = local_2c;
    *(int **)((int)piVar6 + iVar1) = piVar4;
    FUN_2c660a9e(param_2,param_6,iVar2,param_5);
  }
  *(undefined4 *)(param_5 + 8) = 0;
  *piVar7 = local_2c[0];
  FUN_2c6565e8(param_1,local_38,uStack_34,piVar4);
  return param_1;
}

