/* FUN_140d42a4 @ 0x140d42a4 */

undefined4
FUN_140d42a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,undefined1 param_9)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined8 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined8 local_a0;
  undefined8 local_98;
  char acStack_90 [52];
  uint local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 auStack_4c [4];
  uint local_48;
  undefined4 local_44;
  undefined1 auStack_40 [20];
  
  uVar13 = CONCAT44(param_2,param_1);
  local_58 = param_5;
  uStack_54 = param_6;
  iVar1 = FUN_140d38a0(auStack_4c,param_7 + 0x6c);
  iVar8 = *(int *)(param_7 + 4);
  if (iVar8 < 0) {
    iVar8 = 6;
  }
  FUN_140d8a2a(param_7,auStack_40,param_9);
  local_5c = *(uint *)(param_7 + 0xc) & 0x104;
  pcVar7 = acStack_90;
  if (local_5c == 0x104) {
    local_44 = FUN_140c02cc();
    local_a0 = uVar13;
    local_48 = FUN_140c54c0(&local_44,pcVar7,0x2d,auStack_40);
  }
  else {
    local_44 = FUN_140c02cc();
    local_a0 = CONCAT44(local_a0._4_4_,iVar8);
    local_98 = uVar13;
    local_48 = FUN_140c54c0(&local_44,pcVar7,0x2d,auStack_40);
  }
  puVar11 = &local_a0;
  if (0x2c < (int)local_48) {
    iVar3 = -(local_48 + 8 & 0xfffffff8);
    puVar11 = (undefined8 *)((int)&local_a0 + iVar3);
    pcVar7 = acStack_90 + iVar3;
    if (local_5c == 0x104) {
      local_5c = local_48 + 1;
      local_44 = FUN_140c02cc();
      *(undefined8 *)((int)&local_a0 + iVar3) = uVar13;
      local_48 = FUN_140c54c0(&local_44,pcVar7,local_5c,auStack_40);
    }
    else {
      local_5c = local_48 + 1;
      local_44 = FUN_140c02cc();
      *(int *)((int)&local_a0 + iVar3) = iVar8;
      *(undefined8 *)(acStack_90 + iVar3 + -8) = uVar13;
      local_48 = FUN_140c54c0(&local_44,pcVar7,local_5c,auStack_40);
      puVar11 = (undefined8 *)((int)&local_a0 + iVar3);
    }
  }
  uVar2 = FUN_140d2a04(param_7 + 0x6c);
  iVar8 = -(local_48 * 4 + 7 & 0xfffffff8);
  piVar9 = (int *)((int)puVar11 + iVar8 + 0x10);
  FUN_140c975c(uVar2,pcVar7,pcVar7 + local_48,piVar9);
  if (local_48 == 0) {
    piVar4 = (int *)0x0;
    uVar5 = local_48;
  }
  else {
    local_5c = local_48;
    iVar3 = FUN_140bd5f0(pcVar7,0x2e);
    uVar5 = local_5c;
    piVar4 = (int *)0x0;
    if (iVar3 != 0) {
      piVar4 = piVar9 + (iVar3 - (int)pcVar7);
      piVar9[iVar3 - (int)pcVar7] = *(int *)(iVar1 + 0x24);
    }
  }
  piVar10 = piVar9;
  piVar6 = (int *)((int)puVar11 + iVar8);
  if ((*(char *)(iVar1 + 0x10) != '\0') &&
     (((piVar4 != (int *)0x0 || ((int)uVar5 < 3)) ||
      ((piVar6 = (int *)((int)puVar11 + iVar8), (byte)pcVar7[1] - 0x30 < 10 &&
       (piVar6 = (int *)((int)puVar11 + iVar8), (byte)pcVar7[2] - 0x30 < 10)))))) {
    piVar6 = (int *)((int)puVar11 + uVar5 * -8 + iVar8);
    piVar10 = piVar6 + 4;
    if ((*pcVar7 == '-') || (*pcVar7 == '+')) {
      iVar8 = 1;
      *piVar10 = *piVar9;
      local_48 = uVar5 - 1;
    }
    else {
      iVar8 = 0;
    }
    piVar6[3] = (int)&local_48;
    piVar6[2] = (int)(piVar9 + iVar8);
    *piVar6 = (int)piVar4;
    piVar6[1] = (int)(piVar10 + iVar8);
    FUN_140d2cf4(param_4,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),
                 *(undefined4 *)(iVar1 + 0x28));
    local_48 = local_48 + iVar8;
  }
  iVar1 = *(int *)(param_7 + 8);
  piVar9 = piVar10;
  puVar12 = (uint *)piVar6;
  if ((int)local_48 < iVar1) {
    iVar8 = -(iVar1 * 4 + 7U & 0xfffffff8);
    puVar12 = (uint *)((int)piVar6 + iVar8);
    piVar9 = (int *)((int)piVar6 + iVar8 + 0x10);
    *(int **)((int)piVar6 + iVar8 + 4) = piVar10;
    *(uint **)((int)piVar6 + iVar8 + 8) = &local_48;
    *(int **)((int)piVar6 + iVar8) = piVar9;
    FUN_140d39b6(param_4,param_8,iVar1,param_7);
  }
  *(undefined4 *)(param_7 + 8) = 0;
  *puVar12 = local_48;
  FUN_140c9770(param_3,local_58,uStack_54,piVar9);
  return param_3;
}

