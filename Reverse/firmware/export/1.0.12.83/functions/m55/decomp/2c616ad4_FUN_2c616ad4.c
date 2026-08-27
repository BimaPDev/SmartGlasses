/* FUN_2c616ad4 @ 0x2c616ad4 */

void FUN_2c616ad4(undefined4 param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  ushort uVar9;
  short sVar10;
  ushort uVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined2 *puVar19;
  int *piVar20;
  int iVar21;
  undefined4 uVar22;
  int iVar23;
  short *psVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  short sVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  uint local_140;
  uint local_138;
  uint local_134;
  short local_12c;
  short local_128;
  undefined4 local_124;
  short local_108;
  short local_106;
  short local_104;
  short local_102;
  short local_100;
  short local_fe;
  short local_f8;
  short local_f6;
  short local_f0;
  short local_ee;
  short local_ec;
  short local_ea;
  undefined4 local_e8;
  short local_e4;
  short local_e2;
  undefined1 local_de;
  byte local_dd;
  short local_dc;
  short sStack_da;
  undefined4 local_d8;
  undefined4 local_d4;
  short *local_d0;
  short *local_cc;
  undefined4 *local_c4;
  short *local_b8;
  short *local_b4;
  undefined4 local_a8;
  uint local_a4;
  int local_9c;
  int *local_98;
  short local_94;
  undefined1 local_91;
  int local_90;
  byte local_73;
  int local_3c;
  
  uVar18 = DAT_2c616b10;
  local_3c = *DAT_2c616b14;
  iVar13 = FUN_2c602110(DAT_2c616b10,param_2,param_3,0);
  if (iVar13 == 1) {
    iVar13 = FUN_2c602408(param_2);
    iVar14 = FUN_2c602400(param_2);
    if (iVar13 == 1) {
      uVar18 = FUN_2c5ff4d8();
      FUN_2c5ff5cc(uVar18,&local_dc);
      sVar4 = local_dc - *(short *)(iVar14 + 0x14);
      local_dc = sVar4;
      sVar10 = FUN_2c605068(iVar14);
      iVar13 = FUN_2c607404(iVar14);
      uVar11 = *(ushort *)(iVar14 + 0x84);
      sVar3 = FUN_2c6033b4(iVar14,0,0x12);
      iVar15 = (int)(short)((sVar4 - sVar3) + sVar10);
      if (iVar15 < 0) {
LAB_2c616ed8:
        uVar17 = 0;
      }
      else {
        iVar13 = (uint)uVar11 * iVar13 * 0x100;
        uVar17 = iVar13 >> 0x10;
        if ((int)uVar17 < iVar15) {
          uVar17 = *(ushort *)(iVar14 + 0x82) - 1;
        }
        else {
          bVar2 = *(byte *)(iVar14 + 0x88) & 7;
          if (bVar2 == 1) {
            uVar17 = (int)(iVar15 * (*(ushort *)(iVar14 + 0x82) - 1) + (iVar13 >> 0x11)) /
                     (int)uVar17;
          }
          else {
            if (bVar2 != 2) goto LAB_2c616ed8;
            uVar17 = ((uint)*(ushort *)(iVar14 + 0x82) * iVar15) / uVar17;
          }
        }
      }
      uVar25 = (uint)*(short *)(iVar14 + 0x7c);
      if (uVar25 != uVar17) {
        uVar27 = (uint)*(ushort *)(iVar14 + 0x82);
        if ((uVar17 & 0xffff) < uVar27) {
          FUN_2c6164e4(iVar14);
          uVar25 = (uint)*(short *)(iVar14 + 0x7c);
          uVar27 = (uint)*(ushort *)(iVar14 + 0x82);
        }
        if ((uVar25 & 0xffff) < uVar27) {
          FUN_2c6164e4(iVar14);
        }
        *(short *)(iVar14 + 0x7c) = (short)uVar17;
        FUN_2c602340(iVar14,0x1c,0);
      }
    }
    else if (iVar13 == 8) {
      if (*(ushort *)(iVar14 + 0x7c) < *(ushort *)(iVar14 + 0x82)) {
        FUN_2c6164e4();
      }
      *(undefined2 *)(iVar14 + 0x7c) = 0x7fff;
    }
    else {
      if (iVar13 == 0x29) {
        if (*DAT_2c61718c == local_3c) {
          FUN_2c607588();
          return;
        }
        goto LAB_2c617c0a;
      }
      if (iVar13 == 0x13) {
        if (*DAT_2c61718c == local_3c) {
          sVar10 = *(short *)(iVar14 + 100);
          if (*(short *)(iVar14 + 100) < *(short *)(iVar14 + 0x58)) {
            sVar10 = *(short *)(iVar14 + 0x58);
          }
          if (sVar10 < *(short *)(iVar14 + 0x4c)) {
            sVar10 = *(short *)(iVar14 + 0x4c);
          }
          sVar3 = *(short *)(iVar14 + 0x40);
          if (*(short *)(iVar14 + 0x40) < sVar10) {
            sVar3 = sVar10;
          }
          if (*(char *)(param_2 + 8) == '\x13') {
            sVar10 = **(short **)(param_2 + 0x10);
            if (sVar3 < sVar10) {
              sVar3 = sVar10;
            }
            **(short **)(param_2 + 0x10) = sVar3;
          }
          return;
        }
        goto LAB_2c617c0a;
      }
      if (iVar13 == 0x2c) {
        puVar19 = (undefined2 *)FUN_2c602410(param_2);
        iVar13 = FUN_2c607404(iVar14);
        *puVar19 = (short)((uint)*(ushort *)(iVar14 + 0x84) * iVar13 >> 8);
        iVar13 = FUN_2c607440(iVar14);
        puVar19[1] = (short)(iVar13 * (uint)*(ushort *)(iVar14 + 0x86) >> 8);
      }
      else if (iVar13 == 0x15) {
        iVar28 = iVar14 + 0x14;
        iVar13 = FUN_2c602608(param_2);
        iVar15 = FUN_2c62a6b4(&local_f0,iVar28,*(undefined4 *)(iVar13 + 8));
        if (iVar15 != 0) {
          uVar22 = *(undefined4 *)(iVar13 + 8);
          *(short **)(iVar13 + 8) = &local_f0;
          sVar3 = FUN_2c6033b4(iVar14,0,0x32);
          sVar4 = FUN_2c6033b4(iVar14,0,0x12);
          sVar5 = FUN_2c6033b4(iVar14,0,0x10);
          iVar15 = FUN_2c607404(iVar14);
          uVar11 = *(ushort *)(iVar14 + 0x84);
          iVar16 = FUN_2c607440(iVar14);
          uVar1 = *(ushort *)(iVar14 + 0x86);
          FUN_2c6120a0(&local_e8);
          FUN_2c600968(iVar14,0,&local_e8);
          FUN_2c600b9c(&local_dc,iVar13);
          local_a4 = 0xffffffff;
          local_a8 = 0;
          local_d4 = 0;
          local_d8 = uVar18;
          local_b8 = (short *)0x0;
          local_b4 = (short *)0x0;
          local_c4 = &local_e8;
          FUN_2c602340(iVar14,0x1a,&local_dc);
          bVar2 = FUN_2c6033b4(iVar14,0,0x31);
          sVar6 = FUN_2c6033b4(iVar14,0,0x32);
          uVar17 = FUN_2c6033b4(iVar14,0,0x33);
          sVar7 = FUN_2c605068(iVar14);
          sVar8 = FUN_2c604a44(iVar14);
          sVar10 = *(short *)(iVar14 + 0x7e);
          if (sVar10 != 0) {
            iVar33 = (int)sVar10;
            sVar30 = *(short *)(iVar14 + 0x16);
            local_100 = *(short *)(iVar14 + 0x14);
            local_f8 = *(short *)(iVar14 + 0x18);
            if ((bVar2 < 3) || (sVar6 < 1)) {
              uVar25 = 0;
            }
            else {
              uVar25 = 0;
              if ((uVar17 & 2) != 0) {
                sVar12 = FUN_2c6033b4(iVar14,0,0x10);
                uVar25 = (uint)(sVar12 == 0);
              }
              if (((int)(uVar17 << 0x1f) < 0) && (sVar12 = FUN_2c6033b4(iVar14,0,0x11), sVar12 == 0)
                 ) {
                iVar33 = (int)(short)(sVar10 + -1);
              }
            }
            if ((int)uVar25 < iVar33) {
              iVar16 = (int)((uint)uVar1 * iVar16 * 0x100) >> 0x10;
              iVar32 = uVar25 * iVar16;
              uVar27 = uVar25;
              do {
                uVar29 = uVar27 + 1;
                local_d4 = 1;
                local_d8 = uVar18;
                iVar23 = iVar32 / (int)(*(ushort *)(iVar14 + 0x7e) - 1);
                iVar32 = iVar32 + iVar16;
                local_fe = (short)iVar23 + ((sVar3 + sVar5 + sVar30) - sVar8);
                local_f6 = local_fe;
                local_b8 = &local_100;
                local_b4 = &local_f8;
                local_a4 = uVar27;
                FUN_2c602340(iVar14,0x1a,&local_dc);
                FUN_2c6120f4(iVar13,&local_e8,&local_100,&local_f8);
                FUN_2c602340(iVar14,0x1b,&local_dc);
                uVar27 = uVar29;
              } while (uVar25 + 1 + ((iVar33 + -1) - uVar25 & 0xffff) != uVar29);
            }
          }
          sVar10 = *(short *)(iVar14 + 0x80);
          if (sVar10 != 0) {
            iVar16 = (int)sVar10;
            sVar5 = *(short *)(iVar14 + 0x14);
            local_fe = *(short *)(iVar14 + 0x16);
            local_f6 = *(short *)(iVar14 + 0x1a);
            if ((bVar2 < 3) || (sVar6 < 1)) {
              uVar25 = 0;
            }
            else {
              uVar25 = 0;
              if ((uVar17 & 4) != 0) {
                sVar6 = FUN_2c6033b4(iVar14,0,0x12);
                uVar25 = (uint)(sVar6 == 0);
              }
              if (((int)(uVar17 << 0x1c) < 0) && (sVar6 = FUN_2c6033b4(iVar14,0,0x13), sVar6 == 0))
              {
                iVar16 = (int)(short)(sVar10 + -1);
              }
            }
            if ((int)uVar25 < iVar16) {
              iVar15 = (int)((uint)uVar11 * iVar15 * 0x100) >> 0x10;
              iVar33 = uVar25 * iVar15;
              local_a4 = uVar25;
              do {
                local_d4 = 2;
                uVar17 = local_a4 + 1;
                local_d8 = uVar18;
                iVar32 = iVar33 / (int)(*(ushort *)(iVar14 + 0x80) - 1);
                iVar33 = iVar33 + iVar15;
                local_100 = (short)iVar32 + ((sVar3 + sVar4 + sVar5) - sVar7);
                local_f8 = local_100;
                local_b8 = &local_100;
                local_b4 = &local_f8;
                FUN_2c602340(iVar14,0x1a,&local_dc);
                FUN_2c6120f4(iVar13,&local_e8,&local_100,&local_f8);
                FUN_2c602340(iVar14,0x1b,&local_dc);
                local_a4 = uVar17;
              } while (uVar25 + 1 + ((iVar16 + -1) - uVar25 & 0xffff) != uVar17);
            }
          }
          local_b8 = (short *)0x0;
          local_b4 = (short *)0x0;
          local_a4 = 0xffffffff;
          FUN_2c602340(iVar14,0x1b,&local_dc);
          *(undefined4 *)(iVar13 + 8) = uVar22;
        }
        iVar16 = iVar14 + 0x24;
        FUN_2c615c44(iVar14,iVar13,0);
        FUN_2c615c44(iVar14,iVar13,1);
        FUN_2c615f78(iVar14,iVar13,2);
        FUN_2c615f78(iVar14,iVar13,4);
        iVar15 = FUN_2c62ca4c(iVar16);
        if (iVar15 == 0) {
          bVar2 = *(byte *)(iVar14 + 0x88) & 7;
          if (bVar2 == 1) {
            iVar15 = FUN_2c62a6b4(&local_100,iVar28,*(undefined4 *)(iVar13 + 8));
            if (iVar15 != 0) {
              psVar24 = *(short **)(iVar13 + 8);
              *(short **)(iVar13 + 8) = &local_100;
              if (1 < *(ushort *)(iVar14 + 0x82)) {
                sVar5 = FUN_2c6033b4(iVar14,0,0x32);
                sVar6 = FUN_2c6033b4(iVar14,0,0x12);
                sVar7 = FUN_2c6033b4(iVar14,0,0x10);
                iVar15 = FUN_2c607404(iVar14);
                uVar11 = *(ushort *)(iVar14 + 0x84);
                iVar33 = FUN_2c607440(iVar14);
                uVar1 = *(ushort *)(iVar14 + 0x86);
                sVar10 = *(short *)(iVar14 + 0x14);
                sVar4 = FUN_2c605068(iVar14);
                sVar3 = *(short *)(iVar14 + 0x16);
                sVar8 = FUN_2c604a44(iVar14);
                iVar28 = FUN_2c62a6b4(&local_f8,iVar28,*(undefined4 *)(iVar13 + 8));
                if (iVar28 != 0) {
                  FUN_2c6120a0(&local_e8);
                  FUN_2c600968(iVar14,0x50000,&local_e8);
                  FUN_2c61314c(&local_94);
                  FUN_2c6004cc(iVar14,0x20000,&local_94);
                  uVar9 = FUN_2c6033b4(iVar14,0x20000,1);
                  iVar23 = (int)(short)uVar9 - ((int)((uint)uVar9 << 0x10) >> 0x1f) >> 1;
                  uVar9 = FUN_2c6033b4(iVar14,0x20000,4);
                  iVar32 = (int)(short)uVar9 - ((int)((uint)uVar9 << 0x10) >> 0x1f) >> 1;
                  iVar28 = iVar23;
                  if (iVar32 <= iVar23) {
                    iVar28 = iVar32;
                  }
                  if ((int)local_e4 / 2 < iVar28) {
                    local_dd = local_dd | 0x10;
                  }
                  if (local_e4 == 1) {
                    local_dd = local_dd | 0x10;
                  }
                  local_de = FUN_2c6033b4(iVar14,0x50000,0x4e);
                  iVar15 = (int)((uint)uVar11 * iVar15 * 0x100) >> 0x10;
                  uVar11 = *(ushort *)(iVar14 + 0x82);
                  piVar20 = (int *)FUN_2c62ca18(iVar16);
                  if (piVar20 != (int *)0x0) {
                    iVar33 = (uint)uVar1 * iVar33;
                    sVar4 = (sVar6 + sVar5 + sVar10) - sVar4;
                    sVar10 = ((sVar7 + sVar5 + sVar3) - sVar8) + (short)((uint)iVar33 >> 8);
                    iVar28 = iVar33 * 0x100 >> 0x10;
                    do {
                      uVar17 = *(byte *)((int)piVar20 + 0xe) & 1;
                      if ((*(byte *)((int)piVar20 + 0xe) & 1) == 0) {
                        local_e8 = piVar20[2];
                        local_90 = piVar20[2];
                        if (-1 < (int)((uint)*(byte *)(iVar14 + 0x88) << 0x1c)) {
                          uVar17 = (uint)(short)piVar20[3];
                        }
                        iVar26 = iVar14 + ((int)((uint)*(byte *)((int)piVar20 + 0xe) << 0x1b) >>
                                          0x1f) * -2;
                        iVar33 = (int)*(short *)(iVar26 + 0x6c);
                        local_102 = sVar10 - (short)((iVar28 * (*(short *)(piVar20[1] + uVar17 * 2)
                                                               - iVar33)) /
                                                    (*(short *)(iVar26 + 0x70) - iVar33));
                        local_108 = sVar4;
                        local_104 = sVar4;
                        if (*(char *)(iVar14 + 0x8a) != '\0') {
                          local_dc = sVar4 - *(short *)(iVar14 + 0x8c);
                          sStack_da = local_102;
                          FUN_2c6120f4(iVar13,&local_e8,&local_dc,&local_104);
                        }
                        FUN_2c600b9c(&local_dc,iVar13);
                        local_d8 = uVar18;
                        local_d4 = 3;
                        local_a8 = 0x50000;
                        local_124._0_2_ = (short)iVar32;
                        sVar3 = (short)iVar23;
                        uVar25 = 0;
                        local_140 = uVar17;
                        local_cc = &local_94;
                        local_c4 = &local_e8;
                        local_98 = piVar20;
                        if (*(ushort *)(iVar14 + 0x82) != 0) {
                          uVar27 = 0;
                          uVar25 = (uint)*(ushort *)(iVar14 + 0x82);
                          local_134 = uVar17;
                          sVar5 = local_102;
                          sVar6 = local_102;
                          do {
                            local_108 = local_104;
                            sVar7 = local_102;
                            local_106 = sVar7;
                            if (psVar24[2] + iVar23 + 1 < (int)local_104) {
                              local_140 = local_134;
                              goto LAB_2c617b1e;
                            }
                            sVar30 = (short)((int)(uVar27 * iVar15) / (int)(uVar25 - 1)) + sVar4;
                            iVar21 = piVar20[1];
                            local_140 = (uint)(short)((short)(uVar17 + uVar27) -
                                                     (short)uVar25 *
                                                     (short)((int)(uVar17 + uVar27) / (int)uVar25));
                            iVar33 = iVar14 + ((int)((uint)*(byte *)((int)piVar20 + 0xe) << 0x1b) >>
                                              0x1f) * -2;
                            iVar26 = (int)*(short *)(iVar33 + 0x6c);
                            sVar8 = sVar10 - (short)((iVar28 * (*(short *)(iVar21 + local_140 * 2) -
                                                               iVar26)) /
                                                    (*(short *)(iVar33 + 0x70) - iVar26));
                            sVar12 = sVar8;
                            if (((*psVar24 - iVar23) + -1 <= (int)sVar30) && (uVar27 != 0)) {
                              if ((int)(uint)uVar11 < iVar15) {
                                local_a4 = uVar27 - 1;
                                local_f0 = local_104 - sVar3;
                                local_ec = local_104 + sVar3;
                                local_ee = local_102 - (short)local_124;
                                local_ea = local_102 + (short)local_124;
                                iVar33 = local_134 * 2;
                                local_b8 = &local_108;
                                if (*(short *)(piVar20[1] + local_134 * 2) == 0x7fff) {
                                  local_b8 = (short *)0x0;
                                }
                                local_b4 = &local_104;
                                if (*(short *)(piVar20[1] + local_140 * 2) == 0x7fff) {
                                  local_b4 = (short *)0x0;
                                }
                                local_d0 = &local_f0;
                                local_9c = (int)*(short *)(piVar20[1] + iVar33);
                                local_104 = sVar30;
                                local_102 = sVar8;
                                FUN_2c602340(iVar14,0x1a,&local_dc);
                                if (*(short *)(piVar20[1] + iVar33) != 0x7fff) {
                                  if (*(short *)(piVar20[1] + local_140 * 2) == 0x7fff) {
                                    if ((iVar32 != 0) && (iVar23 != 0)) goto LAB_2c617bbe;
                                  }
                                  else {
                                    FUN_2c6120f4(iVar13,&local_e8,&local_108,&local_104);
                                    if ((iVar23 != 0) &&
                                       ((iVar32 != 0 && (*(short *)(piVar20[1] + iVar33) != 0x7fff))
                                       )) {
LAB_2c617bbe:
                                      FUN_2c61319c(iVar13,&local_94,&local_f0);
                                    }
                                  }
                                }
                                FUN_2c602340(iVar14,0x1b,&local_dc);
                                sVar7 = local_106;
                                sVar30 = local_104;
                                sVar12 = local_102;
                              }
                              else if ((*(short *)(iVar21 + local_134 * 2) != 0x7fff) &&
                                      (*(short *)(iVar21 + local_140 * 2) != 0x7fff)) {
                                local_102 = sVar5;
                                if (sVar5 < sVar8) {
                                  local_102 = sVar8;
                                }
                                local_106 = sVar6;
                                if (sVar8 <= sVar6) {
                                  local_106 = sVar8;
                                }
                                sVar5 = local_102;
                                sVar6 = local_106;
                                if ((int)local_104 != (int)sVar30) {
                                  local_108 = sVar30 + -1;
                                  if (local_102 == local_106) {
                                    local_102 = local_102 + 1;
                                  }
                                  local_104 = local_108;
                                  FUN_2c6120f4(iVar13,&local_e8,&local_108,&local_104);
                                  sVar7 = local_106;
                                  sVar30 = local_104 + 1;
                                  sVar12 = local_102;
                                  sVar5 = sVar8;
                                  sVar6 = sVar8;
                                }
                              }
                            }
                            local_102 = sVar12;
                            local_104 = sVar30;
                            local_106 = sVar7;
                            uVar25 = (uint)*(ushort *)(iVar14 + 0x82);
                            uVar27 = uVar27 + 1 & 0xffff;
                            local_134 = local_140;
                          } while (uVar27 < uVar25);
                          if (uVar25 != uVar27) goto LAB_2c617190;
                        }
                        uVar27 = uVar25;
                        if (*(char *)(iVar14 + 0x8a) != '\0') {
                          local_f0 = local_104 + *(short *)(iVar14 + 0x8e);
                          local_ee = local_102;
                          FUN_2c6120f4(iVar13,&local_e8,&local_104,&local_f0);
                        }
LAB_2c617b1e:
                        if ((((int)(uint)uVar11 < iVar15) && (*(ushort *)(iVar14 + 0x82) == uVar27))
                           && (*(short *)(piVar20[1] + local_140 * 2) != 0x7fff)) {
                          local_a4 = uVar27 - 1;
                          local_d0 = &local_f0;
                          local_b8 = (short *)0x0;
                          local_b4 = (short *)0x0;
                          local_f0 = local_104 - sVar3;
                          local_ec = local_104 + sVar3;
                          local_ee = local_102 - (short)local_124;
                          local_ea = local_102 + (short)local_124;
                          local_9c = (int)*(short *)(piVar20[1] + local_140 * 2);
                          FUN_2c602340(iVar14,0x1a,&local_dc);
                          FUN_2c61319c(iVar13,&local_94,&local_f0);
                          FUN_2c602340(iVar14,0x1b,&local_dc);
                        }
                      }
LAB_2c617190:
                      piVar20 = (int *)FUN_2c62ca28(iVar16,piVar20);
                    } while (piVar20 != (int *)0x0);
                  }
                  *(short **)(iVar13 + 8) = psVar24;
                }
              }
            }
          }
          else if (bVar2 == 2) {
            iVar15 = FUN_2c62a6b4(&local_f0,iVar28,*(undefined4 *)(iVar13 + 8));
            if (iVar15 != 0) {
              local_124 = *(undefined4 *)(iVar13 + 8);
              *(short **)(iVar13 + 8) = &local_f0;
              sVar10 = FUN_2c6033b4(iVar14,0,0x12);
              sVar3 = FUN_2c6033b4(iVar14,0,0x10);
              iVar15 = FUN_2c607404(iVar14);
              iVar32 = (int)((uint)*(ushort *)(iVar14 + 0x84) * iVar15 * 0x100) >> 0x10;
              iVar15 = FUN_2c607440(iVar14);
              iVar15 = iVar15 * (uint)*(ushort *)(iVar14 + 0x86);
              uVar17 = FUN_2c62ca30(iVar16);
              sVar4 = FUN_2c6033b4(iVar14,0,0x15);
              uVar11 = *(ushort *)(iVar14 + 0x84);
              uVar1 = *(ushort *)(iVar14 + 0x82);
              sVar5 = FUN_2c6033b4(iVar14,0x50000,0x15);
              iVar33 = (int)(short)((int)(iVar32 - (uVar1 - 1) *
                                                   ((int)((int)sVar4 * (uint)uVar11) >> 8)) /
                                   (int)(uint)uVar1);
              iVar28 = (int)sVar5 * (uint)*(ushort *)(iVar14 + 0x84);
              sVar4 = FUN_2c6033b4(iVar14,0,0x32);
              sVar5 = FUN_2c605068(iVar14);
              sVar6 = FUN_2c604a44(iVar14);
              FUN_2c61314c(&local_94);
              FUN_2c6004cc(iVar14,0x50000,&local_94);
              local_73 = local_73 & 0xf8;
              local_91 = 0xff;
              local_e2 = *(short *)(iVar14 + 0x1a) + local_94;
              FUN_2c600b9c(&local_dc,iVar13);
              local_d8 = uVar18;
              local_a8 = 0x50000;
              local_d4 = 4;
              uVar25 = (uint)*(ushort *)(iVar14 + 0x82);
              if (uVar25 != 0) {
                local_138._0_2_ = (short)((iVar33 - (iVar28 >> 8) * (uVar17 - 1)) / uVar17);
                sVar8 = (short)local_138;
                sVar7 = (short)local_138 + -1;
                local_138 = 0;
                do {
                  uVar17 = local_138 & 0xffff;
                  sVar30 = (short)((int)((iVar32 - iVar33) * uVar17) / (int)(uVar25 - 1)) +
                           *(short *)(iVar14 + 0x14) + ((sVar10 + sVar4) - sVar5);
                  local_a4 = uVar17;
                  piVar20 = (int *)FUN_2c62ca18(iVar16);
                  if (piVar20 != (int *)0x0) {
                    do {
                      uVar25 = *(byte *)((int)piVar20 + 0xe) & 1;
                      sVar12 = sVar30;
                      if ((*(byte *)((int)piVar20 + 0xe) & 1) == 0) {
                        local_e4 = sVar30 + sVar7;
                        if (-1 < (int)((uint)*(byte *)(iVar14 + 0x88) << 0x1c)) {
                          uVar25 = (uint)(short)piVar20[3];
                        }
                        sVar12 = sVar30 + sVar8 + (short)((uint)iVar28 >> 8);
                        local_e8 = CONCAT22(local_e8._2_2_,sVar30);
                        if (local_f0 <= local_e4) {
                          if (local_ec < sVar30) break;
                          local_90 = piVar20[2];
                          iVar23 = iVar14 + ((int)((uint)*(byte *)((int)piVar20 + 0xe) << 0x1b) >>
                                            0x1f) * -2;
                          iVar26 = (int)(short)((short)(uVar25 + uVar17) -
                                               *(ushort *)(iVar14 + 0x82) *
                                               (short)((int)(uVar25 + uVar17) /
                                                      (int)(uint)*(ushort *)(iVar14 + 0x82)));
                          iVar21 = (int)*(short *)(iVar23 + 0x6c);
                          local_e8 = CONCAT22((*(short *)(iVar14 + 0x16) + ((sVar4 + sVar3) - sVar6)
                                              + (short)((uint)iVar15 >> 8)) -
                                              (short)(((iVar15 * 0x100 >> 0x10) *
                                                      (*(short *)(piVar20[1] + iVar26 * 2) - iVar21)
                                                      ) / (*(short *)(iVar23 + 0x70) - iVar21)),
                                              sVar30);
                          if (*(short *)(piVar20[1] + iVar26 * 2) != 0x7fff) {
                            local_d0 = (short *)&local_e8;
                            local_9c = (int)*(short *)(piVar20[1] + iVar26 * 2);
                            local_cc = &local_94;
                            local_98 = piVar20;
                            FUN_2c602340(iVar14,0x1a,&local_dc);
                            FUN_2c61319c(iVar13,&local_94,&local_e8);
                            FUN_2c602340(iVar14,0x1b,&local_dc);
                          }
                        }
                      }
                      sVar30 = sVar12;
                      piVar20 = (int *)FUN_2c62ca28(iVar16,piVar20);
                    } while (piVar20 != (int *)0x0);
                  }
                  local_138 = local_138 + 1;
                  uVar25 = (uint)*(ushort *)(iVar14 + 0x82);
                } while ((local_138 & 0xffff) < uVar25);
              }
LAB_2c6176c6:
              *(undefined4 *)(iVar13 + 8) = local_124;
            }
          }
          else if (bVar2 == 3) {
            iVar15 = FUN_2c62a6b4(&local_f8,iVar28,*(undefined4 *)(iVar13 + 8));
            if (iVar15 != 0) {
              local_124 = *(undefined4 *)(iVar13 + 8);
              *(short **)(iVar13 + 8) = &local_f8;
              sVar5 = FUN_2c6033b4(iVar14,0,0x32);
              sVar6 = FUN_2c6033b4(iVar14,0,0x12);
              sVar7 = FUN_2c6033b4(iVar14,0,0x10);
              iVar15 = FUN_2c607404(iVar14);
              iVar32 = (int)((uint)*(ushort *)(iVar14 + 0x84) * iVar15 * 0x100) >> 0x10;
              iVar28 = FUN_2c607440(iVar14);
              sVar10 = *(short *)(iVar14 + 0x14);
              iVar28 = iVar28 * (uint)*(ushort *)(iVar14 + 0x86);
              iVar23 = iVar28 * 0x100 >> 0x10;
              sVar4 = FUN_2c605068(iVar14);
              sVar3 = *(short *)(iVar14 + 0x16);
              sVar4 = (sVar10 + sVar6 + sVar5) - sVar4;
              sVar10 = FUN_2c604a44(iVar14);
              FUN_2c6120a0(&local_e8);
              FUN_2c600968(iVar14,0x50000,&local_e8);
              FUN_2c61314c(&local_94);
              FUN_2c6004cc(iVar14,0x20000,&local_94);
              uVar11 = FUN_2c6033b4(iVar14,0x20000,1);
              iVar26 = (int)(short)uVar11 - ((int)((uint)uVar11 << 0x10) >> 0x1f) >> 1;
              uVar11 = FUN_2c6033b4(iVar14,0x20000,4);
              iVar33 = (int)(short)uVar11 - ((int)((uint)uVar11 << 0x10) >> 0x1f) >> 1;
              iVar15 = iVar26;
              if (iVar33 <= iVar26) {
                iVar15 = iVar33;
              }
              if ((int)local_e4 / 2 < iVar15) {
                local_dd = local_dd | 0x10;
              }
              if (local_e4 == 1) {
                local_dd = local_dd | 0x10;
              }
              piVar20 = (int *)FUN_2c62ca18(iVar16);
              if (piVar20 != (int *)0x0) {
                sVar10 = ((sVar5 + sVar7 + sVar3) - sVar10) + (short)((uint)iVar28 >> 8);
                do {
                  uVar17 = *(byte *)((int)piVar20 + 0xe) & 1;
                  if ((*(byte *)((int)piVar20 + 0xe) & 1) == 0) {
                    local_e8 = piVar20[2];
                    local_90 = piVar20[2];
                    if (-1 < (int)((uint)*(byte *)(iVar14 + 0x88) << 0x1c)) {
                      uVar17 = (uint)(short)piVar20[3];
                    }
                    iVar15 = uVar17 << 1;
                    local_104 = sVar4;
                    if (*(short *)(piVar20[1] + uVar17 * 2) == 10) {
                      local_100 = -0x1fff;
                      local_fe = -0x1fff;
                    }
                    else {
                      iVar28 = iVar14 + ((int)((uint)*(byte *)((int)piVar20 + 0xe) << 0x1c) >> 0x1f)
                                        * -2;
                      local_100 = sVar4;
                      local_100 = FUN_2c62e4a8((int)*(short *)(*piVar20 + uVar17 * 2),
                                               (int)*(short *)(iVar28 + 0x74),
                                               (int)*(short *)(iVar28 + 0x78),0,iVar32);
                      local_100 = local_100 + sVar4;
                      iVar28 = iVar14 + ((int)((uint)*(byte *)((int)piVar20 + 0xe) << 0x1b) >> 0x1f)
                                        * -2;
                      local_fe = FUN_2c62e4a8((int)*(short *)(piVar20[1] + uVar17 * 2),
                                              (int)*(short *)(iVar28 + 0x6c),
                                              (int)*(short *)(iVar28 + 0x70),0,iVar23);
                      local_fe = sVar10 - local_fe;
                    }
                    FUN_2c600b9c(&local_dc,iVar13);
                    local_d8 = uVar18;
                    local_a8 = 0x50000;
                    local_d4 = 3;
                    uVar27 = (uint)*(ushort *)(iVar14 + 0x82);
                    local_12c = (short)iVar26;
                    local_128 = (short)iVar33;
                    uVar25 = 0;
                    local_cc = &local_94;
                    local_c4 = &local_e8;
                    local_98 = piVar20;
                    if (uVar27 != 0) {
                      uVar29 = 0;
                      uVar25 = uVar17;
                      do {
                        local_104 = local_100;
                        uVar31 = (uint)(short)((short)(uVar29 + uVar17) -
                                              (short)uVar27 *
                                              (short)((int)(uVar29 + uVar17) / (int)uVar27));
                        local_102 = local_fe;
                        iVar15 = uVar31 * 2;
                        iVar28 = (int)*(short *)(piVar20[1] + uVar31 * 2);
                        if (iVar28 != 0x7fff) {
                          iVar21 = iVar14 + ((int)((uint)*(byte *)((int)piVar20 + 0xe) << 0x1b) >>
                                            0x1f) * -2;
                          local_fe = FUN_2c62e4a8(iVar28,(int)*(short *)(iVar21 + 0x6c),
                                                  (int)*(short *)(iVar21 + 0x70),0,iVar23);
                          local_fe = sVar10 - local_fe;
                          iVar28 = iVar14 + ((int)((uint)*(byte *)((int)piVar20 + 0xe) << 0x1c) >>
                                            0x1f) * -2;
                          local_100 = FUN_2c62e4a8((int)*(short *)(*piVar20 + uVar31 * 2),
                                                   (int)*(short *)(iVar28 + 0x74),
                                                   (int)*(short *)(iVar28 + 0x78),0,iVar32);
                          local_100 = local_100 + sVar4;
                          if (uVar29 != 0) {
                            local_f0 = local_104 - local_12c;
                            local_ec = local_104 + local_12c;
                            local_ee = local_102 - local_128;
                            local_ea = local_102 + local_128;
                            local_a4 = uVar29 - 1;
                            local_b8 = &local_104;
                            if (*(short *)(piVar20[1] + uVar25 * 2) == 0x7fff) {
                              local_b8 = (short *)0x0;
                            }
                            local_b4 = &local_100;
                            if (*(short *)(piVar20[1] + iVar15) == 0x7fff) {
                              local_b4 = (short *)0x0;
                            }
                            local_d0 = &local_f0;
                            local_9c = (int)*(short *)(piVar20[1] + uVar25 * 2);
                            FUN_2c602340(iVar14,0x1a,&local_dc);
                            if (((*(short *)(piVar20[1] + uVar25 * 2) != 0x7fff) &&
                                (*(short *)(piVar20[1] + iVar15) != 0x7fff)) &&
                               ((FUN_2c6120f4(iVar13,&local_e8,&local_104,&local_100), iVar26 != 0
                                && (iVar33 != 0)))) {
                              FUN_2c61319c(iVar13,&local_94,&local_f0);
                            }
                            FUN_2c602340(iVar14,0x1b,&local_dc);
                          }
                        }
                        uVar27 = (uint)*(ushort *)(iVar14 + 0x82);
                        uVar29 = uVar29 + 1 & 0xffff;
                        uVar25 = uVar31;
                      } while (uVar29 < uVar27);
                      uVar25 = uVar27;
                      if (uVar27 != uVar29) goto LAB_2c617826;
                    }
                    if (*(short *)(piVar20[1] + iVar15) != 0x7fff) {
                      local_a4 = uVar25 - 1;
                      local_d0 = &local_f0;
                      local_b8 = (short *)0x0;
                      local_b4 = (short *)0x0;
                      local_f0 = local_100 - local_12c;
                      local_ec = local_100 + local_12c;
                      local_ee = local_fe - local_128;
                      local_ea = local_fe + local_128;
                      local_9c = (int)*(short *)(piVar20[1] + iVar15);
                      FUN_2c602340(iVar14,0x1a,&local_dc);
                      FUN_2c61319c(iVar13,&local_94,&local_f0);
                      FUN_2c602340(iVar14,0x1b,&local_dc);
                    }
                  }
LAB_2c617826:
                  piVar20 = (int *)FUN_2c62ca28(iVar16,piVar20);
                } while (piVar20 != (int *)0x0);
              }
              goto LAB_2c6176c6;
            }
          }
        }
        if (*DAT_2c61718c == local_3c) {
          FUN_2c616854(iVar14,iVar13,0,0);
          return;
        }
        goto LAB_2c617c0a;
      }
    }
  }
  if (*DAT_2c616b14 == local_3c) {
    return;
  }
LAB_2c617c0a:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

