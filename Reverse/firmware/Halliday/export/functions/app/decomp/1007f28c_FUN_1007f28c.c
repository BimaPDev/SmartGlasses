/* FUN_1007f28c @ 0x1007f28c */

undefined4 FUN_1007f28c(int *param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  code *pcVar10;
  ushort uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  undefined2 local_50;
  ushort local_4c [2];
  undefined4 local_48 [2];
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined1 local_39;
  undefined2 local_38;
  ushort local_34 [2];
  int local_30;
  undefined1 uStack_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  
  uVar8 = 0;
  bVar3 = true;
  piVar15 = (int *)param_1[3];
  uVar12 = (uint)*(ushort *)((int)piVar15 + 0xc2);
  uVar14 = (uint)*(byte *)(piVar15[0x23] + 2);
  for (uVar4 = 0; uVar4 < uVar12; uVar4 = uVar4 + 1) {
    uVar17 = (uint)*(ushort *)(*(int *)(piVar15[0x23] + 8) + uVar4 * 2);
    bVar18 = (uVar17 & 0xfff) != 0xfff;
    if (bVar18) {
      uVar8 = uVar8 + 1;
    }
    if (bVar18) {
      uVar8 = uVar8 & 0xffff;
    }
    if ((uVar17 & 0xfff) != uVar4) {
      bVar3 = false;
    }
  }
  if ((int)uVar8 < (int)(*(ushort *)(*(int *)(piVar15[0x1d] + 0xc) + uVar14 * 8 + 4) + 1)) {
    bVar3 = false;
  }
  if (*(ushort *)(*piVar15 + 0xe) == 0) {
    return 0;
  }
  iVar16 = *param_1;
  bVar1 = *(byte *)(iVar16 + 0x10);
  if (bVar3) {
    if ((3 < bVar1) && (*(code **)(iVar16 + 0xc) != (code *)0x0)) {
      (**(code **)(iVar16 + 0xc))(DAT_1007f378,DAT_1007f374,0x243);
    }
    iVar13 = param_1[3];
    iVar16 = *(int *)(*(int *)(iVar13 + 0x74) + 0xc);
    iVar9 = iVar16 + uVar14 * 8;
    uVar2 = *(ushort *)(iVar9 + 2);
    uVar11 = *(ushort *)(iVar9 + 4);
    local_50 = *(ushort *)
                (*(int *)(*(int *)(iVar13 + 0x74) + 8) + (uint)*(ushort *)(iVar16 + uVar14 * 8) * 2)
    ;
    local_2b = 0;
    local_2a = 0;
    local_29 = 0;
    local_28 = 0;
    local_3f = 0;
    local_3e = 0;
    local_3d = 0;
    local_27 = 0;
    local_26 = 0;
    local_25 = 0;
    local_24 = 0;
    local_3c = 0;
    local_3a = 0;
    local_39 = 0;
    local_38 = (ushort)local_38._1_1_ << 8;
    while( true ) {
      uVar11 = uVar11 + 1;
      puVar6 = *(undefined1 **)(iVar13 + 0x74);
      if (*(ushort *)(iVar13 + 0xc2) <= uVar11) break;
      FUN_10120a74(param_1,local_48,*puVar6,local_50 & 0xfff,uVar11);
      FUN_10120a74(param_1,local_34,**(undefined1 **)(iVar13 + 0x74),uVar2 & 0xfff,uVar11);
      iVar16 = FUN_10120a4a(param_1,local_48,local_34);
      if (iVar16 != 1) {
        return 0;
      }
    }
    iVar16 = *(int *)(puVar6 + 0xc);
    *(ushort *)(*(int *)(puVar6 + 8) + (uint)*(ushort *)(iVar16 + uVar14 * 8) * 2) =
         uVar2 & 0xf000 | (ushort)(((uint)uVar2 << 0x14) >> 0x14);
    *(undefined4 *)(iVar16 + uVar14 * 8) = 0xffffffff;
    *(undefined4 *)(uVar14 * 8 + iVar16 + 4) = 0xffffffff;
    FUN_10120a74(param_1,local_48,**(undefined1 **)(iVar13 + 0x74),local_50 & 0xfff,0);
    iVar16 = thunk_FUN_1007e6ec(param_1,local_48);
    if (iVar16 != 1) {
      iVar16 = FUN_1007ecec(param_1,local_4c,&local_50,0);
      if (iVar16 != 1) {
        return 0;
      }
      local_50._0_1_ = (undefined1)local_4c[0];
      local_50 = CONCAT11((byte)(local_4c[0] >> 8) & 0x1f |
                          (byte)(((local_4c[0] >> 0xd) - 1 & 7) << 5),(undefined1)local_50);
    }
    if ((local_50._1_1_ & 0xe0) != 0xe0) {
      local_50 = CONCAT11(local_50._1_1_ + 0x20,(undefined1)local_50);
    }
    iVar16 = FUN_1012113a(param_1);
    if (iVar16 == 0xff) {
      if (*(char *)(*param_1 + 0x10) == '\0') {
        return 0;
      }
      pcVar10 = *(code **)(*param_1 + 0xc);
      if (pcVar10 == (code *)0x0) {
        return 0;
      }
      (*pcVar10)(DAT_1007eecc,DAT_1007eec8,0x90);
      return 0;
    }
    *(ushort *)(*(int *)(*(int *)(iVar13 + 0x74) + 0x10) + iVar16 * 2) = local_50;
    *(undefined1 *)(*(int *)(iVar13 + 0x8c) + 1) = 0xff;
    puVar6 = *(undefined1 **)(iVar13 + 0x8c);
    *(undefined2 *)(puVar6 + 2) = 0xffff;
    *puVar6 = 0;
    return 1;
  }
  if ((param_2 != 1) || (uVar12 / (uVar12 / *(ushort *)(*piVar15 + 0xe) + 1 & 0xffff) <= uVar8)) {
    if ((3 < bVar1) && (*(code **)(iVar16 + 0xc) != (code *)0x0)) {
      (**(code **)(iVar16 + 0xc))(DAT_1007f380,DAT_1007f374,0x24b);
    }
    uVar5 = FUN_1007effc(param_1,uVar14,0);
    return uVar5;
  }
  if ((3 < bVar1) && (*(code **)(iVar16 + 0xc) != (code *)0x0)) {
    (**(code **)(iVar16 + 0xc))(DAT_1007f37c,DAT_1007f374,0x247);
  }
  local_23 = 0;
  local_22 = 0;
  local_21 = 0;
  iVar9 = param_1[3];
  local_3c = *(ushort *)(*(int *)(*(int *)(iVar9 + 0x74) + 0xc) + uVar14 * 8 + 2);
  iVar16 = FUN_1007e8dc(param_1,&local_30,0);
  if (iVar16 == 1) {
    local_38 = *(undefined2 *)(*(int *)(*(int *)(iVar9 + 0x74) + 0x10) + local_30 * 2);
    iVar16 = FUN_1012124a(param_1,&local_3c,&local_38,uVar14);
    if (iVar16 == 1) {
      puVar6 = *(undefined1 **)(iVar9 + 0x74);
      *(short *)(*(int *)(puVar6 + 0xc) + uVar14 * 8 + 2) = local_38;
      local_48[0] = 0;
      FUN_10120a74(param_1,&uStack_2c,*puVar6,local_3c & 0xfff);
      iVar16 = thunk_FUN_1007e6ec(param_1,&uStack_2c);
      if (iVar16 == 1) {
LAB_1007efce:
        if ((local_3c._1_1_ & 0xe0) != 0xe0) {
          local_3c = CONCAT11(local_3c._1_1_ + 0x20,(undefined1)local_3c);
        }
        *(ushort *)(*(int *)(*(int *)(iVar9 + 0x74) + 0x10) + local_30 * 2) = local_3c;
        return 1;
      }
      iVar16 = FUN_1007ecec(param_1,local_34,&local_3c,0);
      if (iVar16 == 1) {
        local_3c._0_1_ = (undefined1)local_34[0];
        local_3c = CONCAT11((byte)(local_34[0] >> 8) & 0x1f |
                            (byte)(((local_34[0] >> 0xd) - 1 & 7) << 5),(undefined1)local_3c);
        goto LAB_1007efce;
      }
      if (*(char *)(*param_1 + 0x10) == '\0') {
        return 0;
      }
      pcVar10 = *(code **)(*param_1 + 0xc);
      if (pcVar10 == (code *)0x0) {
        return 0;
      }
      uVar7 = 0x169;
      uVar5 = DAT_1007eff8;
    }
    else {
      if (*(char *)(*param_1 + 0x10) == '\0') {
        return 0;
      }
      pcVar10 = *(code **)(*param_1 + 0xc);
      if (pcVar10 == (code *)0x0) {
        return 0;
      }
      uVar7 = 0x158;
      uVar5 = DAT_1007eff4;
    }
    (*pcVar10)(uVar5,DAT_1007eff0,uVar7);
  }
  return 0;
}

