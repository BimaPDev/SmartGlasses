/* FUN_1008e8c8 @ 0x1008e8c8 */

void FUN_1008e8c8(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  short sVar15;
  int iVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  ushort *puVar26;
  byte *pbVar27;
  ushort *puVar28;
  code *pcVar29;
  short *psVar30;
  uint uVar31;
  int iVar32;
  byte *pbVar33;
  int iVar34;
  ushort *puVar35;
  int local_64;
  int local_5c;
  int local_58;
  undefined2 local_40 [2];
  undefined1 auStack_3c [2];
  byte local_3a;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar32 = param_2[3];
  if ((iVar32 == 0) || (*(char *)(param_2 + 4) != '\0')) {
    if (*(char *)(param_2 + 4) == '\x01') {
      iVar32 = 0;
    }
    iVar24 = ((int *)param_1[1])[2];
    iVar22 = *(int *)param_1[1];
    iVar7 = FUN_1012a896(&local_38,*param_2,param_1[2]);
    if (iVar7 != 0) {
      iVar24 = iVar24 - iVar22;
      iVar7 = iVar24 + 1;
      piVar8 = (int *)FUN_1008bbb4();
      iVar22 = *piVar8;
      puVar35 = (ushort *)*param_1;
      if (*(int *)(iVar22 + 0x28) == 0) {
        iVar16 = iVar7 * (local_34 - ((int *)param_1[1])[1]);
        iVar9 = local_38 - *(int *)param_1[1];
        if ((int)((uint)*(byte *)(iVar22 + 0x1c) << 0x19) < 0) {
          puVar35 = (ushort *)((int)puVar35 + iVar16 * 3 + iVar9 * 3);
        }
        else {
          puVar35 = puVar35 + iVar16 + iVar9;
        }
      }
      if (param_2[1] == 0) {
        psVar30 = (short *)0x0;
        local_58 = 0;
      }
      else {
        piVar17 = (int *)*param_2;
        local_58 = (piVar17[2] + 1) - *piVar17;
        psVar30 = (short *)(param_2[1] +
                           (local_58 * (local_34 - piVar17[1]) + (local_38 - *piVar17)) * 2);
      }
      iVar9 = local_58;
      if (iVar32 == 0) {
        pbVar33 = (byte *)0x0;
        local_5c = 0;
      }
      else {
        if (-1 < (int)((uint)*(byte *)(iVar22 + 0x1c) << 0x1c)) {
          iVar22 = FUN_1012a84e(param_2[5]);
          pbVar33 = (byte *)(iVar32 + -1);
          while ((int)(pbVar33 + (1 - iVar32)) < iVar22) {
            pbVar33 = pbVar33 + 1;
            bVar10 = 0xff;
            if (*pbVar33 < 0x81) {
              bVar10 = 0;
            }
            *pbVar33 = bVar10;
          }
        }
        piVar17 = (int *)param_2[5];
        local_5c = (piVar17[2] + 1) - *piVar17;
        pbVar33 = (byte *)(iVar32 + local_5c * (local_34 - piVar17[1]) + (local_38 - *piVar17));
      }
      FUN_1012a87c(&local_38,-*(int *)param_1[1],-((int *)param_1[1])[1]);
      if ((code *)param_1[0xd] != (code *)0x0) {
        (*(code *)param_1[0xd])(param_1);
      }
      bVar10 = *(byte *)(param_2 + 6);
      uVar11 = (uint)bVar10;
      iVar32 = param_2[1];
      if (*(int *)(*piVar8 + 0x28) == 0) {
        bVar1 = *(byte *)(*piVar8 + 0x1c);
        uVar18 = bVar1 & 0x40;
        iVar22 = (local_2c + 1) - local_34;
        if ((bVar1 & 0x40) == 0) {
          if (*(char *)((int)param_2 + 0x19) == '\0') {
            iVar9 = local_30 - local_38;
            iVar16 = iVar9 + 1;
            if (iVar32 == 0) {
              uVar6 = *(ushort *)(param_2 + 2);
              uVar18 = (uint)uVar6;
              if (pbVar33 == (byte *)0x0) {
                iVar32 = 0;
                if (uVar11 < 0xfd) {
                  uVar31 = FUN_1012828e(uVar18,0,uVar11);
                  uVar19 = uVar31 & 0x1f;
                  uVar12 = (uVar31 & 0x7ff) >> 5;
                  uVar31 = (uVar31 & 0xffff) >> 0xb;
                  uVar25 = ~uVar11 & 0xff;
                  uVar5 = 0;
                  for (iVar32 = 0; iVar32 < iVar22; iVar32 = iVar32 + 1) {
                    puVar26 = puVar35;
                    for (iVar24 = 0; iVar24 < iVar16; iVar24 = iVar24 + 1) {
                      uVar3 = *puVar26;
                      if (uVar3 != uVar5) {
                        uVar31 = ((uVar25 * (*(byte *)((int)puVar26 + 1) >> 3) +
                                  uVar11 * (uVar6 >> 0xb)) * 0x8081 + 0x404080 & 0xfffffff) >> 0x17;
                        uVar12 = ((uVar25 * ((*puVar26 & 0x7ff) >> 5) +
                                  uVar11 * ((uVar18 & 0x7ff) >> 5)) * 0x8081 + 0x404080 & 0x1fffffff
                                 ) >> 0x17;
                        uVar19 = ((uVar25 * ((byte)*puVar26 & 0x1f) + (uVar18 & 0x1f) * uVar11) *
                                  0x8081 + 0x404080 & 0xfffffff) >> 0x17;
                      }
                      *(byte *)puVar26 = (byte)*puVar26 & 0xe0 | (byte)uVar19;
                      uVar23 = *puVar26 & 0xfffff81f | uVar12 << 5;
                      *puVar26 = (ushort)uVar23;
                      *(byte *)((int)puVar26 + 1) = (byte)(uVar23 >> 8) & 7 | (byte)(uVar31 << 3);
                      puVar26 = puVar26 + 1;
                      uVar5 = uVar3;
                    }
                    puVar35 = puVar35 + iVar7;
                  }
                }
                else {
                  for (; iVar32 < iVar22; iVar32 = iVar32 + 1) {
                    FUN_1012af22(puVar35,uVar18,iVar16);
                    puVar35 = puVar35 + iVar7;
                  }
                }
              }
              else if (uVar11 < 0xfd) {
                uVar6 = *puVar35;
                local_5c = local_5c - iVar16;
                if (-1 < iVar16) {
                  local_5c = local_5c + iVar16;
                }
                bVar10 = 0;
                uVar5 = uVar6;
                for (iVar32 = 0; iVar32 < iVar22; iVar32 = iVar32 + 1) {
                  for (iVar24 = 0; iVar24 < iVar16; iVar24 = iVar24 + 1) {
                    if (pbVar33[iVar24] != 0) {
                      if ((pbVar33[iVar24] != bVar10) || (puVar35[iVar24] != uVar6)) {
                        uVar5 = FUN_1012828e(uVar18,puVar35[iVar24]);
                        bVar10 = pbVar33[iVar24];
                        uVar6 = puVar35[iVar24];
                      }
                      puVar35[iVar24] = uVar5;
                    }
                  }
                  puVar35 = puVar35 + iVar7;
                  pbVar33 = pbVar33 + local_5c;
                }
              }
              else {
                iVar32 = uVar18 * 0x10001;
                for (iVar7 = 0; iVar7 < iVar22; iVar7 = iVar7 + 1) {
                  iVar34 = 0;
                  while ((iVar34 < iVar16 && (((uint)pbVar33 & 3) != 0))) {
                    if (*pbVar33 == 0xff) {
                      *puVar35 = uVar6;
                    }
                    else {
                      uVar5 = FUN_1012828e(uVar18,*puVar35);
                      *puVar35 = uVar5;
                    }
                    puVar35 = puVar35 + 1;
                    iVar34 = iVar34 + 1;
                    pbVar33 = pbVar33 + 1;
                  }
                  for (; iVar34 <= iVar9 + -3; iVar34 = iVar34 + 4) {
                    if (*(int *)pbVar33 == -1) {
                      if (((uint)puVar35 & 3) == 0) {
                        *(int *)puVar35 = iVar32;
                        *(int *)(puVar35 + 2) = iVar32;
                      }
                      else {
                        *puVar35 = uVar6;
                        *(int *)(puVar35 + 1) = iVar32;
LAB_1008f00c:
                        puVar35[3] = uVar6;
                      }
                    }
                    else if (*(int *)pbVar33 != 0) {
                      if (*pbVar33 == 0xff) {
                        *puVar35 = uVar6;
                      }
                      else {
                        uVar5 = FUN_1012828e(uVar18,*puVar35);
                        *puVar35 = uVar5;
                      }
                      if (pbVar33[1] == 0xff) {
                        puVar35[1] = uVar6;
                      }
                      else {
                        uVar5 = FUN_1012828e(uVar18,puVar35[1]);
                        puVar35[1] = uVar5;
                      }
                      if (pbVar33[2] == 0xff) {
                        puVar35[2] = uVar6;
                      }
                      else {
                        uVar5 = FUN_1012828e(uVar18,puVar35[2]);
                        puVar35[2] = uVar5;
                      }
                      if (pbVar33[3] == 0xff) goto LAB_1008f00c;
                      uVar5 = FUN_1012828e(uVar18,puVar35[3]);
                      puVar35[3] = uVar5;
                    }
                    puVar35 = puVar35 + 4;
                    pbVar33 = pbVar33 + 4;
                  }
                  pbVar27 = pbVar33;
                  puVar26 = puVar35;
                  while ((int)(pbVar27 + (iVar34 - (int)pbVar33)) < iVar16) {
                    if (*pbVar27 == 0xff) {
                      *puVar26 = uVar6;
                    }
                    else {
                      uVar5 = FUN_1012828e(uVar18,*puVar26);
                      *puVar26 = uVar5;
                    }
                    puVar26 = puVar26 + 1;
                    pbVar27 = pbVar27 + 1;
                  }
                  iVar20 = iVar16 - iVar34;
                  iVar13 = iVar20 * 2;
                  if (iVar16 < iVar34) {
                    iVar13 = 0;
                    iVar20 = 0;
                  }
                  puVar35 = (ushort *)((int)puVar35 + iVar13 + ((local_38 - local_30) + iVar24) * 2)
                  ;
                  pbVar33 = pbVar33 + iVar20 + (local_5c - iVar16);
                }
              }
            }
            else if (pbVar33 == (byte *)0x0) {
              iVar32 = 0;
              if (uVar11 < 0xfd) {
                for (; iVar32 < iVar22; iVar32 = iVar32 + 1) {
                  for (iVar24 = 0; iVar24 < iVar16; iVar24 = iVar24 + 1) {
                    uVar6 = FUN_1012828e(psVar30[iVar24],puVar35[iVar24],uVar11);
                    puVar35[iVar24] = uVar6;
                  }
                  puVar35 = puVar35 + iVar7;
                  psVar30 = psVar30 + local_58;
                }
              }
              else {
                for (iVar32 = 0; iVar32 < iVar22; iVar32 = iVar32 + 1) {
                  thunk_FUN_1011ea40(puVar35,psVar30,iVar16 * 2);
                  puVar35 = puVar35 + iVar7;
                  psVar30 = psVar30 + local_58;
                }
              }
            }
            else if (uVar11 < 0xfe) {
              for (iVar32 = 0; iVar32 < iVar22; iVar32 = iVar32 + 1) {
                for (iVar24 = 0; iVar24 < iVar16; iVar24 = iVar24 + 1) {
                  uVar18 = (uint)pbVar33[iVar24];
                  if (uVar18 != 0) {
                    uVar31 = uVar11;
                    if (uVar18 < 0xfd) {
                      uVar31 = uVar11 * uVar18;
                    }
                    if (uVar18 < 0xfd) {
                      uVar31 = uVar31 >> 8;
                    }
                    uVar6 = FUN_1012828e(psVar30[iVar24],puVar35[iVar24],uVar31);
                    puVar35[iVar24] = uVar6;
                  }
                }
                puVar35 = puVar35 + iVar7;
                psVar30 = psVar30 + local_58;
                pbVar33 = pbVar33 + local_5c;
              }
            }
            else {
              for (local_64 = 0; local_64 < iVar22; local_64 = local_64 + 1) {
                iVar32 = 0;
                pbVar27 = pbVar33;
                while ((iVar32 < iVar16 && (((uint)pbVar27 & 3) != 0))) {
                  if (*pbVar27 != 0) {
                    if (*pbVar27 == 0xff) {
                      puVar35[iVar32] = psVar30[iVar32];
                    }
                    else {
                      uVar6 = FUN_1012828e(psVar30[iVar32],puVar35[iVar32]);
                      puVar35[iVar32] = uVar6;
                    }
                  }
                  iVar32 = iVar32 + 1;
                  pbVar27 = pbVar27 + 1;
                }
                puVar26 = puVar35 + iVar32;
                puVar28 = (ushort *)(psVar30 + iVar32);
                for (; iVar32 < iVar9 + -3; iVar32 = iVar32 + 4) {
                  if (*(int *)pbVar27 != 0) {
                    if (*(int *)pbVar27 == -1) {
                      *puVar26 = *puVar28;
                      puVar26[1] = puVar28[1];
                      puVar26[2] = puVar28[2];
LAB_1008f202:
                      puVar26[3] = puVar28[3];
                    }
                    else {
                      if (*pbVar27 != 0) {
                        if (*pbVar27 == 0xff) {
                          *puVar26 = *puVar28;
                        }
                        else {
                          uVar6 = FUN_1012828e(*puVar28,*puVar26);
                          *puVar26 = uVar6;
                        }
                      }
                      if (pbVar27[1] != 0) {
                        if (pbVar27[1] == 0xff) {
                          puVar26[1] = puVar28[1];
                        }
                        else {
                          uVar6 = FUN_1012828e(puVar28[1],puVar26[1]);
                          puVar26[1] = uVar6;
                        }
                      }
                      if (pbVar27[2] != 0) {
                        if (pbVar27[2] == 0xff) {
                          puVar26[2] = puVar28[2];
                        }
                        else {
                          uVar6 = FUN_1012828e(puVar28[2],puVar26[2]);
                          puVar26[2] = uVar6;
                        }
                      }
                      if (pbVar27[3] != 0) {
                        if (pbVar27[3] == 0xff) goto LAB_1008f202;
                        uVar6 = FUN_1012828e(puVar28[3],puVar26[3]);
                        puVar26[3] = uVar6;
                      }
                    }
                  }
                  pbVar27 = pbVar27 + 4;
                  puVar26 = puVar26 + 4;
                  puVar28 = puVar28 + 4;
                }
                pbVar27 = pbVar27 + -1;
                for (; iVar32 < iVar16; iVar32 = iVar32 + 1) {
                  pbVar27 = pbVar27 + 1;
                  if (*pbVar27 != 0) {
                    if (*pbVar27 == 0xff) {
                      puVar35[iVar32] = psVar30[iVar32];
                    }
                    else {
                      uVar6 = FUN_1012828e(psVar30[iVar32],puVar35[iVar32]);
                      puVar35[iVar32] = uVar6;
                    }
                  }
                }
                puVar35 = puVar35 + iVar7;
                psVar30 = psVar30 + local_58;
                pbVar33 = pbVar33 + local_5c;
              }
            }
          }
          else {
            uVar12 = (local_30 + 1) - local_38;
            uVar31 = (uint)(byte)(*(char *)((int)param_2 + 0x19) - 1);
            if (iVar32 == 0) {
              uVar2 = *(undefined2 *)(param_2 + 2);
              if (uVar31 < 3) {
                uVar6 = *puVar35;
                pcVar29 = *(code **)(DAT_1008f4fc + uVar31 * 4);
                if (pbVar33 == (byte *)0x0) {
                  uVar5 = (*pcVar29)(uVar2,uVar6,uVar11);
                  for (iVar32 = 0; iVar32 < iVar22; iVar32 = iVar32 + 1) {
                    puVar26 = puVar35;
                    for (iVar24 = 0; iVar24 < (int)uVar12; iVar24 = iVar24 + 1) {
                      uVar3 = *puVar26;
                      if (uVar3 != uVar6) {
                        uVar5 = (*pcVar29)(uVar2,uVar3,uVar11);
                      }
                      *puVar26 = uVar5;
                      puVar26 = puVar26 + 1;
                      uVar6 = uVar3;
                    }
                    puVar35 = puVar35 + iVar7;
                  }
                  return;
                }
                iVar32 = 0;
                uVar31 = uVar11;
                if (*pbVar33 < 0xfd) {
                  uVar31 = uVar11 * *pbVar33 >> 8;
                }
                uVar5 = (*pcVar29)(uVar2,uVar6,uVar31);
                for (; iVar32 < iVar22; iVar32 = iVar32 + 1) {
                  for (iVar24 = 0; iVar24 < (int)uVar12; iVar24 = iVar24 + 1) {
                    uVar31 = (uint)pbVar33[iVar24];
                    if (uVar31 != 0) {
                      if ((uVar31 != uVar18) || (puVar35[iVar24] != uVar6)) {
                        uVar18 = uVar11;
                        if (uVar31 < 0xfd) {
                          uVar18 = uVar11 * uVar31;
                        }
                        if (uVar31 < 0xfd) {
                          uVar18 = uVar18 >> 8;
                        }
                        uVar5 = (*pcVar29)(uVar2,puVar35[iVar24],uVar18);
                        uVar18 = (uint)pbVar33[iVar24];
                        uVar6 = puVar35[iVar24];
                      }
                      puVar35[iVar24] = uVar5;
                    }
                  }
                  puVar35 = puVar35 + iVar7;
                  pbVar33 = pbVar33 + local_5c;
                }
                return;
              }
              uVar14 = 0x232;
              uVar21 = DAT_1008f504;
            }
            else {
              if (uVar31 < 3) {
                pcVar29 = *(code **)(DAT_1008f50c + uVar31 * 4);
                uVar6 = *puVar35;
                sVar15 = *psVar30;
                if (pbVar33 == (byte *)0x0) {
                  uVar5 = (*pcVar29)(sVar15,uVar6,uVar11);
                  for (iVar32 = 0; iVar32 < iVar22; iVar32 = iVar32 + 1) {
                    for (iVar24 = 0; iVar24 < (int)uVar12; iVar24 = iVar24 + 1) {
                      sVar4 = psVar30[iVar24];
                      uVar3 = puVar35[iVar24];
                      if ((sVar4 != sVar15) || (uVar6 != uVar3)) {
                        uVar5 = (*pcVar29)(sVar4,uVar3,uVar11);
                        sVar15 = sVar4;
                      }
                      puVar35[iVar24] = uVar5;
                      uVar6 = uVar3;
                    }
                    puVar35 = puVar35 + iVar7;
                    psVar30 = psVar30 + local_58;
                  }
                  return;
                }
                uVar18 = uVar11;
                if (*pbVar33 < 0xfd) {
                  uVar18 = *pbVar33 * uVar11 >> 8;
                }
                uVar5 = (*pcVar29)(sVar15,uVar6,uVar18);
                for (local_58 = 0; local_58 < iVar22; local_58 = local_58 + 1) {
                  for (iVar32 = 0; iVar32 < (int)uVar12; iVar32 = iVar32 + 1) {
                    uVar19 = (uint)pbVar33[iVar32];
                    uVar31 = uVar18;
                    if (uVar19 != 0) {
                      uVar31 = uVar12;
                      if (uVar19 < 0xfd) {
                        uVar31 = uVar11;
                      }
                      sVar4 = psVar30[iVar32];
                      uVar25 = uVar19;
                      if (uVar19 < 0xfd) {
                        uVar25 = uVar31 * uVar19;
                      }
                      uVar3 = puVar35[iVar32];
                      uVar31 = uVar11;
                      if (uVar19 < 0xfd) {
                        uVar31 = uVar25 >> 8;
                      }
                      if (((sVar4 != sVar15) || (uVar6 != uVar3)) || (uVar18 != uVar31)) {
                        uVar5 = (*pcVar29)(sVar4,uVar3,uVar31);
                        sVar15 = sVar4;
                      }
                      puVar35[iVar32] = uVar5;
                      uVar6 = uVar3;
                    }
                    uVar18 = uVar31;
                  }
                  puVar35 = puVar35 + iVar7;
                  psVar30 = psVar30 + iVar9;
                  pbVar33 = pbVar33 + local_5c;
                }
                return;
              }
              uVar14 = 0x38d;
              uVar21 = DAT_1008f510;
            }
            FUN_10094174(2,DAT_1008f508,uVar14,uVar21,DAT_1008f500);
          }
        }
        else {
          uVar18 = (local_30 + 1) - local_38;
          iVar7 = iVar7 * 3;
          if (iVar32 == 0) {
            local_40[0] = *(undefined2 *)(param_2 + 2);
            thunk_FUN_1011ea40(auStack_3c,local_40,2);
            local_3a = bVar10;
            if (pbVar33 == (byte *)0x0) {
              iVar32 = 0;
              iVar9 = 0;
              if (uVar11 < 0xfd) {
                for (; iVar32 < iVar22; iVar32 = iVar32 + 1) {
                  for (iVar24 = 0; iVar24 < (int)uVar18; iVar24 = iVar24 + 1) {
                    FUN_1008e790((byte *)(iVar24 * 3 + (int)puVar35),local_40[0],uVar11);
                  }
                  puVar35 = (ushort *)((int)puVar35 + iVar7);
                }
              }
              else {
                for (; iVar9 < (int)uVar18; iVar9 = iVar9 + 1) {
                  thunk_FUN_1011ea40((byte *)(iVar9 * 3 + (int)puVar35),auStack_3c,3);
                }
                pbVar33 = (byte *)((uVar18 & ~((int)uVar18 >> 0x1f)) * 3 +
                                   ((local_38 - local_30) + iVar24) * 3 + (int)puVar35);
                for (iVar32 = 1; iVar32 < iVar22; iVar32 = iVar32 + 1) {
                  thunk_FUN_1011ea40(pbVar33,puVar35,uVar18 * 3);
                  pbVar33 = pbVar33 + iVar7;
                }
              }
            }
            else {
              uVar31 = uVar18 & ~((int)uVar18 >> 0x1f);
              iVar32 = 0;
              iVar24 = 0;
              if (uVar11 < 0xfd) {
                for (; iVar32 < iVar22; iVar32 = iVar32 + 1) {
                  for (iVar24 = 0; iVar24 < (int)uVar18; iVar24 = iVar24 + 1) {
                    uVar12 = (uint)pbVar33[iVar24];
                    if (uVar12 != 0) {
                      uVar19 = uVar11;
                      if (uVar12 != 0xff) {
                        uVar19 = uVar11 * uVar12 >> 8;
                      }
                      FUN_1008e790((byte *)(iVar24 * 3 + (int)puVar35),local_40[0],uVar19);
                    }
                  }
                  puVar35 = (ushort *)((int)puVar35 + iVar7);
                  pbVar33 = pbVar33 + (local_38 - (local_30 + 1)) + local_5c + uVar31;
                }
              }
              else {
                for (; iVar24 < iVar22; iVar24 = iVar24 + 1) {
                  for (iVar32 = 0; iVar32 < (int)uVar18; iVar32 = iVar32 + 1) {
                    FUN_1008e790((byte *)(iVar32 * 3 + (int)puVar35),local_40[0],pbVar33[iVar32]);
                  }
                  pbVar33 = pbVar33 + uVar31;
                  puVar35 = (ushort *)((int)puVar35 + iVar7);
                }
              }
            }
          }
          else {
            uVar31 = *(byte *)((int)param_2 + 0x19) - 1 & 0xff;
            iVar32 = 0;
            if (uVar31 < 3) {
              iVar32 = *(int *)(DAT_1008ef88 + uVar31 * 4);
            }
            if (pbVar33 == (byte *)0x0) {
              iVar24 = 0;
              iVar9 = 0;
              if (uVar11 < 0xfd) {
                for (; iVar24 < iVar22; iVar24 = iVar24 + 1) {
                  if (iVar32 == 0) {
                    for (iVar9 = 0; iVar9 < (int)uVar18; iVar9 = iVar9 + 1) {
                      FUN_1008e790((byte *)(iVar9 * 3 + (int)puVar35),psVar30[iVar9],uVar11);
                    }
                  }
                  else {
                    for (iVar9 = 0; iVar9 < (int)uVar18; iVar9 = iVar9 + 1) {
                      FUN_1008e860((byte *)(iVar9 * 3 + (int)puVar35),psVar30[iVar9],uVar11,iVar32);
                    }
                  }
                  puVar35 = (ushort *)((int)puVar35 + iVar7);
                  psVar30 = psVar30 + local_58;
                }
              }
              else {
                for (; iVar9 < iVar22; iVar9 = iVar9 + 1) {
                  if (iVar32 == 0) {
                    for (iVar24 = 0; iVar24 < (int)uVar18; iVar24 = iVar24 + 1) {
                      FUN_1008e790((byte *)(iVar24 * 3 + (int)puVar35),psVar30[iVar24],0xff);
                    }
                  }
                  else {
                    for (iVar24 = 0; iVar24 < (int)uVar18; iVar24 = iVar24 + 1) {
                      FUN_1008e860((byte *)(iVar24 * 3 + (int)puVar35),psVar30[iVar24],0xff,iVar32);
                    }
                  }
                  puVar35 = (ushort *)((int)puVar35 + iVar7);
                  psVar30 = psVar30 + local_58;
                }
              }
            }
            else {
              iVar24 = 0;
              if (uVar11 < 0xfe) {
                for (; iVar24 < iVar22; iVar24 = iVar24 + 1) {
                  if (iVar32 == 0) {
                    for (iVar9 = 0; iVar9 < (int)uVar18; iVar9 = iVar9 + 1) {
                      uVar31 = (uint)pbVar33[iVar9];
                      if (uVar31 != 0) {
                        uVar12 = uVar11;
                        if (uVar31 < 0xfd) {
                          uVar12 = uVar11 * uVar31;
                        }
                        if (uVar31 < 0xfd) {
                          uVar12 = uVar12 >> 8;
                        }
                        FUN_1008e790((byte *)(iVar9 * 3 + (int)puVar35),psVar30[iVar9],uVar12);
                      }
                    }
                  }
                  else {
                    for (iVar9 = 0; iVar9 < (int)uVar18; iVar9 = iVar9 + 1) {
                      uVar31 = (uint)pbVar33[iVar9];
                      if (uVar31 != 0) {
                        uVar12 = uVar11;
                        if (uVar31 < 0xfd) {
                          uVar12 = uVar11 * uVar31;
                        }
                        if (uVar31 < 0xfd) {
                          uVar12 = uVar12 >> 8;
                        }
                        FUN_1008e860((byte *)(iVar9 * 3 + (int)puVar35),psVar30[iVar9],uVar12,iVar32
                                    );
                      }
                    }
                  }
                  puVar35 = (ushort *)((int)puVar35 + iVar7);
                  psVar30 = psVar30 + local_58;
                  pbVar33 = pbVar33 + local_5c;
                }
              }
              else {
                for (; iVar24 < iVar22; iVar24 = iVar24 + 1) {
                  if (iVar32 == 0) {
                    for (iVar9 = 0; iVar9 < (int)uVar18; iVar9 = iVar9 + 1) {
                      FUN_1008e790((byte *)(iVar9 * 3 + (int)puVar35),psVar30[iVar9],pbVar33[iVar9])
                      ;
                    }
                  }
                  else {
                    for (iVar9 = 0; iVar9 < (int)uVar18; iVar9 = iVar9 + 1) {
                      FUN_1008e860((byte *)(iVar9 * 3 + (int)puVar35),psVar30[iVar9],pbVar33[iVar9],
                                   iVar32);
                    }
                  }
                  puVar35 = (ushort *)((int)puVar35 + iVar7);
                  psVar30 = psVar30 + local_58;
                  pbVar33 = pbVar33 + local_5c;
                }
              }
            }
          }
        }
      }
      else if (iVar32 == 0) {
        uVar2 = *(undefined2 *)(param_2 + 2);
        piVar8 = (int *)FUN_1008bbb4();
        iVar32 = local_34;
        if (pbVar33 == (byte *)0x0) {
          for (; iVar24 = local_38, iVar32 <= local_2c; iVar32 = iVar32 + 1) {
            for (; iVar24 <= local_30; iVar24 = iVar24 + 1) {
              (**(code **)(*piVar8 + 0x28))(*piVar8,puVar35,iVar7,iVar24,iVar32,uVar2,uVar11);
            }
          }
        }
        else {
          iVar22 = (local_30 + 1) - local_38;
          iVar24 = (local_2c + 1) - local_34;
          for (iVar32 = 0; iVar32 < iVar24; iVar32 = iVar32 + 1) {
            for (iVar9 = 0; iVar9 < iVar22; iVar9 = iVar9 + 1) {
              if (pbVar33[iVar9] != 0) {
                (**(code **)(*piVar8 + 0x28))
                          (*piVar8,puVar35,iVar7,local_38 + iVar9,local_34 + iVar32,uVar2,
                           uVar11 * pbVar33[iVar9] >> 8);
              }
            }
            pbVar33 = pbVar33 + local_5c;
          }
        }
      }
      else {
        piVar8 = (int *)FUN_1008bbb4();
        iVar22 = (local_30 + 1) - local_38;
        iVar24 = (local_2c + 1) - local_34;
        iVar32 = 0;
        if (pbVar33 == (byte *)0x0) {
          for (; iVar32 < iVar24; iVar32 = iVar32 + 1) {
            for (iVar9 = 0; iVar9 < iVar22; iVar9 = iVar9 + 1) {
              (**(code **)(*piVar8 + 0x28))
                        (*piVar8,puVar35,iVar7,local_38 + iVar9,local_34 + iVar32,psVar30[iVar9],
                         uVar11);
            }
            psVar30 = psVar30 + local_58;
          }
        }
        else {
          for (iVar32 = 0; iVar32 < iVar24; iVar32 = iVar32 + 1) {
            for (iVar9 = 0; iVar9 < iVar22; iVar9 = iVar9 + 1) {
              if (pbVar33[iVar9] != 0) {
                (**(code **)(*piVar8 + 0x28))
                          (*piVar8,puVar35,iVar7,local_38 + iVar9,local_34 + iVar32,psVar30[iVar9],
                           uVar11 * pbVar33[iVar9] >> 8);
              }
            }
            pbVar33 = pbVar33 + local_5c;
            psVar30 = psVar30 + local_58;
          }
        }
      }
    }
  }
  return;
}

