/* FUN_2c66c640 @ 0x2c66c640 */

undefined4 FUN_2c66c640(undefined4 *param_1,byte *param_2,undefined4 *param_3,undefined4 param_4)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  double *pdVar12;
  int iVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  bool bVar25;
  uint in_fpscr;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined4 extraout_s1_04;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  int local_a0;
  int local_98;
  int local_94;
  byte *local_90;
  uint local_8c;
  byte *local_74;
  int local_70;
  int local_6c;
  int local_68;
  uint local_64;
  
  local_70 = 0;
  uVar17 = *DAT_2c66c8d4;
  iVar7 = FUN_2c66c4ec(uVar17);
  for (local_74 = param_2; bVar2 = *local_74, bVar2 != 0x2b; local_74 = local_74 + 1) {
    if (0x2b < bVar2) {
      if (bVar2 != 0x2d) {
LAB_2c66c686:
        local_98 = 0;
        goto LAB_2c66c68a;
      }
      local_98 = 1;
      goto LAB_2c66c6f6;
    }
    if (bVar2 < 0xe) {
      if (bVar2 < 9) {
        if (bVar2 != 0) goto LAB_2c66c686;
        goto LAB_2c66c702;
      }
    }
    else if (bVar2 != 0x20) goto LAB_2c66c686;
  }
  local_98 = 0;
LAB_2c66c6f6:
  pbVar1 = local_74 + 1;
  local_74 = local_74 + 1;
  if (*pbVar1 == 0) goto LAB_2c66c702;
LAB_2c66c68a:
  pbVar1 = local_74;
  if (*local_74 == 0x30) {
    if ((local_74[1] & 0xdf) == 0x58) {
      uVar8 = FUN_2c66ff14(param_1,&local_74,DAT_2c66c8d8,&local_6c,&local_70,local_98,param_4);
      uVar20 = uVar8 & 7;
      dVar27 = 0.0;
      if (uVar20 != 0) {
        if (uVar20 == 6) {
          local_98 = 0;
          dVar27 = 0.0;
          local_74 = pbVar1 + 1;
        }
        else {
          if (local_70 != 0) {
            FUN_2c670fdc(&local_68,0x35);
            FUN_2c670760(param_1,local_70);
          }
          iVar7 = 0;
          uVar10 = 0;
          switch(uVar20) {
          case 1:
          case 5:
            iVar7 = local_68;
            uVar10 = local_64 & 0xffefffff | (local_6c + 0x433) * 0x100000;
            break;
          case 2:
            iVar7 = local_68;
            uVar10 = local_64;
            break;
          case 3:
            uVar10 = DAT_2c66c8dc;
            break;
          case 4:
            iVar7 = -1;
            uVar10 = 0x7fffffff;
          }
          dVar27 = (double)CONCAT44(uVar10,iVar7);
          if ((int)(uVar8 << 0x1c) < 0) {
            dVar27 = (double)(CONCAT44(uVar10,iVar7) | 0x8000000000000000);
          }
        }
      }
    }
    else {
      do {
        pbVar14 = local_74 + 1;
        pbVar1 = local_74 + 1;
        local_74 = pbVar14;
      } while (*pbVar1 == 0x30);
      dVar27 = 0.0;
      if (*pbVar1 != 0) {
        bVar25 = true;
        goto LAB_2c66c780;
      }
    }
    goto LAB_2c66c6c8;
  }
  bVar25 = false;
