/* FUN_140cdc22 @ 0x140cdc22 */

undefined4
FUN_140cdc22(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,undefined1 param_8,undefined1 param_9)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 local_a0;
  undefined8 local_98;
  char acStack_90 [52];
  uint local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 auStack_4c [4];
  int local_48;
  undefined4 local_44;
  undefined1 auStack_40 [20];
  
  uVar16 = CONCAT44(param_2,param_1);
  local_58 = param_5;
  uStack_54 = param_6;
  iVar3 = FUN_140cd4fc(auStack_4c,param_7 + 0x6c);
  iVar10 = *(int *)(param_7 + 4);
  if (iVar10 < 0) {
    iVar10 = 6;
  }
  FUN_140d8a2a(param_7,auStack_40,param_9);
  local_5c = *(uint *)(param_7 + 0xc) & 0x104;
  pcVar8 = acStack_90;
  if (local_5c == 0x104) {
    local_44 = FUN_140c02cc();
    local_a0 = uVar16;
    local_48 = FUN_140c54c0(&local_44,pcVar8,0x2d,auStack_40);
  }
  else {
    local_44 = FUN_140c02cc();
    local_a0 = CONCAT44(local_a0._4_4_,iVar10);
    local_98 = uVar16;
    local_48 = FUN_140c54c0(&local_44,pcVar8,0x2d,auStack_40);
  }
  puVar13 = &local_a0;
  if (0x2c < local_48) {
    iVar5 = -(local_48 + 8U & 0xfffffff8);
    puVar13 = (undefined8 *)((int)&local_a0 + iVar5);
    pcVar8 = acStack_90 + iVar5;
    if (local_5c == 0x104) {
      local_5c = local_48 + 1U;
      local_44 = FUN_140c02cc();
      uVar2 = local_5c;
      *(undefined8 *)((int)&local_a0 + iVar5) = uVar16;
      local_48 = FUN_140c54c0(&local_44,pcVar8,uVar2,auStack_40);
    }
    else {
      local_5c = local_48 + 1U;
      local_44 = FUN_140c02cc();
      uVar2 = local_5c;
      *(int *)((int)&local_a0 + iVar5) = iVar10;
      *(undefined8 *)(acStack_90 + iVar5 + -8) = uVar16;
      local_48 = FUN_140c54c0(&local_44,pcVar8,uVar2,auStack_40);
      puVar13 = (undefined8 *)((int)&local_a0 + iVar5);
    }
  }
  uVar4 = FUN_140cc580(param_7 + 0x6c);
  iVar10 = -(local_48 + 7U & 0xfffffff8);
  puVar12 = (undefined1 *)((int)puVar13 + iVar10 + 0x10);
  FUN_140c5558(uVar4,pcVar8,pcVar8 + local_48,puVar12);
  local_5c = local_48;
  local_44 = CONCAT31(local_44._1_3_,0x2e);
  iVar5 = FUN_140c3d8c(pcVar8,local_48,&local_44);
  puVar6 = (undefined1 *)0x0;
  if (iVar5 != 0) {
    puVar6 = puVar12 + (iVar5 - (int)pcVar8);
    *(undefined1 *)((int)puVar13 + (iVar5 - (int)pcVar8) + iVar10 + 0x10) =
         *(undefined1 *)(iVar3 + 0x24);
  }
  puVar11 = puVar12;
  puVar14 = (undefined1 *)((int)puVar13 + iVar10);
  if ((*(char *)(iVar3 + 0x10) != '\0') &&
     (((puVar6 != (undefined1 *)0x0 || ((int)local_5c < 3)) ||
      ((puVar14 = (undefined1 *)((int)puVar13 + iVar10), (byte)pcVar8[1] - 0x30 < 10 &&
       (puVar14 = (undefined1 *)((int)puVar13 + iVar10), (byte)pcVar8[2] - 0x30 < 10)))))) {
    iVar5 = -(local_5c * 2 + 7 & 0xfffffff8);
    puVar14 = (undefined1 *)((int)puVar13 + iVar5 + iVar10);
    puVar11 = (undefined1 *)((int)puVar13 + iVar5 + iVar10 + 0x10);
    if ((*pcVar8 == '-') || (*pcVar8 == '+')) {
      iVar7 = local_5c + -1;
      iVar9 = 1;
      *puVar11 = *puVar12;
      local_48 = iVar7;
    }
    else {
      iVar9 = 0;
    }
    uVar1 = *(undefined1 *)(iVar3 + 0x25);
    *(int **)((int)puVar13 + iVar5 + iVar10 + 0xc) = &local_48;
    *(undefined1 **)((int)puVar13 + iVar5 + iVar10 + 8) = puVar12 + iVar9;
    *(undefined1 **)((int)puVar13 + iVar5 + iVar10) = puVar6;
    *(undefined1 **)((int)puVar13 + iVar5 + iVar10 + 4) = puVar11 + iVar9;
    FUN_140ccc2a(param_4,*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc),uVar1);
    local_48 = local_48 + iVar9;
  }
  iVar3 = *(int *)(param_7 + 8);
  puVar6 = puVar11;
  piVar15 = (int *)puVar14;
  if (local_48 < iVar3) {
    iVar10 = -(iVar3 + 7U & 0xfffffff8);
    piVar15 = (int *)(puVar14 + iVar10);
    puVar6 = puVar14 + iVar10 + 0x10;
    *(undefined1 **)(puVar14 + iVar10 + 4) = puVar11;
    *(int **)(puVar14 + iVar10 + 8) = &local_48;
    *(undefined1 **)(puVar14 + iVar10) = puVar6;
    FUN_140ccd5a(param_4,param_8,iVar3,param_7);
  }
  *(undefined4 *)(param_7 + 8) = 0;
  *piVar15 = local_48;
  FUN_140c5900(param_3,local_58,uStack_54,puVar6);
  return param_3;
}

