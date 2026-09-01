/* FUN_1012908a @ 0x1012908a */

void FUN_1012908a(int param_1,int *param_2,int *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined2 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 *puVar16;
  byte bVar17;
  int iVar18;
  int iVar19;
  undefined2 *puVar20;
  undefined1 *puVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined2 *puVar26;
  bool bVar27;
  int local_e0;
  int local_d4;
  undefined4 local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined1 auStack_b0 [16];
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int *local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60;
  int *local_5c;
  byte local_58;
  undefined1 local_57;
  code *local_54;
  int local_50;
  int local_4c;
  int local_48;
  
  iVar18 = param_2[0xe];
  if ((iVar18 == 0) || (bVar17 = *(byte *)(param_2 + 0x12), bVar17 < 3)) goto LAB_1012979e;
  iVar13 = param_2[0xf];
  iVar22 = param_2[0x10];
  iVar25 = param_2[0x11];
  if ((iVar18 == 1) && ((iVar25 < 1 && (iVar13 == 0 && iVar22 == 0)))) goto LAB_1012979e;
  iVar24 = *param_3 + iVar13;
  iVar14 = param_3[1];
  iVar13 = iVar25 + iVar13 + param_3[2];
  uVar11 = ~(iVar18 / 2);
  iVar23 = iVar22 + iVar25 + param_3[3];
  local_c0 = (iVar24 - iVar25) + uVar11;
  local_b4 = iVar18 / 2 + 1;
  local_b8 = local_b4 + iVar13;
  local_b4 = local_b4 + iVar23;
  if (0xfd < bVar17) {
    bVar17 = 0xff;
  }
  local_bc = ((iVar22 + iVar14) - iVar25) + uVar11;
  local_e0 = FUN_1012a896(auStack_b0,&local_c0,*(undefined4 *)(param_1 + 8));
  if (local_e0 == 0) goto LAB_1012979e;
  local_a0 = *param_3;
  local_9c = param_3[1];
  local_98 = param_3[2];
  local_94 = param_3[3];
  FUN_1012a862(&local_a0,0xffffffff);
  iVar18 = (local_98 + 1) - local_a0;
  iVar19 = (local_94 + 1) - local_9c;
  if (iVar19 <= iVar18) {
    iVar18 = iVar19;
  }
  iVar15 = *param_2;
  iVar13 = iVar13 + iVar25 + 1;
  iVar19 = iVar13 - iVar24;
  iVar25 = (iVar25 + 1 + iVar23) - (iVar22 + iVar14);
  iVar22 = iVar18 >> 1;
  if (iVar15 <= iVar18 >> 1) {
    iVar22 = iVar15;
  }
  if (iVar25 <= iVar19) {
    iVar19 = iVar25;
  }
  iVar18 = iVar19 >> 1;
  if (iVar15 <= iVar19 >> 1) {
    iVar18 = iVar15;
  }
  iVar14 = iVar18 + param_2[0xe];
  puVar4 = (undefined2 *)FUN_100942d8(iVar14 * iVar14 * 2);
  uVar11 = param_2[0xe];
  local_6c = (int)uVar11 / 2 + 1;
  local_68 = (uVar11 | 0xfffffffe) + (int)uVar11 / 2 + iVar18;
  local_64 = local_6c + iVar25;
  iVar25 = iVar18 + uVar11;
  local_70 = (int *)((iVar24 - iVar13) + local_68);
  FUN_1008cd8c(&local_54,&local_70,iVar18,0);
  iVar18 = 1;
  if (uVar11 != 1) {
    iVar18 = (int)uVar11 >> 1;
  }
  pbVar5 = (byte *)FUN_100942d8(iVar25);
  puVar26 = puVar4;
  for (local_d4 = 0; local_d4 < iVar25; local_d4 = local_d4 + 1) {
    FUN_10128a16(pbVar5,iVar25);
    iVar13 = (*local_54)(pbVar5,0,local_d4,iVar25,&local_54);
    if (iVar13 == 0) {
      FUN_10128a0a(puVar26,iVar25 * 2);
    }
    else {
      *puVar26 = (short)((int)((uint)*pbVar5 << 6) / iVar18);
      pbVar6 = pbVar5;
      puVar3 = puVar26;
      while (puVar20 = puVar3 + 1, puVar26 + iVar25 != puVar20) {
        uVar12 = (uint)pbVar6[1];
        if (*pbVar6 == uVar12) {
          uVar10 = *puVar3;
        }
        else {
          uVar10 = (undefined2)((int)(uVar12 << 6) / iVar18);
        }
        *puVar20 = uVar10;
        pbVar6 = pbVar6 + 1;
        puVar3 = puVar20;
      }
    }
    puVar26 = puVar26 + iVar25;
  }
  FUN_10094444(pbVar5);
  FUN_1008cb2c(&local_54);
  iVar13 = iVar25 * iVar25;
  if (iVar18 == 1) {
    for (iVar18 = 0; iVar18 < iVar13; iVar18 = iVar18 + 1) {
      *(char *)((int)puVar4 + iVar18) = (char)((ushort)puVar4[iVar18] >> 6);
    }
  }
  else {
    FUN_10128a22(iVar25,iVar18,puVar4);
    iVar18 = (uVar11 & 1) + iVar18;
    if (1 < iVar18) {
      for (iVar23 = 0; iVar23 != iVar13; iVar23 = iVar23 + 1) {
        uVar11 = (uint)(ushort)puVar4[iVar23];
        if (uVar11 != 0) {
          if (uVar11 == 0xff) {
            puVar4[iVar23] = (short)(0x3fc0 / iVar18);
          }
          else {
            puVar4[iVar23] = (short)((int)(uVar11 << 6) / iVar18);
          }
        }
      }
      FUN_10128a22(iVar25,iVar18,puVar4);
    }
    for (iVar18 = 0; iVar18 < iVar13; iVar18 = iVar18 + 1) {
      *(char *)((int)puVar4 + iVar18) = (char)puVar4[iVar18];
    }
  }
  iVar18 = FUN_1008cb9c(&local_c0);
  if ((iVar18 == 0) && ((short)param_2[1] == -0x100)) {
    local_c4 = 0xffffffff;
  }
  else {
    FUN_1008cd8c(&local_54,&local_a0,iVar22,1);
    local_c4 = FUN_1008ca4c(&local_54,0);
    local_e0 = 0;
  }
  iVar18 = FUN_100942d8((local_b8 + 1) - local_c0);
  FUN_10128a0a(&local_70,0x1c);
  local_68 = CONCAT22(local_68._2_2_,*(undefined2 *)((int)param_2 + 0x36));
  local_58 = *(byte *)(param_2 + 0x12);
  local_57 = (undefined1)param_2[1];
  iVar25 = local_c0 + ((local_b8 + 1) - local_c0) / 2;
  iVar13 = local_bc + ((local_b4 + 1) - local_bc) / 2;
  local_90 = (local_b8 + 1) - iVar14;
  if (local_90 < iVar25) {
    local_90 = iVar25;
  }
  local_8c = local_bc;
  local_88 = local_b8;
  local_84 = local_bc + -1 + iVar14;
  if (iVar13 < local_84) {
    local_84 = iVar13;
  }
  local_70 = &local_90;
  local_64 = iVar18;
  local_5c = local_70;
  iVar23 = FUN_1012a896(&local_80,local_70,*(undefined4 *)(param_1 + 8));
  if ((iVar23 != 0) &&
     (iVar8 = FUN_1012aa22(&local_80,&local_a0,iVar22), iVar15 = local_7c, iVar19 = local_80,
     iVar24 = local_b8, iVar23 = local_bc, iVar8 == 0)) {
    iVar8 = (local_78 + 1) - local_80;
    if (local_e0 != 0) {
      FUN_1012ab98(&local_80,&local_a0,iVar22);
    }
    if (0 < iVar8) {
      iVar24 = iVar14 * (iVar15 - iVar23) + ((iVar19 + -1) - iVar24) + iVar14 + (int)puVar4;
      local_90 = local_80;
      local_60 = 2;
      local_88 = local_78;
      local_64 = iVar18;
      for (iVar23 = local_7c; iVar23 <= local_74; iVar23 = iVar23 + 1) {
        local_8c = iVar23;
        local_84 = iVar23;
        iVar19 = iVar24;
        if (local_e0 == 0) {
          thunk_FUN_1011ea40(iVar18,iVar24,iVar14);
          iVar15 = FUN_1008ca98(iVar18,local_80,iVar23,iVar8);
          iVar19 = local_64;
          if (iVar15 == 1) {
            local_60 = 2;
          }
          else {
            local_60 = (undefined1)iVar15;
          }
        }
        local_64 = iVar19;
        FUN_10128436(param_1,&local_70);
        iVar24 = iVar24 + iVar14;
      }
    }
  }
  local_88 = local_b8;
  local_90 = (local_b8 + 1) - iVar14;
  if (local_90 < iVar25) {
    local_90 = iVar25;
  }
  local_84 = local_b4;
  iVar23 = iVar13 + 1;
  local_8c = (local_b4 + 1) - iVar14;
  if (local_8c < iVar23) {
    local_8c = iVar23;
  }
  iVar24 = FUN_1012a896(&local_80,&local_90,*(undefined4 *)(param_1 + 8));
  if ((iVar24 != 0) &&
     (iVar7 = FUN_1012aa22(&local_80,&local_a0,iVar22), iVar8 = local_74, iVar15 = local_80,
     iVar19 = local_84, iVar24 = local_b8, iVar7 == 0)) {
    iVar7 = (local_78 + 1) - local_80;
    if (local_e0 != 0) {
      FUN_1012ab98(&local_80,&local_a0,iVar22);
    }
    if (0 < iVar7) {
      iVar19 = iVar14 * (iVar19 - iVar8) + ((iVar15 + -1) - iVar24) + iVar14 + (int)puVar4;
      local_90 = local_80;
      local_60 = 2;
      local_88 = local_78;
      local_64 = iVar18;
      for (iVar24 = local_74; local_7c <= iVar24; iVar24 = iVar24 + -1) {
        local_8c = iVar24;
        local_84 = iVar24;
        iVar15 = iVar19;
        if (local_e0 == 0) {
          thunk_FUN_1011ea40(iVar18,iVar19,iVar14);
          iVar8 = FUN_1008ca98(iVar18,local_80,iVar24,iVar7);
          iVar15 = local_64;
          if (iVar8 == 1) {
            local_60 = 2;
          }
          else {
            local_60 = (undefined1)iVar8;
          }
        }
        local_64 = iVar15;
        FUN_10128436(param_1,&local_70);
        iVar19 = iVar19 + iVar14;
      }
    }
  }
  local_90 = local_c0 + iVar14;
  local_88 = local_b8 - iVar14;
  local_8c = local_bc;
  local_84 = local_bc + -1 + iVar14;
  if (iVar13 < local_84) {
    local_84 = iVar13;
  }
  iVar24 = FUN_1012a896(&local_80,&local_90,*(undefined4 *)(param_1 + 8));
  if ((iVar24 != 0) &&
     (iVar15 = FUN_1012aa22(&local_80,&local_a0,iVar22), iVar19 = local_7c, iVar24 = local_8c,
     iVar15 == 0)) {
    iVar15 = (local_78 + 1) - local_80;
    if (local_e0 == 0) {
      iVar8 = iVar18;
      if (0 < iVar15) goto LAB_10129cb6;
    }
    else {
      FUN_1012ab98(&local_80,&local_a0,iVar22);
      if (0 < iVar15) {
        iVar8 = 0;
LAB_10129cb6:
        local_64 = iVar8;
        pbVar5 = (byte *)(iVar14 * (iVar19 - iVar24) + (int)puVar4);
        local_90 = local_80;
        local_88 = local_78;
        for (iVar24 = local_7c; iVar24 <= local_74; iVar24 = iVar24 + 1) {
          bVar1 = *pbVar5;
          local_8c = iVar24;
          local_84 = iVar24;
          if (local_e0 == 0) {
            thunk_FUN_1011ea48(iVar18,(uint)bVar1,iVar15);
            iVar19 = FUN_1008ca98(iVar18,local_80,iVar24,iVar15);
            if (iVar19 == 1) {
              local_60 = 2;
            }
            else {
              local_60 = (undefined1)iVar19;
            }
          }
          else {
            local_58 = bVar1;
            if (bVar17 != 0xff) {
              local_58 = (byte)((uint)*(byte *)(param_2 + 0x12) * (uint)bVar1 >> 8);
            }
          }
          FUN_10128436(param_1,&local_70);
          pbVar5 = pbVar5 + iVar14;
        }
      }
    }
  }
  local_58 = *(byte *)(param_2 + 0x12);
  local_90 = local_c0 + iVar14;
  local_88 = local_b8 - iVar14;
  local_84 = local_b4;
  local_8c = (local_b4 + 1) - iVar14;
  if (local_8c < iVar23) {
    local_8c = iVar23;
  }
  iVar24 = FUN_1012a896(&local_80,&local_90,*(undefined4 *)(param_1 + 8));
  if (((iVar24 != 0) &&
      (iVar15 = FUN_1012aa22(&local_80,&local_a0,iVar22), iVar19 = local_74, iVar24 = local_84,
      iVar15 == 0)) && (iVar15 = (local_78 + 1) - local_80, 0 < iVar15)) {
    iVar8 = iVar18;
    if (local_e0 != 0) {
      FUN_1012ab98(&local_80,&local_a0,iVar22);
      iVar8 = 0;
    }
    local_64 = iVar8;
    pbVar5 = (byte *)(iVar14 * (iVar24 - iVar19) + (int)puVar4);
    local_90 = local_80;
    local_88 = local_78;
    for (iVar24 = local_74; local_7c <= iVar24; iVar24 = iVar24 + -1) {
      local_8c = iVar24;
      local_84 = iVar24;
      if (local_e0 == 0) {
        thunk_FUN_1011ea48(iVar18,*pbVar5,iVar15);
        iVar19 = FUN_1008ca98(iVar18,local_80,iVar24,iVar15);
        if (iVar19 == 1) {
          local_60 = 2;
        }
        else {
          local_60 = (undefined1)iVar19;
        }
      }
      else {
        FUN_1012ab98(&local_80,&local_a0,iVar22);
        local_58 = *pbVar5;
        if (bVar17 != 0xff) {
          local_58 = (byte)((uint)*(byte *)(param_2 + 0x12) * (uint)local_58 >> 8);
        }
      }
      FUN_10128436(param_1,&local_70);
      pbVar5 = pbVar5 + iVar14;
    }
  }
  local_58 = (byte)param_2[0x12];
  local_8c = local_bc + iVar14;
  if (iVar23 < local_8c) {
    local_8c = iVar23;
  }
  local_84 = iVar13;
  if (iVar13 < local_b4 - iVar14) {
    local_84 = local_b4 - iVar14;
  }
  local_88 = local_b8;
  local_90 = (local_b8 + 1) - iVar14;
  if (local_90 < iVar25) {
    local_90 = iVar25;
  }
  iVar24 = FUN_1012a896(&local_80,&local_90,*(undefined4 *)(param_1 + 8));
  if ((iVar24 != 0) && (iVar24 = FUN_1012aa22(&local_80,&local_a0,iVar22), iVar24 == 0)) {
    iVar19 = (local_78 + 1) - local_80;
    iVar15 = iVar14 * (iVar14 + -1) + ((local_80 + -1) - local_b8) + iVar14 + (int)puVar4;
    iVar24 = iVar18;
    if (local_e0 != 0) {
      FUN_1012ab98(&local_80,&local_a0,iVar22);
      iVar24 = iVar15;
    }
    local_64 = iVar24;
    if (0 < iVar19) {
      local_90 = local_80;
      local_60 = 2;
      local_88 = local_78;
      for (iVar24 = local_7c; iVar24 <= local_74; iVar24 = iVar24 + 1) {
        local_8c = iVar24;
        local_84 = iVar24;
        if (local_e0 == 0) {
          thunk_FUN_1011ea40(iVar18,iVar15,iVar19);
          iVar8 = FUN_1008ca98(iVar18,local_80,iVar24,iVar19);
          if (iVar8 == 1) {
            local_60 = 2;
          }
          else {
            local_60 = (undefined1)iVar8;
          }
        }
        FUN_10128436(param_1,&local_70);
      }
    }
  }
  puVar21 = (undefined1 *)((int)puVar4 + -1);
  for (iVar24 = 0; iVar24 < iVar14; iVar24 = iVar24 + 1) {
    puVar9 = puVar21 + iVar14;
    for (puVar16 = puVar9; (int)puVar9 - (int)puVar16 < iVar14 >> 1; puVar16 = puVar16 + -1) {
      puVar21 = puVar21 + 1;
      uVar2 = *puVar21;
      *puVar21 = *puVar16;
      *puVar16 = uVar2;
    }
    puVar21 = puVar9;
  }
  local_8c = local_bc + iVar14;
  if (iVar23 < local_8c) {
    local_8c = iVar23;
  }
  local_84 = iVar13;
  if (iVar13 < local_b4 - iVar14) {
    local_84 = local_b4 - iVar14;
  }
  local_90 = local_c0;
  iVar25 = iVar25 + -1;
  local_88 = local_c0 + -1 + iVar14;
  if (iVar25 < local_88) {
    local_88 = iVar25;
  }
  iVar24 = FUN_1012a896(&local_80,&local_90,*(undefined4 *)(param_1 + 8));
  if ((iVar24 != 0) && (iVar24 = FUN_1012aa22(&local_80,&local_a0,iVar22), iVar24 == 0)) {
    iVar15 = (local_78 + 1) - local_80;
    iVar19 = iVar14 * (iVar14 + -1) + (local_80 - local_90) + (int)puVar4;
    iVar24 = iVar18;
    if (local_e0 != 0) {
      FUN_1012ab98(&local_80,&local_a0,iVar22);
      iVar24 = iVar19;
    }
    local_64 = iVar24;
    if (0 < iVar15) {
      local_90 = local_80;
      local_60 = 2;
      local_88 = local_78;
      for (iVar24 = local_7c; iVar24 <= local_74; iVar24 = iVar24 + 1) {
        local_8c = iVar24;
        local_84 = iVar24;
        if (local_e0 == 0) {
          thunk_FUN_1011ea40(iVar18,iVar19,iVar15);
          iVar8 = FUN_1008ca98(iVar18,local_80,iVar24,iVar15);
          if (iVar8 == 1) {
            local_60 = 2;
          }
          else {
            local_60 = (undefined1)iVar8;
          }
        }
        FUN_10128436(param_1,&local_70);
      }
    }
  }
  local_90 = local_c0;
  local_88 = local_c0 + -1 + iVar14;
  if (iVar25 < local_88) {
    local_88 = iVar25;
  }
  local_8c = local_bc;
  local_84 = local_bc + -1 + iVar14;
  if (iVar13 < local_84) {
    local_84 = iVar13;
  }
  iVar13 = FUN_1012a896(&local_80,&local_90,*(undefined4 *)(param_1 + 8));
  if ((iVar13 != 0) &&
     (iVar8 = FUN_1012aa22(&local_80,&local_a0,iVar22), iVar15 = local_7c, iVar19 = local_80,
     iVar24 = local_8c, iVar13 = local_90, iVar8 == 0)) {
    iVar8 = (local_78 + 1) - local_80;
    if (local_e0 != 0) {
      FUN_1012ab98(&local_80,&local_a0,iVar22);
    }
    local_64 = iVar18;
    if (0 < iVar8) {
      iVar24 = iVar14 * (iVar15 - iVar24) + (iVar19 - iVar13) + (int)puVar4;
      local_60 = 2;
      local_90 = local_80;
      local_88 = local_78;
      for (iVar13 = local_7c; iVar13 <= local_74; iVar13 = iVar13 + 1) {
        local_8c = iVar13;
        local_84 = iVar13;
        iVar19 = iVar24;
        if (local_e0 == 0) {
          thunk_FUN_1011ea40(iVar18,iVar24,iVar14);
          iVar15 = FUN_1008ca98(iVar18,local_80,iVar13,iVar8);
          iVar19 = local_64;
          if (iVar15 == 1) {
            local_60 = 2;
          }
          else {
            local_60 = (undefined1)iVar15;
          }
        }
        local_64 = iVar19;
        FUN_10128436(param_1,&local_70);
        iVar24 = iVar24 + iVar14;
      }
    }
  }
  local_84 = local_b4;
  local_8c = (local_b4 + 1) - iVar14;
  if (local_8c < iVar23) {
    local_8c = iVar23;
  }
  local_90 = local_c0;
  local_88 = local_c0 + -1 + iVar14;
  if (iVar25 < local_88) {
    local_88 = iVar25;
  }
  iVar13 = FUN_1012a896(&local_80,&local_90,*(undefined4 *)(param_1 + 8));
  if ((iVar13 != 0) &&
     (iVar19 = FUN_1012aa22(&local_80,&local_a0,iVar22), iVar24 = local_74, iVar23 = local_80,
     iVar25 = local_84, iVar13 = local_90, iVar19 == 0)) {
    iVar19 = (local_78 + 1) - local_80;
    if (local_e0 != 0) {
      FUN_1012ab98(&local_80,&local_a0,iVar22);
    }
    if (0 < iVar19) {
      iVar25 = iVar14 * (iVar25 - iVar24) + (iVar23 - iVar13) + (int)puVar4;
      local_60 = 2;
      local_90 = local_80;
      local_88 = local_78;
      local_64 = iVar18;
      for (iVar13 = local_74; local_7c <= iVar13; iVar13 = iVar13 + -1) {
        local_8c = iVar13;
        local_84 = iVar13;
        iVar23 = iVar25;
        if (local_e0 == 0) {
          thunk_FUN_1011ea40(iVar18,iVar25,iVar14);
          iVar24 = FUN_1008ca98(iVar18,local_80,iVar13,iVar19);
          iVar23 = local_64;
          if (iVar24 == 1) {
            local_60 = 2;
          }
          else {
            local_60 = (undefined1)iVar24;
          }
        }
        local_64 = iVar23;
        FUN_10128436(param_1,&local_70);
        iVar25 = iVar25 + iVar14;
      }
    }
  }
  local_90 = local_c0 + iVar14;
  local_88 = local_b8 - iVar14;
  local_8c = local_bc + iVar14;
  local_84 = local_b4 - iVar14;
  local_64 = iVar18;
  iVar13 = FUN_1012a896(&local_80,&local_90,*(undefined4 *)(param_1 + 8));
  if (((iVar13 != 0) && (iVar13 = FUN_1012aa22(&local_80,&local_a0,iVar22), iVar13 == 0)) &&
     (iVar13 = (local_78 + 1) - local_80, 0 < iVar13)) {
    local_90 = local_80;
    local_88 = local_78;
    for (iVar22 = local_7c; iVar22 <= local_74; iVar22 = iVar22 + 1) {
      local_8c = iVar22;
      local_84 = iVar22;
      FUN_10128a16(iVar18,iVar13);
      local_60 = FUN_1008ca98(iVar18,local_80,iVar22,iVar13);
      FUN_10128436(param_1,&local_70);
    }
  }
  if (local_e0 == 0) {
    FUN_1008cb2c(&local_54);
    FUN_1008cadc(local_c4);
  }
  FUN_10094444(puVar4);
  FUN_10094444(iVar18);
LAB_1012979e:
  FUN_10090c10(param_1,param_2,param_3);
  FUN_10090a38(param_1,param_2,param_3);
  if ((2 < *(byte *)(param_2 + 10)) && (iVar18 = param_2[9], iVar18 != 0)) {
    bVar17 = *(byte *)((int)param_2 + 0x29);
    if (((bVar17 & 0x3e) != 0) && ((bVar17 & 1) == 0)) {
      iVar13 = (param_3[2] + 1) - *param_3;
      iVar22 = (param_3[3] + 1) - param_3[1];
      if (iVar22 <= iVar13) {
        iVar13 = iVar22;
      }
      iVar22 = iVar13 >> 1;
      if (*param_2 <= iVar13 >> 1) {
        iVar22 = *param_2;
      }
      bVar27 = (bVar17 & 8) == 0;
      iVar13 = iVar18;
      if (bVar27) {
        iVar13 = iVar18 + iVar22;
      }
      uVar11 = (bVar17 & 0x3f) >> 1;
      if (bVar27) {
        iVar13 = -iVar13;
      }
      local_54 = (code *)(*param_3 + iVar13);
      local_4c = iVar18;
      if ((uVar11 & 8) == 0) {
        local_4c = -(iVar18 + iVar22);
      }
      local_4c = param_3[2] - local_4c;
      local_50 = iVar18;
      if ((uVar11 & 2) == 0) {
        local_50 = -(iVar18 + iVar22);
      }
      local_50 = param_3[1] + local_50;
      local_48 = iVar18;
      if ((uVar11 & 1) == 0) {
        local_48 = -(iVar18 + iVar22);
      }
      local_48 = param_3[3] - local_48;
      FUN_10128bc6(param_1,param_3,&local_54,iVar22,iVar22 - iVar18 & ~(iVar22 - iVar18 >> 0x1f),
                   *(undefined2 *)((int)param_2 + 0x22),*(byte *)(param_2 + 10),(char)param_2[1]);
    }
  }
  if ((2 < *(byte *)(param_2 + 0xd)) && (iVar18 = param_2[0xb], iVar18 != 0)) {
    local_6c = param_2[0xc] + -1;
    local_70 = (int *)(*param_3 - local_6c);
    local_68 = param_3[2] + local_6c;
    local_54 = (code *)((int)local_70 - iVar18);
    local_4c = iVar18 + local_68;
    iVar22 = local_68 + (1 - *param_3) + local_6c;
    local_64 = param_3[3] + local_6c;
    iVar13 = (1 - param_3[1]) + local_6c + local_64;
    if (iVar22 <= iVar13) {
      iVar13 = iVar22;
    }
    local_6c = param_3[1] - local_6c;
    local_50 = local_6c - iVar18;
    local_48 = iVar18 + local_64;
    iVar22 = iVar13 >> 1;
    if (*param_2 <= iVar13 >> 1) {
      iVar22 = *param_2;
    }
    FUN_10128bc6(param_1,&local_54,&local_70,iVar22 + iVar18,iVar22,
                 *(undefined2 *)((int)param_2 + 0x2a),*(byte *)(param_2 + 0xd),(char)param_2[1]);
  }
  return;
}

