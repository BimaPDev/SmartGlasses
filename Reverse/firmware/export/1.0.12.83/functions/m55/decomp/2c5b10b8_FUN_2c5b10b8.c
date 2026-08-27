/* FUN_2c5b10b8 @ 0x2c5b10b8 */

void FUN_2c5b10b8(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char *pcVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  char *pcVar26;
  int *piVar27;
  uint *local_64;
  uint local_60;
  uint local_5c [4];
  undefined4 local_4c;
  
  uVar3 = DAT_2c5b10e8;
  local_4c = *DAT_2c5b10e4;
  iVar18 = *(int *)(param_1 + 4);
  if (iVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5b1e50,0x1d6,DAT_2c5b1e4c,DAT_2c5b1e48);
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 != 0) {
    for (iVar18 = 0; iVar2 = FUN_2c6041fc(iVar2), iVar18 < iVar2; iVar18 = iVar18 + 1) {
      uVar4 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x20),iVar18);
      FUN_2c5eba54(uVar4,uVar3);
      iVar2 = *(int *)(param_1 + 0x20);
    }
    FUN_2c6043d8(*(undefined4 *)(param_1 + 0x20));
    iVar18 = *(int *)(param_1 + 4);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  iVar23 = param_1 + 0xbc;
  uVar3 = FUN_2c606a10(iVar18);
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  iVar24 = param_1 + 0xb4;
  FUN_2c62a470();
  uVar4 = FUN_2c62a47c();
  FUN_2c607048(uVar3,uVar4,0x6a);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x20),5,0,0xffffff98);
  FUN_2c5afd38(param_1,*(undefined4 *)(param_1 + 0x20));
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x20),0x10);
  FUN_2c60497c(*(undefined4 *)(param_1 + 0x20),0);
  FUN_2c627e28(*(undefined4 *)(param_1 + 0x20),0);
  FUN_2c627e50(*(undefined4 *)(param_1 + 0x20),0,2);
  FUN_2c606d54(*(undefined4 *)(param_1 + 0x20),0xe,0);
  FUN_2c606d30(*(undefined4 *)(param_1 + 0x20),0x18,0);
  FUN_2c606d3c(*(undefined4 *)(param_1 + 0x20),0x18,0);
  FUN_2c602454(*(undefined4 *)(param_1 + 0x20),DAT_2c5b1534,9,param_1);
  FUN_2c602454(*(undefined4 *)(param_1 + 0x20),DAT_2c5b1534,10,param_1);
  local_64 = local_5c;
  local_60 = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  uVar3 = FUN_2c62fe4c(*(undefined4 *)(param_1 + 0x20));
  FUN_2c603a04(uVar3,0,DAT_2c5b1538);
  FUN_2c5afd38(param_1,uVar3);
  iVar18 = param_1 + 0xa4;
  FUN_2c6036dc(uVar3,iVar18,0);
  FUN_2c6036dc(uVar3,iVar23,0x10);
  iVar2 = param_1 + 0xac;
  FUN_2c6036dc(uVar3,iVar24,0x20);
  FUN_2c6036dc(uVar3,iVar2,0);
  FUN_2c607048(uVar3,0xbc,0x6a);
  FUN_2c606e68(uVar3,0xc,0);
  lv_obj_add_flag_invalidate(uVar3,2);
  FUN_2c606d9c(uVar3,1,0);
  FUN_2c606d84(uVar3,0xff00ff00,0);
  FUN_2c606d60(uVar3,0xff00ff00,0);
  lv_obj_add_flag_invalidate(uVar3,0x8000000);
  FUN_2c602454(uVar3,DAT_2c5b153c,7,param_1);
  uVar4 = FUN_2c606a10(uVar3);
  FUN_2c5afd38(param_1,uVar4);
  FUN_2c607048(uVar4,0xbc,0x6a);
  FUN_2c6072b4(uVar4,9);
  uVar5 = FUN_2c6313f4(uVar4);
  FUN_2c607048(uVar5,0x24);
  FUN_2c6072bc(uVar5,2,0,0x10);
  uVar6 = FUN_2c5e2e8c(DAT_2c5b1540);
  FUN_2c63140c(uVar5,uVar6);
  uVar4 = FUN_2c637344(uVar4);
  puVar7 = (undefined1 *)registry_lookup(0x4020);
  uVar8 = FUN_2c66c4ec();
  if (uVar8 <= 0x7fffffff - local_60) {
    uVar21 = uVar8 + local_60;
    uVar22 = local_5c[0];
    if (local_64 == local_5c) {
      uVar22 = 0xf;
    }
    if (uVar22 < uVar21) {
      FUN_2c52263c(&local_64,local_60,0,puVar7,uVar8);
    }
    else if (uVar8 != 0) {
      if (uVar8 == 1) {
        *(undefined1 *)((int)local_64 + local_60) = *puVar7;
      }
      else {
        FUN_2c674668((undefined1 *)((int)local_64 + local_60),puVar7,uVar8);
      }
    }
    *(undefined1 *)((int)local_64 + uVar21) = 0;
    local_60 = uVar21;
    if (1 < 0x7fffffff - uVar21) {
      uVar22 = uVar21 + 2;
      uVar8 = local_5c[0];
      if (local_64 == local_5c) {
        uVar8 = 0xf;
      }
      if (uVar8 < uVar22) {
        FUN_2c52263c(&local_64,uVar21,0,DAT_2c5b1c80,2);
      }
      else {
        *(undefined2 *)((int)local_64 + uVar21) = *DAT_2c5b1544;
      }
      *(undefined1 *)((int)local_64 + uVar22) = 0;
      local_60 = uVar22;
      puVar7 = (undefined1 *)registry_lookup(0x4023);
      uVar8 = FUN_2c66c4ec();
      if (uVar8 <= 0x7fffffff - local_60) {
        uVar21 = uVar8 + local_60;
        uVar22 = local_5c[0];
        if (local_64 == local_5c) {
          uVar22 = 0xf;
        }
        if (uVar22 < uVar21) {
          FUN_2c52263c(&local_64,local_60,0,puVar7,uVar8);
        }
        else if (uVar8 != 0) {
          if (uVar8 == 1) {
            *(undefined1 *)((int)local_64 + local_60) = *puVar7;
          }
          else {
            FUN_2c674668((undefined1 *)((int)local_64 + local_60),puVar7,uVar8);
          }
        }
        *(undefined1 *)((int)local_64 + uVar21) = 0;
        local_60 = uVar21;
        if (uVar21 != 0x7fffffff) {
          uVar22 = uVar21 + 1;
          uVar8 = local_5c[0];
          if (local_64 == local_5c) {
            uVar8 = 0xf;
          }
          if (uVar8 < uVar22) {
            FUN_2c52263c(&local_64,uVar21,0,DAT_2c5b1c88,1);
          }
          else {
            *(undefined1 *)((int)local_64 + uVar21) = 0x29;
          }
          *(undefined1 *)((int)local_64 + uVar22) = 0;
          local_60 = uVar22;
          FUN_2c638730(uVar4,local_64);
          FUN_2c6388dc(uVar4,1);
          FUN_2c606e5c(uVar4,2,0);
          FUN_2c607048(uVar4,0x9c,0x1c);
          uVar6 = FUN_2c5e2e80(DAT_2c5b1548);
          FUN_2c606e38(uVar4,uVar6,0);
          FUN_2c606e20(uVar4,0xff00ff00,0);
          FUN_2c608808(uVar4,uVar5,0xe,0,6);
          FUN_2c606d18(uVar4,4,0);
          *(undefined4 *)(param_1 + 0xc) = uVar4;
          uVar5 = FUN_2c62fe4c(*(undefined4 *)(param_1 + 0x20));
          FUN_2c603a04(uVar5,0,DAT_2c5b1538);
          FUN_2c5afd38(param_1,uVar5);
          FUN_2c6036dc(uVar5,iVar18,0);
          FUN_2c6036dc(uVar5,iVar23,0x10);
          FUN_2c6036dc(uVar5,iVar24,0x20);
          FUN_2c6036dc(uVar5,iVar2,0);
          FUN_2c607048(uVar5,0xbc,0x6a);
          FUN_2c606e68(uVar5,0xc,0);
          lv_obj_add_flag_invalidate(uVar5,2);
          FUN_2c606d9c(uVar5,1,0);
          FUN_2c606d84(uVar5,0xff00ff00,0);
          FUN_2c606d60(uVar5,0xff00ff00,0);
          lv_obj_add_flag_invalidate(uVar5,0x8000000);
          FUN_2c602454(uVar5,DAT_2c5b153c,7,param_1);
          uVar6 = FUN_2c606a10(uVar5);
          FUN_2c5afd38(param_1,uVar6);
          FUN_2c607048(uVar6,0xbc,0x6a);
          FUN_2c6072b4(uVar6,9);
          uVar9 = FUN_2c6313f4(uVar6);
          FUN_2c607048(uVar9,0x24);
          FUN_2c6072bc(uVar9,2,0,0x10);
          uVar10 = FUN_2c5e2e8c(DAT_2c5b154c);
          FUN_2c63140c(uVar9,uVar10);
          uVar6 = FUN_2c637344(uVar6);
          local_60 = 0;
          *(undefined1 *)local_64 = 0;
          puVar7 = (undefined1 *)registry_lookup(0x4021);
          uVar8 = FUN_2c66c4ec();
          if (uVar8 <= 0x7fffffff - local_60) {
            uVar21 = uVar8 + local_60;
            uVar22 = local_5c[0];
            if (local_64 == local_5c) {
              uVar22 = 0xf;
            }
            if (uVar22 < uVar21) {
              FUN_2c52263c(&local_64,local_60,0,puVar7,uVar8);
            }
            else if (uVar8 != 0) {
              if (uVar8 == 1) {
                *(undefined1 *)((int)local_64 + local_60) = *puVar7;
              }
              else {
                FUN_2c674668((undefined1 *)((int)local_64 + local_60),puVar7,uVar8);
              }
            }
            *(undefined1 *)((int)local_64 + uVar21) = 0;
            local_60 = uVar21;
            if (1 < 0x7fffffff - uVar21) {
              uVar22 = uVar21 + 2;
              uVar8 = local_5c[0];
              if (local_64 == local_5c) {
                uVar8 = 0xf;
              }
              if (uVar8 < uVar22) {
                FUN_2c52263c(&local_64,uVar21,0,DAT_2c5b1c80,2);
              }
              else {
                *(undefined2 *)((int)local_64 + uVar21) = *DAT_2c5b1884;
              }
              *(undefined1 *)((int)local_64 + uVar22) = 0;
              local_60 = uVar22;
              puVar7 = (undefined1 *)registry_lookup(0x4023);
              uVar8 = FUN_2c66c4ec();
              if (uVar8 <= 0x7fffffff - local_60) {
                uVar21 = uVar8 + local_60;
                uVar22 = local_5c[0];
                if (local_64 == local_5c) {
                  uVar22 = 0xf;
                }
                if (uVar22 < uVar21) {
                  FUN_2c52263c(&local_64,local_60,0,puVar7,uVar8);
                }
                else if (uVar8 != 0) {
                  if (uVar8 == 1) {
                    *(undefined1 *)((int)local_64 + local_60) = *puVar7;
                  }
                  else {
                    FUN_2c674668((undefined1 *)((int)local_64 + local_60),puVar7,uVar8);
                  }
                }
                *(undefined1 *)((int)local_64 + uVar21) = 0;
                local_60 = uVar21;
                if (uVar21 != 0x7fffffff) {
                  uVar22 = uVar21 + 1;
                  uVar8 = local_5c[0];
                  if (local_64 == local_5c) {
                    uVar8 = 0xf;
                  }
                  if (uVar8 < uVar22) {
                    FUN_2c52263c(&local_64,uVar21,0,DAT_2c5b1c88,1);
                  }
                  else {
                    *(undefined1 *)((int)local_64 + uVar21) = 0x29;
                  }
                  *(undefined1 *)((int)local_64 + uVar22) = 0;
                  local_60 = uVar22;
                  FUN_2c638730(uVar6,local_64);
                  FUN_2c6388dc(uVar6,1);
                  FUN_2c606e5c(uVar6,2,0);
                  FUN_2c607048(uVar6,0x9c,0x1c);
                  uVar10 = FUN_2c5e2e80(DAT_2c5b1888);
                  FUN_2c606e38(uVar6,uVar10,0);
                  FUN_2c606e20(uVar6,0xff00ff00,0);
                  FUN_2c608808(uVar6,uVar9,0xe,0,6);
                  FUN_2c606d18(uVar6,4,0);
                  *(undefined4 *)(param_1 + 0x10) = uVar6;
                  piVar15 = (int *)param_2[1];
                  piVar27 = (int *)*param_2;
                  do {
                    do {
                      while( true ) {
                        while( true ) {
                          piVar1 = piVar27;
                          if (piVar1 == piVar15) {
                            uVar8 = FUN_2c6041fc(*(undefined4 *)(param_1 + 0x20));
                            if (uVar8 < 3) {
                              FUN_2c627ec4(*(undefined4 *)(param_1 + 0x20),2,0);
                            }
                            uVar3 = FUN_2c6041fc(*(undefined4 *)(param_1 + 0x20));
                    /* WARNING: Subroutine does not return */
                            FUN_2c62c82c(4,DAT_2c5b18a0,0x295,DAT_2c5b189c,DAT_2c5b1898,uVar3);
                          }
                          piVar27 = piVar1 + 1;
                          iVar16 = *piVar1;
                          iVar19 = *(int *)(iVar16 + 0x38);
                          if (iVar19 != 1) break;
                          if (*(int *)(iVar16 + 8) != 0) {
                            local_60 = 0;
                            *(undefined1 *)local_64 = 0;
                            puVar7 = (undefined1 *)registry_lookup(0x4020);
                            uVar8 = FUN_2c66c4ec();
                            if (0x7fffffff - local_60 < uVar8) goto LAB_2c5b1e28;
                            uVar21 = uVar8 + local_60;
                            uVar22 = local_5c[0];
                            if (local_64 == local_5c) {
                              uVar22 = 0xf;
                            }
                            if (uVar22 < uVar21) {
                              FUN_2c52263c(&local_64,local_60,0,puVar7,uVar8);
                            }
                            else if (uVar8 != 0) {
                              if (uVar8 == 1) {
                                *(undefined1 *)((int)local_64 + local_60) = *puVar7;
                              }
                              else {
                                FUN_2c674668((undefined1 *)((int)local_64 + local_60),puVar7,uVar8);
                              }
                            }
                            *(undefined1 *)((int)local_64 + uVar21) = 0;
                            local_60 = uVar21;
                            if (*(char *)(*piVar1 + 0x1c) != '\0') {
                              *(undefined1 *)(param_1 + 0x3c) = 1;
                              if (0x7fffffff - uVar21 < 2) goto LAB_2c5b1e28;
                              uVar22 = uVar21 + 2;
                              uVar8 = local_5c[0];
                              if (local_64 == local_5c) {
                                uVar8 = 0xf;
                              }
                              if (uVar8 < uVar22) {
                                FUN_2c52263c(&local_64,uVar21,0,DAT_2c5b1e44,2);
                              }
                              else {
                                *(undefined2 *)((int)local_64 + uVar21) =
                                     *(undefined2 *)DAT_2c5b1c80;
                              }
                              *(undefined1 *)((int)local_64 + uVar22) = 0;
                              local_60 = uVar22;
                              puVar7 = (undefined1 *)registry_lookup(0x4022);
                              uVar8 = FUN_2c66c4ec();
                              if (0x7fffffff - local_60 < uVar8) goto LAB_2c5b1e28;
                              uVar21 = uVar8 + local_60;
                              uVar22 = local_5c[0];
                              if (local_64 == local_5c) {
                                uVar22 = 0xf;
                              }
                              if (uVar22 < uVar21) {
                                FUN_2c52263c(&local_64,local_60,0,puVar7,uVar8);
                              }
                              else if (uVar8 != 0) {
                                if (uVar8 == 1) {
                                  *(undefined1 *)((int)local_64 + local_60) = *puVar7;
                                }
                                else {
                                  FUN_2c674668((undefined1 *)((int)local_64 + local_60),puVar7,uVar8
                                              );
                                }
                              }
                              *(undefined1 *)((int)local_64 + uVar21) = 0;
                              local_60 = uVar21;
                              if (uVar21 == 0x7fffffff) goto LAB_2c5b1e28;
                              uVar22 = uVar21 + 1;
                              uVar8 = local_5c[0];
                              if (local_64 == local_5c) {
                                uVar8 = 0xf;
                              }
                              if (uVar8 < uVar22) {
                                FUN_2c52263c(&local_64,uVar21,0,DAT_2c5b1e54,1);
                              }
                              else {
                                *(undefined1 *)((int)local_64 + uVar21) = 0x29;
                              }
                              *(undefined1 *)((int)local_64 + uVar22) = 0;
                              local_60 = uVar22;
                            }
                            FUN_2c638730(uVar4,local_64);
                            FUN_2c606abc(uVar3,0x8000000);
                          }
                        }
                        if (iVar19 == 2) break;
                        if (iVar19 < 1) {
                    /* WARNING: Subroutine does not return */
                          FUN_2c62c82c(4,DAT_2c5b1c78,0x28e,DAT_2c5b1c7c,DAT_2c5b1c74,iVar19);
                        }
                        uVar9 = FUN_2c62fe4c(*(undefined4 *)(param_1 + 0x20));
                        FUN_2c603a04(uVar9,0,DAT_2c5b188c);
                        FUN_2c5afd38(param_1,uVar9);
                        FUN_2c6036dc(uVar9,iVar18,0);
                        FUN_2c6036dc(uVar9,iVar23,0x10);
                        FUN_2c6036dc(uVar9,iVar24,0x20);
                        FUN_2c6036dc(uVar9,iVar2,0);
                        FUN_2c607048(uVar9,0xbc,0x6a);
                        FUN_2c606e68(uVar9,0xc,0);
                        lv_obj_add_flag_invalidate(uVar9,2);
                        FUN_2c606d9c(uVar9,1,0);
                        FUN_2c606d84(uVar9,0xff00ff00,0);
                        FUN_2c606d60(uVar9,0xff00ff00,0);
                        FUN_2c602454(uVar9,DAT_2c5b1890,7,param_1);
                        uVar10 = FUN_2c606a10(uVar9);
                        FUN_2c5afd38(param_1,uVar10);
                        FUN_2c607048(uVar10,0xbc,0x6a);
                        FUN_2c6072b4(uVar10,9);
                        uVar11 = FUN_2c6313f4(uVar10);
                        FUN_2c607048(uVar11,0x24);
                        FUN_2c6072bc(uVar11,2,0,0x10);
                        uVar12 = FUN_2c5e2e8c(DAT_2c5b1894);
                        FUN_2c63140c(uVar11,uVar12);
                        uVar10 = FUN_2c637344(uVar10);
                        iVar16 = *piVar1;
                        pcVar26 = *(char **)(iVar16 + 4);
                        uVar8 = *(uint *)(iVar16 + 8);
                        if (uVar8 != 0) {
                          pcVar13 = pcVar26;
                          uVar22 = uVar8;
                          while (pcVar13 = (char *)FUN_2c643680(pcVar13,0x28,uVar22),
                                pcVar13 != (char *)0x0) {
                            if (*pcVar13 == '(') {
                              uVar22 = (int)pcVar13 - (int)pcVar26;
                              if (0 < (int)uVar22) {
                                if (uVar8 < uVar22) {
                                  FUN_2c65868c(DAT_2c5b1e64,DAT_2c5b1e60,uVar22,uVar8);
                    /* WARNING: Subroutine does not return */
                                  stack_chk_fail();
                                }
                                uVar21 = uVar8 - uVar22;
                                uVar20 = (uint)(uVar21 != 0);
                                if ((uVar20 - uVar8) + 0x7fffffff < 2) {
                    /* WARNING: Subroutine does not return */
                                  FUN_2c658680(DAT_2c5b1e5c);
                                }
                                uVar25 = (uVar8 + 2) - uVar20;
                                if (pcVar26 == (char *)(iVar16 + 0xc)) {
                                  uVar14 = 0xf;
                                }
                                else {
                                  uVar14 = *(uint *)(iVar16 + 0xc);
                                }
                                if (uVar14 < uVar25) {
                                  FUN_2c52263c(iVar16 + 4,uVar22,uVar20,DAT_2c5b1c80,2);
                                }
                                else if ((DAT_2c5b1c80 < pcVar26) ||
                                        (pcVar26 + uVar8 < DAT_2c5b1c80)) {
                                  if (uVar21 != uVar20) {
                                    if (uVar21 - uVar20 == 1) {
                                      pcVar13[2] = pcVar13[uVar20];
                                    }
                                    else {
                                      FUN_2c673eb8(pcVar13 + 2,pcVar13 + uVar20);
                                    }
                                  }
                                  *(undefined2 *)pcVar13 = *(undefined2 *)DAT_2c5b1c80;
                                }
                                else {
                                  pcVar26 = pcVar13 + uVar20;
                                  if (uVar21 != uVar20) {
                                    if (uVar21 - uVar20 == 1) {
                                      pcVar13[2] = pcVar13[uVar20];
                                    }
                                    else {
                                      FUN_2c673eb8(pcVar13 + 2,pcVar26);
                                    }
                                  }
                                  if (pcVar26 < DAT_2c5b1c84) {
                                    if (DAT_2c5b1e44 < pcVar26) {
                                      iVar19 = (int)pcVar26 - (int)DAT_2c5b1e44;
                                      if (iVar19 == 1) {
                                        *pcVar13 = ' ';
                                        pcVar13[1] = pcVar13[2];
                                      }
                                      else {
                                        if (iVar19 == 0) {
                                          iVar17 = 2;
                                          pcVar26 = pcVar13;
                                        }
                                        else {
                                          FUN_2c674668(pcVar13,DAT_2c5b1c84 + -2,iVar19);
                                          iVar17 = 2 - iVar19;
                                          if (iVar17 == 0) goto LAB_2c5b1a10;
                                          pcVar26 = pcVar13 + iVar19;
                                        }
                                        FUN_2c674668(pcVar26,pcVar13 + 2,iVar17);
                                      }
                                    }
                                    else {
                                      *(undefined2 *)pcVar13 =
                                           *(undefined2 *)(DAT_2c5b1e44 + (2 - uVar20));
                                    }
                                  }
                                  else {
                                    *(undefined2 *)pcVar13 = *(undefined2 *)(DAT_2c5b1c84 + -2);
                                  }
                                }
LAB_2c5b1a10:
                                *(uint *)(iVar16 + 8) = uVar25;
                                *(undefined1 *)(*(int *)(iVar16 + 4) + uVar25) = 0;
                                pcVar26 = *(char **)(*piVar1 + 4);
                              }
                              break;
                            }
                            pcVar13 = pcVar13 + 1;
                            uVar22 = (int)(pcVar26 + uVar8) - (int)pcVar13;
                            if (uVar22 == 0) break;
                          }
                        }
                        FUN_2c638730(uVar10,pcVar26);
                        FUN_2c6388dc(uVar10,1);
                        FUN_2c606e5c(uVar10,2,0);
                        FUN_2c607048(uVar10,0x9c,0x1c);
                        uVar12 = FUN_2c5e2e80(DAT_2c5b1888);
                        FUN_2c606e38(uVar10,uVar12,0);
                        FUN_2c606e20(uVar10,0xff00ff00,0);
                        FUN_2c608808(uVar10,uVar11,0xe,0,6);
                        FUN_2c606d18(uVar10,4,0);
                        FUN_2c5eb968(*(undefined4 *)(*piVar1 + 4),uVar9,0,DAT_2c5b1890,param_1);
                      }
                    } while (*(int *)(iVar16 + 8) == 0);
                    local_60 = 0;
                    *(undefined1 *)local_64 = 0;
                    puVar7 = (undefined1 *)registry_lookup(0x4021);
                    uVar8 = FUN_2c66c4ec();
                    if (0x7fffffff - local_60 < uVar8) break;
                    uVar21 = uVar8 + local_60;
                    uVar22 = local_5c[0];
                    if (local_64 == local_5c) {
                      uVar22 = 0xf;
                    }
                    if (uVar22 < uVar21) {
                      FUN_2c52263c(&local_64,local_60,0,puVar7,uVar8);
                    }
                    else if (uVar8 != 0) {
                      if (uVar8 == 1) {
                        *(undefined1 *)((int)local_64 + local_60) = *puVar7;
                      }
                      else {
                        FUN_2c674668((undefined1 *)((int)local_64 + local_60),puVar7,uVar8);
                      }
                    }
                    *(undefined1 *)((int)local_64 + uVar21) = 0;
                    local_60 = uVar21;
                    if (*(char *)(*piVar1 + 0x1c) != '\0') {
                      *(undefined1 *)(param_1 + 0x3d) = 1;
                      if (0x7fffffff - uVar21 < 2) break;
                      uVar22 = uVar21 + 2;
                      uVar8 = local_5c[0];
                      if (local_64 == local_5c) {
                        uVar8 = 0xf;
                      }
                      if (uVar8 < uVar22) {
                        FUN_2c52263c(&local_64,uVar21,0,DAT_2c5b1e44,2);
                      }
                      else {
                        *(undefined2 *)((int)local_64 + uVar21) = *(undefined2 *)DAT_2c5b1e44;
                      }
                      *(undefined1 *)((int)local_64 + uVar22) = 0;
                      local_60 = uVar22;
                      puVar7 = (undefined1 *)registry_lookup(0x4022);
                      uVar8 = FUN_2c66c4ec();
                      if (0x7fffffff - local_60 < uVar8) break;
                      uVar21 = uVar8 + local_60;
                      uVar22 = local_5c[0];
                      if (local_64 == local_5c) {
                        uVar22 = 0xf;
                      }
                      if (uVar22 < uVar21) {
                        FUN_2c52263c(&local_64,local_60,0,puVar7,uVar8);
                      }
                      else if (uVar8 != 0) {
                        if (uVar8 == 1) {
                          *(undefined1 *)((int)local_64 + local_60) = *puVar7;
                        }
                        else {
                          FUN_2c674668((undefined1 *)((int)local_64 + local_60),puVar7,uVar8);
                        }
                      }
                      *(undefined1 *)((int)local_64 + uVar21) = 0;
                      local_60 = uVar21;
                      if (uVar21 == 0x7fffffff) break;
                      uVar22 = uVar21 + 1;
                      uVar8 = local_5c[0];
                      if (local_64 == local_5c) {
                        uVar8 = 0xf;
                      }
                      if (uVar8 < uVar22) {
                        FUN_2c52263c(&local_64,uVar21,0,DAT_2c5b1e54,1);
                      }
                      else {
                        *(undefined1 *)((int)local_64 + uVar21) = 0x29;
                      }
                      *(undefined1 *)((int)local_64 + uVar22) = 0;
                      local_60 = uVar22;
                    }
                    FUN_2c638730(uVar6,local_64);
                    FUN_2c606abc(uVar5,0x8000000);
                  } while( true );
                }
              }
            }
          }
        }
      }
    }
  }
LAB_2c5b1e28:
                    /* WARNING: Subroutine does not return */
  FUN_2c658680(DAT_2c5b1e58);
}

