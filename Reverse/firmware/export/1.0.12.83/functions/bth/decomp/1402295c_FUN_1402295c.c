/* FUN_1402295c @ 0x1402295c */

undefined4 FUN_1402295c(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  short *psVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  short *psVar17;
  short *psVar18;
  short *psVar19;
  uint uVar20;
  byte *pbVar21;
  undefined1 *puVar22;
  int local_78;
  short *local_68;
  int local_54;
  byte *local_50;
  int local_34;
  uint *puVar6;
  
  bVar1 = *(byte *)(param_1 + 0xb4);
  iVar16 = *(int *)(param_1 + 0xc0);
  if (*(char *)(param_1 + 0xb3) == '\x02') {
    param_2 = param_2 + 1;
  }
  psVar18 = (short *)*param_2;
  bVar2 = *(byte *)(param_1 + 0xb7);
  func_0x13f4aa28(iVar16 + 0x100,0);
  uVar11 = (uint)*(byte *)(param_1 + 0xb0);
  if (uVar11 != 0) {
    local_34 = 0;
    local_50 = (byte *)(param_1 + 0xa7);
    local_78 = 0;
    do {
      local_50 = local_50 + 1;
      if (*local_50 != 0) {
        local_54 = 0;
        local_68 = (short *)(iVar16 + (local_78 + 8) * 0x20);
        do {
          if (bVar1 == 0) {
            iVar3 = *(int *)(param_1 + 0x94);
            iVar12 = local_78 * *(int *)(param_1 + 0xb8);
          }
          else {
            iVar12 = local_78 * *(int *)(param_1 + 0xb8);
            iVar3 = *(int *)(param_1 + 0x94);
            psVar7 = psVar18;
            psVar17 = local_68;
            psVar19 = (short *)(iVar16 + local_34 * 0x20);
            pbVar21 = (byte *)(iVar16 + 0x1ff + local_34 * 0x10);
            puVar22 = (undefined1 *)(param_3 + local_34 * 0x10);
            do {
              pbVar21 = pbVar21 + 1;
              uVar11 = (uint)*pbVar21;
              if ((uVar11 != 0) && (1 < uVar11 - 0xe)) {
                if (uVar11 == 0xd) {
                  *psVar17 = (*psVar19 >> 2) + 1;
                }
                else {
                  iVar15 = (int)psVar7[1] - (int)*psVar7;
                  if (iVar15 < 1) {
LAB_14022c2a:
                    sVar8 = *psVar19 >> 2;
                  }
                  else {
                    puVar4 = (uint *)(iVar3 + (iVar12 + *psVar7) * 4);
                    uVar11 = 0;
                    puVar5 = puVar4 + iVar15;
                    do {
                      puVar5 = puVar5 + -1;
                      uVar9 = *puVar5;
                      if ((int)uVar9 < 0) {
                        uVar9 = -uVar9;
                      }
                      if ((int)uVar11 < (int)uVar9) {
                        uVar11 = uVar9;
                      }
                    } while (puVar4 != puVar5);
                    if (param_4 != 0) {
                      if (uVar11 != 0) {
                        *puVar22 = 0;
                        if (0x1fff < (int)uVar11) {
                          return 0x4002;
                        }
                        uVar9 = (uint)*psVar19;
                        sVar8 = (short)((int)uVar9 >> 2);
                        goto LAB_14022a9c;
                      }
                      goto LAB_14022c2a;
                    }
                    if (0x1fff < (int)uVar11) {
                      return 0x4002;
                    }
                    uVar9 = (uint)*psVar19;
                    sVar8 = (short)((int)uVar9 >> 2);
                    if (uVar11 != 0) {
LAB_14022a9c:
                      uVar13 = uVar11 << LZCOUNT(uVar11);
                      iVar3 = 0x20 - LZCOUNT(uVar11);
                      uVar20 = (uVar13 & 0x7fffffff) >> 0x17;
                      uVar11 = (uVar13 & 0x7fffff) >> 0x13;
                      uVar9 = uVar9 & 3;
                      iVar3 = LZCOUNT((int)((ulonglong)
                                            ((longlong)
                                             (int)(*(int *)(DAT_14022c50 + uVar20 * 4) *
                                                   (0x10 - uVar11 & 0xffff) +
                                                  *(int *)(DAT_14022c50 + (uVar20 + 1) * 4) * uVar11
                                                  ) * (longlong)
                                                      *(int *)(DAT_14022c58 +
                                                              (iVar3 + uVar9 * 0xe) * 4)) >> 0x20))
                              - (*(char *)(DAT_14022c54 + uVar9 * 0xe + iVar3) + 1);
                      *psVar17 = sVar8 - ((short)iVar3 + -2);
                      puVar5 = puVar4;
                      do {
                        puVar6 = puVar5 + 1;
                        uVar11 = *puVar5;
                        if (uVar11 != 0) {
                          iVar10 = (uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f);
                          iVar14 = LZCOUNT(iVar10);
                          iVar12 = 0x20 - iVar14;
                          uVar13 = iVar10 << iVar14;
                          uVar20 = (uVar13 & 0x7fffffff) >> 0x17;
                          iVar10 = *(int *)(DAT_14022c50 + uVar20 * 4);
                          iVar10 = (int)((ulonglong)
                                         ((longlong)
                                          (int)(((uVar13 & 0x7fffff) >> 0x13) *
                                                (*(int *)(DAT_14022c5c + uVar20 * 4) - iVar10) +
                                               iVar10 * 0x10) *
                                         (longlong)
                                         *(int *)(DAT_14022c58 + uVar9 * 0x38 + iVar12 * 4)) >> 0x20
                                        );
                          uVar13 = (int)*(char *)(DAT_14022c54 + iVar12 + uVar9 * 0xe) + iVar3 + -1;
                          if ((int)uVar13 < 0) {
                            uVar13 = iVar10 >> (-uVar13 & 0xff);
                          }
                          else {
                            uVar13 = iVar10 << (uVar13 & 0xff);
                          }
                          if ((int)uVar11 < 0) {
                            uVar13 = -uVar13;
                          }
                          *puVar5 = uVar13;
                        }
                        puVar5 = puVar6;
                      } while (puVar6 != puVar4 + iVar15);
                      goto LAB_14022b92;
                    }
                  }
                  *psVar17 = sVar8;
                }
LAB_14022b92:
                iVar12 = local_78 * *(int *)(param_1 + 0xb8);
                iVar3 = *(int *)(param_1 + 0x94);
              }
              psVar7 = psVar7 + 1;
              psVar17 = psVar17 + 1;
              psVar19 = psVar19 + 1;
              puVar22 = puVar22 + 1;
            } while (psVar18 + bVar1 != psVar7);
          }
          local_78 = local_78 + 1;
          local_54 = local_54 + 1;
          local_68 = local_68 + 0x10;
          iVar15 = (int)psVar18[bVar1];
          func_0x13f4aa28(iVar3 + (iVar12 + iVar15) * 4,0,(psVar18[bVar2] - iVar15) * 4);
        } while (local_54 < (int)(uint)*local_50);
        uVar11 = (uint)*(byte *)(param_1 + 0xb0);
      }
      local_34 = local_34 + 1;
    } while (local_34 < (int)uVar11);
  }
  return 0;
}

