/* FUN_140dd490 @ 0x140dd490 */

uint FUN_140dd490(undefined4 *param_1,byte *param_2,undefined4 *param_3,undefined4 param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  uint uVar8;
  bool bVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  uint uVar22;
  bool bVar23;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  ulonglong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulonglong uVar27;
  longlong lVar28;
  undefined4 *local_90;
  int local_8c;
  int local_84;
  byte *local_80;
  uint local_7c;
  undefined4 local_78;
  uint local_6c;
  uint local_5c;
  byte *local_44;
  int local_40;
  int local_3c;
  uint local_38 [3];
  
  uVar22 = 0;
  local_40 = 0;
  uVar10 = *DAT_140dd72c;
  iVar3 = FUN_140dd3a4(uVar10);
  for (local_44 = param_2; bVar1 = *local_44, pbVar17 = param_2, bVar1 != 0x2b;
      local_44 = local_44 + 1) {
    if (0x2b < bVar1) {
      if (bVar1 != 0x2d) {
LAB_140dd4d6:
        local_78 = 0;
        goto LAB_140dd4da;
      }
      local_78 = 1;
      goto LAB_140dd548;
    }
    if (bVar1 < 0xe) {
      if (bVar1 < 9) {
        if (bVar1 != 0) goto LAB_140dd4d6;
        goto joined_r0x140dd55c;
      }
    }
    else if (bVar1 != 0x20) goto LAB_140dd4d6;
  }
  local_78 = 0;
LAB_140dd548:
  pbVar6 = local_44 + 1;
  local_44 = local_44 + 1;
  if (*pbVar6 == 0) goto joined_r0x140dd55c;
LAB_140dd4da:
  pbVar6 = local_44;
  if (*local_44 == 0x30) {
    if ((local_44[1] & 0xdf) == 0x58) {
      uVar4 = FUN_140dfe44(param_1,&local_44,DAT_140dd730,&local_3c,&local_40,local_78,param_4);
      uVar4 = uVar4 & 7;
      pbVar17 = local_44;
      if (uVar4 != 0) {
        if (uVar4 == 6) {
          pbVar17 = pbVar6 + 1;
        }
        else {
          if (local_40 != 0) {
            FUN_140e0ee6(local_38,0x35);
            FUN_140e0664(param_1,local_40);
          }
          switch(uVar4) {
          case 1:
          case 5:
            uVar22 = local_38[0];
            break;
          case 2:
            uVar22 = local_38[0];
            break;
          case 3:
            break;
          case 4:
            uVar22 = 0xffffffff;
          }
          pbVar17 = local_44;
        }
      }
      goto joined_r0x140dd55c;
    }
    do {
      pbVar17 = local_44 + 1;
      pbVar6 = local_44 + 1;
      local_44 = pbVar17;
    } while (*pbVar6 == 0x30);
    if (*pbVar6 == 0) goto joined_r0x140dd55c;
    bVar23 = true;
  }
  else {
    bVar23 = false;
  }
  puVar21 = (undefined4 *)0x0;
  local_84 = 0;
  local_80 = local_44;
  iVar16 = 0;
  while( true ) {
    uVar4 = (uint)*local_44;
    uVar11 = uVar4 - 0x30;
    if (9 < (uVar11 & 0xff)) break;
    local_44 = local_44 + 1;
    if (iVar16 < 9) {
      local_84 = local_84 * 10 + uVar11;
      iVar16 = iVar16 + 1;
    }
    else {
      puVar21 = (undefined4 *)((int)puVar21 * 10 + uVar11);
      iVar16 = iVar16 + 1;
    }
  }
  iVar5 = FUN_140dd3b4(local_44,uVar10,iVar3);
  iVar15 = iVar16;
  if (iVar5 == 0) {
    uVar4 = (uint)local_44[iVar3];
    if (iVar16 != 0) {
      iVar5 = 0;
      local_8c = 0;
      local_44 = local_44 + iVar3;
      goto LAB_140dd676;
    }
    iVar12 = 0;
    local_44 = local_44 + iVar3;
    while (uVar4 == 0x30) {
      iVar12 = iVar12 + 1;
      uVar4 = (uint)local_44[1];
      local_44 = local_44 + 1;
    }
    if (uVar4 - 0x31 < 9) {
      iVar5 = 0;
      iVar15 = 0;
      local_80 = local_44;
      local_8c = iVar12;
      do {
        iVar12 = uVar4 - 0x30;
        iVar3 = iVar5 + 1;
        if (iVar12 != 0) {
          local_8c = local_8c + iVar5 + 1;
          for (iVar3 = iVar15; iVar3 != iVar5 + iVar15; iVar3 = iVar3 + 1) {
            if (iVar3 < 9) {
              local_84 = local_84 * 10;
            }
            else if (iVar3 + 1 < 0x11) {
              puVar21 = (undefined4 *)((int)puVar21 * 10);
            }
          }
          iVar3 = iVar15 + iVar5;
          iVar15 = iVar15 + 1 + iVar5;
          if (iVar3 < 9) {
            local_84 = local_84 * 10 + iVar12;
          }
          else if (iVar15 < 0x11) {
            puVar21 = (undefined4 *)((int)puVar21 * 10 + iVar12);
          }
          iVar3 = 0;
        }
        iVar5 = iVar3;
        uVar4 = (uint)local_44[1];
        local_44 = local_44 + 1;
LAB_140dd676:
      } while (uVar4 - 0x30 < 10);
      bVar9 = true;
      iVar12 = iVar5;
      goto LAB_140dd606;
    }
    if ((uVar4 == 0x65) || (uVar4 == 0x45)) {
      local_8c = 0;
      bVar9 = true;
      goto LAB_140dd610;
    }
    bVar9 = true;
  }
  else {
    bVar9 = false;
    local_8c = 0;
    iVar12 = 0;
LAB_140dd606:
    if ((uVar4 == 0x65) || (pbVar17 = local_44, uVar4 == 0x45)) {
      if (iVar15 == 0) {
LAB_140dd610:
        pbVar17 = param_2;
        if (!bVar23 && iVar12 == 0) goto joined_r0x140dd55c;
        iVar15 = 0;
      }
      param_2 = local_44;
      uVar4 = (uint)local_44[1];
      if (uVar4 == 0x2b) {
        bVar2 = false;
LAB_140dd71a:
        uVar4 = (uint)local_44[2];
        local_44 = local_44 + 2;
      }
      else {
        if (uVar4 == 0x2d) {
          bVar2 = true;
          goto LAB_140dd71a;
        }
        bVar2 = false;
        local_44 = local_44 + 1;
      }
      pbVar17 = param_2;
      if (9 < uVar4 - 0x30) goto LAB_140dd640;
      while (pbVar17 = local_44, uVar4 == 0x30) {
        uVar4 = (uint)local_44[1];
        local_44 = local_44 + 1;
      }
      if (8 < uVar4 - 0x31) goto LAB_140dd640;
      while( true ) {
        iVar3 = uVar4 - 0x30;
        pbVar6 = local_44 + 1;
        uVar4 = (uint)local_44[1];
        local_44 = pbVar6;
        if (9 < uVar4 - 0x30) break;
        uVar4 = iVar3 * 10 + uVar4;
      }
      iVar5 = 19999;
      if (((int)pbVar6 - (int)pbVar17 < 9) && (iVar3 < 20000)) {
        iVar5 = iVar3;
      }
      if (bVar2) {
        iVar5 = -iVar5;
      }
    }
    else {
LAB_140dd640:
      local_44 = pbVar17;
      iVar5 = 0;
    }
    if (iVar15 != 0) {
      if (iVar16 == 0) {
        iVar16 = iVar15;
      }
      uVar4 = iVar5 - local_8c;
      iVar3 = iVar15;
      if (0xf < iVar15) {
        iVar3 = 0x10;
      }
      uVar24 = FUN_140e370c(local_84);
      if (9 < iVar15) {
        iVar12 = DAT_140dda34 + iVar3 * 8;
        uVar25 = FUN_140e3800((int)uVar24,(int)(uVar24 >> 0x20),*(undefined4 *)(iVar12 + -0x48),
                              *(undefined4 *)(iVar12 + -0x44));
        uVar26 = FUN_140e370c(puVar21);
        uVar24 = FUN_140e3494((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),(int)uVar26,
                              (int)((ulonglong)uVar26 >> 0x20));
      }
      iVar12 = DAT_140dda34;
      uVar10 = (undefined4)(uVar24 >> 0x20);
      uVar22 = (uint)uVar24;
      if (iVar15 < 0x10) {
        pbVar17 = local_44;
        if (uVar4 == 0) goto joined_r0x140dd55c;
        if (0 < (int)uVar4) {
          if ((int)uVar4 < 0x17) {
            uVar25 = *(undefined8 *)(DAT_140dda34 + uVar4 * 8);
          }
          else {
            if (0x25 - iVar15 < (int)uVar4) goto LAB_140dd8e4;
            puVar21 = (undefined4 *)(DAT_140dda34 + (0xf - iVar15) * 8);
            uVar25 = FUN_140e3800(*puVar21,puVar21[1],uVar22,uVar10);
            uVar24 = *(ulonglong *)(iVar12 + (uVar4 - (0xf - iVar15)) * 8);
          }
          uVar22 = FUN_140e3800((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),(int)uVar24,
                                (int)(uVar24 >> 0x20));
          pbVar17 = local_44;
          goto joined_r0x140dd55c;
        }
        if (-0x17 < (int)uVar4) {
          puVar21 = (undefined4 *)(DAT_140dda34 + (local_8c - iVar5) * 8);
          uVar22 = FUN_140e3a54(uVar22,uVar10,*puVar21,puVar21[1]);
          pbVar17 = local_44;
          goto joined_r0x140dd55c;
        }
      }
LAB_140dd8e4:
      uVar11 = (iVar15 - iVar3) + uVar4;
      if ((int)uVar11 < 1) {
        if (uVar11 == 0) {
LAB_140dd9b4:
          local_90 = (undefined4 *)0x0;
LAB_140ddac2:
          local_84 = FUN_140e0738(param_1,local_80,iVar16,iVar15,local_84);
          if (local_84 != 0) {
            iVar16 = 0;
            puVar7 = (undefined4 *)(local_8c - iVar5);
            if (-1 < (int)uVar4) {
              puVar7 = (undefined4 *)0x0;
            }
            iVar3 = 0;
            uVar11 = uVar4 & ~((int)uVar4 >> 0x1f);
LAB_140ddaf6:
            uVar8 = (uint)(uVar24 >> 0x20);
            uVar22 = (uint)uVar24;
            local_8c = FUN_140e05e4(param_1,*(undefined4 *)(local_84 + 4));
            if (local_8c == 0) goto LAB_140dd922;
            FUN_140e5278(local_8c + 0xc,local_84 + 0xc,(*(int *)(local_84 + 0x10) + 2) * 4);
            local_40 = FUN_140e0dc8(uVar22,param_1,&local_3c,local_38);
            if ((local_40 == 0) || (iVar3 = FUN_140e086c(param_1,1), iVar3 == 0)) goto LAB_140dd922;
            if (-1 < local_3c) {
              puVar21 = (undefined4 *)(local_3c + (int)puVar7);
              uVar18 = uVar11;
            }
            else {
              uVar18 = uVar11 - local_3c;
            }
            if (-1 >= local_3c) {
              puVar21 = puVar7;
            }
            iVar15 = 0x36 - local_38[0];
            iVar5 = (local_3c - (int)local_90) + local_38[0] + -1;
            if (iVar5 < DAT_140ddde8) {
              uVar13 = DAT_140ddde8 - iVar5;
              iVar15 = iVar15 - uVar13;
              if ((int)uVar13 < 0x20) {
                local_6c = 1 << (uVar13 & 0xff);
                local_80 = (byte *)0x0;
              }
              else {
                local_6c = 1;
                local_80 = (byte *)(1 << (0xfffffbe2U - iVar5 & 0xff));
              }
            }
            else {
              local_80 = (byte *)0x0;
              local_6c = 1;
            }
            puVar20 = (undefined4 *)((int)puVar21 + iVar15);
            puVar19 = (undefined4 *)(uVar18 + iVar15 + (int)local_90);
            puVar14 = puVar21;
            if ((int)puVar20 <= (int)puVar21) {
              puVar14 = puVar20;
            }
            if ((int)puVar19 <= (int)puVar14) {
              puVar14 = puVar19;
            }
            if (0 < (int)puVar14) {
              puVar20 = (undefined4 *)((int)puVar20 - (int)puVar14);
              puVar19 = (undefined4 *)((int)puVar19 - (int)puVar14);
              puVar21 = (undefined4 *)((int)puVar21 - (int)puVar14);
            }
            if (0 < (int)puVar7) {
              iVar3 = FUN_140e09e8(param_1,iVar3,puVar7);
              if ((iVar3 == 0) || (iVar15 = FUN_140e0898(param_1,iVar3,local_40), iVar15 == 0))
              goto LAB_140dd922;
              FUN_140e0664(param_1,local_40);
              local_40 = iVar15;
            }
            if ((((((0 < (int)puVar20) &&
                   (local_40 = FUN_140e0a9c(param_1,local_40,puVar20), local_40 == 0)) ||
                  ((0 < (int)uVar4 &&
                   (local_8c = FUN_140e09e8(param_1,local_8c,uVar11), local_8c == 0)))) ||
                 ((0 < (int)puVar19 &&
                  (local_8c = FUN_140e0a9c(param_1,local_8c,puVar19), local_8c == 0)))) ||
                ((0 < (int)puVar21 && (iVar3 = FUN_140e0a9c(param_1,iVar3,puVar21), iVar3 == 0))))
               || (iVar16 = FUN_140e0bb4(param_1,local_40,local_8c), iVar16 == 0))
            goto LAB_140dd922;
            iVar5 = *(int *)(iVar16 + 0xc);
            *(undefined4 *)(iVar16 + 0xc) = 0;
            iVar15 = FUN_140e0b7c(iVar16,iVar3);
            if (iVar15 < 0) {
              if ((((iVar5 == 0 && uVar22 == 0) && ((uVar24 & 0xfffff00000000) == 0)) &&
                  (0x6b00000 < (uVar8 & 0x7ff00000))) &&
                 ((*(int *)(iVar16 + 0x14) != 0 || (1 < *(int *)(iVar16 + 0x10))))) {
                iVar16 = FUN_140e0a9c(param_1,iVar16,1);
                iVar15 = FUN_140e0b7c(iVar16,iVar3);
                if (iVar15 < 1) goto LAB_140ddd68;
LAB_140ddc9e:
                if ((local_90 == (undefined4 *)0x0) || (0x6b00000 < (int)(DAT_140dddec & uVar8))) {
                  uVar24 = CONCAT44(~(~((uVar8 & DAT_140dddec) - 0x100000 >> 0x14) << 0x14),
                                    0xffffffff);
                  goto LAB_140ddd68;
                }
                if ((int)(DAT_140dddec & uVar8) < 0x3700001) goto LAB_140dda12;
                goto LAB_140ddcba;
              }
            }
            else {
              if (iVar15 != 0) {
                uVar10 = FUN_140e0e80(iVar16,iVar3);
                iVar15 = FUN_140e3cf8(uVar10,extraout_s1,0,0x40000000);
                if (iVar15 == 0) {
                  lVar28 = FUN_140e3800(uVar10,extraout_s1,0,DAT_140de088);
                  local_7c = (uint)((ulonglong)lVar28 >> 0x20);
                  if (iVar5 == 0) {
                    local_7c = local_7c + 0x80000000;
                  }
                }
                else {
                  local_7c = DAT_140de078;
                  if (iVar5 == 0) {
                    local_7c = DAT_140de08c;
                    if (uVar22 == 0) {
                      if ((uVar24 & 0xfffff00000000) == 0) {
                        iVar15 = FUN_140e3ce4(uVar10,extraout_s1,0,DAT_140de078);
                        if (iVar15 == 0) {
                          lVar28 = FUN_140e3800(uVar10,extraout_s1,0,DAT_140de088);
                        }
                        else {
                          lVar28 = (ulonglong)DAT_140de088 << 0x20;
                        }
                        local_7c = (int)((ulonglong)lVar28 >> 0x20) + 0x80000000;
                        goto LAB_140dde36;
                      }
                    }
                    else if (uVar24 == 1) goto LAB_140dda12;
                  }
                  lVar28 = (ulonglong)DAT_140de078 << 0x20;
                }
LAB_140dde36:
                puVar21 = (undefined4 *)((ulonglong)lVar28 >> 0x20);
                local_80 = (byte *)lVar28;
                uVar18 = DAT_140de07c & uVar8;
                if (uVar18 == DAT_140de080) {
                  uVar10 = FUN_140e0cd4(uVar22);
                  uVar25 = FUN_140e3800(local_80,local_7c,uVar10,extraout_s1_00);
                  uVar25 = FUN_140e3494((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),uVar22,
                                        uVar8 + 0xfcb00000);
                  uVar13 = (uint)((ulonglong)uVar25 >> 0x20);
                  if ((DAT_140de07c & uVar13) <= DAT_140de084) {
                    uVar24 = CONCAT44(uVar13 + 0x3500000,(int)uVar25);
                    goto LAB_140ddf42;
                  }
                  if ((uVar8 == DAT_140de084 + 0x3500000) && (uVar22 == 0xffffffff))
                  goto LAB_140dd922;
                  uVar24 = CONCAT44(DAT_140de090,0xffffffff);
                }
                else {
                  if ((local_90 != (undefined4 *)0x0) && (uVar18 < 0x6a00001)) {
                    iVar15 = FUN_140e3cf8(local_80,puVar21,DAT_140de068,DAT_140de06c);
                    if (iVar15 != 0) {
                      iVar15 = FUN_140e3db0(local_80,puVar21);
                      if (iVar15 == 0) {
                        iVar15 = 1;
                      }
                      lVar28 = FUN_140e370c(iVar15);
                      local_5c = (uint)((ulonglong)lVar28 >> 0x20);
                      if (iVar5 == 0) {
                        local_5c = local_5c + 0x80000000;
                      }
                      local_7c = local_5c;
                    }
                    local_7c = local_7c + (0x6b00000 - uVar18);
                  }
                  local_80 = (byte *)lVar28;
                  uVar10 = FUN_140e0cd4(uVar22);
                  uVar25 = FUN_140e3800(local_80,local_7c,uVar10,extraout_s1_01);
                  uVar24 = FUN_140e3494((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),uVar22,uVar8);
LAB_140ddf42:
                  uVar22 = (uint)uVar24;
                  puVar21 = (undefined4 *)((ulonglong)lVar28 >> 0x20);
                  if ((local_90 == (undefined4 *)0x0) &&
                     (uVar18 == ((uint)(uVar24 >> 0x20) & 0x7ff00000))) {
                    FUN_140e41a4((int)lVar28,puVar21);
                    uVar25 = FUN_140e37a4();
                    uVar25 = FUN_140e3490((int)lVar28,puVar21,(int)uVar25,
                                          (int)((ulonglong)uVar25 >> 0x20));
                    puVar21 = (undefined4 *)((ulonglong)uVar25 >> 0x20);
                    uVar10 = (undefined4)uVar25;
                    if (((uVar24 & 0xfffff00000000) == 0 && uVar22 == 0) && iVar5 == 0) {
                      iVar15 = FUN_140e3ce4(uVar10,puVar21,DAT_140de070,DAT_140de074);
                    }
                    else {
                      iVar15 = FUN_140e3ce4(uVar10,puVar21,DAT_140de058,DAT_140de05c);
                      if (iVar15 != 0) goto LAB_140dd936;
                      iVar15 = FUN_140e3d20(uVar10,puVar21,DAT_140de060,DAT_140de064);
                    }
                    if (iVar15 != 0) goto LAB_140dd936;
                  }
                }
                FUN_140e0664(param_1,local_40);
                FUN_140e0664(param_1,local_8c);
                FUN_140e0664(param_1,iVar3);
                FUN_140e0664(param_1,iVar16);
                goto LAB_140ddaf6;
              }
              if (iVar5 == 0) {
                if ((uVar24 & 0xfffff00000000) == 0 && uVar22 == 0) goto LAB_140ddc9e;
              }
              else if ((uVar8 & 0xfffff) == DAT_140dddf4) {
                if (local_90 == (undefined4 *)0x0) {
                  uVar4 = 0xffffffff;
                }
                else {
                  uVar4 = 0xffffffff;
                  if ((DAT_140dddec & uVar8) < 0x6a00001) {
                    uVar4 = -1 << (0x6b - ((DAT_140dddec & uVar8) >> 0x14) & 0xff);
                  }
                }
                if (uVar22 == uVar4) {
                  if ((uVar8 != DAT_140dddf8) || (uVar22 != 0xffffffff)) {
                    uVar24 = (ulonglong)((DAT_140dddec & uVar8) + 0x100000) << 0x20;
                    goto LAB_140ddd68;
                  }
                  goto LAB_140dd922;
                }
              }
              if (local_80 == (byte *)0x0) {
                local_6c = local_6c & uVar22;
              }
              else {
                local_6c = (uint)local_80 & uVar8;
              }
              if (local_6c == 0) goto LAB_140ddd68;
              if (iVar5 == 0) {
                uVar25 = FUN_140dd456(uVar22,uVar8,local_90);
                uVar24 = FUN_140e3490(uVar22,uVar8,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
                iVar15 = FUN_140e3cd0((int)uVar24,(int)(uVar24 >> 0x20),0,0);
                if (iVar15 != 0) goto LAB_140dda12;
              }
              else {
                uVar25 = FUN_140dd456(uVar22,uVar8,local_90);
                uVar24 = FUN_140e3494(uVar22,uVar8,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
              }
            }
LAB_140ddd68:
            uVar22 = (uint)uVar24;
            if (local_90 == (undefined4 *)0x0) goto LAB_140dd936;
LAB_140ddcba:
            lVar28 = FUN_140e3800((int)uVar24,(int)(uVar24 >> 0x20),0,DAT_140dddf0);
            uVar22 = (uint)lVar28;
            if (lVar28 == 0) {
              *param_1 = 0x22;
            }
            goto LAB_140dd936;
          }
          goto LAB_140dd91a;
        }
        uVar8 = -uVar11 & 0xf;
        if (uVar8 != 0) {
          puVar7 = (undefined4 *)(DAT_140dda34 + uVar8 * 8);
          uVar24 = FUN_140e3a54(uVar22,uVar10,*puVar7,puVar7[1]);
        }
        uVar22 = (int)-uVar11 >> 4;
        if (uVar22 == 0) goto LAB_140dd9b4;
        if ((int)uVar22 < 0x20) {
          local_90 = (undefined4 *)0x0;
          if ((uVar22 & 0x10) != 0) {
            local_90 = (undefined4 *)0x6a;
          }
          bVar23 = false;
          puVar21 = DAT_140dddfc;
          uVar27 = uVar24;
          do {
            if ((uVar22 & 1) != 0) {
              uVar27 = FUN_140e3800((int)uVar27,(int)(uVar27 >> 0x20),*puVar21,puVar21[1]);
              bVar23 = true;
            }
            uVar22 = (int)uVar22 >> 1;
            puVar21 = puVar21 + 2;
          } while (uVar22 != 0);
          if (bVar23) {
            uVar24 = uVar27;
          }
          uVar22 = (uint)(uVar24 >> 0x20);
          if (local_90 != (undefined4 *)0x0) {
            uVar11 = (uVar22 & 0x7fffffff) >> 0x14;
            uVar8 = 0x6b - uVar11;
            if (0 < (int)uVar8) {
              if ((int)uVar8 < 0x20) {
                uVar24 = CONCAT44(uVar22,-1 << (uVar8 & 0xff) & (uint)uVar24);
              }
              else if ((int)uVar8 < 0x35) {
                uVar24 = (ulonglong)(-1 << (0x4b - uVar11 & 0xff) & uVar22) << 0x20;
              }
              else {
                uVar24 = 0x370000000000000;
              }
            }
          }
          iVar3 = FUN_140e3cd0((int)uVar24,(int)(uVar24 >> 0x20),0,0);
          if (iVar3 != 0) goto LAB_140dda0a;
          goto LAB_140ddac2;
        }
LAB_140dda0a:
        iVar16 = 0;
        iVar3 = 0;
        local_84 = 0;
        local_8c = 0;
LAB_140dda12:
        *param_1 = 0x22;
      }
      else {
        if ((uVar11 & 0xf) != 0) {
          puVar7 = (undefined4 *)(DAT_140dda34 + (uVar11 & 0xf) * 8);
          uVar24 = FUN_140e3800(*puVar7,puVar7[1],uVar22,uVar10);
        }
        if ((uVar11 & 0xfffffff0) == 0) goto LAB_140dd9b4;
        if ((int)(uVar11 & 0xfffffff0) < 0x135) {
          uVar11 = (int)uVar11 >> 4;
          local_90 = DAT_140dda38;
          bVar23 = false;
          iVar3 = 0;
          uVar27 = uVar24;
          while( true ) {
            if ((int)uVar11 < 2) break;
            if ((uVar11 & 1) != 0) {
              uVar27 = FUN_140e3800((int)uVar27,(int)(uVar27 >> 0x20),*local_90,local_90[1]);
              bVar23 = true;
            }
            iVar3 = iVar3 + 1;
            uVar11 = (int)uVar11 >> 1;
            local_90 = local_90 + 2;
          }
          if (bVar23) {
            uVar24 = uVar27;
          }
          puVar21 = DAT_140dda38 + iVar3 * 2;
          uVar25 = FUN_140e3800(*puVar21,puVar21[1],(int)uVar24,(int)(uVar24 >> 0x20) + -0x3500000);
          uVar22 = (uint)((ulonglong)uVar25 >> 0x20);
          uVar11 = DAT_140dda3c & uVar22;
          if (uVar11 <= DAT_140dda40) {
            if (DAT_140dda40 - 0x100000 < uVar11) {
              uVar24 = CONCAT44(DAT_140dda44,0xffffffff);
            }
            else {
              uVar24 = CONCAT44(uVar22 + 0x3500000,(int)uVar25);
            }
            goto LAB_140dd9b4;
          }
        }
LAB_140dd91a:
        iVar16 = 0;
        iVar3 = 0;
        local_84 = 0;
        local_8c = 0;
LAB_140dd922:
        *param_1 = 0x22;
      }
      uVar22 = 0;
      pbVar17 = local_44;
      if (local_84 != 0) {
LAB_140dd936:
        FUN_140e0664(param_1,local_40);
        FUN_140e0664(param_1,local_8c);
        FUN_140e0664(param_1,iVar3);
        FUN_140e0664(param_1,local_84);
        FUN_140e0664(param_1,iVar16);
        pbVar17 = local_44;
      }
      goto joined_r0x140dd55c;
    }
  }
  pbVar17 = local_44;
  if ((bVar23 || iVar12 != 0) || (pbVar17 = param_2, bVar9)) goto joined_r0x140dd55c;
  if (uVar4 == 0x69) {
LAB_140dd7e6:
    iVar3 = FUN_140e02f4(&local_44,DAT_140dda28);
    if (iVar3 != 0) {
      local_44 = local_44 + -1;
      iVar3 = FUN_140e02f4(&local_44,DAT_140dda2c);
      if (iVar3 == 0) {
        local_44 = local_44 + 1;
      }
      uVar22 = 0;
      pbVar17 = local_44;
    }
  }
  else {
    if (uVar4 < 0x6a) {
      if (uVar4 == 0x49) goto LAB_140dd7e6;
      bVar23 = uVar4 == 0x4e;
    }
    else {
      bVar23 = uVar4 == 0x6e;
    }
    if (((bVar23) && (iVar3 = FUN_140e02f4(&local_44,DAT_140dda20), iVar3 != 0)) &&
       ((*local_44 != 0x28 ||
        (iVar3 = FUN_140e031c(&local_44,DAT_140dda24,local_38), uVar22 = local_38[0],
        pbVar17 = local_44, iVar3 != 5)))) {
      uVar22 = FUN_140da5d8(DAT_140dda30);
      pbVar17 = local_44;
    }
  }
joined_r0x140dd55c:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = pbVar17;
  }
  return uVar22;
}