LAB_2c66c780:
  iVar22 = 0;
  local_94 = 0;
  local_90 = local_74;
  local_a0 = 0;
  while( true ) {
    uVar8 = (uint)*local_74;
    uVar20 = uVar8 - 0x30;
    if (9 < (uVar20 & 0xff)) break;
    local_74 = local_74 + 1;
    if (local_a0 < 9) {
      local_94 = local_94 * 10 + uVar20;
    }
    else {
      iVar22 = iVar22 * 10 + uVar20;
    }
    local_a0 = local_a0 + 1;
  }
  iVar9 = FUN_2c66c540(local_74,uVar17,iVar7);
  iVar18 = local_a0;
  if (iVar9 == 0) {
    uVar8 = (uint)local_74[iVar7];
    if (local_a0 != 0) {
      iVar9 = 0;
      iVar21 = 0;
      local_74 = local_74 + iVar7;
      goto LAB_2c66c824;
    }
    iVar24 = 0;
    local_74 = local_74 + iVar7;
    while (uVar8 == 0x30) {
      iVar24 = iVar24 + 1;
      uVar8 = (uint)local_74[1];
      local_74 = local_74 + 1;
    }
    if (uVar8 - 0x31 < 9) {
      iVar9 = 0;
      local_90 = local_74;
      iVar18 = 0;
      do {
        iVar21 = uVar8 - 0x30;
        iVar7 = iVar9 + 1;
        if (iVar21 != 0) {
          iVar24 = iVar24 + iVar9 + 1;
          for (iVar7 = iVar18; iVar7 != iVar9 + iVar18; iVar7 = iVar7 + 1) {
            if (iVar7 < 9) {
              local_94 = local_94 * 10;
            }
            else if (iVar7 + 1 < 0x11) {
              iVar22 = iVar22 * 10;
            }
          }
          iVar7 = iVar18 + iVar9;
          iVar18 = iVar18 + 1 + iVar9;
          if (iVar7 < 9) {
            local_94 = local_94 * 10 + iVar21;
          }
          else if (iVar18 < 0x11) {
            iVar22 = iVar22 * 10 + iVar21;
          }
          iVar7 = 0;
        }
        iVar9 = iVar7;
        uVar8 = (uint)local_74[1];
        iVar21 = iVar24;
        local_74 = local_74 + 1;
LAB_2c66c824:
        iVar24 = iVar21;
      } while (uVar8 - 0x30 < 10);
      bVar4 = true;
      iVar24 = iVar9;
      goto LAB_2c66c7b8;
    }
    if ((uVar8 == 0x65) || (uVar8 == 0x45)) {
      iVar21 = 0;
      bVar4 = true;
      goto LAB_2c66c7c2;
    }
    bVar4 = true;
LAB_2c66c92c:
    dVar27 = 0.0;
    if (bVar25 || iVar24 != 0) goto LAB_2c66c6c8;
    if (bVar4) goto LAB_2c66c702;
    if (uVar8 == 0x69) {
LAB_2c66c98e:
      iVar7 = FUN_2c6703c4(&local_74,DAT_2c66cbac);
      if (iVar7 == 0) goto LAB_2c66c702;
      local_74 = local_74 + -1;
      iVar7 = FUN_2c6703c4(&local_74,DAT_2c66cbb0);
      if (iVar7 == 0) {
        local_74 = local_74 + 1;
      }
      dVar27 = (double)((ulonglong)DAT_2c66cbc4 << 0x20);
      goto LAB_2c66c6c8;
    }
    if (uVar8 < 0x6a) {
      if (uVar8 == 0x49) goto LAB_2c66c98e;
      bVar25 = uVar8 == 0x4e;
    }
    else {
      bVar25 = uVar8 == 0x6e;
    }
    if ((bVar25) && (iVar7 = FUN_2c6703c4(&local_74,DAT_2c66cba4), iVar7 != 0)) {
      if ((*local_74 == 0x28) &&
         (iVar7 = FUN_2c6703ec(&local_74,DAT_2c66cba8,&local_68), iVar7 == 5)) {
        dVar27 = (double)(CONCAT44(local_64,local_68) | 0x7ff0000000000000);
      }
      else {
        uVar17 = FUN_2c668458(DAT_2c66cbb4);
        dVar27 = (double)CONCAT44(extraout_s1,uVar17);
      }
      goto LAB_2c66c6c8;
    }
LAB_2c66c702:
    if (param_3 == (undefined4 *)0x0) {
      return 0;
    }
    local_98 = 0;
    dVar27 = 0.0;
    local_74 = param_2;
  }
  else {
    iVar21 = 0;
    bVar4 = false;
    iVar24 = 0;
LAB_2c66c7b8:
    if ((uVar8 == 0x65) || (pbVar1 = local_74, uVar8 == 0x45)) {
      if (iVar18 == 0) {
LAB_2c66c7c2:
        if (!bVar25 && iVar24 == 0) goto LAB_2c66c702;
        iVar18 = 0;
      }
      param_2 = local_74;
      uVar8 = (uint)local_74[1];
      if (uVar8 == 0x2b) {
        bVar3 = false;
LAB_2c66c8c2:
        uVar8 = (uint)local_74[2];
        local_74 = local_74 + 2;
      }
      else {
        if (uVar8 == 0x2d) {
          bVar3 = true;
          goto LAB_2c66c8c2;
        }
        bVar3 = false;
        local_74 = local_74 + 1;
      }
      pbVar1 = param_2;
      if (9 < uVar8 - 0x30) goto LAB_2c66c7f0;
      while (pbVar1 = local_74, uVar8 == 0x30) {
        uVar8 = (uint)local_74[1];
        local_74 = local_74 + 1;
      }
      if (8 < uVar8 - 0x31) goto LAB_2c66c7f0;
      while( true ) {
        iVar7 = uVar8 - 0x30;
        pbVar14 = local_74 + 1;
        uVar8 = (uint)local_74[1];
        local_74 = pbVar14;
        if (9 < uVar8 - 0x30) break;
        uVar8 = iVar7 * 10 + uVar8;
      }
      iVar9 = 19999;
      if (((int)pbVar14 - (int)pbVar1 < 9) && (iVar7 < 20000)) {
        iVar9 = iVar7;
      }
      if (bVar3) {
        iVar9 = -iVar9;
      }
    }
    else {
LAB_2c66c7f0:
      local_74 = pbVar1;
      iVar9 = 0;
    }
    if (iVar18 == 0) goto LAB_2c66c92c;
    uVar8 = iVar9 - iVar21;
    dVar27 = (double)VectorUnsignedToFloat(local_94,(byte)(in_fpscr >> 0x16) & 3);
    if (local_a0 == 0) {
      local_a0 = iVar18;
    }
    iVar7 = iVar18;
    if (0xf < iVar18) {
      iVar7 = 0x10;
    }
    if (9 < iVar18) {
      dVar26 = (double)VectorUnsignedToFloat(iVar22,(byte)(in_fpscr >> 0x16) & 3);
      dVar27 = dVar26 + dVar27 * *(double *)(DAT_2c66cbb8 + iVar7 * 8 + -0x48);
    }
    if (iVar18 < 0x10) {
      if (uVar8 != 0) {
        if ((int)uVar8 < 1) {
          if ((int)uVar8 < -0x16) goto LAB_2c66ca7a;
          dVar27 = dVar27 / *(double *)(DAT_2c66cbb8 + (iVar21 - iVar9) * 8);
        }
        else {
          if ((int)uVar8 < 0x17) {
            dVar26 = *(double *)(DAT_2c66cbb8 + uVar8 * 8);
          }
          else {
            if (0x25 - iVar18 < (int)uVar8) goto LAB_2c66ca7a;
            dVar26 = *(double *)(DAT_2c66cbb8 + (0xf - iVar18) * 8) * dVar27;
            dVar27 = *(double *)(DAT_2c66cbb8 + (uVar8 - (0xf - iVar18)) * 8);
          }
          dVar27 = dVar26 * dVar27;
        }
      }
    }
    else {
LAB_2c66ca7a:
      uVar20 = (iVar18 - iVar7) + uVar8;
      if ((int)uVar20 < 1) {
        if (uVar20 == 0) {
LAB_2c66cb46:
          iVar7 = 0;
LAB_2c66cc40:
          local_a0 = FUN_2c670834(param_1,local_90,local_a0,iVar18,local_94);
          dVar6 = DAT_2c66cec8;
          dVar5 = DAT_2c66cec0;
          dVar26 = DAT_2c66ceb8;
          if (local_a0 != 0) {
            iVar21 = iVar21 - iVar9;
            if (-1 < (int)uVar8) {
              iVar21 = 0;
            }
            iVar9 = 0;
            iVar18 = 0;
            uVar20 = uVar8 & ~((int)uVar8 >> 0x1f);
LAB_2c66cc7c:
            uVar15 = (uint)((ulonglong)dVar27 >> 0x20);
            uVar10 = SUB84(dVar27,0);
            iVar22 = FUN_2c6706e0(param_1,*(undefined4 *)(local_a0 + 4));
            if (iVar22 == 0) goto LAB_2c66cab4;
            FUN_2c674668(iVar22 + 0xc,local_a0 + 0xc,(*(int *)(local_a0 + 0x10) + 2) * 4);
            local_70 = FUN_2c670ec4(uVar10,param_1,&local_6c,&local_68);
            if ((local_70 == 0) || (iVar18 = FUN_2c670968(param_1,1), iVar18 == 0))
            goto LAB_2c66cab4;
            if (local_6c < 0) {
              uVar23 = uVar20 - local_6c;
              iVar24 = iVar21;
            }
            else {
              iVar24 = local_6c + iVar21;
              uVar23 = uVar20;
            }
            iVar13 = 0x36 - local_68;
            iVar19 = (local_6c - iVar7) + local_68 + -1;
            if (iVar19 < DAT_2c66cedc) {
              uVar16 = DAT_2c66cedc - iVar19;
              iVar13 = iVar13 - uVar16;
              if ((int)uVar16 < 0x20) {
                local_8c = 1 << (uVar16 & 0xff);
                local_90 = (byte *)0x0;
              }
              else {
                local_90 = (byte *)(1 << (0xfffffbe2U - iVar19 & 0xff));
                local_8c = 1;
              }
            }
            else {
              local_90 = (byte *)0x0;
              local_8c = 1;
            }
            iVar19 = iVar24 + iVar13;
            iVar13 = uVar23 + iVar13 + iVar7;
            iVar11 = iVar24;
            if (iVar19 <= iVar24) {
              iVar11 = iVar19;
            }
            if (iVar13 <= iVar11) {
              iVar11 = iVar13;
            }
            if (0 < iVar11) {
              iVar19 = iVar19 - iVar11;
              iVar13 = iVar13 - iVar11;
              iVar24 = iVar24 - iVar11;
            }
            if (0 < iVar21) {
              iVar18 = FUN_2c670ae4(param_1,iVar18);
              if ((iVar18 == 0) || (iVar11 = FUN_2c670994(param_1,iVar18,local_70), iVar11 == 0))
              goto LAB_2c66cab4;
              FUN_2c670760(param_1,local_70);
              local_70 = iVar11;
            }
            if ((((((0 < iVar19) &&
                   (local_70 = FUN_2c670b98(param_1,local_70,iVar19), local_70 == 0)) ||
                  ((0 < (int)uVar8 && (iVar22 = FUN_2c670ae4(param_1,iVar22,uVar20), iVar22 == 0))))
                 || ((0 < iVar13 && (iVar22 = FUN_2c670b98(param_1,iVar22,iVar13), iVar22 == 0))))
                || ((0 < iVar24 && (iVar18 = FUN_2c670b98(param_1,iVar18,iVar24), iVar18 == 0)))) ||
               (iVar9 = FUN_2c670cb0(param_1,local_70,iVar22), iVar9 == 0)) goto LAB_2c66cab4;
            iVar13 = *(int *)(iVar9 + 0xc);
            *(undefined4 *)(iVar9 + 0xc) = 0;
            iVar24 = FUN_2c670c78(iVar9,iVar18);
            if (iVar24 < 0) {
              if ((((iVar13 == 0 && uVar10 == 0) && (((ulonglong)dVar27 & 0xfffff00000000) == 0)) &&
                  (0x6b00000 < (uVar15 & 0x7ff00000))) &&
                 ((*(int *)(iVar9 + 0x14) != 0 || (1 < *(int *)(iVar9 + 0x10))))) {
                iVar9 = FUN_2c670b98(param_1,iVar9,1);
                iVar21 = FUN_2c670c78(iVar9,iVar18);
                if (iVar21 < 1) goto LAB_2c66cf36;
LAB_2c66ce2c:
                if ((iVar7 == 0) || (0x6b00000 < (int)(DAT_2c66cee0 & uVar15))) {
                  dVar27 = (double)CONCAT44(~(~((uVar15 & DAT_2c66cee0) - 0x100000 >> 0x14) << 0x14)
                                            ,0xffffffff);
                  goto LAB_2c66cf36;
                }
                if ((int)(DAT_2c66cee0 & uVar15) < 0x3700001) goto LAB_2c66cb94;
                goto LAB_2c66ce4c;
              }
            }
            else {
              if (iVar24 != 0) {
                uVar17 = FUN_2c670f7c(iVar9,iVar18);
                dVar28 = (double)CONCAT44(extraout_s1_02,uVar17);
                uVar23 = in_fpscr & 0xfffffff;
                in_fpscr = uVar23 | (uint)(dVar28 == 2.0) << 0x1e | (uint)(2.0 <= dVar28) << 0x1d;
                bVar2 = (byte)(in_fpscr >> 0x18);
                if ((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) {
                  dVar29 = dVar28 * 0.5;
                  dVar28 = dVar29;
                  if (iVar13 == 0) {
                    dVar28 = -dVar29;
                  }
                }
                else {
                  uVar16 = DAT_2c66d19c;
                  if (iVar13 == 0) {
                    uVar16 = DAT_2c66d1a4;
                    if (uVar10 == 0) {
                      if (((ulonglong)dVar27 & 0xfffff00000000) == 0) {
                        dVar29 = 0.5;
                        if (1.0 <= dVar28) {
                          dVar29 = dVar28 * 0.5;
                        }
                        in_fpscr = uVar23;
                        dVar28 = -dVar29;
                        goto LAB_2c66cfcc;
                      }
                    }
                    else if (dVar27 == 4.94065645841247e-324) goto LAB_2c66cb94;
                  }
                  dVar29 = 1.0;
                  dVar28 = (double)((ulonglong)uVar16 << 0x20);
                }
LAB_2c66cfcc:
                uVar23 = uVar15 & DAT_2c66d194;
                if (uVar23 == DAT_2c66d1a8) {
                  uVar17 = FUN_2c670dd0(uVar10);
                  dVar27 = (double)CONCAT44(uVar15 + 0xfcb00000,uVar10) +
                           dVar28 * (double)CONCAT44(extraout_s1_03,uVar17);
                  uVar16 = (uint)((ulonglong)dVar27 >> 0x20);
                  if ((DAT_2c66d194 & uVar16) <= DAT_2c66d1a0) {
                    dVar27 = (double)CONCAT44(uVar16 + 0x3500000,SUB84(dVar27,0));
                    goto LAB_2c66d0ac;
                  }
                  if ((uVar15 == DAT_2c66d1a0 + 0x3500000) && (uVar10 == 0xffffffff))
                  goto LAB_2c66cab4;
                  dVar27 = (double)CONCAT44(DAT_2c66d198,0xffffffff);
                }
                else {
                  if ((iVar7 != 0) && (uVar23 < 0x6a00001)) {
                    in_fpscr = in_fpscr & 0xfffffff | (uint)(dVar29 == DAT_2c66d188) << 0x1e |
                               (uint)(DAT_2c66d188 <= dVar29) << 0x1d;
                    bVar2 = (byte)(in_fpscr >> 0x18);
                    if (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) {
                      iVar24 = VectorFloatToUnsigned(dVar29,3);
                      if (iVar24 == 0) {
                        iVar24 = 1;
                      }
                      dVar29 = (double)VectorUnsignedToFloat(iVar24,(byte)(in_fpscr >> 0x16) & 3);
                      dVar28 = dVar29;
                      if (iVar13 == 0) {
                        dVar28 = -dVar29;
                      }
                    }
                    dVar28 = (double)CONCAT44(((int)((ulonglong)dVar28 >> 0x20) + 0x6b00000) -
                                              uVar23,SUB84(dVar28,0));
                  }
                  uVar17 = FUN_2c670dd0(uVar10);
                  dVar27 = dVar27 + dVar28 * (double)CONCAT44(extraout_s1_04,uVar17);
LAB_2c66d0ac:
                  if ((iVar7 == 0) && (uVar23 == ((uint)((ulonglong)dVar27 >> 0x20) & 0x7ff00000)))
                  {
                    FUN_2c672b40(SUB84(dVar29,0),(int)((ulonglong)dVar29 >> 0x20));
                    dVar28 = (double)FUN_2c6729ec();
                    dVar29 = dVar29 - dVar28;
                    dVar28 = dVar27;
                    if ((((ulonglong)dVar27 & 0xfffff00000000) == 0 && SUB84(dVar27,0) == 0) &&
                        iVar13 == 0) {
                      in_fpscr = in_fpscr & 0xfffffff;
                      if (dVar29 < dVar26) goto LAB_2c66cac8;
                    }
                    else if ((dVar29 < dVar5) ||
                            (uVar10 = in_fpscr & 0xfffffff | (uint)(dVar29 < dVar6) << 0x1f |
                                      (uint)(dVar29 == dVar6) << 0x1e,
                            in_fpscr = uVar10 | (uint)(NAN(dVar29) || NAN(dVar6)) << 0x1c,
                            bVar2 = (byte)(uVar10 >> 0x18),
                            !(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1))
                            ) goto LAB_2c66cac8;
                  }
                }
                FUN_2c670760(param_1,local_70);
                FUN_2c670760(param_1,iVar22);
                FUN_2c670760(param_1,iVar18);
                FUN_2c670760(param_1,iVar9);
                goto LAB_2c66cc7c;
              }
              if (iVar13 == 0) {
                if (((ulonglong)dVar27 & 0xfffff00000000) == 0 && uVar10 == 0) goto LAB_2c66ce2c;
              }
              else if ((uVar15 & 0xfffff) == DAT_2c66d190) {
                if (iVar7 == 0) {
                  uVar8 = 0xffffffff;
                }
                else {
                  uVar8 = 0xffffffff;
                  if ((uVar15 & DAT_2c66d194) < 0x6a00001) {
                    uVar8 = -1 << (0x6b - ((uVar15 & DAT_2c66d194) >> 0x14) & 0xff);
                  }
                }
                if (uVar10 == uVar8) {
                  if ((uVar15 != DAT_2c66d198) || (uVar10 != 0xffffffff)) {
                    dVar27 = (double)((ulonglong)((uVar15 & DAT_2c66d194) + 0x100000) << 0x20);
                    goto LAB_2c66cf36;
                  }
                  goto LAB_2c66cab4;
                }
              }
              if (local_90 == (byte *)0x0) {
                local_8c = local_8c & uVar10;
              }
              else {
                local_8c = (uint)local_90 & uVar15;
              }
              if (local_8c == 0) goto LAB_2c66cf36;
              if (iVar13 == 0) {
                uVar17 = FUN_2c66c60c(uVar10,uVar15,iVar7);
                dVar27 = dVar27 - (double)CONCAT44(extraout_s1_01,uVar17);
                if (dVar27 == 0.0) goto LAB_2c66cb94;
              }
              else {
                uVar17 = FUN_2c66c60c(uVar10,uVar15,iVar7);
                dVar27 = dVar27 + (double)CONCAT44(extraout_s1_00,uVar17);
              }
            }
LAB_2c66cf36:
            dVar28 = dVar27;
            if (iVar7 == 0) goto LAB_2c66cac8;
LAB_2c66ce4c:
            dVar28 = dVar27 * DAT_2c66ced0;
            if (dVar28 == 0.0) {
              *param_1 = 0x22;
            }
            goto LAB_2c66cac8;
          }
          goto LAB_2c66caac;
        }
        uVar10 = -uVar20 & 0xf;
        if (uVar10 != 0) {
          dVar27 = dVar27 / *(double *)(DAT_2c66cbb8 + uVar10 * 8);
        }
        uVar20 = (int)-uVar20 >> 4;
        if (uVar20 == 0) goto LAB_2c66cb46;
        if ((int)uVar20 < 0x20) {
          bVar25 = false;
          iVar7 = 0;
          pdVar12 = DAT_2c66ced8;
          dVar26 = dVar27;
          if ((uVar20 & 0x10) != 0) {
            iVar7 = 0x6a;
          }
          do {
            if ((int)(uVar20 << 0x1f) < 0) {
              bVar25 = true;
              dVar26 = dVar26 * *pdVar12;
            }
            uVar20 = (int)uVar20 >> 1;
            pdVar12 = pdVar12 + 1;
          } while (uVar20 != 0);
          if (bVar25) {
            dVar27 = dVar26;
          }
          uVar20 = (uint)((ulonglong)dVar27 >> 0x20);
          if (iVar7 != 0) {
            uVar10 = (uVar20 & 0x7fffffff) >> 0x14;
            uVar15 = 0x6b - uVar10;
            if (0 < (int)uVar15) {
              if ((int)uVar15 < 0x20) {
                dVar27 = (double)CONCAT44(uVar20,-1 << (uVar15 & 0xff) & SUB84(dVar27,0));
              }
              else {
                if ((int)uVar15 < 0x35) {
                  uVar10 = 0x4b - uVar10;
                  uVar16 = uVar20;
                  uVar23 = 0xffffffff;
                }
                else {
                  uVar16 = 0x3700000;
                  uVar23 = uVar15;
                }
                dVar27 = (double)((ulonglong)uVar16 << 0x20);
                if ((int)uVar15 < 0x35) {
                  dVar27 = (double)((ulonglong)(uVar23 << (uVar10 & 0xff) & uVar20) << 0x20);
                }
              }
            }
          }
          in_fpscr = in_fpscr & 0xfffffff | (uint)(dVar27 == 0.0) << 0x1e;
          if ((byte)(in_fpscr >> 0x1e) != 0) goto LAB_2c66cb8c;
          goto LAB_2c66cc40;
        }
LAB_2c66cb8c:
        iVar9 = 0;
        iVar18 = 0;
        iVar22 = 0;
        local_a0 = 0;
LAB_2c66cb94:
        uVar8 = 0;
        *param_1 = 0x22;
      }
      else {
        if ((uVar20 & 0xf) != 0) {
          dVar27 = *(double *)(DAT_2c66cbb8 + (uVar20 & 0xf) * 8) * dVar27;
        }
        if ((uVar20 & 0xfffffff0) == 0) goto LAB_2c66cb46;
        if ((int)(uVar20 & 0xfffffff0) < 0x135) {
          bVar25 = false;
          iVar7 = 0;
          pdVar12 = DAT_2c66cbbc;
          dVar26 = dVar27;
          for (iVar22 = (int)uVar20 >> 4; 1 < iVar22; iVar22 = iVar22 >> 1) {
            if (iVar22 << 0x1f < 0) {
              bVar25 = true;
              dVar26 = dVar26 * *pdVar12;
            }
            iVar7 = iVar7 + 1;
            pdVar12 = pdVar12 + 1;
          }
          if (bVar25) {
            dVar27 = dVar26;
          }
          dVar27 = DAT_2c66cbbc[iVar7] *
                   (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20) + -0x3500000,SUB84(dVar27,0));
          uVar10 = (uint)((ulonglong)dVar27 >> 0x20);
          uVar20 = DAT_2c66cbc4 & uVar10;
          if (uVar20 <= DAT_2c66cbc0) {
            if (DAT_2c66cbc0 - 0x100000 < uVar20) {
              dVar27 = (double)CONCAT44(DAT_2c66cbc8,0xffffffff);
            }
            else {
              dVar27 = (double)CONCAT44(uVar10 + 0x3500000,SUB84(dVar27,0));
            }
            goto LAB_2c66cb46;
          }
        }
LAB_2c66caac:
        iVar9 = 0;
        iVar18 = 0;
        iVar22 = 0;
        local_a0 = 0;
LAB_2c66cab4:
        uVar8 = DAT_2c66cbc4;
        *param_1 = 0x22;
      }
      dVar27 = (double)((ulonglong)uVar8 << 0x20);
      dVar28 = (double)((ulonglong)uVar8 << 0x20);
      if (local_a0 != 0) {
LAB_2c66cac8:
        dVar27 = dVar28;
        FUN_2c670760(param_1,local_70);
        FUN_2c670760(param_1,iVar22);
        FUN_2c670760(param_1,iVar18);
        FUN_2c670760(param_1,local_a0);
        FUN_2c670760(param_1,iVar9);
      }
    }
LAB_2c66c6c8:
    if (param_3 == (undefined4 *)0x0) goto LAB_2c66c6d0;
  }
  *param_3 = local_74;
LAB_2c66c6d0:
  uVar17 = SUB84(dVar27,0);
  if (local_98 != 0) {
    uVar17 = SUB84(-dVar27,0);
  }
  return uVar17;
}

