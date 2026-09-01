/* FUN_1006b0e4 @ 0x1006b0e4 */

int FUN_1006b0e4(byte *param_1,int param_2,byte *param_3)

{
  ushort uVar1;
  ulonglong uVar2;
  short sVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte bVar15;
  ushort *puVar16;
  undefined4 *puVar17;
  ushort *puVar19;
  ushort *puVar20;
  uint uVar21;
  byte *pbVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  byte *pbVar27;
  ushort *puVar28;
  undefined4 *puVar29;
  ushort *puVar30;
  ushort *puVar31;
  ushort *puVar32;
  ushort *local_40;
  ushort *local_3c;
  undefined4 *puVar18;
  
  puVar16 = (ushort *)(param_1 + param_2 + -2);
  if (param_2 < 4) {
    if (param_2 != 0) {
      pbVar12 = (byte *)((int)puVar16 + 1);
      pbVar11 = param_3 + 1;
      *param_3 = (char)param_2 - 1;
      if (param_1 <= pbVar12) {
        if ((pbVar11 < param_1 + 4 && param_1 < param_3 + 5) ||
           ((byte *)((1 - (int)param_1) + (int)puVar16) < &NMI)) {
          pbVar11 = param_1;
          do {
            pbVar12 = pbVar11 + 1;
            param_3 = param_3 + 1;
            *param_3 = *pbVar11;
            pbVar11 = pbVar12;
          } while (param_1 + param_2 != pbVar12);
        }
        else {
          uVar6 = 0;
          pbVar27 = (byte *)((2 - (int)param_1) + (int)puVar16);
          uVar8 = ((uint)(pbVar27 + -4) >> 2) + 1;
          pbVar22 = pbVar11;
          pbVar13 = param_1;
          do {
            uVar6 = uVar6 + 1;
            *(undefined4 *)pbVar22 = *(undefined4 *)pbVar13;
            pbVar22 = pbVar22 + 4;
            pbVar13 = pbVar13 + 4;
          } while (uVar6 < uVar8);
          if (((pbVar27 != (byte *)(uVar8 * 4)) &&
              (pbVar11[uVar8 * 4] = param_1[uVar8 * 4], param_1 + uVar8 * 4 + 1 <= pbVar12)) &&
             (pbVar11[uVar8 * 4 + 1] = param_1[uVar8 * 4 + 1], param_1 + uVar8 * 4 + 2 <= pbVar12))
          {
            pbVar11[uVar8 * 4 + 2] = param_1[uVar8 * 4 + 2];
          }
        }
      }
      return param_2 + 1;
    }
    return 0;
  }
  puVar29 = (undefined4 *)*DAT_1006b430;
  if (puVar29 == (undefined4 *)0x0) {
    return 0;
  }
  puVar17 = puVar29;
  do {
    puVar18 = puVar17 + 1;
    *puVar17 = 0;
    puVar17 = puVar18;
  } while (puVar29 + 0x400 != puVar18);
  *param_3 = 0x1f;
  puVar19 = (ushort *)(param_1 + 2);
  puVar28 = (ushort *)(param_1 + param_2 + -0xd);
  param_3[1] = *param_1;
  param_3[2] = param_1[1];
  uVar6 = DAT_1006b434;
  pbVar11 = param_3 + 3;
  if (puVar19 < puVar28) {
    uVar8 = 2;
LAB_1006b146:
    uVar21 = uVar8;
    bVar15 = *(byte *)((int)puVar19 + -1);
    sVar3 = (short)param_1;
    pbVar12 = pbVar11;
    puVar20 = puVar19;
    if (bVar15 == (byte)*puVar19) goto LAB_1006b2de;
    do {
      do {
        uVar8 = (ushort)(*(ushort *)((int)puVar20 + 1) ^ *puVar20 ^ *puVar20 >> 5) & 0x7ff;
        uVar1 = *(ushort *)((int)puVar29 + uVar8 * 2);
        *(short *)((int)puVar29 + uVar8 * 2) = (short)puVar20 - sVar3;
        pbVar11 = param_1 + uVar1;
        uVar8 = (int)puVar20 - (int)pbVar11;
        uVar24 = uVar8 - 1;
        if (uVar6 < uVar24) {
          bVar15 = (byte)*puVar20;
        }
        else {
          bVar15 = (byte)*puVar20;
          if (((param_1[uVar1] == bVar15) && (pbVar11[1] == *(byte *)((int)puVar20 + 1))) &&
             (pbVar11[2] == (byte)puVar20[1])) {
            if (uVar8 < 0x1fff) {
              local_3c = (ushort *)(pbVar11 + 3);
              iVar25 = 3;
            }
            else {
              if ((*(byte *)((int)puVar20 + 3) != pbVar11[3]) || ((byte)puVar20[2] != pbVar11[4]))
              goto LAB_1006b2ba;
              iVar25 = 5;
              local_3c = (ushort *)(pbVar11 + 5);
            }
            puVar30 = (ushort *)((int)puVar20 + iVar25);
            if (uVar24 == 0) {
              bVar5 = *(byte *)((int)puVar30 + -1);
              goto LAB_1006b2f6;
            }
            if ((byte)*local_3c != *(byte *)((int)puVar20 + iVar25)) {
              puVar19 = puVar30;
              puVar31 = (ushort *)((int)puVar30 + 1);
              local_40 = (ushort *)((int)puVar30 + -1);
              goto LAB_1006b1e6;
            }
            local_40 = puVar30 + 1;
            if (*(byte *)((int)local_3c + 1) != *(byte *)((int)puVar30 + 1)) {
              puVar19 = (ushort *)((int)puVar30 + 1);
              puVar31 = local_40;
              local_40 = puVar30;
              goto LAB_1006b1e6;
            }
            puVar9 = (ushort *)((int)puVar30 + 3);
            if ((byte)local_3c[1] != (byte)puVar30[1]) {
              puVar19 = local_40;
              puVar31 = puVar9;
              local_40 = (ushort *)((int)puVar30 + 1);
              goto LAB_1006b1e6;
            }
            puVar10 = puVar30 + 2;
            puVar19 = puVar9;
            puVar31 = puVar10;
            if ((((*(byte *)((int)local_3c + 3) != *(byte *)((int)puVar30 + 3)) ||
                 (puVar32 = (ushort *)((int)puVar30 + 5), puVar19 = puVar10, puVar31 = puVar32,
                 local_40 = puVar9, (byte)local_3c[2] != (byte)puVar30[2])) ||
                (puVar9 = puVar30 + 3, puVar19 = puVar32, puVar31 = puVar9, local_40 = puVar10,
                *(byte *)((int)local_3c + 5) != *(byte *)((int)puVar30 + 5))) ||
               ((puVar19 = puVar9, puVar31 = (ushort *)((int)puVar30 + 7), local_40 = puVar32,
                (byte)local_3c[3] != (byte)puVar30[3] ||
                (puVar31 = puVar30 + 4, puVar19 = (ushort *)((int)puVar30 + 7), local_40 = puVar9,
                *(byte *)((int)local_3c + 7) != *(byte *)((int)puVar30 + 7))))) goto LAB_1006b1e6;
            puVar19 = local_3c + 4;
            goto LAB_1006b93c;
          }
        }
LAB_1006b2ba:
        uVar21 = uVar21 + 1;
        pbVar11 = pbVar12 + 1;
        *pbVar12 = bVar15;
        if (uVar21 == 0x20) {
          uVar21 = 0;
          pbVar12[1] = 0x1f;
          pbVar11 = pbVar12 + 2;
        }
        puVar19 = (ushort *)((int)puVar20 + 1);
        if (puVar28 <= puVar19) goto LAB_1006b27c;
        bVar15 = (byte)*puVar20;
        pbVar12 = pbVar11;
        puVar20 = puVar19;
      } while (bVar15 != *(byte *)puVar19);
LAB_1006b2de:
    } while ((bVar15 != *(byte *)((int)puVar20 + 1)) || (bVar5 = (byte)puVar20[1], bVar15 != bVar5))
    ;
    local_3c = puVar20 + 1;
    puVar30 = (ushort *)((int)puVar20 + 3);
LAB_1006b2f6:
    puVar19 = puVar30;
    if (puVar30 < puVar16) {
      do {
        puVar30 = puVar19;
        if ((byte)*local_3c != bVar5) goto LAB_1006b316;
        local_3c = (ushort *)((int)local_3c + 1);
        puVar19 = (ushort *)((int)puVar30 + 1);
      } while (puVar16 != (ushort *)((int)puVar30 + 1));
      uVar24 = 0;
      uVar8 = 1;
      puVar19 = puVar30;
      puVar31 = puVar16;
      local_40 = (ushort *)((int)puVar30 + -1);
      goto LAB_1006b1e6;
    }
LAB_1006b316:
    local_40._0_2_ = (short)puVar30 + -2;
    uVar24 = 0;
    uVar8 = 1;
    puVar19 = (ushort *)((int)puVar30 + -1);
    goto joined_r0x1006b1e8;
  }
  if (puVar19 <= (ushort *)((int)puVar16 + 1)) {
    uVar21 = 2;
    goto LAB_1006b284;
  }
  bVar15 = 1;
  uVar21 = 2;
LAB_1006b2a4:
  pbVar11[~uVar21] = bVar15;
LAB_1006b2a6:
  *param_3 = *param_3 | 0x20;
  return (int)pbVar11 - (int)param_3;
  while( true ) {
    uVar1 = *puVar19;
    puVar19 = (ushort *)((int)puVar19 + 1);
    puVar31 = (ushort *)((int)puVar30 + 1);
    if ((byte)uVar1 != (byte)*puVar30) break;
LAB_1006b93c:
    puVar30 = puVar31;
    if (puVar16 <= puVar30) {
      puVar19 = (ushort *)((int)puVar30 + -1);
      puVar31 = puVar30;
      local_40 = puVar30 + -1;
      goto LAB_1006b1e6;
    }
  }
  puVar19 = puVar30;
  local_40 = (ushort *)((int)puVar30 + -1);
LAB_1006b1e6:
  puVar30 = puVar31;
joined_r0x1006b1e8:
  if (uVar21 == 0) {
    pbVar12 = pbVar12 + -1;
  }
  else {
    pbVar12[~uVar21] = (char)uVar21 - 1;
  }
  uVar21 = ((int)puVar30 + -3) - (int)puVar20;
  if (0x1ffe < uVar24) {
    if (uVar21 < 7) {
      *pbVar12 = (char)uVar21 * ' ' + 0x1f;
      pbVar12[3] = (byte)(uVar8 - 0x2000);
      pbVar12[2] = (byte)(uVar8 - 0x2000 >> 8);
      pbVar12[1] = 0xff;
      pbVar22 = pbVar12 + 4;
      goto LAB_1006b218;
    }
    uVar24 = uVar21 - 7;
    pbVar22 = pbVar12 + 1;
    *pbVar12 = 0xff;
    uVar7 = uVar24;
    if (0xfe < uVar24) {
      uVar7 = uVar21 - 0x106;
      uVar2 = (ulonglong)DAT_1006b63c;
      uVar23 = -(int)pbVar22 & 7;
      pbVar11 = pbVar22;
      if (0x10ee < uVar7) {
        if (uVar23 != 0) {
          pbVar12[1] = 0xff;
          uVar24 = uVar7;
          pbVar11 = pbVar12 + 2;
          if (uVar23 != 1) {
            pbVar12[2] = 0xff;
            uVar24 = uVar21 - 0x205;
            pbVar11 = pbVar12 + 3;
            if (uVar23 != 2) {
              pbVar12[3] = 0xff;
              uVar24 = uVar21 - 0x304;
              pbVar11 = pbVar12 + 4;
              if (uVar23 != 3) {
                pbVar12[4] = 0xff;
                uVar24 = uVar21 - 0x403;
                pbVar11 = pbVar12 + 5;
                if (uVar23 != 4) {
                  pbVar12[5] = 0xff;
                  uVar24 = uVar21 - 0x502;
                  pbVar11 = pbVar12 + 6;
                  if (uVar23 != 5) {
                    pbVar12[6] = 0xff;
                    uVar24 = uVar21 - 0x601;
                    pbVar11 = pbVar12 + 7;
                    if (uVar23 == 7) {
                      pbVar12[7] = 0xff;
                      uVar24 = uVar21 - 0x700;
                      pbVar11 = pbVar12 + 8;
                    }
                  }
                }
              }
            }
          }
        }
        uVar21 = ((uint)(uVar2 * uVar7 >> 0x27) + 1) - uVar23;
        pbVar27 = pbVar11 + 1;
        iVar25 = uVar24 - 0xff;
        pbVar13 = pbVar12 + uVar23 + 1;
        do {
          pbVar14 = pbVar13 + 8;
          pbVar13[0] = 0xff;
          pbVar13[1] = 0xff;
          pbVar13[2] = 0xff;
          pbVar13[3] = 0xff;
          pbVar13[4] = 0xff;
          pbVar13[5] = 0xff;
          pbVar13[6] = 0xff;
          pbVar13[7] = 0xff;
          uVar7 = iVar25 - 0x6f9;
          iVar25 = iVar25 + -0x7f8;
          pbVar22 = pbVar27 + 7;
          pbVar27 = pbVar27 + 8;
          pbVar13 = pbVar14;
        } while (pbVar14 != pbVar12 + uVar23 + 1 + (uVar21 & 0xfffffff8));
        uVar23 = uVar21 & 0xfffffff8;
        uVar24 = uVar24 + uVar23 * -0xff;
        pbVar11 = pbVar11 + uVar23;
        if (uVar23 == uVar21) goto LAB_1006b626;
      }
      uVar7 = uVar24 - 0xff;
      pbVar22 = pbVar11 + 1;
      *pbVar11 = 0xff;
      if (0xfe < uVar7) {
        uVar7 = uVar24 - 0x1fe;
        pbVar11[1] = 0xff;
        pbVar22 = pbVar11 + 2;
        if (0xfe < uVar7) {
          uVar7 = uVar24 - 0x2fd;
          pbVar11[2] = 0xff;
          pbVar22 = pbVar11 + 3;
          if (0xfe < uVar7) {
            uVar7 = uVar24 - 0x3fc;
            pbVar11[3] = 0xff;
            pbVar22 = pbVar11 + 4;
            if (0xfe < uVar7) {
              uVar7 = uVar24 - 0x4fb;
              pbVar11[4] = 0xff;
              pbVar22 = pbVar11 + 5;
              if (0xfe < uVar7) {
                uVar7 = uVar24 - 0x5fa;
                pbVar11[5] = 0xff;
                pbVar22 = pbVar11 + 6;
                if (0xfe < uVar7) {
                  uVar7 = uVar24 - 0x6f9;
                  pbVar11[6] = 0xff;
                  pbVar22 = pbVar11 + 7;
                  if (0xfe < uVar7) {
                    uVar7 = uVar24 - 0x7f8;
                    pbVar11[7] = 0xff;
                    pbVar22 = pbVar11 + 8;
                    if (0xfe < uVar7) {
                      uVar7 = uVar24 - 0x8f7;
                      pbVar11[8] = 0xff;
                      pbVar22 = pbVar11 + 9;
                      if (0xfe < uVar7) {
                        uVar7 = uVar24 - 0x9f6;
                        pbVar11[9] = 0xff;
                        pbVar22 = pbVar11 + 10;
                        if (0xfe < uVar7) {
                          uVar7 = uVar24 - 0xaf5;
                          pbVar11[10] = 0xff;
                          pbVar22 = pbVar11 + 0xb;
                          if (0xfe < uVar7) {
                            uVar7 = uVar24 - 0xbf4;
                            pbVar11[0xb] = 0xff;
                            pbVar22 = pbVar11 + 0xc;
                            if (0xfe < uVar7) {
                              uVar7 = uVar24 - 0xcf3;
                              pbVar11[0xc] = 0xff;
                              pbVar22 = pbVar11 + 0xd;
                              if (0xfe < uVar7) {
                                uVar7 = uVar24 - 0xdf2;
                                pbVar11[0xd] = 0xff;
                                pbVar22 = pbVar11 + 0xe;
                                if (0xfe < uVar7) {
                                  uVar7 = uVar24 - 0xef1;
                                  pbVar11[0xe] = 0xff;
                                  pbVar22 = pbVar11 + 0xf;
                                  if (0xfe < uVar7) {
                                    uVar7 = uVar24 - 0xff0;
                                    pbVar11[0xf] = 0xff;
                                    pbVar22 = pbVar11 + 0x10;
                                    if (0xfe < uVar7) {
                                      uVar7 = uVar24 - 0x10ef;
                                      pbVar11[0x10] = 0xff;
                                      pbVar22 = pbVar11 + 0x11;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_1006b626:
    *pbVar22 = (byte)uVar7;
    pbVar22[1] = 0xff;
    pbVar22[3] = (byte)(uVar8 - 0x2000);
    pbVar22[2] = (byte)(uVar8 - 0x2000 >> 8);
    pbVar22 = pbVar22 + 4;
    goto LAB_1006b218;
  }
  cVar4 = (char)(uVar24 >> 8);
  if (uVar21 < 7) {
    pbVar22 = pbVar12 + 2;
    *pbVar12 = cVar4 + (char)uVar21 * ' ';
    pbVar12[1] = (byte)uVar24;
    goto LAB_1006b218;
  }
  uVar8 = uVar21 - 7;
  pbVar11 = pbVar12 + 1;
  *pbVar12 = cVar4 - 0x20;
  if (0xfe < uVar8) {
    uVar23 = uVar21 - 0x106;
    uVar2 = (ulonglong)DAT_1006b95c;
    uVar26 = -(int)pbVar11 & 7;
    pbVar22 = pbVar11;
    uVar7 = uVar8;
    if (0x10ee < uVar23) {
      if (uVar26 != 0) {
        pbVar12[1] = 0xff;
        pbVar22 = pbVar12 + 2;
        uVar7 = uVar23;
        if (uVar26 != 1) {
          pbVar12[2] = 0xff;
          pbVar22 = pbVar12 + 3;
          uVar7 = uVar21 - 0x205;
          if (uVar26 != 2) {
            pbVar12[3] = 0xff;
            pbVar22 = pbVar12 + 4;
            uVar7 = uVar21 - 0x304;
            if (uVar26 != 3) {
              pbVar12[4] = 0xff;
              pbVar22 = pbVar12 + 5;
              uVar7 = uVar21 - 0x403;
              if (uVar26 != 4) {
                pbVar12[5] = 0xff;
                pbVar22 = pbVar12 + 6;
                uVar7 = uVar21 - 0x502;
                if (uVar26 != 5) {
                  pbVar12[6] = 0xff;
                  pbVar22 = pbVar12 + 7;
                  uVar7 = uVar21 - 0x601;
                  if (uVar26 == 7) {
                    pbVar12[7] = 0xff;
                    pbVar22 = pbVar12 + 8;
                    uVar7 = uVar21 - 0x700;
                  }
                }
              }
            }
          }
        }
      }
      pbVar27 = pbVar22 + 1;
      uVar21 = ((uint)(uVar2 * uVar23 >> 0x27) + 1) - uVar26;
      iVar25 = uVar7 - 0xff;
      pbVar13 = pbVar12 + uVar26 + 1;
      do {
        pbVar14 = pbVar13 + 8;
        pbVar13[0] = 0xff;
        pbVar13[1] = 0xff;
        pbVar13[2] = 0xff;
        pbVar13[3] = 0xff;
        pbVar13[4] = 0xff;
        pbVar13[5] = 0xff;
        pbVar13[6] = 0xff;
        pbVar13[7] = 0xff;
        uVar8 = iVar25 - 0x6f9;
        iVar25 = iVar25 + -0x7f8;
        pbVar11 = pbVar27 + 7;
        pbVar27 = pbVar27 + 8;
        pbVar13 = pbVar14;
      } while (pbVar14 != pbVar12 + uVar26 + 1 + (uVar21 & 0xfffffff8));
      uVar23 = uVar21 & 0xfffffff8;
      pbVar22 = pbVar22 + uVar23;
      uVar7 = uVar7 + uVar23 * -0xff;
      if (uVar23 == uVar21) goto LAB_1006b82c;
    }
    uVar8 = uVar7 - 0xff;
    pbVar11 = pbVar22 + 1;
    *pbVar22 = 0xff;
    if (0xfe < uVar8) {
      uVar8 = uVar7 - 0x1fe;
      pbVar22[1] = 0xff;
      pbVar11 = pbVar22 + 2;
      if (0xfe < uVar8) {
        uVar8 = uVar7 - 0x2fd;
        pbVar22[2] = 0xff;
        pbVar11 = pbVar22 + 3;
        if (0xfe < uVar8) {
          uVar8 = uVar7 - 0x3fc;
          pbVar22[3] = 0xff;
          pbVar11 = pbVar22 + 4;
          if (0xfe < uVar8) {
            uVar8 = uVar7 - 0x4fb;
            pbVar22[4] = 0xff;
            pbVar11 = pbVar22 + 5;
            if (0xfe < uVar8) {
              uVar8 = uVar7 - 0x5fa;
              pbVar22[5] = 0xff;
              pbVar11 = pbVar22 + 6;
              if (0xfe < uVar8) {
                uVar8 = uVar7 - 0x6f9;
                pbVar22[6] = 0xff;
                pbVar11 = pbVar22 + 7;
                if (0xfe < uVar8) {
                  uVar8 = uVar7 - 0x7f8;
                  pbVar22[7] = 0xff;
                  pbVar11 = pbVar22 + 8;
                  if (0xfe < uVar8) {
                    uVar8 = uVar7 - 0x8f7;
                    pbVar22[8] = 0xff;
                    pbVar11 = pbVar22 + 9;
                    if (0xfe < uVar8) {
                      uVar8 = uVar7 - 0x9f6;
                      pbVar22[9] = 0xff;
                      pbVar11 = pbVar22 + 10;
                      if (0xfe < uVar8) {
                        uVar8 = uVar7 - 0xaf5;
                        pbVar22[10] = 0xff;
                        pbVar11 = pbVar22 + 0xb;
                        if (0xfe < uVar8) {
                          uVar8 = uVar7 - 0xbf4;
                          pbVar22[0xb] = 0xff;
                          pbVar11 = pbVar22 + 0xc;
                          if (0xfe < uVar8) {
                            uVar8 = uVar7 - 0xcf3;
                            pbVar22[0xc] = 0xff;
                            pbVar11 = pbVar22 + 0xd;
                            if (0xfe < uVar8) {
                              uVar8 = uVar7 - 0xdf2;
                              pbVar22[0xd] = 0xff;
                              pbVar11 = pbVar22 + 0xe;
                              if (0xfe < uVar8) {
                                uVar8 = uVar7 - 0xef1;
                                pbVar22[0xe] = 0xff;
                                pbVar11 = pbVar22 + 0xf;
                                if (0xfe < uVar8) {
                                  uVar8 = uVar7 - 0xff0;
                                  pbVar22[0xf] = 0xff;
                                  pbVar11 = pbVar22 + 0x10;
                                  if (0xfe < uVar8) {
                                    uVar8 = uVar7 - 0x10ef;
                                    pbVar22[0x10] = 0xff;
                                    pbVar11 = pbVar22 + 0x11;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1006b82c:
  pbVar22 = pbVar11 + 2;
  *pbVar11 = (byte)uVar8;
  pbVar11[1] = (byte)uVar24;
LAB_1006b218:
  *(short *)((int)puVar29 +
            ((ushort)(puVar30[-1] ^ *(ushort *)((int)puVar30 + -3) ^
                     *(ushort *)((int)puVar30 + -3) >> 5) & 0x7ff) * 2) =
       (short)(byte *)((int)puVar30 + -3) - sVar3;
  *(short *)((int)puVar29 +
            ((ushort)(CONCAT11((byte)*puVar30,*(byte *)((int)puVar30 + -1)) ^ puVar30[-1] ^
                     puVar30[-1] >> 5) & 0x7ff) * 2) = (short)local_40 - sVar3;
  uVar21 = 0;
  pbVar11 = pbVar22 + 1;
  *pbVar22 = 0x1f;
  uVar8 = 0;
  if (puVar28 <= puVar19) goto LAB_1006b27c;
  goto LAB_1006b146;
LAB_1006b27c:
  if (puVar19 <= (ushort *)((int)puVar16 + 1)) {
LAB_1006b284:
    do {
      while( true ) {
        puVar28 = (ushort *)((int)puVar19 + 1);
        uVar21 = uVar21 + 1;
        *pbVar11 = (byte)*puVar19;
        puVar19 = puVar28;
        if (uVar21 != 0x20) break;
        pbVar11[1] = 0x1f;
        pbVar11 = pbVar11 + 2;
        if ((ushort *)((int)puVar16 + 1) < puVar28) goto LAB_1006b346;
        uVar21 = 0;
      }
      pbVar11 = pbVar11 + 1;
    } while (puVar28 <= (ushort *)((int)puVar16 + 1));
  }
  if (uVar21 == 0) {
LAB_1006b346:
    pbVar11 = pbVar11 + -1;
    goto LAB_1006b2a6;
  }
  bVar15 = (char)uVar21 - 1;
  goto LAB_1006b2a4;
}

