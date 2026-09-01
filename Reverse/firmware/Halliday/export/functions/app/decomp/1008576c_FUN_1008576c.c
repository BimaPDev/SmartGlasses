/* FUN_1008576c @ 0x1008576c */

undefined1
FUN_1008576c(undefined4 param_1,uint param_2,uint param_3,undefined1 *param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  undefined4 uVar11;
  byte bVar12;
  undefined1 extraout_r2;
  undefined1 extraout_r2_00;
  uint uVar13;
  uint uVar14;
  int extraout_r2_01;
  undefined1 *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  byte *pbVar20;
  byte *pbVar21;
  undefined1 uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  char cVar31;
  uint local_84;
  int local_78;
  int local_70;
  uint local_68;
  undefined4 local_4c [2];
  uint local_44;
  uint local_40;
  uint local_3c [4];
  
  local_4c[0] = param_1;
  uVar2 = FUN_10084444(local_4c);
  if ((int)uVar2 < 0) {
    return 0xb;
  }
  puVar15 = *(undefined1 **)(DAT_10085970 + uVar2 * 4);
  if (puVar15 != (undefined1 *)0x0) {
    *puVar15 = 0;
  }
  uVar2 = uVar2 & 0xff;
  iVar3 = FUN_100862ac(uVar2);
  if (iVar3 << 0x1f < 0) {
    return 3;
  }
  if (iVar3 << 0x1d < 0) {
    return 10;
  }
  iVar3 = FUN_10086338(uVar2,3,&local_44);
  if (((iVar3 != 0) || (0x7fff < local_44 - 1)) || ((local_44 & local_44 - 1) != 0)) {
    local_44 = 1;
  }
  if ((param_3 == 0) || ((param_3 - 0x200 <= DAT_10085974 && ((param_3 - 1 & param_3) == 0)))) {
    uVar16 = param_5 & 0xfffffe00;
    if (uVar16 != 0) {
      iVar3 = FUN_10086338(uVar2,1,&local_40);
      if (iVar3 != 0) {
        return true;
      }
      if ((param_2 & 8) == 0) {
        uVar17 = 0x3f;
      }
      else {
        uVar17 = 0;
      }
      if ((uVar17 <= local_40) && (uVar13 = local_40 - uVar17, 0x7f < uVar13)) {
        param_5 = param_5 >> 9;
        uVar29 = param_3 >> 9;
        if ((int)(param_2 << 0x1d) < 0) {
          if ((((param_2 & 7) == 4) || (0x3ffffff < uVar13)) || (0x101ff < param_3)) {
            if (0xfff < uVar13) {
              if (param_3 < 0x200) {
                if (uVar13 < 0x80000) {
                  uVar29 = 8;
                }
                else if (uVar13 < 0x4000000) {
                  uVar29 = 0x40;
                }
                else {
                  uVar29 = 0x100;
                }
              }
              local_78 = uVar17 + 0x20;
              uVar25 = (uVar13 / uVar29) * 4 + 0x207;
              uVar7 = uVar25 >> 9;
              uVar25 = (local_44 - 1) + local_78 + (uVar25 >> 9) & -local_44;
              if ((uVar25 < uVar13 >> 1) &&
                 (uVar23 = (local_40 - uVar25) / uVar29, uVar23 - 0x10 <= DAT_1008597c)) {
                uVar27 = uVar29 * 0x200;
                uVar14 = uVar23 + 7 >> 3;
                cVar31 = '\0';
                uVar19 = ((uVar27 - 1) + (uVar23 + 7 >> 3)) / uVar27;
                iVar3 = uVar29 * uVar19 + uVar25;
                uVar26 = 0;
                uVar8 = 0;
                local_68 = 0;
                local_70 = 0;
                uVar24 = 0;
                local_40 = uVar13;
                local_3c[0] = uVar19;
                do {
                  uVar13 = uVar24;
                  if (cVar31 == '\0') {
                    uVar5 = FUN_10086a1c(uVar8);
                    uVar9 = uVar8 + 1 & 0xffff;
                    uVar24 = uVar5;
                    if (uVar8 == uVar5) {
                      uVar26 = 1;
                      for (; (uVar9 != 0 && (uVar24 = FUN_10086a1c(uVar9), uVar24 == uVar9));
                          uVar9 = uVar9 + 1 & 0xffff) {
                        uVar26 = uVar26 + 1;
                      }
                      if (uVar26 < 0x80) goto LAB_100859aa;
                      cVar31 = '\x02';
                      uVar24 = 0xffff;
                      uVar9 = uVar5;
                    }
                  }
                  else if (cVar31 == '\x01') {
LAB_100859aa:
                    uVar26 = uVar26 - 1;
                    cVar31 = uVar26 != 0;
                    uVar24 = uVar8;
                    uVar9 = uVar8 + 1 & 0xffff;
                  }
                  else {
                    cVar31 = '\0';
                    uVar24 = uVar26 & 0xffff;
                    uVar9 = uVar8 + (uVar26 & 0xffff) & 0xffff;
                  }
                  uVar8 = uVar9;
                  param_4[uVar13] = (char)uVar24;
                  param_4[uVar13 + 1] = (char)(uVar24 >> 8);
                  uVar9 = (uVar24 & 0xff) + (local_68 >> 1 | local_68 << 0x1f);
                  local_68 = ((uVar24 & 0xffffff) >> 8) + (uVar9 >> 1 | uVar9 * -0x80000000);
                  local_70 = local_70 + 2;
                  if ((uVar8 == 0) || (uVar24 = uVar13 + 2, uVar16 == uVar13 + 2)) {
                    iVar18 = FUN_1008630c(uVar2,param_4,iVar3);
                    if (iVar18 != 0) {
                      return true;
                    }
                    iVar3 = iVar3 + (uVar13 + 0x201 >> 9);
                    uVar24 = 0;
                    if (uVar8 == 0) {
                      local_3c[1] = ((uVar27 - 1) + local_70) / uVar27;
                      local_3c[2] = 1;
                      iVar3 = uVar19 + local_3c[1];
                      uVar24 = uVar14 + 0x1ff >> 9;
                      uVar8 = iVar3 + 1;
                      uVar13 = uVar25;
                      do {
                        FUN_101222e4(param_4,0,uVar16);
                        uVar26 = 0;
                        for (; 7 < uVar8; uVar8 = uVar8 - 8) {
                          if (uVar26 == uVar16) goto LAB_10085a44;
                          param_4[uVar26] = 0xff;
                          uVar26 = uVar26 + 1;
                        }
                        bVar12 = 1;
                        while ((uVar8 != 0 && (uVar26 < uVar16))) {
                          uVar8 = uVar8 - 1;
                          bVar1 = param_4[uVar26] | bVar12;
                          bVar12 = bVar12 << 1;
                          param_4[uVar26] = bVar1;
                        }
LAB_10085a44:
                        uVar26 = param_5;
                        if (uVar24 <= param_5) {
                          uVar26 = uVar24;
                        }
                        iVar18 = FUN_1008630c(uVar2,param_4,uVar13);
                        if (iVar18 != 0) {
                          return true;
                        }
                        uVar24 = uVar24 - uVar26;
                        uVar13 = uVar13 + uVar26;
                      } while (uVar24 != 0);
                      uVar13 = 0;
                      uVar24 = 0;
                      iVar18 = 0;
                      uVar8 = uVar7;
                      do {
                        FUN_101222e4(param_4,0,uVar16);
                        if (iVar18 == 0) {
                          iVar18 = 2;
                          uVar26 = 8;
                          *param_4 = 0xf8;
                          param_4[1] = 0xff;
                          param_4[2] = 0xff;
                          param_4[3] = 0xff;
                          param_4[4] = 0xff;
                          param_4[5] = 0xff;
                          param_4[6] = 0xff;
                          param_4[7] = 0xff;
                        }
                        else {
                          uVar26 = 0;
                        }
                        while( true ) {
                          for (; uVar24 != 0; uVar24 = uVar24 - 1) {
                            if (uVar16 <= uVar26) goto LAB_10085abc;
                            iVar18 = iVar18 + 1;
                            iVar28 = iVar18;
                            if (uVar24 < 2) {
                              iVar28 = -1;
                            }
                            FUN_101222b6(param_4 + uVar26,iVar28);
                            uVar26 = extraout_r2_01 + 4;
                          }
                          if (2 < uVar13) break;
                          uVar24 = local_3c[uVar13];
                          uVar13 = uVar13 + 1;
                          if ((uVar24 == 0) || (uVar16 <= uVar26)) break;
                        }
LAB_10085abc:
                        uVar26 = param_5;
                        if (uVar8 <= param_5) {
                          uVar26 = uVar8;
                        }
                        iVar28 = FUN_1008630c(uVar2,param_4,local_78);
                        if (iVar28 != 0) {
                          return true;
                        }
                        local_78 = local_78 + uVar26;
                        uVar8 = uVar8 - uVar26;
                        if (uVar8 == 0) {
                          FUN_101222e4(param_4,0,uVar16);
                          *param_4 = 0x83;
                          param_4[0x20] = 0x81;
                          param_4[0x34] = 2;
                          param_4[0x35] = 0;
                          param_4[0x36] = 0;
                          param_4[0x37] = 0;
                          FUN_101222b6(param_4 + 0x38,uVar14);
                          param_4[0x40] = 0x82;
                          FUN_101222b6(param_4 + 0x44,local_68);
                          FUN_101222b6(param_4 + 0x54,uVar19 + 2);
                          FUN_101222b6(param_4 + 0x58,local_70);
                          iVar18 = uVar29 * iVar3 + uVar25;
                          uVar16 = uVar29;
                          do {
                            uVar13 = param_5;
                            if (uVar16 <= param_5) {
                              uVar13 = uVar16;
                            }
                            iVar28 = FUN_1008630c(uVar2,param_4,iVar18);
                            if (iVar28 != 0) {
                              return true;
                            }
                            FUN_101222e4(param_4,0,0x200);
                            uVar16 = uVar16 - uVar13;
                            iVar18 = iVar18 + uVar13;
                          } while (uVar16 != 0);
                          local_70 = 2;
                          uVar16 = uVar17;
                          while( true ) {
                            FUN_101222e4(param_4,0,0x200);
                            FUN_10122580(param_4,DAT_10085e7c,0xb);
                            FUN_101222b6(param_4 + 0x40,uVar17);
                            FUN_101222b6(param_4 + 0x48,local_40);
                            param_4[0x50] = 0x20;
                            param_4[0x51] = 0;
                            param_4[0x52] = 0;
                            param_4[0x53] = 0;
                            FUN_101222b6(param_4 + 0x54,uVar7);
                            FUN_101222b6(param_4 + 0x58,uVar25 - uVar17);
                            FUN_101222b6(param_4 + 0x5c,uVar23);
                            FUN_101222b6(param_4 + 0x60,iVar3 + 2);
                            param_4[100] = 0;
                            param_4[0x65] = 0;
                            param_4[0x66] = 0x21;
                            param_4[0x67] = 0x48;
                            param_4[0x68] = 0;
                            param_4[0x69] = 1;
                            param_4[0x6c] = 0;
                            iVar18 = 10;
                            while (iVar18 = iVar18 + -1, iVar18 != 0) {
                              param_4[0x6c] = param_4[0x6c] + '\x01';
                            }
                            param_4[0x6d] = 0;
                            uVar13 = uVar29;
                            while (uVar13 = uVar13 >> 1, uVar13 != 0) {
                              param_4[0x6d] = param_4[0x6d] + '\x01';
                            }
                            param_4[0x6e] = 1;
                            param_4[0x6f] = 0x80;
                            param_4[0x78] = 0xeb;
                            param_4[0x79] = 0xfe;
                            param_4[0x1fe] = 0x55;
                            param_4[0x1ff] = 0xaa;
                            uVar13 = 0;
                            iVar18 = 0;
                            do {
                              if ((1 < iVar18 - 0x6aU) && (iVar18 != 0x70)) {
                                uVar13 = (uint)(byte)param_4[iVar18] +
                                         (uVar13 >> 1 | uVar13 << 0x1f);
                              }
                              iVar18 = iVar18 + 1;
                            } while (iVar18 != 0x200);
                            iVar18 = FUN_1008630c(uVar2,param_4,uVar16,1);
                            if (iVar18 != 0) {
                              return true;
                            }
                            FUN_101222e4(param_4,0,0x200);
                            param_4[0x1fe] = 0x55;
                            param_4[0x1ff] = 0xaa;
                            pbVar20 = param_4 + -1;
                            pbVar21 = pbVar20;
                            iVar18 = uVar16 + 1;
                            do {
                              do {
                                pbVar21 = pbVar21 + 1;
                                uVar13 = (uint)*pbVar21 + (uVar13 >> 1 | uVar13 << 0x1f);
                              } while (param_4 + 0x1ff != pbVar21);
                              iVar28 = iVar18 + 1;
                              iVar18 = FUN_1008630c(uVar2,param_4,iVar18,1);
                              if (iVar18 != 0) {
                                return true;
                              }
                              pbVar21 = pbVar20;
                              iVar18 = iVar28;
                            } while (uVar16 + 9 != iVar28);
                            FUN_101222e4(param_4,0,0x200);
                            iVar28 = uVar16 + 0xb;
                            iVar18 = uVar16 + 9;
                            do {
                              do {
                                iVar6 = iVar18;
                                pbVar21 = pbVar21 + 1;
                                uVar13 = (uint)*pbVar21 + (uVar13 >> 1 | uVar13 << 0x1f);
                                iVar18 = iVar6;
                              } while (param_4 + 0x1ff != pbVar21);
                              iVar18 = FUN_1008630c(uVar2,param_4,iVar6,1);
                              if (iVar18 != 0) {
                                return true;
                              }
                              iVar30 = 0;
                              pbVar21 = pbVar20;
                              iVar18 = iVar6 + 1;
                            } while (iVar6 + 1 != iVar28);
                            do {
                              puVar15 = param_4 + iVar30;
                              iVar30 = iVar30 + 4;
                              FUN_101222b6(puVar15,uVar13);
                            } while (iVar30 != 0x200);
                            uVar16 = iVar6 + 2;
                            iVar18 = FUN_1008630c(uVar2,param_4,iVar28,1);
                            if (iVar18 != 0) {
                              return true;
                            }
                            if (local_70 == 1) break;
                            local_70 = 1;
                          }
                          uVar22 = 7;
LAB_10085e0e:
                          if ((param_2 & 8) == 0) {
                            FUN_101222e4(param_4,0,0x200);
                            param_4[0x1fe] = 0x55;
                            param_4[0x1ff] = 0xaa;
                            param_4[0x1be] = 0;
                            param_4[0x1c1] = 0;
                            uVar16 = (local_40 + uVar17) / 0x3ec1;
                            param_4[0x1c3] = 0xfe;
                            param_4[0x1c4] = (byte)(uVar16 >> 2) | 0x3f;
                            param_4[0x1c5] = (char)uVar16;
                            param_4[0x1bf] = 1;
                            param_4[0x1c0] = 1;
                            param_4[0x1c2] = uVar22;
                            FUN_101222b6(param_4 + 0x1c6,uVar17);
                            FUN_101222b6(param_4 + 0x1ca,local_40);
                            iVar3 = FUN_1008630c(uVar2,param_4,0,1);
                            if (iVar3 != 0) {
                              return true;
                            }
                          }
                          iVar3 = FUN_10086338(uVar2,0);
                          return iVar3 != 0;
                        }
                      } while( true );
                    }
                  }
                } while( true );
              }
            }
            goto LAB_100857f6;
          }
        }
        else if (0x101ff < param_3) goto LAB_100857d8;
        uVar7 = param_2 & 2;
        if (uVar7 != 0) {
          if ((param_2 & 7) == 2) goto LAB_100861aa;
          if (-1 < (int)(param_2 << 0x1f)) goto LAB_100861aa;
LAB_1008585e:
          uVar25 = uVar29;
          if (uVar29 == 0) {
            uVar25 = 1;
            puVar4 = DAT_10085978;
            while( true ) {
              if ((*puVar4 == 0) || (uVar13 >> 0xc < (uint)*puVar4)) break;
              uVar25 = uVar25 << 1;
              puVar4 = puVar4 + 1;
            }
          }
          do {
            uVar23 = uVar13 / uVar25;
            if (uVar23 < 0xff6) {
              iVar3 = (uVar23 * 3 + 1 >> 1) + 3;
            }
            else {
              iVar3 = (uVar23 + 2) * 2;
            }
            uVar24 = iVar3 + 0x1ff;
            local_84 = 0x20;
            if (uVar23 < 0xff6) {
              iVar3 = 1;
            }
            else {
              iVar3 = 2;
            }
            iVar18 = 1;
            while( true ) {
              uVar24 = uVar24 >> 9;
              iVar28 = iVar18 + uVar17;
              iVar30 = uVar24 + local_84 + iVar28;
              iVar6 = ((local_44 - 1) + iVar30 & -local_44) - iVar30;
              if (iVar3 == 3) {
                iVar18 = iVar18 + iVar6;
                iVar28 = iVar28 + iVar6;
              }
              else {
                uVar24 = uVar24 + iVar6;
              }
              if (uVar13 < iVar30 + (uVar25 * 0x10 - uVar17)) goto LAB_100857f6;
              uVar23 = (((uVar13 - local_84) - iVar18) - uVar24) / uVar25;
              if (iVar3 != 3) break;
              if (0xfff5 < uVar23) goto LAB_10085e8e;
              if ((uVar29 != 0) || (uVar25 < 2)) goto LAB_100857f6;
              uVar29 = uVar25 >> 1;
LAB_100861aa:
              uVar25 = uVar29;
              if (uVar29 == 0) {
LAB_100861b2:
                uVar25 = 1;
                puVar4 = DAT_10086278;
                while( true ) {
                  uVar29 = 0;
                  if (*puVar4 == 0) break;
                  if (uVar13 >> 0x11 < (uint)*puVar4) {
                    uVar29 = 0;
                    break;
                  }
                  uVar25 = uVar25 << 1;
                  puVar4 = puVar4 + 1;
                }
              }
              uVar24 = (uVar13 / uVar25) * 4 + 0x207;
              if (DAT_1008627c < uVar13 / uVar25 - 0xfff6) goto LAB_100857f6;
              iVar3 = 3;
              local_84 = 0;
              iVar18 = 0x20;
            }
            if (iVar3 != 2) {
              if (uVar23 < 0xff6) {
                iVar3 = 1;
LAB_10085e8e:
                local_40 = uVar13;
                FUN_101222e4(param_4,0,0x200);
                FUN_10122580(param_4,PTR_DAT_10086194,0xb);
                param_4[0xe] = (char)iVar18;
                param_4[0xf] = (char)((uint)iVar18 >> 8);
                param_4[0x10] = 1;
                if (iVar3 == 3) {
                  uVar22 = 0;
                }
                else {
                  uVar22 = 2;
                }
                param_4[0xc] = 2;
                param_4[0xb] = 0;
                param_4[0xd] = (char)uVar25;
                param_4[0x11] = 0;
                param_4[0x12] = uVar22;
                if (local_40 < 0x10000) {
                  param_4[0x13] = (char)local_40;
                  param_4[0x14] = (char)(local_40 >> 8);
                }
                else {
                  FUN_101222b6(param_4 + 0x20);
                }
                param_4[0x15] = 0xf8;
                param_4[0x18] = 0x3f;
                param_4[0x1a] = 0xff;
                param_4[0x19] = 0;
                param_4[0x1b] = 0;
                FUN_101222b6(param_4 + 0x1c,uVar17);
                if (iVar3 == 3) {
                  param_4[0x45] = 0x21;
                  param_4[0x43] = extraout_r2;
                  param_4[0x44] = extraout_r2;
                  param_4[0x46] = 0x48;
                  FUN_101222b6(param_4 + 0x24,uVar24);
                  param_4[0x2c] = 2;
                  param_4[0x30] = 1;
                  param_4[0x32] = 6;
                  param_4[0x40] = 0x80;
                  param_4[0x2d] = extraout_r2_00;
                  param_4[0x2e] = extraout_r2_00;
                  param_4[0x2f] = extraout_r2_00;
                  param_4[0x31] = extraout_r2_00;
                  param_4[0x33] = extraout_r2_00;
                  puVar10 = PTR_s_NO_NAME_FAT32_10086198;
                  param_4[0x42] = 0x29;
                  puVar15 = param_4 + 0x47;
                }
                else {
                  param_4[0x29] = 0x21;
                  param_4[0x2a] = 0x48;
                  param_4[0x17] = (char)(uVar24 >> 8);
                  param_4[0x24] = 0x80;
                  param_4[0x27] = extraout_r2;
                  param_4[0x28] = extraout_r2;
                  puVar10 = PTR_s_NO_NAME_FAT_1008619c;
                  param_4[0x16] = (char)uVar24;
                  param_4[0x26] = 0x29;
                  puVar15 = param_4 + 0x2b;
                }
                FUN_10122580(puVar15,puVar10,0x13);
                param_4[0x1fe] = 0x55;
                param_4[0x1ff] = 0xaa;
                iVar18 = FUN_1008630c(uVar2,param_4,uVar17,1);
                if (iVar18 != 0) {
                  return true;
                }
                if (iVar3 == 3) {
                  FUN_1008630c(uVar2,param_4,uVar17 + 6,1);
                  FUN_101222e4(param_4,0,0x200);
                  *param_4 = 0x52;
                  param_4[1] = 0x52;
                  param_4[3] = 0x41;
                  param_4[2] = 0x61;
                  param_4[0x1e4] = 0x72;
                  param_4[0x1e5] = 0x72;
                  param_4[0x1e6] = 0x41;
                  param_4[0x1e7] = 0x61;
                  FUN_101222b6(param_4 + 0x1e8,uVar23 - 1);
                  param_4[0x1ec] = 2;
                  param_4[0x1fe] = 0x55;
                  param_4[0x1ff] = 0xaa;
                  param_4[0x1ed] = 0;
                  param_4[0x1ee] = 0;
                  param_4[0x1ef] = 0;
                  FUN_1008630c(uVar2,param_4,uVar17 + 7,1);
                  FUN_1008630c(uVar2,param_4,uVar17 + 1);
                }
                FUN_101222e4(param_4,0,uVar16);
                if (iVar3 == 3) {
                  *param_4 = 0xf8;
                  param_4[1] = 0xff;
                  param_4[2] = 0xff;
                  param_4[3] = 0xff;
                  param_4[4] = 0xff;
                  param_4[5] = 0xff;
                  param_4[6] = 0xff;
                  param_4[7] = 0xff;
                  param_4[8] = 0xff;
                  param_4[9] = 0xff;
                  param_4[10] = 0xff;
                  param_4[0xb] = 0xf;
                }
                else {
                  uVar11 = DAT_100861a0;
                  if (iVar3 != 1) {
                    uVar11 = 0xfffffff8;
                  }
                  FUN_101222b6(param_4,uVar11);
                }
                do {
                  uVar16 = param_5;
                  if (uVar24 <= param_5) {
                    uVar16 = uVar24;
                  }
                  iVar18 = FUN_1008630c(uVar2,param_4,iVar28);
                  if (iVar18 != 0) {
                    return true;
                  }
                  FUN_101222e4(param_4,0,0x200);
                  uVar24 = uVar24 - uVar16;
                  iVar28 = iVar28 + uVar16;
                } while (uVar24 != 0);
                if (iVar3 != 3) {
                  uVar25 = local_84;
                }
                do {
                  uVar16 = param_5;
                  if (uVar25 <= param_5) {
                    uVar16 = uVar25;
                  }
                  iVar18 = FUN_1008630c(uVar2,param_4,iVar28);
                  if (iVar18 != 0) {
                    return true;
                  }
                  uVar25 = uVar25 - uVar16;
                  iVar28 = iVar28 + uVar16;
                } while (uVar25 != 0);
                if (iVar3 == 3) {
                  uVar22 = 0xc;
                }
                else if (local_40 < 0x10000) {
                  if (iVar3 == 2) {
                    uVar22 = 4;
                  }
                  else {
                    uVar22 = 1;
                  }
                }
                else {
                  uVar22 = 6;
                }
                goto LAB_10085e0e;
              }
              goto LAB_100857f6;
            }
            if (uVar23 < 0xfff6) {
              if (0xff5 < uVar23) goto LAB_10085e8e;
              if ((uVar29 != 0) || (uVar29 = uVar25 * 2, 0x80 < uVar25 * 2)) goto LAB_100857f6;
              goto LAB_1008585e;
            }
            if (uVar29 != 0) {
              if (uVar7 != 0) goto LAB_100861aa;
              goto LAB_100857f6;
            }
            uVar25 = uVar25 * 2;
            uVar29 = uVar25;
            if (uVar25 < 0x41) goto LAB_1008585e;
            if (uVar7 != 0) goto LAB_100861b2;
            if (0x80 < uVar25) goto LAB_100857f6;
          } while( true );
        }
        if ((int)(param_2 << 0x1f) < 0) goto LAB_1008585e;
        goto LAB_100857d8;
      }
    }
LAB_100857f6:
    uVar22 = 0xe;
  }
  else {
LAB_100857d8:
    uVar22 = 0x13;
  }
  return uVar22;
}

