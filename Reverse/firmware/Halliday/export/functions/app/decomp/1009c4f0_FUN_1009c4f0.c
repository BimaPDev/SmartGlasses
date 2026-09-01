/* FUN_1009c4f0 @ 0x1009c4f0 */

void FUN_1009c4f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,int param_6,int param_7,char param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int local_a0;
  uint local_9c;
  undefined4 local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  int local_74;
  uint local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  
  iVar5 = param_6 % 0x5a;
  iVar1 = param_4;
  if (iVar5 < 1) {
    iVar1 = 0;
  }
  iVar4 = param_7 % 0x5a;
  if (0 < iVar5) {
    iVar1 = 0x5a - iVar5;
  }
  iVar1 = (param_7 - (param_6 + iVar4)) - iVar1;
  uVar2 = param_6 / 0x5a;
  uVar3 = param_7 / 0x5a;
  iVar6 = iVar1 / 0x5a;
  local_a0 = iVar5;
  local_98 = param_1;
  if ((uVar2 == uVar3) && (iVar1 < 0x5a)) {
    local_9c = uVar2 & 3;
    if (-1 < (int)-uVar2) {
      local_9c = -(-uVar2 & 3);
    }
    local_74 = iVar5;
    local_70 = local_9c;
    local_6c = param_1;
    FUN_1009c220(&local_74);
    if (local_a0 == 0x5a) {
      local_94 = local_68;
      local_8c = local_60;
      local_84 = local_58;
      local_7c = local_50;
      local_90 = local_64;
      local_88 = local_5c;
      local_80 = local_54;
      local_78 = local_4c;
      local_9c = local_70;
      local_98 = local_6c;
      local_a0 = local_74;
    }
    else {
      uVar2 = (uint)*(ushort *)(DAT_1009c974 + ((iVar4 + local_a0) - iVar5) * 2);
      fVar14 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
      fVar16 = DAT_1009c978 - fVar14;
      fVar12 = (fVar14 * local_58 + local_60 * fVar16) * DAT_1009c97c;
      fVar9 = (local_60 * fVar14 + local_68 * fVar16) * DAT_1009c97c;
      fVar11 = (fVar14 * fVar12 + fVar16 * fVar9) * DAT_1009c97c;
      fVar13 = (fVar14 * local_54 + fVar16 * local_5c) * DAT_1009c97c;
      fVar8 = (fVar14 * local_5c + fVar16 * local_64) * DAT_1009c97c;
      fVar10 = (fVar14 * fVar13 + fVar16 * fVar8) * DAT_1009c97c;
      fVar18 = (float)VectorUnsignedToFloat
                                ((uint)*(ushort *)(DAT_1009c974 + local_a0 * 2),
                                 (byte)(in_fpscr >> 0x16) & 3);
      local_78 = (fVar16 * fVar10 +
                 (fVar16 * fVar13 + (fVar14 * local_4c + fVar16 * local_54) * DAT_1009c97c * fVar14)
                 * DAT_1009c97c * fVar14) * DAT_1009c97c;
      fVar19 = DAT_1009c978 - fVar18;
      fVar17 = (local_58 * fVar18 + local_60 * fVar19) * DAT_1009c97c;
      fVar15 = (local_54 * fVar18 + local_5c * fVar19) * DAT_1009c97c;
      local_7c = (fVar16 * fVar11 +
                 (fVar16 * fVar12 + (fVar14 * local_50 + fVar16 * local_58) * DAT_1009c97c * fVar14)
                 * DAT_1009c97c * fVar14) * DAT_1009c97c;
      fVar13 = 1.0;
      fVar14 = 0.5;
      local_94 = ((fVar19 * fVar17 + (local_50 * fVar18 + local_58 * fVar19) * DAT_1009c97c * fVar18
                  ) * DAT_1009c97c * fVar18 +
                 (fVar18 * fVar17 + (local_60 * fVar18 + local_68 * fVar19) * DAT_1009c97c * fVar19)
                 * DAT_1009c97c * fVar19) * DAT_1009c97c;
      local_90 = ((fVar19 * fVar15 + (local_4c * fVar18 + local_54 * fVar19) * DAT_1009c97c * fVar18
                  ) * DAT_1009c97c * fVar18 +
                 (fVar18 * fVar15 + (local_5c * fVar18 + local_64 * fVar19) * DAT_1009c97c * fVar19)
                 * DAT_1009c97c * fVar19) * DAT_1009c97c;
      iVar1 = 5;
      fVar12 = DAT_1009c980;
      do {
        fVar15 = 1.0 - fVar14;
        iVar5 = (uint)(local_94 <
                      fVar15 * fVar15 * fVar15 * local_68 + fVar15 * fVar15 * 3.0 * fVar14 * fVar9 +
                      fVar15 * 3.0 * fVar14 * fVar14 * fVar11 + fVar14 * fVar14 * fVar14 * local_7c)
                << 0x1f;
        if (iVar5 < 0) {
          uVar2 = 1;
        }
        if (-1 < iVar5) {
          uVar2 = 0;
        }
        bVar7 = uVar2 == local_7c < local_68;
        fVar12 = (float)((uint)bVar7 * (int)fVar14 + (uint)!bVar7 * (int)fVar12);
        fVar13 = (float)((uint)bVar7 * (int)fVar13 + (uint)!bVar7 * (int)fVar14);
        iVar1 = iVar1 + -1;
        fVar14 = (fVar12 + fVar13) * 0.5;
      } while (iVar1 != 0);
      fVar14 = fVar14 * DAT_1009c978;
      fVar12 = DAT_1009c978 - fVar14;
      local_84 = (local_7c * fVar14 + fVar11 * fVar12) * DAT_1009c97c;
      local_80 = (local_78 * fVar14 + fVar10 * fVar12) * DAT_1009c97c;
      local_8c = (local_84 * fVar14 + (fVar11 * fVar14 + fVar9 * fVar12) * DAT_1009c97c * fVar12) *
                 DAT_1009c97c;
      local_88 = (local_80 * fVar14 + (fVar10 * fVar14 + fVar8 * fVar12) * DAT_1009c97c * fVar12) *
                 DAT_1009c97c;
    }
  }
  else if (param_8 == '\0') {
    if (0 < iVar4) {
      local_9c = uVar3 & 3;
      if (-1 < (int)-uVar3) {
        local_9c = -(-uVar3 & 3);
      }
      local_a0 = iVar4;
      FUN_1009c388(&local_a0,0);
      FUN_1012cc1a(param_2,param_3,param_4,param_5,&local_a0,0);
    }
    while (iVar6 = iVar6 + -1, -1 < iVar6) {
      local_9c = iVar6 + (param_6 + 0x59) / 0x5a;
      uVar3 = -local_9c;
      local_9c = local_9c & 3;
      if (-1 < (int)uVar3) {
        local_9c = -(uVar3 & 3);
      }
      local_a0 = 0x5a;
      FUN_1009c388(&local_a0,1);
      FUN_1012cc1a(param_2,param_3,param_4,param_5,&local_a0,0);
    }
    if (iVar5 < 1) {
      return;
    }
    local_9c = uVar2 & 3;
    if (-1 < (int)-uVar2) {
      local_9c = -(-uVar2 & 3);
    }
    local_a0 = iVar5;
    FUN_1009c388(&local_a0,1);
    param_8 = '\0';
  }
  else {
    if (0 < iVar5) {
      local_9c = uVar2 & 3;
      if (-1 < (int)-uVar2) {
        local_9c = -(-uVar2 & 3);
      }
      FUN_1009c388(&local_a0,1);
      FUN_1012cc1a(param_2,param_3,param_4,param_5,&local_a0,1);
    }
    for (iVar1 = 0; iVar1 < iVar6; iVar1 = iVar1 + 1) {
      local_9c = iVar1 + (param_6 + 0x59) / 0x5a;
      uVar2 = -local_9c;
      local_9c = local_9c & 3;
      if (-1 < (int)uVar2) {
        local_9c = -(uVar2 & 3);
      }
      local_a0 = 0x5a;
      FUN_1009c388(&local_a0,1);
      FUN_1012cc1a(param_2,param_3,param_4,param_5,&local_a0,1);
    }
    if (iVar4 < 1) {
      return;
    }
    local_9c = uVar3 & 3;
    if (-1 < (int)-uVar3) {
      local_9c = -(-uVar3 & 3);
    }
    local_a0 = iVar4;
    FUN_1009c388(&local_a0,0);
    param_8 = '\x01';
  }
  FUN_1012cc1a(param_2,param_3,param_4,param_5,&local_a0,param_8);
  return;
}

