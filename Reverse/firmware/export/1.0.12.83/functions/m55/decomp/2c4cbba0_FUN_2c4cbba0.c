/* FUN_2c4cbba0 @ 0x2c4cbba0 */

void FUN_2c4cbba0(int param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  short *psVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  short *psVar16;
  short *psVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  short *local_60;
  short *local_5c;
  int local_54;
  byte *local_50;
  
  iVar7 = *(int *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  puVar2 = param_3;
  if (*(char *)(param_1 + 0xb3) == '\x02') {
    puVar2 = param_3 + 1;
  }
  psVar11 = (short *)*puVar2;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  uVar5 = (uint)*(byte *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  iVar3 = *(int *)(param_1 + 0x94);
  if (uVar5 != 0) {
    iVar18 = 0;
    local_50 = (byte *)(param_1 + 0xa7);
    do {
      local_50 = local_50 + 1;
      uVar8 = (uint)*local_50;
      if (uVar8 != 0) {
        local_5c = (short *)(param_1 + (DAT_2c4cbe04 + iVar18) * 2);
        local_60 = (short *)(iVar7 + iVar18 * 0x20 + 0xfe);
        psVar17 = (short *)(iVar7 + 0xfe + (param_2 + iVar18 * 0x10) * 2);
        local_54 = 0;
        do {
          iVar14 = iVar3 + *(int *)(param_1 + 0xb8) * iVar18 * 4;
          local_5c = local_5c + 1;
          iVar12 = (int)*local_5c;
          psVar6 = local_60;
          if (param_2 == 0) {
            iVar20 = *(int *)(param_1 + 0xc0);
            if (*(char *)(iVar20 + 0x561) != '\0') goto LAB_2c4cbd2c;
          }
          else {
            do {
              psVar6 = psVar6 + 1;
              if (iVar12 < *psVar6) {
                iVar12 = (int)*psVar6;
              }
            } while (psVar17 != psVar6);
            iVar20 = *(int *)(param_1 + 0xc0);
            if (*(char *)(iVar20 + 0x561) == '\0') {
              *local_5c = (short)iVar12;
LAB_2c4cbc6a:
              iVar19 = 0;
              iVar20 = 0;
              psVar16 = psVar11;
              psVar6 = local_60;
              do {
                while( true ) {
                  psVar6 = psVar6 + 1;
                  psVar16 = psVar16 + 1;
                  iVar15 = (int)*psVar16;
                  if (iVar12 == *psVar6) break;
                  uVar8 = iVar12 - *psVar6;
                  uVar5 = (iVar15 - iVar20) - 4U >> 2;
                  iVar20 = iVar14 + 0x10;
                  if (0x1e < (int)uVar8) {
                    uVar8 = 0x1f;
                  }
                  do {
                    iVar9 = iVar20 + 0x10;
                    *(int *)(iVar20 + -0x10) = *(int *)(iVar20 + -0x10) >> (uVar8 & 0xff);
                    *(int *)(iVar20 + -0xc) = *(int *)(iVar20 + -0xc) >> (uVar8 & 0xff);
                    *(int *)(iVar20 + -8) = *(int *)(iVar20 + -8) >> (uVar8 & 0xff);
                    *(int *)(iVar20 + -4) = *(int *)(iVar20 + -4) >> (uVar8 & 0xff);
                    iVar20 = iVar9;
                  } while (iVar14 + 0x20 + uVar5 * 0x10 != iVar9);
                  iVar19 = iVar19 + 1;
                  iVar14 = iVar14 + (uVar5 + 1) * 0x10;
                  iVar20 = iVar15;
                  if (param_2 <= iVar19) goto LAB_2c4cbcea;
                }
                iVar19 = iVar19 + 1;
                iVar14 = iVar14 + (iVar15 - iVar20) * 4;
                iVar20 = iVar15;
              } while (iVar19 < param_2);
            }
            else {
LAB_2c4cbd2c:
              bVar1 = *(byte *)(iVar20 + iVar18 + 0x558);
              if (bVar1 != 0) {
                uVar8 = 0;
                iVar19 = 0;
                iVar9 = iVar18 * 0x4b + iVar20;
                uVar5 = (uint)*(byte *)(DAT_2c4cbe08 + param_3[3] * 2 +
                                       (uint)(*(char *)(param_1 + 0xb3) == '\x02'));
                iVar15 = (short)(ushort)bVar1 * 0x19 + iVar9;
                do {
                  uVar13 = (uint)*(byte *)(iVar9 + 0x314);
                  uVar4 = (uint)*(byte *)(iVar9 + 0x315);
                  if (uVar13 < uVar4) {
                    psVar6 = (short *)(iVar7 + (iVar18 * 0x10 + uVar13 + -0x7fffff81) * 2);
                    uVar10 = uVar13;
                    do {
                      psVar6 = psVar6 + 1;
                      uVar10 = uVar10 + 1;
                      if (iVar19 < *psVar6) {
                        iVar19 = (int)*psVar6;
                      }
                    } while (uVar10 != uVar4);
                  }
                  iVar9 = iVar9 + 0x19;
                  if (uVar13 <= uVar5) {
                    uVar5 = uVar13;
                  }
                  if (uVar8 < uVar4) {
                    uVar8 = uVar4;
                  }
                } while (iVar15 != iVar9);
                bVar1 = *(byte *)(iVar20 + 0x562);
                iVar20 = FUN_2c4da790(iVar14 + psVar11[uVar5] * 4,
                                      (int)psVar11[uVar8] - (int)psVar11[uVar5]);
                iVar20 = (iVar19 + (uint)bVar1) - iVar20;
                if (iVar12 < 0x12) {
                  iVar20 = iVar20 + 1;
                }
                if (iVar12 < iVar20) {
                  iVar12 = iVar20;
                }
              }
              *local_5c = (short)iVar12;
              if (param_2 != 0) goto LAB_2c4cbc6a;
            }
LAB_2c4cbcea:
            uVar8 = (uint)*local_50;
          }
          iVar18 = iVar18 + 1;
          psVar17 = psVar17 + 0x10;
          local_54 = local_54 + 1;
          local_60 = local_60 + 0x10;
        } while (local_54 < (int)uVar8);
        uVar5 = (uint)*(byte *)(param_1 + 0xb0);
      }
    } while ((int)(local_50 + (-0xa7 - param_1)) < (int)uVar5);
  }
  return;
}

