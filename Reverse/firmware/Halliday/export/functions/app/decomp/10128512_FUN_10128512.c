/* FUN_10128512 @ 0x10128512 */

void FUN_10128512(int param_1,int *param_2,int *param_3,int param_4,byte param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  ushort *puVar20;
  byte *pbVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int iStack_50;
  int local_4c;
  int local_48;
  int *local_44;
  ushort *local_40;
  undefined2 local_3c;
  uint local_38;
  undefined1 local_34;
  int *local_30;
  undefined1 local_2c;
  byte local_2b;
  
  puVar15 = *(undefined4 **)(param_1 + 8);
  local_74 = *puVar15;
  local_70 = puVar15[1];
  local_6c = puVar15[2];
  local_68 = puVar15[3];
  iVar2 = FUN_1008cb9c(&local_74);
  iVar16 = *param_2;
  FUN_10128506(&local_44,0x1c);
  local_2c = *(undefined1 *)((int)param_2 + 0xf);
  local_2b = (byte)(((uint)*(byte *)(param_2 + 4) << 0x1c) >> 0x1c);
  local_44 = &local_64;
  if ((iVar2 == 0) && (iVar16 == 0x1000000)) {
    local_40 = (ushort *)param_4;
    if (param_5 == 4) {
      if (*(char *)((int)param_2 + 0xe) != '\0') goto LAB_101285fa;
    }
    else {
      local_30 = param_3;
      if (param_5 == 0xe) {
        iVar2 = FUN_1012a896(&local_54,param_3,*(undefined4 *)(param_1 + 8));
        if (iVar2 == 0) {
          return;
        }
        local_3c = (undefined2)param_2[3];
        local_34 = 2;
        local_40 = (ushort *)0x0;
        local_38 = param_4;
      }
      else {
        if ((param_5 != 0x14) || (*(char *)((int)param_2 + 0xe) != '\0')) goto LAB_101285fa;
        iVar2 = (param_3[3] + 1) - param_3[1];
        local_38 = param_4 + ((param_3[2] - *param_3) * iVar2 + iVar2) * 2;
        local_34 = 2;
      }
    }
    local_44 = param_3;
    FUN_10128436(param_1,&local_44);
  }
  else {
LAB_101285fa:
    piVar10 = *(int **)(param_1 + 8);
    iVar3 = param_3[2];
    local_64 = *piVar10;
    local_5c = piVar10[2];
    iVar22 = piVar10[1];
    iVar19 = piVar10[3];
    iVar11 = *param_3;
    iVar12 = (iVar3 - iVar11) + 1;
    uVar17 = (local_5c + 1) - local_64;
    iVar13 = (param_3[3] + 1) - param_3[1];
    local_60 = iVar22;
    local_58 = iVar19;
    FUN_1008bbb4();
    uVar4 = FUN_10092f10();
    uVar5 = uVar17;
    if (uVar17 < uVar4) {
      FUN_1008bbb4();
      uVar5 = FUN_10092f10();
    }
    uVar4 = FUN_1012a84e(&local_64);
    if (uVar5 < uVar4) {
      uVar5 = uVar5 / uVar17;
    }
    else {
      uVar5 = (iVar19 + 1) - iVar22;
    }
    iVar22 = uVar5 * uVar17;
    puVar6 = (ushort *)FUN_100942d8(iVar22 * 2);
    uVar4 = FUN_100942d8(iVar22);
    iVar19 = local_58;
    local_30 = &local_64;
    if (param_5 == 4) {
      if (*param_2 == 0x1000000) {
        local_34 = 1;
      }
      else {
        local_34 = 2;
      }
    }
    else {
      local_34 = 2;
    }
    local_58 = local_60 + -1 + uVar5;
    local_40 = puVar6;
    local_38 = uVar4;
    while (local_60 <= iVar19) {
      local_54 = local_64;
      iStack_50 = local_60;
      local_4c = local_5c;
      local_48 = local_58;
      FUN_1012a87c(&local_54,-*param_3,-param_3[1]);
      if (iVar16 == 0x1000000) {
        if ((param_5 & 0xfd) == 4) {
          iVar7 = FUN_1012a84e(&local_54);
          FUN_1011ea48(uVar4,0xff,iVar7);
          iVar23 = param_4 + (iStack_50 * iVar12 + local_54) * 2;
          iVar24 = (local_4c + 1) - local_54;
          puVar20 = puVar6;
          for (iVar18 = iStack_50; iVar18 <= local_48; iVar18 = iVar18 + 1) {
            thunk_FUN_1011ea40(puVar20,iVar23,iVar24 * 2);
            puVar20 = puVar20 + iVar24;
            iVar23 = iVar23 + iVar12 * 2;
          }
          if (param_5 == 6) {
            for (iVar18 = 0; iVar7 != iVar18; iVar18 = iVar18 + 1) {
              uVar9 = (uint)puVar6[iVar18];
              uVar8 = uVar9;
              if (uVar9 == 0x7e0) {
                uVar8 = uVar4;
              }
              if (uVar9 == 0x7e0) {
                *(undefined1 *)(uVar8 + iVar18) = 0;
              }
            }
          }
        }
        else if (param_5 == 5) {
          pbVar14 = (byte *)((iStack_50 * iVar12 + local_54) * 3 + param_4);
          uVar9 = (local_4c + 1) - local_54;
          uVar8 = uVar4;
          puVar20 = puVar6;
          for (iVar18 = 0; iVar18 < (local_48 + 1) - iStack_50; iVar18 = iVar18 + 1) {
            pbVar21 = pbVar14;
            for (iVar7 = 0; iVar7 < (int)uVar9; iVar7 = iVar7 + 1) {
              *(byte *)(uVar8 + iVar7) = pbVar21[2];
              puVar20[iVar7] = (ushort)*pbVar21 + (ushort)pbVar21[1] * 0x100;
              pbVar21 = pbVar21 + 3;
            }
            puVar20 = puVar20 + uVar9;
            uVar8 = uVar8 + uVar9;
            pbVar14 = pbVar14 + ((local_54 - local_4c) + (iVar3 - iVar11)) * 3 +
                                (uVar9 & ~((int)uVar9 >> 0x1f)) * 3;
          }
        }
        else if (param_5 == 0x14) {
          iVar18 = (local_4c + 1) - local_54;
          iVar7 = (local_48 + 1) - iStack_50;
          iVar24 = param_4 + (iStack_50 * iVar12 + local_54) * 2;
          puVar20 = puVar6;
          for (iVar23 = 0; iVar23 < iVar7; iVar23 = iVar23 + 1) {
            thunk_FUN_1011ea40(puVar20,iVar24);
            puVar20 = puVar20 + iVar18;
            iVar24 = iVar24 + iVar12 * 2;
          }
          iVar24 = iStack_50 * iVar12 + local_54 + iVar13 * iVar12 * 2 + param_4;
          uVar8 = uVar4;
          for (iVar23 = 0; iVar23 < iVar7; iVar23 = iVar23 + 1) {
            thunk_FUN_1011ea40(uVar8,iVar24,iVar18);
            uVar8 = uVar8 + iVar18;
            iVar24 = iVar24 + iVar12;
          }
        }
      }
      else {
        FUN_1008d24c(param_1,&local_54,param_4,iVar12,iVar13,iVar12,param_2,param_5,puVar6,uVar4);
      }
      uVar8 = (uint)*(byte *)((int)param_2 + 0xe);
      if (2 < uVar8) {
        uVar1 = *(ushort *)(param_2 + 3);
        uVar9 = ~uVar8 & 0xff;
        for (puVar20 = puVar6; puVar6 + iVar22 != puVar20; puVar20 = puVar20 + 1) {
          *puVar20 = (ushort)(((uVar9 * ((byte)*puVar20 & 0x1f) + uVar8 * (uVar1 & 0x1f)) * 0x8081 +
                              0x404080) * 0x10 >> 0x1b) |
                     (ushort)((((uVar9 * ((*puVar20 & 0x7ff) >> 5) + ((uVar1 & 0x7ff) >> 5) * uVar8)
                                * 0x8081 + 0x404080 & 0x1fffffff) >> 0x17) << 5) |
                     (ushort)(((uVar9 * (*(byte *)((int)puVar20 + 1) >> 3) + uVar8 * (uVar1 >> 0xb))
                               * 0x8081 + 0x404080 >> 0x17) << 0xb);
        }
      }
      uVar8 = uVar4;
      iVar18 = local_60;
      if (iVar2 != 0) {
        for (; iVar18 <= local_58; iVar18 = iVar18 + 1) {
          iVar7 = FUN_1008ca98(uVar8,local_64,iVar18,uVar17);
          if (iVar7 == 0) {
            FUN_10128506(uVar8,uVar17);
            local_34 = 2;
          }
          else if (iVar7 == 2) {
            local_34 = 2;
          }
          uVar8 = uVar8 + uVar17;
        }
      }
      FUN_10128436(param_1,&local_44);
      local_60 = local_58 + 1;
      local_58 = local_58 + uVar5;
      if (iVar19 < local_58) {
        local_58 = iVar19;
      }
    }
    FUN_10094444(uVar4);
    FUN_10094444(puVar6);
  }
  return;
}

