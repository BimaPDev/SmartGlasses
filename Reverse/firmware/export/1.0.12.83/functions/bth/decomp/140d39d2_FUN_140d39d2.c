/* FUN_140d39d2 @ 0x140d39d2 */

undefined4
FUN_140d39d2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int local_a8 [24];
  undefined1 auStack_48 [4];
  uint local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  int local_34 [2];
  
  local_40 = param_3;
  uStack_3c = param_4;
  iVar1 = FUN_140d38a0(auStack_38,param_5 + 0x6c);
  uVar5 = *(uint *)(param_5 + 0xc);
  piVar7 = local_a8;
  local_44 = uVar5 & 0x4a;
  iVar2 = param_7;
  if ((local_44 == 0x40) || (local_44 == 8)) {
    iVar6 = 0;
  }
  else {
    if (param_7 < 1) {
      iVar2 = -param_7;
    }
    iVar6 = 1;
  }
  local_a8[0] = iVar6;
  local_34[0] = FUN_140d2d66(auStack_48,iVar2,iVar1 + 0x2c,uVar5);
  piVar4 = local_a8 + (0x18 - local_34[0]);
  if (*(char *)(iVar1 + 0x10) != '\0') {
    iVar2 = -(local_34[0] * 8 + 8);
    piVar7 = (int *)((int)local_a8 + iVar2);
    piVar4 = (int *)((int)local_a8 + iVar2 + 0x18);
    *(int **)((int)local_a8 + iVar2 + 8) = local_a8 + (0x18 - local_34[0]);
    *(int **)((int)local_a8 + iVar2 + 0xc) = local_34;
    *(int *)((int)local_a8 + iVar2) = param_5;
    *(int **)((int)local_a8 + iVar2 + 4) = piVar4;
    FUN_140d2d3c(param_2,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),
                 *(undefined4 *)(iVar1 + 0x28));
  }
  piVar3 = piVar4;
  if (iVar6 == 0) {
    if ((-1 < (int)(uVar5 << 0x16)) || (param_7 == 0)) goto LAB_140d3a7e;
    if (local_44 != 0x40) {
      local_34[0] = local_34[0] + 2;
      piVar3 = piVar4 + -2;
      piVar4[-1] = *(int *)(iVar1 + 0x2c + (2 - ((int)(uVar5 << 0x11) >> 0x1f)) * 4);
      *piVar3 = *(int *)(iVar1 + 0x3c);
      goto LAB_140d3a7e;
    }
    iVar2 = *(int *)(iVar1 + 0x3c);
  }
  else if (param_7 < 0) {
    iVar2 = *(int *)(iVar1 + 0x2c);
  }
  else {
    if (-1 < (int)(uVar5 << 0x14)) goto LAB_140d3a7e;
    iVar2 = *(int *)(iVar1 + 0x30);
  }
  piVar4[-1] = iVar2;
  piVar3 = piVar4 + -1;
  local_34[0] = local_34[0] + 1;
LAB_140d3a7e:
  iVar2 = *(int *)(param_5 + 8);
  piVar4 = piVar3;
  piVar8 = piVar7;
  if (local_34[0] < iVar2) {
    iVar1 = -(iVar2 * 4 + 7U & 0xfffffff8);
    piVar8 = (int *)((int)piVar7 + iVar1);
    piVar4 = (int *)((int)piVar7 + iVar1 + 0x10);
    *(int **)((int)piVar7 + iVar1 + 4) = piVar3;
    *(int **)((int)piVar7 + iVar1 + 8) = local_34;
    *(int **)((int)piVar7 + iVar1) = piVar4;
    FUN_140d39b6(param_2,param_6,iVar2,param_5);
  }
  *(undefined4 *)(param_5 + 8) = 0;
  *piVar8 = local_34[0];
  FUN_140c9770(param_1,local_40,uStack_3c,piVar4);
  return param_1;
}

