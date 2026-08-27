/* FUN_140d3db6 @ 0x140d3db6 */

undefined4
FUN_140d3db6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined4 param_6,int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int local_f8 [44];
  int local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  int local_34 [2];
  
  local_40 = param_3;
  uStack_3c = param_4;
  iVar1 = FUN_140d38a0(auStack_38,param_5 + 0x6c);
  uVar6 = *(uint *)(param_5 + 0xc);
  local_f8[0] = iVar1 + 0x2c;
  piVar8 = local_f8;
  local_44 = uVar6 & 0x4a;
  iVar2 = param_7;
  iVar5 = param_8;
  if ((local_44 == 0x40) || (local_44 == 8)) {
    iVar7 = 0;
  }
  else {
    if (param_8 < (int)(uint)(param_7 == 0)) {
      iVar2 = -param_7;
      iVar5 = -param_8 - (uint)(param_7 != 0);
    }
    iVar7 = 1;
  }
  local_f8[1] = uVar6;
  local_f8[2] = iVar7;
  local_48 = local_f8[0];
  local_34[0] = FUN_140d2dd2(&local_48,local_f8[0],iVar2,iVar5);
  piVar4 = local_f8 + (0x2c - local_34[0]);
  if (*(char *)(iVar1 + 0x10) != '\0') {
    iVar2 = -(local_34[0] * 8 + 8);
    piVar8 = (int *)((int)local_f8 + iVar2);
    piVar4 = (int *)((int)local_f8 + iVar2 + 0x18);
    *(int **)((int)local_f8 + iVar2 + 8) = local_f8 + (0x2c - local_34[0]);
    *(int **)((int)local_f8 + iVar2 + 0xc) = local_34;
    *(int *)((int)local_f8 + iVar2) = param_5;
    *(int **)((int)local_f8 + iVar2 + 4) = piVar4;
    FUN_140d2d3c(param_2,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),
                 *(undefined4 *)(iVar1 + 0x28));
  }
  piVar3 = piVar4;
  if (iVar7 == 0) {
    if ((-1 < (int)(uVar6 << 0x16)) || (param_7 == 0 && param_8 == 0)) goto LAB_140d3e70;
    if (local_44 != 0x40) {
      local_34[0] = local_34[0] + 2;
      piVar3 = piVar4 + -2;
      piVar4[-1] = *(int *)(local_48 + (2 - ((int)(uVar6 << 0x11) >> 0x1f)) * 4);
      *piVar3 = *(int *)(iVar1 + 0x3c);
      goto LAB_140d3e70;
    }
    iVar2 = *(int *)(iVar1 + 0x3c);
  }
  else if (param_8 < 0) {
    iVar2 = *(int *)(iVar1 + 0x2c);
  }
  else {
    if (-1 < (int)(uVar6 << 0x14)) goto LAB_140d3e70;
    iVar2 = *(int *)(iVar1 + 0x30);
  }
  piVar4[-1] = iVar2;
  piVar3 = piVar4 + -1;
  local_34[0] = local_34[0] + 1;
LAB_140d3e70:
  iVar2 = *(int *)(param_5 + 8);
  piVar4 = piVar3;
  piVar9 = piVar8;
  if (local_34[0] < iVar2) {
    iVar5 = -(iVar2 * 4 + 7U & 0xfffffff8);
    piVar9 = (int *)((int)piVar8 + iVar5);
    piVar4 = (int *)((int)piVar8 + iVar5 + 0x10);
    *(int **)((int)piVar8 + iVar5 + 4) = piVar3;
    *(int **)((int)piVar8 + iVar5 + 8) = local_34;
    *(int **)((int)piVar8 + iVar5) = piVar4;
    FUN_140d39b6(param_2,param_6,iVar2,param_5);
  }
  *(undefined4 *)(param_5 + 8) = 0;
  *piVar9 = local_34[0];
  FUN_140c9770(param_1,local_40,uStack_3c,piVar4);
  return param_1;
}

