/* FUN_1007effc @ 0x1007effc */

undefined4 FUN_1007effc(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  int iVar9;
  uint uVar10;
  undefined2 local_68;
  ushort local_64 [2];
  undefined2 local_60;
  ushort local_5c [2];
  ushort local_58 [2];
  int local_54;
  undefined1 auStack_50 [20];
  undefined1 auStack_3c [24];
  
  iVar9 = param_1[3];
  local_68 = *(ushort *)(*(int *)(*(int *)(iVar9 + 0x74) + 0xc) + param_2 * 8 + 2);
  iVar2 = FUN_1007e8dc(param_1,&local_54,0);
  if (iVar2 != 1) {
    return 0;
  }
  iVar2 = *(int *)(iVar9 + 0x74);
  uVar1 = *(ushort *)(iVar9 + 0xc2);
  local_64[0] = *(ushort *)(*(int *)(iVar2 + 0x10) + local_54 * 2);
  local_60 = *(ushort *)
              (*(int *)(iVar2 + 8) + (uint)*(ushort *)(*(int *)(iVar2 + 0xc) + param_2 * 8) * 2);
  for (uVar10 = 0; uVar7 = uVar10 & 0xffff, uVar7 < uVar1; uVar10 = uVar10 + 1) {
    uVar6 = *(ushort *)(*(int *)(*(int *)(iVar9 + 0x8c) + 8) + uVar10 * 2) & 0xfff;
    if (uVar6 == 0xfff) {
      local_5c[0] = local_60;
      uVar6 = uVar7;
      if (uVar7 != 0) goto LAB_1007f0e2;
      uVar5 = 2;
      uVar6 = 0;
LAB_1007f12e:
      iVar2 = FUN_1012116e(param_1,local_5c,local_64,uVar6,uVar5);
      if (iVar2 != 1) {
        if (*(char *)(*param_1 + 0x10) == '\0') {
          return 0;
        }
        pcVar8 = *(code **)(*param_1 + 0xc);
        if (pcVar8 == (code *)0x0) {
          return 0;
        }
        uVar5 = 0x1b5;
        uVar3 = DAT_1007f284;
        goto LAB_1007f162;
      }
    }
    else {
      local_5c[0] = local_68;
      if (uVar7 == 0) {
        uVar5 = 1;
        goto LAB_1007f12e;
      }
LAB_1007f0e2:
      FUN_10120a74(param_1,auStack_50,**(undefined1 **)(iVar9 + 0x74),local_5c[0] & 0xfff,uVar6);
      FUN_10120a74(param_1,auStack_3c,**(undefined1 **)(iVar9 + 0x74),local_64[0] & 0xfff,uVar10);
      iVar2 = FUN_10120a4a(param_1,auStack_50,auStack_3c);
      if (iVar2 != 1) {
        return 0;
      }
    }
  }
  puVar4 = *(undefined1 **)(iVar9 + 0x74);
  *(ushort *)(*(int *)(puVar4 + 8) + (uint)*(ushort *)(*(int *)(puVar4 + 0xc) + param_2 * 8) * 2) =
       local_64[0];
  FUN_10120a74(param_1,auStack_50,*puVar4,local_60 & 0xfff,0);
  iVar2 = thunk_FUN_1007e6ec(param_1,auStack_50);
  if (iVar2 != 1) {
    iVar2 = FUN_1007ecec(param_1,local_58,&local_60,0);
    if (iVar2 != 1) {
      if (*(char *)(*param_1 + 0x10) == '\0') {
        return 0;
      }
      pcVar8 = *(code **)(*param_1 + 0xc);
      if (pcVar8 == (code *)0x0) {
        return 0;
      }
      uVar5 = 0x1d3;
      uVar3 = DAT_1007f280;
      goto LAB_1007f162;
    }
    local_60._0_1_ = (undefined1)local_58[0];
    local_60 = CONCAT11((byte)(local_58[0] >> 8) & 0x1f |
                        (byte)(((local_58[0] >> 0xd) - 1 & 7) << 5),(undefined1)local_60);
  }
  if ((local_60._1_1_ & 0xe0) != 0xe0) {
    local_60 = CONCAT11(local_60._1_1_ + 0x20,(undefined1)local_60);
  }
  puVar4 = *(undefined1 **)(iVar9 + 0x74);
  *(ushort *)(*(int *)(puVar4 + 0x10) + local_54 * 2) = local_60;
  FUN_10120a74(param_1,auStack_50,*puVar4,local_68 & 0xfff,0);
  iVar2 = thunk_FUN_1007e6ec(param_1,auStack_50);
  if (iVar2 != 1) {
    iVar2 = FUN_1007ecec(param_1,local_58,&local_68,0);
    if (iVar2 != 1) {
      if (*(char *)(*param_1 + 0x10) == '\0') {
        return 0;
      }
      pcVar8 = *(code **)(*param_1 + 0xc);
      if (pcVar8 == (code *)0x0) {
        return 0;
      }
      uVar5 = 0x1ec;
      uVar3 = DAT_1007f280;
      goto LAB_1007f162;
    }
    local_68._0_1_ = (undefined1)local_58[0];
    local_68 = CONCAT11((byte)(local_58[0] >> 8) & 0x1f |
                        (byte)(((local_58[0] >> 0xd) - 1 & 7) << 5),(undefined1)local_68);
  }
  iVar2 = *(int *)(*(int *)(iVar9 + 0x74) + 0xc);
  *(undefined4 *)(iVar2 + param_2 * 8) = 0xffffffff;
  *(undefined4 *)(param_2 * 8 + iVar2 + 4) = 0xffffffff;
  iVar2 = FUN_1012113a(param_1);
  if (iVar2 != 0xff) {
    if ((local_68._1_1_ & 0xe0) != 0xe0) {
      local_68 = CONCAT11(local_68._1_1_ + 0x20,(undefined1)local_68);
    }
    *(ushort *)(*(int *)(*(int *)(iVar9 + 0x74) + 0x10) + iVar2 * 2) = local_68;
    *(undefined1 *)(*(int *)(iVar9 + 0x8c) + 1) = 0xff;
    puVar4 = *(undefined1 **)(iVar9 + 0x8c);
    *(undefined2 *)(puVar4 + 2) = 0xffff;
    *puVar4 = 0;
    return 1;
  }
  if (*(char *)(*param_1 + 0x10) == '\0') {
    return 0;
  }
  pcVar8 = *(code **)(*param_1 + 0xc);
  if (pcVar8 == (code *)0x0) {
    return 0;
  }
  uVar5 = 0x1f7;
  local_54 = 0xff;
  uVar3 = DAT_1007f288;
LAB_1007f162:
  (*pcVar8)(uVar3,DAT_1007f27c,uVar5);
  return 0;
}

