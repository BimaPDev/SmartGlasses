/* FUN_2c4cc100 @ 0x2c4cc100 */

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_2c4cc100(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  uint uVar17;
  uint uVar18;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr5;
  undefined4 in_cr13;
  undefined1 in_q2 [16];
  undefined1 *local_f4;
  byte *local_f0;
  int local_e0;
  short *local_d4;
  int local_c4;
  byte *local_c0;
  int local_a4;
  
  bVar1 = *(byte *)(param_1 + 0xb4);
  iVar5 = *(int *)(param_1 + 0xc0);
  if (*(char *)(param_1 + 0xb3) == '\x02') {
    param_2 = param_2 + 1;
  }
  psVar13 = (short *)*param_2;
  bVar2 = *(byte *)(param_1 + 0xb7);
  FUN_2c674268(iVar5 + 0x100,0);
  iVar3 = DAT_2c4cc460;
  uVar10 = (uint)*(byte *)(param_1 + 0xb0);
  if (uVar10 != 0) {
    local_a4 = 0;
    local_c0 = (byte *)(param_1 + 0xa7);
    local_e0 = 0;
    do {
      local_c0 = local_c0 + 1;
      if (*local_c0 != 0) {
        local_d4 = (short *)(iVar5 + (local_e0 + 8) * 0x20);
        local_c4 = 0;
        do {
          if (bVar1 == 0) {
            iVar6 = *(int *)(param_1 + 0x94);
            iVar8 = local_e0 * *(int *)(param_1 + 0xb8);
          }
          else {
            iVar6 = *(int *)(param_1 + 0x94);
            iVar8 = local_e0 * *(int *)(param_1 + 0xb8);
            psVar14 = (short *)(iVar5 + local_a4 * 0x20);
            psVar15 = local_d4;
            psVar16 = psVar13;
            local_f4 = (undefined1 *)(param_3 + local_a4 * 0x10);
            local_f0 = (byte *)(iVar5 + 0x1ff + local_a4 * 0x10);
            do {
              local_f0 = local_f0 + 1;
              uVar10 = (uint)*local_f0;
              if ((1 < uVar10 - 0xe) && (uVar9 = (uint)(uVar10 == 0), uVar10 != 0)) {
                if (uVar10 == 0xd) {
                  *psVar15 = (*psVar14 >> 2) + 1;
                }
                else {
                  iVar12 = (int)psVar16[1] - (int)*psVar16;
                  if (iVar12 < 1) {
LAB_2c4cc4e0:
                    sVar4 = *psVar14 >> 2;
                  }
                  else {
                    puVar11 = (uint *)(iVar6 + (*psVar16 + iVar8) * 4);
                    puVar7 = puVar11 + iVar12;
                    do {
                      puVar7 = puVar7 + -1;
                      uVar10 = *puVar7;
                      if ((int)uVar10 < 0) {
                        uVar10 = -uVar10;
                      }
                      if ((int)uVar9 < (int)uVar10) {
                        uVar9 = uVar10;
                      }
                    } while (puVar11 != puVar7);
                    if (param_4 != 0) {
                      if (uVar9 != 0) {
                        *local_f4 = 0;
                        if (0x1fff < (int)uVar9) {
                          return 0x4002;
                        }
                        uVar10 = (uint)*psVar14;
                        sVar4 = (short)((int)uVar10 >> 2);
                        goto LAB_2c4cc24c;
                      }
                      goto LAB_2c4cc4e0;
                    }
                    if (0x1fff < (int)uVar9) {
                      return 0x4002;
                    }
                    uVar10 = (uint)*psVar14;
                    sVar4 = (short)((int)uVar10 >> 2);
                    if (uVar9 != 0) {
LAB_2c4cc24c:
                      uVar18 = uVar9 << LZCOUNT(uVar9);
                      iVar6 = 0x20 - LZCOUNT(uVar9);
                      uVar17 = (uVar18 & 0x7fffffff) >> 0x17;
                      uVar9 = (uVar18 & 0x7fffff) >> 0x13;
                      *psVar15 = sVar4 - (((short)LZCOUNT((int)((ulonglong)
                                                                ((longlong)
                                                                 (int)(*(int *)(iVar3 + uVar17 * 4)
                                                                       * (0x10 - uVar9 & 0xffff) +
                                                                      uVar9 * *(int *)(iVar3 + (
                                                  uVar17 + 1) * 4)) *
                                                  (longlong)
                                                  *(int *)(DAT_2c4cc468 +
                                                          (iVar6 + (uVar10 & 3) * 0xe) * 4)) >> 0x20
                                                  )) -
                                          (*(char *)(DAT_2c4cc464 + (uVar10 & 3) * 0xe + iVar6) + 1)
                                          ) + -2);
                      if (iVar12 >> 2 != 0) {
                        coprocessor_load(0xf,in_cr5,puVar11);
                        coprocessor_function2(0xf,2,6,in_cr0,in_cr5,in_cr2);
                        coprocessor_function2(0xf,7,2,in_cr0,in_cr1,in_cr13);
                        VectorAbsolute(in_q2,4);
                    /* WARNING: Bad instruction - Truncating control flow here */
                        halt_baddata();
                      }
                      goto LAB_2c4cc420;
                    }
                  }
                  *psVar15 = sVar4;
                }
LAB_2c4cc420:
                iVar6 = *(int *)(param_1 + 0x94);
                iVar8 = local_e0 * *(int *)(param_1 + 0xb8);
              }
              psVar16 = psVar16 + 1;
              psVar15 = psVar15 + 1;
              psVar14 = psVar14 + 1;
              local_f4 = local_f4 + 1;
            } while (psVar13 + bVar1 != psVar16);
          }
          local_e0 = local_e0 + 1;
          local_c4 = local_c4 + 1;
          local_d4 = local_d4 + 0x10;
          iVar12 = (int)psVar13[bVar1];
          FUN_2c674268(iVar6 + (iVar8 + iVar12) * 4,0,(psVar13[bVar2] - iVar12) * 4);
        } while (local_c4 < (int)(uint)*local_c0);
        uVar10 = (uint)*(byte *)(param_1 + 0xb0);
      }
      local_a4 = local_a4 + 1;
    } while (local_a4 < (int)uVar10);
  }
  return 0;
}

