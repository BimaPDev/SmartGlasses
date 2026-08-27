/* FUN_2c622e8c @ 0x2c622e8c */

uint FUN_2c622e8c(int *param_1,int param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  ushort uVar3;
  byte bVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  int local_a4;
  uint local_a0;
  int local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  
  local_2c = *DAT_2c62315c;
  local_80 = param_3 * 8;
  local_88 = param_2;
  local_84 = param_3;
  if ((param_3 == 0) || ((local_80 / param_3 == 8 && (local_80 < 0xffffffc0)))) {
    local_7c = 0;
    do {
      uVar19 = local_7c;
      uVar18 = local_84;
      uVar6 = local_7c >> 3;
      if (local_84 <= uVar6 + 1) {
        local_78 = 0;
        if (uVar6 < local_84) {
          uVar9 = (uint)(*(byte *)(local_88 + uVar6) >> (local_7c & 7));
          local_78 = uVar9;
          if (local_7c + 3 <= local_80) goto LAB_2c622ee2;
        }
        else if (local_7c + 3 <= local_80) {
          uVar6 = 0;
          goto LAB_2c6232b2;
        }
LAB_2c623270:
        local_a0 = 0x34;
        goto LAB_2c623272;
      }
      uVar9 = (uint)(ushort)(CONCAT11(*(undefined1 *)(local_88 + uVar6 + 1),
                                      *(undefined1 *)(local_88 + uVar6)) >> (local_7c & 7));
LAB_2c622ee2:
      uVar10 = local_7c + 3;
      local_78 = uVar9 >> 3;
      uVar6 = uVar9 & 1;
      uVar9 = (uVar9 & 7) >> 1;
      if (uVar9 == 3) {
        local_a0 = 0x14;
        local_7c = uVar10;
        goto LAB_2c623272;
      }
      if (uVar9 == 0) {
LAB_2c6232b2:
        local_7c = local_7c + 3;
        uVar19 = uVar19 + 10 >> 3;
        uVar9 = uVar19 + 4;
        if (local_84 <= uVar9) goto LAB_2c623270;
        iVar7 = local_88 + uVar19;
        iVar20 = (uint)*(byte *)(local_88 + uVar19) + (uint)*(byte *)(iVar7 + 1) * 0x100;
        if ((*(int *)(param_4 + 4) == 0) &&
           ((uint)*(byte *)(iVar7 + 2) + (uint)*(byte *)(iVar7 + 3) * 0x100 + iVar20 != 0xffff)) {
          local_a0 = 0x15;
          goto LAB_2c623272;
        }
        iVar7 = param_1[1];
        uVar19 = iVar20 + iVar7;
        if ((uint)param_1[2] < uVar19) {
          iVar21 = uVar19 + ((uint)param_1[2] >> 1);
          iVar13 = FUN_2c62bebc(*param_1,iVar21);
          if (iVar13 == 0) {
            local_a0 = 0x53;
            goto LAB_2c623272;
          }
          param_1[2] = iVar21;
          *param_1 = iVar13;
        }
        param_1[1] = uVar19;
        if (uVar18 < uVar9 + iVar20) {
          local_a0 = 0x17;
          goto LAB_2c623272;
        }
        FUN_2c62c0d8(*param_1 + iVar7,local_88 + uVar9,iVar20);
        local_7c = (uVar9 + iVar20) * 8;
      }
      else {
        uVar18 = 0;
        uVar19 = *(uint *)(param_4 + 8);
        local_74 = 0;
        local_70 = 0;
        local_64 = 0;
        local_60 = 0;
        local_5c = 0;
        local_58 = 0;
        local_4c = 0;
        local_48 = 0;
        if (uVar9 == 1) {
          local_7c = uVar10;
          local_a0 = FUN_2c6223f8(&local_74);
          if (local_a0 == 0) {
            local_a0 = FUN_2c622390(&local_5c);
            goto LAB_2c622fbe;
          }
        }
        else {
          uVar9 = uVar10 >> 3;
          if (uVar9 + 2 < local_84) {
            uVar18 = ((uint)*(byte *)(local_88 + uVar9 + 2) << 0x10 |
                      (uint)*(byte *)(local_88 + uVar9 + 1) << 8 | (uint)*(byte *)(local_88 + uVar9)
                     ) >> (uVar10 & 7);
          }
          else {
            if (uVar9 < local_84) {
              uVar18 = (uint)*(byte *)(local_88 + uVar9);
            }
            if (uVar9 + 1 < local_84) {
              uVar18 = uVar18 | (uint)*(byte *)(local_88 + uVar9 + 1) << 8;
            }
            uVar18 = uVar18 >> (uVar10 & 7);
            if (local_80 < local_7c + 0x11) {
              local_a0 = 0x31;
              local_7c = uVar10;
              local_78 = uVar18;
              goto LAB_2c623330;
            }
          }
          local_7c = local_7c + 0x11;
          local_78 = uVar18 >> 0xe;
          iVar7 = FUN_2c62be98(0x40,0x4c);
          uVar9 = (uVar18 & 0x3fff) >> 10;
          if (iVar7 == 0) {
LAB_2c62332a:
            local_a0 = 0x53;
          }
          else {
            uVar10 = (uVar9 + 4) * 3;
            local_44 = 0;
            local_40 = 0;
            local_34 = 0;
            local_30 = 0;
            if ((CARRY4(local_7c,uVar10)) || (local_80 < local_7c + uVar10)) {
              local_a0 = 0x32;
              iVar20 = 0;
              local_a4 = 0;
            }
            else {
              piVar22 = (int *)(DAT_2c623518 + uVar9 * 4);
              piVar14 = (int *)(DAT_2c623518 + -0xc);
              iVar20 = 0x10;
              piVar8 = piVar14;
              while( true ) {
                uVar10 = local_7c >> 3;
                if (uVar10 + 1 < local_84) {
                  uVar3 = CONCAT11(*(undefined1 *)(local_88 + uVar10 + 1),
                                   *(undefined1 *)(local_88 + uVar10)) >> (local_7c & 7);
                  uVar10 = uVar3 & 7;
                  local_78 = (uint)(uVar3 >> 3);
                }
                else if (uVar10 < local_84) {
                  bVar4 = *(byte *)(local_88 + uVar10) >> (local_7c & 7);
                  local_78 = (uint)(bVar4 >> 3);
                  uVar10 = bVar4 & 7;
                }
                else {
                  local_78 = 0;
                  uVar10 = local_78;
                }
                local_7c = local_7c + 3;
                *(uint *)(iVar7 + iVar20 * 4) = uVar10;
                piVar5 = DAT_2c62351c;
                if (piVar22 == piVar8) break;
                piVar8 = piVar8 + 1;
                iVar20 = *piVar8;
              }
              if (uVar9 + 4 != 0x13) {
                piVar8 = piVar14 + uVar9 + 4;
                do {
                  piVar14 = piVar8 + 1;
                  *(undefined4 *)(iVar7 + *piVar8 * 4) = 0;
                  piVar8 = piVar14;
                } while (piVar14 != piVar5);
              }
              local_40 = FUN_2c62be98(0x40,0x4c);
              if (local_40 == 0) {
                local_a0 = 0x53;
                iVar20 = 0;
                local_a4 = 0;
              }
              else {
                puVar17 = (undefined4 *)(iVar7 + -4);
                do {
                  puVar1 = puVar17 + 1;
                  *(undefined4 *)((int)puVar17 + local_40 + (4 - iVar7)) = *puVar1;
                  puVar17 = puVar1;
                } while ((undefined4 *)(iVar7 + 0x48) != puVar1);
                local_3c = 7;
                uStack_38 = 0x13;
                local_a0 = FUN_2c621970(&local_44);
                if (local_a0 == 0) {
                  iVar20 = FUN_2c62be98(0x40,0x480);
                  local_a4 = FUN_2c62be98(0x40,0x80);
                  if ((iVar20 == 0) || (uVar9 = (uint)(local_a4 == 0), local_a4 == 0))
                  goto LAB_2c623500;
                  uVar10 = uVar18 & 0x1f;
                  FUN_2c62c314(iVar20,uVar9,0x480);
                  FUN_2c62c314(local_a4,uVar9,0x80);
                  uVar11 = uVar10 + 0x101;
                  uVar18 = ((uVar18 & 0x3ff) >> 5) + uVar11 + 1;
                  iVar13 = local_a4 + uVar10 * -4 + -0x404;
                  local_a0 = uVar9;
                  do {
                    uVar12 = local_7c >> 3;
                    if (uVar12 + 3 < local_84) {
                      local_78 = ((uint)*(byte *)(local_88 + uVar12) |
                                  (uint)*(byte *)(local_88 + uVar12 + 2) << 0x10 |
                                  (uint)*(byte *)(local_88 + uVar12 + 1) << 8 |
                                 (uint)*(byte *)(local_88 + uVar12 + 3) << 0x18) >> (local_7c & 7);
                      uVar12 = FUN_2c621400(&local_88,&local_44);
                      if (0xf < uVar12) goto LAB_2c62361c;
LAB_2c6235ac:
                      if (uVar9 < uVar11) {
                        *(uint *)(iVar20 + uVar9 * 4) = uVar12;
                      }
                      else {
                        *(uint *)(local_a4 + (uVar9 - uVar11) * 4) = uVar12;
                      }
                      uVar9 = uVar9 + 1;
                    }
                    else {
                      if (uVar12 < local_84) {
                        local_78 = (uint)*(byte *)(local_88 + uVar12);
                      }
                      else {
                        local_78 = 0;
                      }
                      if (uVar12 + 1 < local_84) {
                        local_78 = local_78 | (uint)*(byte *)(local_88 + uVar12 + 1) << 8;
                      }
                      if (uVar12 + 2 < local_84) {
                        local_78 = local_78 | (uint)*(byte *)(local_88 + uVar12 + 2) << 0x10;
                      }
                      local_78 = local_78 >> (local_7c & 7);
                      uVar12 = FUN_2c621400(&local_88,&local_44);
                      if (uVar12 < 0x10) goto LAB_2c6235ac;
LAB_2c62361c:
                      if (uVar12 == 0x10) {
                        if (uVar9 == 0) {
                          local_a0 = 0x36;
                          goto LAB_2c622f94;
                        }
                        local_7c = local_7c + 2;
                        uVar12 = local_78 >> 2;
                        if (uVar9 < uVar10 + 0x102) {
                          uVar15 = *(undefined4 *)(iVar20 + (uVar9 + 0x3fffffff) * 4);
                        }
                        else {
                          uVar15 = *(undefined4 *)(local_a4 + ((0x3fffffff - uVar11) + uVar9) * 4);
                        }
                        uVar16 = (local_78 & 3) + 3 + uVar9;
                        do {
                          if (uVar9 < uVar11) {
                            *(undefined4 *)(iVar20 + uVar9 * 4) = uVar15;
                          }
                          else {
                            *(undefined4 *)(iVar13 + uVar9 * 4) = uVar15;
                          }
                          uVar9 = uVar9 + 1;
                          local_78 = uVar12;
                          if (uVar9 == uVar16) goto LAB_2c6235b6;
                        } while (uVar9 < uVar18);
                        local_a0 = 0xd;
                      }
                      else if (uVar12 == 0x11) {
                        local_7c = local_7c + 3;
                        uVar12 = local_78 >> 3;
                        uVar16 = (local_78 & 7) + 3 + uVar9;
                        do {
                          if (uVar9 < uVar11) {
                            *(undefined4 *)(iVar20 + uVar9 * 4) = 0;
                          }
                          else {
                            *(undefined4 *)(iVar13 + uVar9 * 4) = 0;
                          }
                          uVar9 = uVar9 + 1;
                          local_78 = uVar12;
                          if (uVar16 == uVar9) goto LAB_2c6235b6;
                        } while (uVar9 < uVar18);
                        local_a0 = 0xe;
                      }
                      else {
                        if (uVar12 != 0x12) {
                          local_a0 = 0x10;
                          goto LAB_2c622f94;
                        }
                        local_7c = local_7c + 7;
                        uVar12 = local_78 >> 7;
                        uVar16 = (local_78 & 0x7f) + 0xb + uVar9;
                        do {
                          if (uVar9 < uVar11) {
                            *(undefined4 *)(iVar20 + uVar9 * 4) = 0;
                          }
                          else {
                            *(undefined4 *)(iVar13 + uVar9 * 4) = 0;
                          }
                          uVar9 = uVar9 + 1;
                          local_78 = uVar12;
                          if (uVar16 == uVar9) goto LAB_2c6235b6;
                        } while (uVar9 < uVar18);
                        local_a0 = 0xf;
                      }
                    }
LAB_2c6235b6:
                    if (local_80 < local_7c) {
                      local_a0 = 0x32;
                      goto LAB_2c622f94;
                    }
                  } while (uVar9 < uVar18);
                  if (local_a0 == 0) {
                    if (*(int *)(iVar20 + 0x400) == 0) {
                      local_a0 = 0x40;
                    }
                    else {
                      local_70 = FUN_2c62be98(0x40,0x480);
                      if (local_70 == 0) {
LAB_2c623500:
                        local_a0 = 0x53;
                      }
                      else {
                        puVar17 = (undefined4 *)(iVar20 + -4);
                        do {
                          puVar1 = puVar17 + 1;
                          *(undefined4 *)((int)puVar17 + local_70 + (4 - iVar20)) = *puVar1;
                          puVar17 = puVar1;
                        } while ((undefined4 *)(iVar20 + 0x47c) != puVar1);
                        local_6c = 0xf;
                        uStack_68 = 0x120;
                        local_a0 = FUN_2c621970(&local_74);
                        if (local_a0 == 0) {
                          local_58 = FUN_2c62be98(0x40,0x80);
                          if (local_58 == 0) goto LAB_2c623500;
                          puVar17 = (undefined4 *)(local_a4 + -4);
                          do {
                            puVar1 = puVar17 + 1;
                            *(undefined4 *)((int)puVar17 + local_58 + (4 - local_a4)) = *puVar1;
                            puVar17 = puVar1;
                          } while ((undefined4 *)(local_a4 + 0x7c) != puVar1);
                          local_54 = 0xf;
                          uStack_50 = 0x20;
                          local_a0 = FUN_2c621970(&local_5c);
                        }
                      }
                    }
                  }
                }
                else {
                  iVar20 = 0;
                  local_a4 = 0;
                }
              }
            }
LAB_2c622f94:
            FUN_2c62bea8(iVar7);
            FUN_2c62bea8(iVar20);
            FUN_2c62bea8(local_a4);
            FUN_2c62bea8(local_44);
            FUN_2c62bea8(local_40);
            FUN_2c62bea8(local_34);
            FUN_2c62bea8(local_30);
LAB_2c622fbe:
            if (local_a0 == 0) {
              do {
                uVar18 = local_7c >> 3;
                if (uVar18 + 3 < local_84) {
                  local_78 = ((uint)*(byte *)(local_88 + uVar18 + 2) << 0x10 |
                              (uint)*(byte *)(local_88 + uVar18 + 1) << 8 |
                              (uint)*(byte *)(local_88 + uVar18) |
                             (uint)*(byte *)(local_88 + uVar18 + 3) << 0x18) >> (local_7c & 7);
                  uVar18 = FUN_2c621400(&local_88,&local_74);
                  if (uVar18 < 0x100) goto LAB_2c623138;
LAB_2c623008:
                  uVar9 = uVar18 - 0x101;
                  if (0x1c < uVar9) {
                    if (uVar18 != 0x100) {
LAB_2c62345c:
                      local_a0 = 0x10;
                    }
                    goto LAB_2c623330;
                  }
                  uVar18 = *(uint *)(DAT_2c623160 + uVar9 * 4);
                  uVar9 = *(uint *)(DAT_2c623164 + uVar9 * 4);
                  if (uVar9 == 0) {
                    uVar10 = local_7c >> 3;
                    uVar9 = uVar10 + 4;
                    if (local_84 <= uVar9) goto LAB_2c623194;
LAB_2c623034:
                    iVar7 = local_88 + uVar10;
                    local_78 = ((uint)*(byte *)(iVar7 + 2) << 0x10 | (uint)*(byte *)(iVar7 + 1) << 8
                                | (uint)*(byte *)(local_88 + uVar10) |
                               (uint)*(byte *)(iVar7 + 3) << 0x18) >> (local_7c & 7) |
                               ((uint)*(byte *)(local_88 + uVar9) << 0x18) <<
                               (8 - (local_7c & 7) & 0xff);
                    uVar9 = FUN_2c621400(&local_88,&local_5c);
                  }
                  else {
                    uVar18 = uVar18 + (local_78 & ~(-1 << (uVar9 & 0xff)));
                    local_7c = uVar9 + local_7c;
                    uVar10 = local_7c >> 3;
                    uVar9 = uVar10 + 4;
                    if (uVar9 < local_84) goto LAB_2c623034;
LAB_2c623194:
                    local_78 = 0;
                    if (uVar10 < local_84) {
                      local_78 = (uint)*(byte *)(local_88 + uVar10);
                    }
                    if (uVar10 + 1 < local_84) {
                      local_78 = local_78 | (uint)*(byte *)(local_88 + uVar10 + 1) << 8;
                    }
                    if (uVar10 + 2 < local_84) {
                      local_78 = local_78 | (uint)*(byte *)(local_88 + uVar10 + 2) << 0x10;
                    }
                    if (uVar10 + 3 < local_84) {
                      local_78 = local_78 | (uint)*(byte *)(local_88 + uVar10 + 3) << 0x18;
                    }
                    local_78 = local_78 >> (local_7c & 7);
                    uVar9 = FUN_2c621400(&local_88,&local_5c);
                  }
                  if (0x1d < uVar9) {
                    if (0x1f < uVar9) goto LAB_2c62345c;
                    local_a0 = 0x12;
                    goto LAB_2c623330;
                  }
                  uVar10 = *(uint *)(DAT_2c623168 + uVar9 * 4);
                  uVar9 = *(uint *)(DAT_2c62316c + uVar9 * 4);
                  if (uVar10 != 0) {
                    uVar11 = local_78 & ~(-1 << (uVar10 & 0xff));
                    local_78 = local_78 >> (uVar10 & 0xff);
                    uVar9 = uVar9 + uVar11;
                    local_7c = uVar10 + local_7c;
                  }
                  uVar10 = param_1[1];
                  if (uVar10 < uVar9) {
                    local_a0 = 0x34;
                    goto LAB_2c623330;
                  }
                  uVar12 = uVar10 + uVar18;
                  uVar11 = param_1[2];
                  iVar7 = uVar10 - uVar9;
                  if (uVar11 < uVar12) {
                    iVar20 = FUN_2c62bebc(*param_1);
                    if (iVar20 == 0) goto LAB_2c62332a;
                    param_1[2] = uVar12 + (uVar11 >> 1);
                    *param_1 = iVar20;
                    param_1[1] = uVar12;
                    if (uVar18 <= uVar9) goto LAB_2c6230c8;
LAB_2c623228:
                    FUN_2c62c0d8(iVar20 + uVar10,iVar20 + iVar7,uVar9);
                    iVar20 = iVar7 - uVar9;
                    do {
                      iVar13 = uVar9 * 2 + iVar7;
                      puVar2 = (undefined1 *)(*param_1 + iVar7);
                      iVar7 = iVar7 + 1;
                      *(undefined1 *)(*param_1 + iVar13) = *puVar2;
                    } while (iVar7 != uVar18 + iVar20);
                  }
                  else {
                    iVar20 = *param_1;
                    param_1[1] = uVar12;
                    if (uVar9 < uVar18) goto LAB_2c623228;
LAB_2c6230c8:
                    FUN_2c62c0d8(iVar20 + uVar10,iVar20 + iVar7,uVar18);
                  }
                  if (local_80 < local_7c) goto LAB_2c623152;
                }
                else {
                  local_78 = 0;
                  if (uVar18 < local_84) {
                    local_78 = (uint)*(byte *)(local_88 + uVar18);
                  }
                  if (uVar18 + 1 < local_84) {
                    local_78 = local_78 | (uint)*(byte *)(local_88 + uVar18 + 1) << 8;
                  }
                  if (uVar18 + 2 < local_84) {
                    local_78 = local_78 | (uint)*(byte *)(local_88 + uVar18 + 2) << 0x10;
                  }
                  local_78 = local_78 >> (local_7c & 7);
                  uVar18 = FUN_2c621400(&local_88,&local_74);
                  if (0xff < uVar18) goto LAB_2c623008;
LAB_2c623138:
                  iVar7 = param_1[1];
                  uVar9 = iVar7 + 1;
                  if ((uint)param_1[2] < uVar9) {
                    iVar13 = uVar9 + ((uint)param_1[2] >> 1);
                    iVar20 = FUN_2c62bebc(*param_1,iVar13);
                    if (iVar20 == 0) goto LAB_2c62332a;
                    param_1[2] = iVar13;
                    *param_1 = iVar20;
                  }
                  else {
                    iVar20 = *param_1;
                  }
                  param_1[1] = uVar9;
                  *(char *)(iVar20 + iVar7) = (char)uVar18;
                  if (local_80 < local_7c) {
LAB_2c623152:
                    local_a0 = 0x33;
                    goto LAB_2c623330;
                  }
                }
              } while ((uVar19 == 0) || ((uint)param_1[1] <= uVar19));
              local_a0 = 0x6d;
            }
          }
        }
LAB_2c623330:
        FUN_2c62bea8(local_74);
        FUN_2c62bea8(local_70);
        FUN_2c62bea8(local_64);
        FUN_2c62bea8(local_60);
        FUN_2c62bea8(local_5c);
        FUN_2c62bea8(local_58);
        FUN_2c62bea8(local_4c);
        FUN_2c62bea8(local_48);
        if (local_a0 != 0) goto LAB_2c623272;
      }
      if ((*(uint *)(param_4 + 8) != 0) && (*(uint *)(param_4 + 8) < (uint)param_1[1])) {
        local_a0 = 0x6d;
        goto LAB_2c623272;
      }
    } while (uVar6 == 0);
    local_a0 = 0;
  }
  else {
    local_a0 = 0x69;
  }
LAB_2c623272:
  if (*DAT_2c623514 != local_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return local_a0;
}

