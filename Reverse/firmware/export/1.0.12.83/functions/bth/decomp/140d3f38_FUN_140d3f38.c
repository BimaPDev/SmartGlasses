/* FUN_140d3f38 @ 0x140d3f38 */

undefined4
FUN_140d3f38(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined4 param_6,int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined8 uVar9;
  int local_f8 [44];
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
  uVar9 = FUN_140d38a0(auStack_30,param_5 + 0x6c);
  iVar2 = (int)uVar9;
  uVar5 = *(uint *)(param_5 + 0xc);
  local_f8[0] = iVar2 + 0x2c;
  piVar7 = local_f8;
  uVar6 = uVar5 & 0x4a;
  if (uVar6 == 0x40) {
    local_f8[2] = 0;
  }
  else {
    local_f8[2] = 0;
    if (uVar6 != 8) {
      local_f8[2] = 1;
    }
  }
  local_f8[1] = uVar5;
  local_40 = local_f8[0];
  local_3c = local_f8[2];
  local_2c[0] = FUN_140d2dd2(&local_48,(int)((ulonglong)uVar9 >> 0x20),local_44,local_48);
  piVar4 = local_f8 + (0x2c - local_2c[0]);
  if (*(char *)(iVar2 + 0x10) != '\0') {
    iVar1 = -(local_2c[0] * 8 + 8);
    piVar7 = (int *)((int)local_f8 + iVar1);
    piVar4 = (int *)((int)local_f8 + iVar1 + 0x18);
    *(int **)((int)local_f8 + iVar1 + 8) = local_f8 + (0x2c - local_2c[0]);
    *(int **)((int)local_f8 + iVar1 + 0xc) = local_2c;
    *(int *)((int)local_f8 + iVar1) = param_5;
    *(int **)((int)local_f8 + iVar1 + 4) = piVar4;
    FUN_140d2d3c(param_2,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc),
                 *(undefined4 *)(iVar2 + 0x28));
  }
  piVar3 = piVar4;
  if (((local_3c == 0) && ((int)(uVar5 << 0x16) < 0)) && (local_44 != 0 || local_48 != 0)) {
    if (uVar6 == 0x40) {
      piVar3 = piVar4 + -1;
      *piVar3 = *(int *)(iVar2 + 0x3c);
      local_2c[0] = local_2c[0] + 1;
    }
    else {
      local_2c[0] = local_2c[0] + 2;
      piVar3 = piVar4 + -2;
      piVar4[-1] = *(int *)(local_40 + (2 - ((int)(uVar5 << 0x11) >> 0x1f)) * 4);
      *piVar3 = *(int *)(iVar2 + 0x3c);
    }
  }
  iVar2 = *(int *)(param_5 + 8);
  piVar4 = piVar3;
  piVar8 = piVar7;
  if (local_2c[0] < iVar2) {
    iVar1 = -(iVar2 * 4 + 7U & 0xfffffff8);
    piVar8 = (int *)((int)piVar7 + iVar1);
    piVar4 = (int *)((int)piVar7 + iVar1 + 0x10);
    *(int **)((int)piVar7 + iVar1 + 4) = piVar3;
    *(int **)((int)piVar7 + iVar1 + 8) = local_2c;
    *(int **)((int)piVar7 + iVar1) = piVar4;
    FUN_140d39b6(param_2,param_6,iVar2,param_5);
  }
  *(undefined4 *)(param_5 + 8) = 0;
  *piVar8 = local_2c[0];
  FUN_140c9770(param_1,local_38,uStack_34,piVar4);
  return param_1;
}

