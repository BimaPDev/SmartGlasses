/* FUN_2c634958 @ 0x2c634958 */

void FUN_2c634958(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined2 uVar2;
  int *piVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  short *psVar17;
  short *extraout_r1;
  short *psVar18;
  undefined4 uVar19;
  ushort uVar20;
  ushort uVar21;
  uint uVar22;
  byte *pbVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  undefined8 uVar31;
  uint local_1e0;
  undefined1 auStack_1a0 [2];
  short local_19e;
  undefined1 auStack_19c [2];
  short local_19a;
  short local_196;
  short local_194;
  short local_192;
  short local_190;
  short local_18e;
  short local_18c;
  short local_18a;
  short local_188;
  short local_186;
  short local_184;
  short local_182;
  short local_180;
  short local_17e;
  undefined1 auStack_17c [8];
  undefined4 local_174 [10];
  undefined1 auStack_14c [24];
  short local_134;
  short local_132;
  undefined1 auStack_124 [4];
  undefined4 local_120;
  undefined4 local_11c;
  short *local_118;
  undefined1 *local_114;
  undefined1 *local_110;
  undefined4 local_f0;
  int local_ec;
  undefined1 auStack_dc [56];
  ushort local_a4;
  byte local_a1;
  undefined1 auStack_84 [88];
  int local_2c;
  undefined1 local_20 [2];
  short local_1e;
  int local_1c;
  
  local_1c = *DAT_2c634c28;
  iVar16 = FUN_2c602110(DAT_2c634c2c,param_2,param_3,0);
  if (iVar16 == 1) {
    iVar16 = FUN_2c602408(param_2);
    uVar31 = FUN_2c602400(param_2);
    psVar17 = (short *)((ulonglong)uVar31 >> 0x20);
    iVar14 = (int)uVar31;
    if (iVar16 == 0x2a) {
      if (*DAT_2c634c28 == local_1c) {
        FUN_2c634864();
        return;
      }
      goto LAB_2c634b90;
    }
    if (iVar16 == 0x2c) {
      psVar17 = (short *)FUN_2c602410(param_2);
      if (*(ushort *)(iVar14 + 0x24) == 0) {
        sVar10 = -1;
      }
      else {
        sVar10 = 0;
        psVar18 = (short *)(*(int *)(iVar14 + 0x30) + -2);
        uVar26 = 0;
        do {
          psVar18 = psVar18 + 1;
          uVar26 = uVar26 + 1;
          sVar10 = sVar10 + *psVar18;
        } while (uVar26 != *(ushort *)(iVar14 + 0x24));
        sVar10 = sVar10 + -1;
      }
      if (*(ushort *)(iVar14 + 0x26) == 0) {
        sVar5 = -1;
      }
      else {
        sVar5 = 0;
        psVar18 = (short *)(*(int *)(iVar14 + 0x2c) + -2);
        uVar26 = 0;
        do {
          psVar18 = psVar18 + 1;
          uVar26 = uVar26 + 1;
          sVar5 = sVar5 + *psVar18;
        } while (uVar26 != *(ushort *)(iVar14 + 0x26));
        sVar5 = sVar5 + -1;
      }
      *psVar17 = sVar10;
      psVar17[1] = sVar5;
    }
    else if ((iVar16 - 1U & 0xff) < 2) {
      FUN_2c5ff4d8();
      uVar26 = FUN_2c5ff4e4();
      if ((uVar26 & 0xfd) == 1) {
        uVar19 = FUN_2c5ff4d8();
        FUN_2c5ff5cc(uVar19,local_20);
        sVar5 = (short)_local_20;
        sVar10 = FUN_2c604a2c(iVar14);
        sVar10 = sVar10 + sVar5;
        cVar4 = FUN_2c6033b4(iVar14,0,0x16);
        if (cVar4 == '\x01') {
          sVar5 = *(short *)(iVar14 + 0x18);
          sVar6 = FUN_2c6033b4(iVar14,0,0x13);
          sVar10 = (sVar5 - sVar6) - sVar10;
        }
        else {
          sVar5 = *(short *)(iVar14 + 0x14);
          sVar6 = FUN_2c6033b4(iVar14,0,0x12);
          sVar10 = sVar10 - (sVar5 + sVar6);
        }
        sVar5 = *(short *)(iVar14 + 0x24);
        sVar6 = sVar5;
        if (sVar5 != 0) {
          psVar17 = *(short **)(iVar14 + 0x30);
          sVar7 = *psVar17;
          if (sVar10 < sVar7) {
            sVar6 = 0;
          }
          else {
            sVar8 = 0;
            do {
              sVar8 = sVar8 + 1;
              sVar6 = sVar5;
              if (sVar8 == sVar5) break;
              psVar17 = psVar17 + 1;
              sVar7 = sVar7 + *psVar17;
              sVar6 = sVar8;
            } while (sVar7 <= sVar10);
          }
        }
        sVar7 = FUN_2c604a38(iVar14);
        sVar10 = *(short *)(iVar14 + 0x16);
        sVar8 = FUN_2c6033b4(iVar14,0,0x10);
        piVar3 = DAT_2c634c28;
        sVar5 = *(short *)(iVar14 + 0x26);
        sVar7 = ((local_1e - sVar8) - sVar10) + sVar7;
        psVar17 = extraout_r1;
        sVar10 = sVar5;
        if (sVar5 != 0) {
          psVar17 = *(short **)(iVar14 + 0x2c);
          sVar8 = *psVar17;
          if (sVar7 < sVar8) {
            sVar10 = 0;
          }
          else {
            sVar9 = 0;
            do {
              sVar9 = sVar9 + 1;
              sVar10 = sVar5;
              if (sVar9 == sVar5) break;
              psVar17 = psVar17 + 1;
              sVar8 = sVar8 + *psVar17;
              sVar10 = sVar9;
            } while (sVar8 <= sVar7);
          }
        }
        if ((*(short *)(iVar14 + 0x34) != sVar6) || (*(short *)(iVar14 + 0x36) != sVar10)) {
          *(short *)(iVar14 + 0x34) = sVar6;
          *(short *)(iVar14 + 0x36) = sVar10;
          if (*piVar3 == local_1c) goto LAB_2c634ace;
          goto LAB_2c634b90;
        }
      }
    }
    else if (iVar16 == 8) {
      FUN_2c607df0();
      FUN_2c5ff4d8();
      iVar16 = FUN_2c5ff624();
      if ((((*(short *)(iVar14 + 0x34) == -1) || (*(short *)(iVar14 + 0x36) == -1)) || (iVar16 != 0)
          ) || (iVar16 = FUN_2c602340(iVar14,0x1c,0), iVar16 == 1)) {
        FUN_2c5ff4d8();
        uVar26 = FUN_2c5ff4e4();
        if ((uVar26 & 0xfd) == 1) {
          *(undefined4 *)(iVar14 + 0x34) = 0xffffffff;
        }
      }
    }
    else {
      if (iVar16 == 0xe) {
        if (*DAT_2c634c28 == local_1c) {
LAB_2c634ace:
          FUN_2c607df0(iVar14,psVar17,0,0);
          return;
        }
        goto LAB_2c634b90;
      }
      if (iVar16 == 0xd) {
        uVar31 = FUN_2c602410(param_2);
        psVar17 = (short *)((ulonglong)uVar31 >> 0x20);
        uVar26 = (uint)*(ushort *)(iVar14 + 0x34);
        uVar22 = (uint)*(ushort *)(iVar14 + 0x36);
        if ((uVar26 == 0xffff) || (uVar22 == 0xffff)) {
          *(undefined4 *)(iVar14 + 0x34) = 0;
          if (*DAT_2c634cc8 == local_1c) goto LAB_2c634ace;
          goto LAB_2c634b90;
        }
        uVar25 = (uint)*(ushort *)(iVar14 + 0x24);
        iVar16 = *(int *)uVar31;
        uVar27 = (uint)*(ushort *)(iVar14 + 0x26);
        uVar29 = uVar26;
        if (uVar25 <= uVar26) {
          uVar29 = 0;
        }
        if (uVar22 < uVar27) {
          uVar24 = uVar22;
          if (iVar16 != 0x14) goto LAB_2c634bc2;
          uVar29 = uVar29 - 1;
          if ((int)uVar25 <= (int)uVar29) goto LAB_2c634bd6;
          if (uVar29 == 0xffffffff) {
            if (uVar22 == 0) {
              uVar29 = 0;
            }
            else {
              uVar29 = uVar25 - 1;
              uVar24 = uVar22 - 1;
            }
          }
        }
        else {
          if (iVar16 == 0x14) {
            uVar29 = uVar29 - 1;
            if ((int)uVar29 < (int)uVar25) {
              if (uVar29 == 0xffffffff) {
                uVar29 = 0;
                uVar24 = uVar29;
              }
              else {
                uVar24 = 0;
              }
              goto LAB_2c634be0;
            }
            uVar24 = 0;
          }
          else {
            uVar24 = 0;
LAB_2c634bc2:
            if (iVar16 == 0x13) {
              uVar29 = uVar29 + 1;
            }
            else if (iVar16 == 0x11) {
              uVar24 = uVar24 - 1;
            }
            else {
              if (iVar16 != 0x12) goto LAB_2c634974;
              uVar24 = uVar24 + 1;
            }
            if (uVar29 < uVar25) goto LAB_2c634be0;
          }
LAB_2c634bd6:
          if ((int)uVar24 < (int)(uVar27 - 1)) {
            uVar29 = 0;
            uVar24 = uVar24 + 1;
          }
          else {
            uVar29 = uVar25 - 1;
          }
        }
LAB_2c634be0:
        if ((int)uVar24 < (int)uVar27) {
          uVar27 = uVar24 & ~((int)uVar24 >> 0x1f);
        }
        else {
          uVar27 = uVar27 - 1;
        }
        if ((uVar26 != uVar29) || (uVar22 != uVar27)) {
          *(short *)(iVar14 + 0x36) = (short)uVar27;
          *(short *)(iVar14 + 0x34) = (short)uVar29;
          FUN_2c607df0(iVar14);
          if (*DAT_2c634c28 == local_1c) {
            FUN_2c602340(iVar14,0x1c,0,0);
            return;
          }
          goto LAB_2c634b90;
        }
      }
      else if (iVar16 == 0x15) {
        if (*DAT_2c634c28 == local_1c) {
          local_2c = *DAT_2c634468;
          iVar16 = FUN_2c602400();
          iVar14 = FUN_2c602608(param_2);
          iVar15 = FUN_2c62a6b4(auStack_19c,iVar16 + 0x14,*(undefined4 *)(iVar14 + 8));
          if (iVar15 != 0) {
            uVar19 = *(undefined4 *)(iVar14 + 8);
            *(undefined1 **)(iVar14 + 8) = auStack_19c;
            sVar5 = FUN_2c6033b4(iVar16,0,0x32);
            sVar6 = FUN_2c6033b4(iVar16,0,0x10);
            sVar7 = FUN_2c6033b4(iVar16,0,0x11);
            sVar8 = FUN_2c6033b4(iVar16,0,0x12);
            sVar9 = FUN_2c6033b4(iVar16,0,0x13);
            uVar2 = *(undefined2 *)(iVar16 + 0x20);
            *(uint *)(iVar16 + 0x20) = DAT_2c63446c & *(uint *)(iVar16 + 0x20) | 0x40000;
            FUN_2c61314c(auStack_dc);
            FUN_2c6004cc(iVar16,0x50000,auStack_dc);
            FUN_2c6129e4(local_174);
            FUN_2c6007ec(iVar16,0x50000,local_174);
            sVar10 = *(short *)(iVar16 + 0x16);
            *(undefined2 *)(iVar16 + 0x20) = uVar2;
            *(byte *)(iVar16 + 0x22) = *(byte *)(iVar16 + 0x22) & 0xfb;
            local_18e = FUN_2c604a38(iVar16);
            local_18e = (sVar5 + sVar6 + -1 + sVar10) - local_18e;
            sVar10 = FUN_2c604a2c(iVar16);
            cVar4 = FUN_2c6033b4(iVar16,0,0x16);
            FUN_2c600b9c(auStack_124,iVar14);
            local_114 = auStack_84;
            local_110 = auStack_14c;
            local_f0 = 0x50000;
            local_120 = DAT_2c634470;
            uVar21 = *(ushort *)(iVar16 + 0x26);
            local_11c = 0;
            if (uVar21 != 0) {
              uVar26 = 0;
              uVar20 = 0;
              do {
                sVar11 = *(short *)(*(int *)(iVar16 + 0x2c) + (uint)uVar20 * 2);
                uVar22 = (uint)sVar11;
                local_192 = local_18e + 1;
                local_18e = local_18e + sVar11;
                if (local_196 < local_192) break;
                if (cVar4 == '\x01') {
                  local_194 = (~(sVar5 + sVar9) + *(short *)(iVar16 + 0x18)) - sVar10;
                }
                else {
                  local_190 = (*(short *)(iVar16 + 0x14) + sVar8 + sVar5 + -1) - sVar10;
                }
                uVar29 = (uint)*(ushort *)(iVar16 + 0x24);
                if (uVar29 != 0) {
                  uVar27 = 0;
                  if ((int)uVar22 < 0) {
                    uVar22 = uVar22 + 1;
                  }
                  do {
                    while( true ) {
                      iVar28 = (int)local_18e;
                      iVar15 = uVar26 * 4;
                      pbVar23 = *(byte **)(*(int *)(iVar16 + 0x28) + uVar26 * 4);
                      if (pbVar23 == (byte *)0x0) {
                        bVar1 = 0;
                      }
                      else {
                        bVar1 = *pbVar23;
                      }
                      if (cVar4 == '\x01') break;
                      iVar30 = *(int *)(iVar16 + 0x30);
                      local_194 = local_190 + 1;
                      local_190 = local_190 + *(short *)(iVar30 + uVar27 * 2);
                      if ((int)uVar27 < (int)(uVar29 - 1)) goto LAB_2c63441e;
LAB_2c63467e:
                      uVar25 = 0;
                      local_1e0 = uVar27;
                      if (iVar28 < local_19a) goto LAB_2c63468e;
LAB_2c634486:
                      uVar29 = (local_a1 & 0x3f) >> 1;
                      local_18c = local_194;
                      local_18a = local_192;
                      local_188 = local_190;
                      if (((int)((uint)local_a1 << 0x1c) < 0) &&
                         ((int)*(short *)(iVar16 + 0x14) + (int)sVar8 < (int)local_194)) {
                        iVar30 = (int)(short)local_a4;
                        if (iVar30 < 0) {
                          iVar30 = iVar30 + 1;
                        }
                        local_18c = local_194 - (short)(iVar30 >> 1);
                      }
                      if (((int)(uVar29 << 0x1e) < 0) &&
                         ((int)*(short *)(iVar16 + 0x16) + (int)sVar6 < (int)local_192)) {
                        iVar30 = (int)(short)local_a4;
                        if (iVar30 < 0) {
                          iVar30 = iVar30 + 1;
                        }
                        local_18a = local_192 - (short)(iVar30 >> 1);
                      }
                      if (((int)(uVar29 << 0x1c) < 0) &&
                         ((int)local_190 < ((int)*(short *)(iVar16 + 0x18) - (int)sVar9) + -1)) {
                        iVar30 = (int)(short)local_a4;
                        if (iVar30 < 0) {
                          iVar30 = iVar30 + 1;
                        }
                        local_188 = local_190 + (local_a4 & 1) + (short)(iVar30 >> 1);
                      }
                      local_186 = local_18e;
                      if (((int)(uVar29 << 0x1f) < 0) &&
                         (iVar28 < ((int)*(short *)(iVar16 + 0x1a) - (int)sVar7) + -1)) {
                        iVar28 = (int)(short)local_a4;
                        if (iVar28 < 0) {
                          iVar28 = iVar28 + 1;
                        }
                        local_186 = local_18e + (local_a4 & 1) + (short)(iVar28 >> 1);
                      }
                      if ((*(ushort *)(iVar16 + 0x36) == uVar20) &&
                         (*(ushort *)(iVar16 + 0x34) == uVar27)) {
                        uVar29 = (uint)*(ushort *)(iVar16 + 0x20);
                        uVar24 = uVar29 & 0x60;
                        if (uVar24 != 0x20) {
                          uVar24 = 0;
                        }
                        if ((int)(uVar29 << 0x1e) < 0) {
                          uVar24 = uVar24 | 2;
                        }
                        uVar21 = (ushort)uVar24;
                        if ((int)(uVar29 << 0x1d) < 0) {
                          uVar21 = uVar21 | 4;
                          if ((int)(uVar29 << 0x1c) < 0) {
LAB_2c63475a:
                            uVar21 = uVar21 | 8;
                          }
                        }
                        else {
                          if ((int)(uVar29 << 0x1c) < 0) goto LAB_2c63475a;
                          if (uVar24 == 0) goto LAB_2c63454c;
                        }
                        *(ushort *)(iVar16 + 0x20) = uVar21;
                        *(byte *)(iVar16 + 0x22) = *(byte *)(iVar16 + 0x22) | 4;
                        FUN_2c61314c(auStack_84);
                        FUN_2c6129e4(auStack_14c);
                        FUN_2c6004cc(iVar16,0x50000,auStack_84);
                        FUN_2c6007ec(iVar16,0x50000,auStack_14c);
                        *(undefined2 *)(iVar16 + 0x20) = uVar2;
                        *(byte *)(iVar16 + 0x22) = *(byte *)(iVar16 + 0x22) & 0xfb;
                      }
                      else {
LAB_2c63454c:
                        FUN_2c62c0d8(auStack_84,auStack_dc,0x58);
                        FUN_2c62c0d8(auStack_14c,local_174,0x28);
                      }
                      local_ec = (uint)*(ushort *)(iVar16 + 0x24) * (uint)uVar20 + uVar27;
                      local_118 = &local_18c;
                      FUN_2c602340(iVar16,0x1a,auStack_124);
                      FUN_2c61319c(iVar14,auStack_84,&local_18c);
                      if (*(int *)(*(int *)(iVar16 + 0x28) + iVar15) != 0) {
                        sVar11 = FUN_2c6033b4(iVar16,0x50000,0x12);
                        sVar12 = FUN_2c6033b4(iVar16,0x50000,0x13);
                        sVar13 = FUN_2c6033b4(iVar16,0x50000,0x10);
                        local_17e = FUN_2c6033b4(iVar16,0x50000,0x11);
                        local_184 = sVar11 + local_194;
                        local_180 = local_190 - sVar12;
                        local_182 = sVar13 + local_192;
                        local_17e = local_18e - local_17e;
                        if ((bVar1 & 2) == 0) {
                          FUN_2c62b954(auStack_1a0,*(int *)(*(int *)(iVar16 + 0x28) + iVar15) + 1,
                                       local_174[0],(int)local_132,(int)local_134,
                                       (int)(short)((local_180 + 1) - local_184),0);
                          uVar29 = (uint)local_19e;
                          if ((int)uVar29 < 0) {
                            uVar29 = uVar29 + 1;
                          }
                          local_17e = local_192 + (short)((uVar22 & 0x1ffff) >> 1);
                          local_182 = local_17e - (short)((uVar29 << 0xf) >> 0x10);
                          local_17e = local_17e + (short)((uVar29 & 0x1ffff) >> 1);
                        }
                        else {
                          FUN_2c62b954(auStack_1a0,*(int *)(*(int *)(iVar16 + 0x28) + iVar15) + 1,
                                       local_174[0],(int)local_132,(int)local_134,
                                       (int)(short)((local_180 + 1) - local_184),2);
                        }
                        iVar28 = FUN_2c62a6b4(auStack_17c,auStack_19c,&local_194);
                        if (iVar28 != 0) {
                          *(undefined1 **)(iVar14 + 8) = auStack_17c;
                          FUN_2c612a20(iVar14,auStack_14c,&local_184,
                                       *(int *)(*(int *)(iVar16 + 0x28) + iVar15) + 1,0);
                          *(undefined1 **)(iVar14 + 8) = auStack_19c;
                        }
                      }
                      FUN_2c602340(iVar16,0x1b,auStack_124);
                      uVar29 = (uint)*(ushort *)(iVar16 + 0x24);
                      uVar26 = uVar25 + (uVar26 + 1 & 0xffff) & 0xffff;
                      uVar27 = local_1e0 + 1 & 0xffff;
                      if (uVar29 <= uVar27) goto LAB_2c6346a6;
                    }
                    iVar30 = *(int *)(iVar16 + 0x30);
                    local_190 = local_194 + -1;
                    local_194 = local_194 - *(short *)(iVar30 + uVar27 * 2);
                    if ((int)(uVar29 - 1) <= (int)uVar27) goto LAB_2c63467e;
LAB_2c63441e:
                    uVar25 = 0;
                    local_1e0 = uVar27;
                    do {
                      pbVar23 = *(byte **)(*(int *)(iVar16 + 0x28) + (uVar25 + uVar26) * 4);
                      if ((pbVar23 == (byte *)0x0) || (-1 < (int)((uint)*pbVar23 << 0x1f))) {
                        local_1e0 = uVar25 + uVar27;
                        break;
                      }
                      sVar11 = *(short *)(iVar30 + (local_1e0 + 1) * 2);
                      if (cVar4 == '\x01') {
                        local_194 = local_194 - sVar11;
                      }
                      else {
                        local_190 = sVar11 + local_190;
                      }
                      uVar25 = uVar25 + 1 & 0xffff;
                      local_1e0 = uVar25 + uVar27;
                    } while ((int)local_1e0 < (int)(uVar29 - 1));
                    local_1e0 = local_1e0 & 0xffff;
                    if (local_19a <= iVar28) goto LAB_2c634486;
LAB_2c63468e:
                    uVar27 = local_1e0 + 1 & 0xffff;
                    uVar26 = uVar25 + (uVar26 + 1 & 0xffff) & 0xffff;
                  } while (uVar27 < uVar29);
LAB_2c6346a6:
                  uVar21 = *(ushort *)(iVar16 + 0x26);
                }
                uVar20 = uVar20 + 1;
              } while (uVar20 < uVar21);
            }
            *(undefined4 *)(iVar14 + 8) = uVar19;
          }
          if (*DAT_2c634468 == local_2c) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          stack_chk_fail();
        }
        goto LAB_2c634b90;
      }
    }
  }
LAB_2c634974:
  if (*DAT_2c634c28 == local_1c) {
    return;
  }
LAB_2c634b90:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

