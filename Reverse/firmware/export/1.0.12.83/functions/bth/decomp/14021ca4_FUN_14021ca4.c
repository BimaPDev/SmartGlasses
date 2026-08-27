/* FUN_14021ca4 @ 0x14021ca4 */

void FUN_14021ca4(int param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  uint uVar5;
  short *psVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  short *psVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  short *psVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  short *local_64;
  short *local_60;
  int local_58;
  byte *local_54;
  
  psVar10 = (short *)*param_3;
  psVar4 = (short *)param_3[1];
  iVar13 = *(int *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  uVar5 = (uint)*(byte *)(param_1 + 0xb0);
  if (*(char *)(param_1 + 0xb3) == '\x02') {
    psVar10 = psVar4;
  }
  iVar2 = *(int *)(param_1 + 0x94);
  if (uVar5 != 0) {
    iVar17 = 0;
    local_54 = (byte *)(param_1 + 0xa7);
    do {
      local_54 = local_54 + 1;
      uVar7 = (uint)*local_54;
      if (uVar7 != 0) {
        local_58 = 0;
        local_60 = (short *)(param_1 + (iVar17 + -0x7fffffb5) * 2);
        local_64 = (short *)(iVar13 + iVar17 * 0x20 + 0xfe);
        psVar4 = (short *)(iVar13 + 0xfe + (param_2 + iVar17 * 0x10) * 2);
        do {
          iVar14 = iVar2 + *(int *)(param_1 + 0xb8) * iVar17 * 4;
          local_60 = local_60 + 1;
          iVar11 = (int)*local_60;
          psVar6 = local_64;
          if (param_2 == 0) {
            iVar19 = *(int *)(param_1 + 0xc0);
            if (*(char *)(iVar19 + 0x561) != '\0') goto LAB_14021e3e;
          }
          else {
            do {
              psVar6 = psVar6 + 1;
              if (iVar11 < *psVar6) {
                iVar11 = (int)*psVar6;
              }
            } while (psVar4 != psVar6);
            iVar19 = *(int *)(param_1 + 0xc0);
            if (*(char *)(iVar19 + 0x561) == '\0') {
              *local_60 = (short)iVar11;
LAB_14021d7c:
              iVar18 = 0;
              iVar19 = 0;
              psVar16 = psVar10;
              psVar6 = local_64;
              do {
                while( true ) {
                  psVar6 = psVar6 + 1;
                  psVar16 = psVar16 + 1;
                  iVar15 = (int)*psVar16;
                  if (iVar11 == *psVar6) break;
                  uVar5 = iVar11 - *psVar6;
                  if (0x1e < (int)uVar5) {
                    uVar5 = 0x1f;
                  }
                  uVar7 = (iVar15 - iVar19) - 4U >> 2;
                  iVar19 = iVar14 + 0x10;
                  do {
                    iVar8 = iVar19 + 0x10;
                    *(int *)(iVar19 + -0x10) = *(int *)(iVar19 + -0x10) >> (uVar5 & 0xff);
                    *(int *)(iVar19 + -0xc) = *(int *)(iVar19 + -0xc) >> (uVar5 & 0xff);
                    *(int *)(iVar19 + -8) = *(int *)(iVar19 + -8) >> (uVar5 & 0xff);
                    *(int *)(iVar19 + -4) = *(int *)(iVar19 + -4) >> (uVar5 & 0xff);
                    iVar19 = iVar8;
                  } while (iVar14 + 0x20 + uVar7 * 0x10 != iVar8);
                  iVar18 = iVar18 + 1;
                  iVar14 = iVar14 + (uVar7 + 1) * 0x10;
                  iVar19 = iVar15;
                  if (param_2 <= iVar18) goto LAB_14021dfc;
                }
                iVar18 = iVar18 + 1;
                iVar14 = iVar14 + (iVar15 - iVar19) * 4;
                iVar19 = iVar15;
              } while (iVar18 < param_2);
            }
            else {
LAB_14021e3e:
              bVar1 = *(byte *)(iVar19 + iVar17 + 0x558);
              if (bVar1 != 0) {
                uVar7 = 0;
                iVar8 = iVar17 * 0x4b + iVar19;
                iVar15 = (short)(ushort)bVar1 * 0x19 + iVar8;
                uVar5 = (uint)*(byte *)(DAT_14021f14 + param_3[3] * 2 +
                                       (uint)(*(char *)(param_1 + 0xb3) == '\x02'));
                iVar18 = 0;
                do {
                  uVar12 = (uint)*(byte *)(iVar8 + 0x314);
                  uVar3 = (uint)*(byte *)(iVar8 + 0x315);
                  if (uVar12 < uVar3) {
                    psVar6 = (short *)(iVar13 + (iVar17 * 0x10 + uVar12 + -0x7fffff81) * 2);
                    uVar9 = uVar12;
                    do {
                      psVar6 = psVar6 + 1;
                      uVar9 = uVar9 + 1;
                      if (iVar18 < *psVar6) {
                        iVar18 = (int)*psVar6;
                      }
                    } while (uVar9 != uVar3);
                  }
                  if (uVar12 <= uVar5) {
                    uVar5 = uVar12;
                  }
                  iVar8 = iVar8 + 0x19;
                  if (uVar7 < uVar3) {
                    uVar7 = uVar3;
                  }
                } while (iVar15 != iVar8);
                bVar1 = *(byte *)(iVar19 + 0x562);
                iVar19 = FUN_14024a04(iVar14 + psVar10[uVar5] * 4,
                                      (int)psVar10[uVar7] - (int)psVar10[uVar5]);
                iVar19 = (iVar18 + (uint)bVar1) - iVar19;
                if (iVar11 < 0x12) {
                  iVar19 = iVar19 + 1;
                }
                if (iVar11 < iVar19) {
                  iVar11 = iVar19;
                }
              }
              *local_60 = (short)iVar11;
              if (param_2 != 0) goto LAB_14021d7c;
            }
LAB_14021dfc:
            uVar7 = (uint)*local_54;
          }
          local_58 = local_58 + 1;
          local_64 = local_64 + 0x10;
          iVar17 = iVar17 + 1;
          psVar4 = psVar4 + 0x10;
        } while (local_58 < (int)uVar7);
        uVar5 = (uint)*(byte *)(param_1 + 0xb0);
      }
    } while ((int)(local_54 + (-0xa7 - param_1)) < (int)uVar5);
  }
  return;
}

