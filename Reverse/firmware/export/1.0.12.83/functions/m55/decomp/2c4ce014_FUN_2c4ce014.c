/* FUN_2c4ce014 @ 0x2c4ce014 */

void FUN_2c4ce014(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
                 undefined4 param_7,undefined4 param_8,short *param_9,int param_10,int param_11,
                 uint param_12,int param_13,int param_14)

{
  undefined4 *puVar1;
  short *psVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  byte *pbVar17;
  int iVar19;
  short *psVar20;
  int iVar21;
  short *psVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
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
  byte *pbVar18;
  
  iVar13 = *(int *)(*param_1 + 0xc4);
  iVar8 = param_13;
  if (param_14 <= param_13) {
    iVar8 = param_14;
  }
  if (0 < param_11) {
    local_78 = (byte *)(param_10 + -1);
    uVar16 = param_12 & ~((int)param_12 >> 0x1f);
    pbVar6 = local_78 + param_11;
    pbVar7 = (byte *)(iVar13 + uVar16 + 0x1371);
    local_84 = 0;
    do {
      uVar9 = 1 << ((uint)(local_78 + (1 - param_10)) & 0xff) & 0xff;
      local_78 = local_78 + 1;
      if (*local_78 != 0) {
        local_8c = (short *)(param_6 + local_84 * 0x20);
        local_88 = (short *)(param_5 + local_84 * 0x20);
        local_80 = 0;
        local_9c = local_8c + param_12;
        do {
          iVar10 = param_3 + local_84 * *(int *)(*param_1 + 0xb8) * 4;
          iVar11 = param_4 + local_84 * *(int *)(param_1[1] + 0xb8) * 4;
          if (0 < (int)param_12) {
            local_a0 = (byte *)(iVar13 + 0x1370);
            local_a4 = param_9;
            local_ac = local_8c;
            local_a8 = local_88;
            do {
              local_a0 = local_a0 + 1;
              if ((uVar9 & *local_a0) != 0) {
                iVar26 = (int)*local_a8;
                iVar28 = (int)*local_ac;
                iVar12 = iVar26;
                if (iVar26 < iVar28) {
                  iVar12 = iVar28;
                }
                iVar12 = iVar12 + 1;
                uVar27 = iVar12 - iVar26;
                uVar29 = iVar12 - iVar28;
                *local_a8 = (short)iVar12;
                *local_ac = (short)iVar12;
                if (0x1e < (int)uVar27) {
                  uVar27 = 0x1f;
                }
                if (0x1e < (int)uVar29) {
                  uVar29 = 0x1f;
                }
                iVar12 = (int)local_a4[1] - (int)*local_a4;
                if (iVar12 != 0) {
                  iVar26 = *local_a4 * 4 + iVar12 * 4;
                  iVar28 = iVar26 + iVar11;
                  piVar5 = (int *)(iVar10 + iVar26);
                  do {
                    iVar12 = iVar12 + -4;
                    piVar15 = piVar5 + -4;
                    iVar24 = *(int *)(iVar28 + -0x10) >> (uVar29 & 0xff);
                    iVar21 = *piVar15 >> (uVar27 & 0xff);
                    iVar23 = *(int *)(iVar28 + -0xc) >> (uVar29 & 0xff);
                    iVar14 = *(int *)(iVar28 + -8) >> (uVar29 & 0xff);
                    iVar19 = piVar5[-3] >> (uVar27 & 0xff);
                    iVar25 = *(int *)(iVar28 + -4) >> (uVar29 & 0xff);
                    iVar3 = piVar5[-2] >> (uVar27 & 0xff);
                    iVar26 = piVar5[-1] >> (uVar27 & 0xff);
                    *piVar15 = iVar21 + iVar24;
                    piVar5[-3] = iVar19 + iVar23;
                    piVar5[-2] = iVar3 + iVar14;
                    piVar5[-1] = iVar26 + iVar25;
                    *(int *)(iVar28 + -0x10) = iVar21 - iVar24;
                    *(int *)(iVar28 + -0xc) = iVar19 - iVar23;
                    *(int *)(iVar28 + -8) = iVar3 - iVar14;
                    *(int *)(iVar28 + -4) = iVar26 - iVar25;
                    iVar28 = iVar28 + -0x10;
                    piVar5 = piVar15;
                  } while (iVar12 != 0);
                }
              }
              local_a8 = local_a8 + 1;
              local_ac = local_ac + 1;
              local_a4 = local_a4 + 1;
            } while (local_ac != local_9c);
          }
          if (iVar8 < param_13) {
            if ((int)uVar16 < param_13) {
              psVar22 = local_88 + uVar16;
              psVar20 = local_8c + uVar16;
              psVar2 = param_9 + uVar16;
              pbVar18 = pbVar7;
              do {
                pbVar17 = pbVar18 + 1;
                if ((*pbVar18 & uVar9) != 0) {
                  *psVar20 = *psVar22;
                  iVar12 = (int)*psVar2;
                  if (iVar12 < psVar2[1]) {
                    puVar1 = (undefined4 *)(iVar10 + iVar12 * 4);
                    puVar4 = (undefined4 *)(iVar11 + iVar12 * 4);
                    do {
                      iVar12 = iVar12 + 1;
                      *puVar4 = *puVar1;
                      puVar1 = puVar1 + 1;
                      puVar4 = puVar4 + 1;
                    } while (iVar12 < psVar2[1]);
                  }
                }
                psVar22 = psVar22 + 1;
                psVar20 = psVar20 + 1;
                psVar2 = psVar2 + 1;
                pbVar18 = pbVar17;
              } while ((byte *)(iVar13 + param_13 + 0x1371) != pbVar17);
            }
          }
          else if ((iVar8 < param_14) && ((int)uVar16 < param_14)) {
            psVar22 = local_8c + uVar16;
            psVar20 = local_88 + uVar16;
            psVar2 = param_9 + uVar16;
            pbVar18 = pbVar7;
            do {
              pbVar17 = pbVar18 + 1;
              if ((*pbVar18 & uVar9) != 0) {
                *psVar20 = *psVar22;
                iVar12 = (int)*psVar2;
                if (iVar12 < psVar2[1]) {
                  piVar5 = (int *)(iVar11 + iVar12 * 4);
                  piVar15 = (int *)(iVar10 + iVar12 * 4);
                  do {
                    iVar26 = *piVar5;
                    iVar12 = iVar12 + 1;
                    *piVar15 = iVar26;
                    *piVar5 = -iVar26;
                    piVar5 = piVar5 + 1;
                    piVar15 = piVar15 + 1;
                  } while (iVar12 < psVar2[1]);
                }
              }
              psVar22 = psVar22 + 1;
              psVar20 = psVar20 + 1;
              psVar2 = psVar2 + 1;
              pbVar18 = pbVar17;
            } while ((byte *)(iVar13 + param_14 + 0x1371) != pbVar17);
          }
          local_84 = local_84 + 1;
          local_80 = local_80 + 1;
          local_8c = local_8c + 0x10;
          local_88 = local_88 + 0x10;
          local_9c = local_9c + 0x10;
        } while (local_80 < (int)(uint)*local_78);
      }
    } while (local_78 != pbVar6);
  }
  if (*(char *)(iVar13 + 0x1370) == '\x02') {
    FUN_2c674268(iVar13 + 0x1371,0,0x40);
    return;
  }
  return;
}

