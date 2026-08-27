/* FUN_140b6324 @ 0x140b6324 */

void FUN_140b6324(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
                 undefined4 param_7,undefined4 param_8,short *param_9,int param_10,int param_11,
                 uint param_12,int param_13,int param_14)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  byte *pbVar18;
  int iVar20;
  short *psVar21;
  int iVar22;
  short *psVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  short *local_ac;
  short *local_a8;
  short *local_a4;
  byte *local_a0;
  short *local_9c;
  short *local_8c;
  short *local_88;
  int local_84;
  int local_80;
  byte *local_78;
  byte *pbVar19;
  
  iVar5 = param_13;
  if (param_14 <= param_13) {
    iVar5 = param_14;
  }
  iVar1 = *(int *)(*param_1 + 0xc4);
  if (0 < param_11) {
    local_84 = 0;
    local_78 = (byte *)(param_10 + -1);
    pbVar10 = local_78 + param_11;
    uVar9 = param_12 & ~((int)param_12 >> 0x1f);
    pbVar11 = (byte *)(iVar1 + uVar9 + 0x1371);
    do {
      uVar12 = 1 << ((uint)(local_78 + (1 - param_10)) & 0xff) & 0xff;
      local_78 = local_78 + 1;
      if (*local_78 != 0) {
        local_80 = 0;
        local_8c = (short *)(param_6 + local_84 * 0x20);
        local_88 = (short *)(param_5 + local_84 * 0x20);
        local_9c = local_8c + param_12;
        do {
          iVar13 = param_3 + local_84 * *(int *)(*param_1 + 0xb8) * 4;
          iVar14 = param_4 + local_84 * *(int *)(param_1[1] + 0xb8) * 4;
          if (0 < (int)param_12) {
            local_a4 = param_9;
            local_ac = local_8c;
            local_a8 = local_88;
            local_a0 = (byte *)(iVar1 + 0x1370);
            do {
              local_a0 = local_a0 + 1;
              if ((uVar12 & *local_a0) != 0) {
                iVar27 = (int)*local_a8;
                iVar29 = (int)*local_ac;
                iVar15 = iVar27;
                if (iVar27 < iVar29) {
                  iVar15 = iVar29;
                }
                iVar15 = iVar15 + 1;
                uVar28 = iVar15 - iVar27;
                uVar30 = iVar15 - iVar29;
                *local_a8 = (short)iVar15;
                *local_ac = (short)iVar15;
                if (0x1e < (int)uVar28) {
                  uVar28 = 0x1f;
                }
                if (0x1e < (int)uVar30) {
                  uVar30 = 0x1f;
                }
                iVar15 = (int)local_a4[1] - (int)*local_a4;
                if (iVar15 != 0) {
                  iVar29 = *local_a4 * 4 + iVar15 * 4;
                  iVar27 = iVar13 + iVar29;
                  iVar29 = iVar29 + iVar14;
                  do {
                    iVar25 = *(int *)(iVar29 + -0x10) >> (uVar30 & 0xff);
                    iVar24 = *(int *)(iVar29 + -0xc) >> (uVar30 & 0xff);
                    iVar16 = *(int *)(iVar29 + -8) >> (uVar30 & 0xff);
                    iVar22 = *(int *)(iVar27 + -0x10) >> (uVar28 & 0xff);
                    iVar26 = *(int *)(iVar29 + -4) >> (uVar30 & 0xff);
                    iVar20 = *(int *)(iVar27 + -0xc) >> (uVar28 & 0xff);
                    *(int *)(iVar27 + -0x10) = iVar22 + iVar25;
                    iVar6 = *(int *)(iVar27 + -8) >> (uVar28 & 0xff);
                    iVar2 = *(int *)(iVar27 + -4) >> (uVar28 & 0xff);
                    *(int *)(iVar27 + -0xc) = iVar20 + iVar24;
                    iVar15 = iVar15 + -4;
                    *(int *)(iVar27 + -8) = iVar6 + iVar16;
                    *(int *)(iVar27 + -4) = iVar2 + iVar26;
                    *(int *)(iVar29 + -0x10) = iVar22 - iVar25;
                    *(int *)(iVar29 + -0xc) = iVar20 - iVar24;
                    *(int *)(iVar29 + -8) = iVar6 - iVar16;
                    *(int *)(iVar29 + -4) = iVar2 - iVar26;
                    iVar27 = iVar27 + -0x10;
                    iVar29 = iVar29 + -0x10;
                  } while (iVar15 != 0);
                }
              }
              local_a8 = local_a8 + 1;
              local_ac = local_ac + 1;
              local_a4 = local_a4 + 1;
            } while (local_ac != local_9c);
          }
          if (iVar5 < param_13) {
            if ((int)uVar9 < param_13) {
              psVar23 = local_88 + uVar9;
              psVar21 = local_8c + uVar9;
              psVar4 = param_9 + uVar9;
              pbVar19 = pbVar11;
              do {
                pbVar18 = pbVar19 + 1;
                if ((*pbVar19 & uVar12) != 0) {
                  *psVar21 = *psVar23;
                  iVar15 = (int)*psVar4;
                  if (iVar15 < psVar4[1]) {
                    puVar3 = (undefined4 *)(iVar13 + iVar15 * 4);
                    puVar7 = (undefined4 *)(iVar14 + iVar15 * 4);
                    do {
                      iVar15 = iVar15 + 1;
                      *puVar7 = *puVar3;
                      puVar3 = puVar3 + 1;
                      puVar7 = puVar7 + 1;
                    } while (iVar15 < psVar4[1]);
                  }
                }
                psVar23 = psVar23 + 1;
                psVar21 = psVar21 + 1;
                psVar4 = psVar4 + 1;
                pbVar19 = pbVar18;
              } while ((byte *)(iVar1 + param_13 + 0x1371) != pbVar18);
            }
          }
          else if ((iVar5 < param_14) && ((int)uVar9 < param_14)) {
            psVar23 = local_8c + uVar9;
            psVar21 = local_88 + uVar9;
            psVar4 = param_9 + uVar9;
            pbVar19 = pbVar11;
            do {
              pbVar18 = pbVar19 + 1;
              if ((*pbVar19 & uVar12) != 0) {
                *psVar21 = *psVar23;
                iVar15 = (int)*psVar4;
                if (iVar15 < psVar4[1]) {
                  piVar8 = (int *)(iVar14 + iVar15 * 4);
                  piVar17 = (int *)(iVar13 + iVar15 * 4);
                  do {
                    iVar27 = *piVar8;
                    iVar15 = iVar15 + 1;
                    *piVar17 = iVar27;
                    *piVar8 = -iVar27;
                    piVar8 = piVar8 + 1;
                    piVar17 = piVar17 + 1;
                  } while (iVar15 < psVar4[1]);
                }
              }
              psVar23 = psVar23 + 1;
              psVar21 = psVar21 + 1;
              psVar4 = psVar4 + 1;
              pbVar19 = pbVar18;
            } while ((byte *)(iVar1 + param_14 + 0x1371) != pbVar18);
          }
          local_84 = local_84 + 1;
          local_80 = local_80 + 1;
          local_8c = local_8c + 0x10;
          local_88 = local_88 + 0x10;
          local_9c = local_9c + 0x10;
        } while (local_80 < (int)(uint)*local_78);
      }
    } while (local_78 != pbVar10);
  }
  if (*(char *)(iVar1 + 0x1370) == '\x02') {
    FUN_140e5658(iVar1 + 0x1371,0,0x40);
    return;
  }
  return;
}

