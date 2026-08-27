/* FUN_2c4cc508 @ 0x2c4cc508 */

undefined4 FUN_2c4cc508(uint *param_1,int param_2,undefined4 *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  short *psVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint *local_a4;
  int local_a0;
  uint local_9c;
  int local_98;
  int local_8c;
  uint local_84;
  int local_7c;
  short *local_78;
  uint local_6c;
  byte *local_68;
  int local_58;
  int local_54;
  byte *local_50;
  
  iVar4 = *(int *)(param_2 + 0x94);
  psVar15 = (short *)*param_3;
  if (*(char *)(param_2 + 0xb3) == '\x02') {
    psVar15 = (short *)param_3[1];
  }
  FUN_2c674268(iVar4,0,0x1000);
  if ((param_4 & 4) != 0) {
    return 0x4004;
  }
  iVar6 = *(int *)(param_2 + 0xc0);
  bVar2 = *(byte *)(param_2 + 0xb4);
  if (*(byte *)(param_2 + 0xb0) != 0) {
    iVar7 = *(int *)(param_2 + 0xb8) * 4;
    local_50 = (byte *)(param_2 + 0xa7);
    pbVar10 = local_50 + *(byte *)(param_2 + 0xb0);
    local_58 = 0;
    local_54 = 0;
    do {
      local_50 = local_50 + 1;
      uVar8 = (uint)*local_50;
      if (bVar2 != 0) {
        local_68 = (byte *)(iVar6 + 0x1ff + local_54);
        iVar11 = iVar7 * local_58 + iVar4;
        local_a0 = (int)*psVar15;
        local_78 = psVar15;
        do {
          while( true ) {
            local_68 = local_68 + 1;
            local_9c = (uint)*local_68;
            local_78 = local_78 + 1;
            iVar5 = (int)*local_78;
            if (local_9c - 0x10 < 0x10) break;
            if ((2 < local_9c - 0xd) && (local_9c != 0)) goto LAB_2c4cc5dc;
LAB_2c4cc71e:
            local_a0 = iVar5;
            if (psVar15 + bVar2 == local_78) goto LAB_2c4cc728;
          }
          *local_68 = 0xb;
          local_9c = 0xb;
LAB_2c4cc5dc:
          iVar9 = DAT_2c4cc808 + local_9c * 8;
          iVar21 = *(int *)(DAT_2c4cc808 + local_9c * 8);
          uVar22 = (uint)*(byte *)(iVar9 + 5);
          uVar17 = (uint)*(byte *)(iVar9 + 4);
          uVar12 = (1 << uVar22) - 1;
          bVar1 = *(byte *)(iVar9 + 6);
          if (bVar1 == 0) {
            if (uVar8 != 0) {
              local_6c = 0;
              local_7c = iVar11;
              do {
                if (local_a0 < iVar5) {
                  local_a4 = (uint *)(local_7c + (local_a0 + 0x3fffffff) * 4);
                  local_98 = local_a0;
                  do {
                    uVar13 = 0;
                    uVar20 = *param_1;
                    uVar18 = param_1[1];
                    do {
                      uVar16 = 0;
                      uVar19 = uVar18;
                      if (0 < (int)(2 - uVar18)) {
                        uVar16 = uVar20 << (2 - uVar18 & 0xff);
                        uVar20 = FUN_2c4d74d4(param_1 + 2);
                        *param_1 = uVar20;
                        uVar19 = param_1[1] + 0x20;
                      }
                      uVar18 = uVar19 - 2;
                      param_1[1] = uVar18;
                      uVar3 = *(ushort *)
                               (iVar21 + uVar13 * 8 + ((uVar20 >> (uVar18 & 0xff) | uVar16) & 3) * 2
                               );
                      uVar13 = (uint)(uVar3 >> 2);
                    } while ((uVar3 & 1) == 0);
                    if ((int)((uint)uVar3 << 0x1e) < 0) {
                      param_1[1] = uVar19 - 1;
                    }
                    uVar20 = (uint)(uVar3 >> 2);
                    if (uVar17 != 0) {
                      uVar18 = 0;
                      puVar14 = local_a4;
                      do {
                        while( true ) {
                          uVar13 = uVar12 & uVar20;
                          uVar20 = (int)uVar20 >> uVar22;
                          if (uVar13 != 0) break;
LAB_2c4cc6ae:
                          uVar18 = uVar18 + 1;
                          puVar14 = puVar14 + 1;
                          *puVar14 = uVar13;
                          if (uVar17 == uVar18) goto LAB_2c4cc6f0;
                        }
                        uVar19 = param_1[1] - 1;
                        if (param_1[1] == 0) {
                          uVar19 = FUN_2c4d74d4(param_1 + 2);
                          uVar16 = uVar19 >> 0x1f;
                          param_1[1] = 0x1f;
                          *param_1 = uVar19;
                        }
                        else {
                          param_1[1] = uVar19;
                          uVar16 = *param_1 >> (uVar19 & 0xff) & 1;
                        }
                        if (uVar16 == 0) goto LAB_2c4cc6ae;
                        uVar18 = uVar18 + 1;
                        puVar14 = puVar14 + 1;
                        *puVar14 = -uVar13;
                      } while (uVar17 != uVar18);
                    }
LAB_2c4cc6f0:
                    if (local_9c == 0xb) {
                      uVar20 = local_a4[1];
                      if ((uVar20 ^ (int)uVar20 >> 0x1f) - ((int)uVar20 >> 0x1f) == 0x10) {
                        uVar20 = FUN_2c4cb928(param_1,uVar20);
                      }
                      local_a4[1] = uVar20;
                      uVar20 = local_a4[2];
                      if ((uVar20 ^ (int)uVar20 >> 0x1f) - ((int)uVar20 >> 0x1f) == 0x10) {
                        uVar20 = FUN_2c4cb928(param_1,uVar20);
                      }
                      local_a4[2] = uVar20;
                    }
                    local_a4 = local_a4 + uVar17;
                    local_98 = local_98 + uVar17;
                  } while (local_98 < iVar5);
                }
                local_7c = local_7c + iVar7;
                local_6c = local_6c + 1;
              } while (uVar8 != local_6c);
            }
            goto LAB_2c4cc71e;
          }
          if (uVar8 == 0) goto LAB_2c4cc71e;
          local_84 = 0;
          local_8c = iVar11;
          do {
            if (local_a0 < iVar5) {
              local_a4 = (uint *)(local_8c + (local_a0 + 0x3fffffff) * 4);
              local_98 = local_a0;
              do {
                uVar13 = 0;
                uVar20 = *param_1;
                uVar18 = param_1[1];
                do {
                  uVar16 = 0;
                  uVar19 = uVar18;
                  if (0 < (int)(2 - uVar18)) {
                    uVar16 = uVar20 << (2 - uVar18 & 0xff);
                    uVar20 = FUN_2c4d74d4(param_1 + 2);
                    *param_1 = uVar20;
                    uVar19 = param_1[1] + 0x20;
                  }
                  uVar18 = uVar19 - 2;
                  param_1[1] = uVar18;
                  uVar3 = *(ushort *)
                           (iVar21 + uVar13 * 8 + ((uVar20 >> (uVar18 & 0xff) | uVar16) & 3) * 2);
                  uVar13 = (uint)(uVar3 >> 2);
                } while ((uVar3 & 1) == 0);
                if ((int)((uint)uVar3 << 0x1e) < 0) {
                  param_1[1] = uVar19 - 1;
                }
                uVar20 = (uint)(uVar3 >> 2);
                if (uVar17 != 0) {
                  uVar18 = 0;
                  puVar14 = local_a4;
                  do {
                    uVar13 = uVar12 & uVar20;
                    uVar18 = uVar18 + 1;
                    uVar20 = (int)uVar20 >> uVar22;
                    puVar14 = puVar14 + 1;
                    *puVar14 = uVar13 - bVar1;
                  } while (uVar17 != uVar18);
                }
                if (local_9c == 0xb) {
                  uVar20 = local_a4[1];
                  if ((uVar20 ^ (int)uVar20 >> 0x1f) - ((int)uVar20 >> 0x1f) == 0x10) {
                    uVar20 = FUN_2c4cb928(param_1);
                  }
                  local_a4[1] = uVar20;
                  uVar20 = local_a4[2];
                  if ((uVar20 ^ (int)uVar20 >> 0x1f) - ((int)uVar20 >> 0x1f) == 0x10) {
                    uVar20 = FUN_2c4cb928(param_1);
                  }
                  local_a4[2] = uVar20;
                }
                local_a4 = local_a4 + uVar17;
                local_98 = local_98 + uVar17;
              } while (local_98 < iVar5);
            }
            local_8c = local_8c + iVar7;
            local_84 = local_84 + 1;
          } while (uVar8 != local_84);
          local_a0 = iVar5;
        } while (psVar15 + bVar2 != local_78);
      }
LAB_2c4cc728:
      local_58 = local_58 + uVar8;
      local_54 = local_54 + 0x10;
    } while (pbVar10 != local_50);
  }
  if ((*(char *)(param_2 + 0xb3) != '\x02') && ((param_4 & 0x18) == 0)) {
    FUN_2c4d129c(*(int *)(param_2 + 0xc0) + 0x566,*param_3,iVar4);
    return 0;
  }
  return 0;
}

