/* FUN_2c5f7ad4 @ 0x2c5f7ad4 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_2c5f7ad4(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  byte *pbVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  char *pcVar16;
  char cVar17;
  int iVar18;
  int iVar19;
  undefined4 *puVar20;
  char *pcVar21;
  int iVar22;
  int iVar23;
  char *pcVar24;
  undefined2 uVar25;
  bool bVar26;
  bool bVar27;
  int local_10b4;
  undefined4 uStack_1048;
  undefined4 uStack_1044;
  int local_1040;
  int local_103c;
  int local_1038;
  int local_1034;
  int local_1030;
  int local_102c;
  undefined4 local_1028;
  undefined4 local_1024;
  undefined4 local_1020;
  undefined4 uStack_101c;
  undefined4 local_1018;
  undefined4 uStack_1014;
  undefined4 *local_1010;
  char *local_100c;
  undefined4 local_1008;
  int local_1004;
  undefined4 *local_1000;
  int local_ffc;
  int local_ff8;
  undefined4 local_ff4;
  int local_ff0;
  int local_fec;
  int local_fe8;
  int local_fe4;
  undefined4 local_fe0;
  int *local_fdc;
  int *local_fd8;
  int aiStack_fd4 [1001];
  undefined2 local_30;
  uint local_2c;
  
  iVar19 = *(int *)(param_2 + 0x1c);
  local_2c = *DAT_2c5f7d40;
  iVar18 = *(int *)(param_2 + 0x20);
  if (*(short *)(param_2 + 0x34) == 9) {
    local_fe8 = *(int *)(param_2 + 0x38);
  }
  else {
    local_fe8 = 0;
  }
  local_fe8 = *(int *)(param_2 + 0x28) + -1 + local_fe8;
  local_ff0 = *(int *)(param_2 + 0x24);
  local_ff4 = 0;
  local_fec = 0;
  local_fe4 = 0;
  local_fdc = (int *)0x0;
  local_fd8 = (int *)0x0;
  local_1000 = param_1;
  local_ffc = iVar19;
  local_ff8 = iVar18;
  local_fe0 = param_3;
  FUN_2c674268(aiStack_fd4,0,0xfa4);
  local_30 = 0x100;
  if (0 < iVar18) {
    do {
      iVar19 = FUN_2c5fb998((int)*(char *)(iVar18 + iVar19 + -1));
      if (iVar19 == 0) break;
      iVar18 = local_ff8 + -1;
      local_ff8 = iVar18;
      iVar19 = local_ffc;
    } while (0 < iVar18);
    if (local_fec < local_ff8) {
LAB_2c5f7b80:
      piVar8 = local_fd8;
      iVar19 = local_fec;
      puVar5 = local_1000;
      uVar11 = DAT_2c5f865c;
      if (*(short *)(param_2 + 0x34) == 5) {
        local_100c = (char *)(local_ff8 - local_fec);
        local_1010 = (undefined4 *)(local_ffc + local_fec);
        local_fec = local_ff8;
        iVar19 = FUN_2c5f764c(&local_1000,iVar19,local_ff8 + -1,local_1010,local_100c);
        if (iVar19 != 0) {
          iVar18 = *(int *)(param_2 + 0x14);
          *(int *)(iVar19 + 0xc) = param_2;
          *(undefined4 *)(iVar19 + 4) = 0;
          *(int *)(iVar19 + 8) = iVar18;
          *(int *)(param_2 + 0x14) = iVar19;
          if (iVar18 == 0) {
            *(int *)(param_2 + 0x10) = iVar19;
          }
          else {
            *(int *)(iVar18 + 4) = iVar19;
          }
          if (local_fd8 == (int *)0x0) {
            FUN_2c5f6f50(param_2,iVar19);
          }
        }
        goto LAB_2c5f7d02;
      }
      if (*(char *)(local_ffc + local_fec) == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,DAT_2c5f7d48,0xe7,DAT_2c5f7d50,DAT_2c5f7d4c,DAT_2c5f7d44);
      }
      if (local_fec < local_ff8) {
        cVar17 = *(char *)(local_ffc + local_fec);
        puVar20 = (undefined4 *)(local_ffc + local_fec);
        if (cVar17 != '\0') {
          switch(cVar17) {
          case '\n':
          case '\r':
            if (cVar17 == '\r') {
              local_fec = local_fec + 1;
              cVar17 = *(char *)(local_ffc + local_fec);
            }
            if (cVar17 == '\n') {
              local_fec = local_fec + 1;
            }
            local_ff0 = local_ff0 + 1;
            local_fe4 = -local_fec;
            for (; local_fec < local_ff8; local_fec = local_fec + 1) {
              if (*(char *)(local_ffc + local_fec) == '\0') {
                    /* WARNING: Subroutine does not return */
                FUN_2c62c82c(3,DAT_2c5f8638,0xe7,DAT_2c5f8050,DAT_2c5f804c,DAT_2c5f8048);
              }
              if ((*(char *)(local_ffc + local_fec) != ' ') &&
                 (*(char *)(local_ffc + local_fec) != '\t')) break;
            }
            if (((1 < iVar19) && (*(char *)(iVar19 + local_ffc + -1) == ' ')) &&
               (*(char *)(iVar19 + local_ffc + -2) == ' ')) goto LAB_2c5f7eca;
            bVar27 = false;
            piVar8 = (int *)(*(code *)*local_1000)(1,0x4c);
            *piVar8 = (int)puVar5;
            *(undefined2 *)(piVar8 + 0xd) = 0xf;
            goto LAB_2c5f7eee;
          default:
            iVar18 = local_fec + 1;
            local_1010 = puVar20;
            if (iVar18 < local_ff8) {
              pbVar12 = (byte *)(local_ffc + iVar18);
              do {
                if ((*(char *)(DAT_2c5f8044 + (uint)*pbVar12) != '\0') ||
                   (((param_4 & 0x400) != 0 && (*(char *)(DAT_2c5f8040 + (uint)*pbVar12) != '\0'))))
                {
                  pcVar24 = (char *)(iVar18 - local_fec);
                  local_fec = iVar18;
                  if (local_ff8 <= iVar18) goto LAB_2c5f7db0;
                  bVar1 = *pbVar12;
                  if (bVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_2c62c82c(3,DAT_2c5f89a0,0xe7,DAT_2c5f899c,DAT_2c5f8998,DAT_2c5f8994);
                  }
                  if (((bVar1 != 10) && (bVar1 != 0xd)) || ((int)pcVar24 < 1)) goto LAB_2c5f7db0;
                  pcVar21 = (char *)((int)puVar20 + (int)pcVar24);
                  goto LAB_2c5f7da4;
                }
                iVar18 = iVar18 + 1;
                pbVar12 = pbVar12 + 1;
              } while (local_ff8 != iVar18);
            }
            pcVar24 = (char *)(local_ff8 - local_fec);
            local_fec = local_ff8;
            iVar18 = local_ff8;
            goto LAB_2c5f7db0;
          case '!':
            iVar18 = local_fec + 1;
            uVar11 = DAT_2c5f8650;
            if (iVar18 < local_ff8) {
              if (*(char *)(local_ffc + iVar18) == '\0') {
                local_fec = iVar18;
                    /* WARNING: Subroutine does not return */
                FUN_2c62c82c(3,DAT_2c5f89a0,0xe7,DAT_2c5f899c,DAT_2c5f8998,DAT_2c5f8994);
              }
              if (*(char *)(local_ffc + iVar18) != '[') goto LAB_2c5f838e;
              local_fec = local_fec + 2;
              piVar8 = (int *)FUN_2c5f764c(&local_1000,iVar19,iVar18,DAT_2c5f834c,2);
              FUN_2c5f6ebc(&local_1000,1,piVar8);
            }
            else {
LAB_2c5f838e:
              local_fec = local_fec + 1;
              piVar8 = (int *)FUN_2c5f764c(&local_1000,iVar19,iVar19,uVar11,1);
            }
            bVar27 = false;
            break;
          case '\"':
          case '\'':
          case '*':
          case '_':
            local_1030 = 0;
            local_1010 = (undefined4 *)0x0;
            uVar13 = (param_4 & 0x7ff) >> 10;
            if (local_fec == 0) {
              local_1010 = (undefined4 *)0xa;
            }
            else {
              iVar19 = local_fec + -1;
              pbVar12 = (byte *)(local_ffc + iVar19);
              if ((*(byte *)(local_ffc + iVar19) >> 6 == 2) && (0 < iVar19)) {
                pbVar6 = (byte *)(local_ffc + local_fec + -2);
                do {
                  pbVar12 = pbVar6;
                  iVar19 = iVar19 + -1;
                  if (*pbVar12 >> 6 != 2) break;
                  pbVar6 = pbVar12 + -1;
                } while (0 < iVar19);
                iVar19 = local_fec - iVar19;
              }
              else {
                iVar19 = 1;
              }
              iVar19 = FUN_2c5fa034(pbVar12,iVar19,&local_1010);
              if (iVar19 == -1) {
                local_1010 = (undefined4 *)0xa;
              }
            }
            bVar2 = cVar17 == '\'';
            bVar3 = cVar17 == '\"';
            bVar27 = bVar2 || bVar3;
            if (bVar2 || bVar3) {
              local_fec = local_fec + 1;
              iVar19 = FUN_2c5fa034(local_ffc + local_fec,local_ff8 - local_fec,&local_1030);
              if (iVar19 == -1) {
                pcVar24 = (char *)0x1;
                local_1030 = 10;
              }
              else {
                pcVar24 = (char *)0x1;
              }
LAB_2c5f7e3a:
              iVar19 = FUN_2c5fa2fc(local_1030);
              if (iVar19 == 0) {
                iVar19 = FUN_2c5fa348(local_1030);
                if ((iVar19 == 0) || (iVar19 = FUN_2c5fa2fc(local_1010), iVar19 != 0)) {
                  bVar26 = true;
                }
                else {
                  iVar19 = FUN_2c5fa348(local_1010);
                  bVar26 = iVar19 != 0;
                }
              }
              else {
                bVar26 = false;
              }
              iVar19 = FUN_2c5fa2fc(local_1010);
              if (iVar19 == 0) {
                iVar19 = FUN_2c5fa348(local_1010);
                if ((iVar19 == 0) || (iVar19 = FUN_2c5fa2fc(local_1030), iVar19 != 0)) {
                  if (cVar17 != '_') {
                    if (!bVar2 && !bVar3) {
                      bVar27 = true;
                      goto LAB_2c5f8840;
                    }
                    bVar4 = bVar27;
                    if (bVar26) goto LAB_2c5f8ca4;
                    goto LAB_2c5f8cce;
                  }
                  if (!bVar26) {
                    bVar26 = false;
                    bVar27 = true;
                    local_1010 = (undefined4 *)(local_ffc + (local_fec - (int)pcVar24));
                    local_100c = pcVar24;
                    piVar8 = (int *)FUN_2c5f764c(&local_1000,local_fec - (int)pcVar24,local_fec + -1
                                                 ,local_1010,pcVar24);
                    goto LAB_2c5f8b62;
                  }
LAB_2c5f8f3a:
                  iVar19 = FUN_2c5fa348(local_1010);
                  bVar26 = iVar19 != 0;
                  iVar18 = FUN_2c5fa348(local_1030);
                  bVar27 = iVar18 != 0;
                  bVar4 = iVar18 != 0 || iVar19 != 0;
                }
                else {
                  iVar19 = FUN_2c5fa348(local_1030);
                  bVar27 = iVar19 != 0;
                  bVar4 = bVar27;
                  if (cVar17 == '_') {
                    if (bVar26) {
                      if (iVar19 == 0) goto LAB_2c5f8ec8;
                      goto LAB_2c5f8f3a;
                    }
                  }
                  else {
                    if (bVar2 || bVar3) {
                      if (bVar26) {
                        if (iVar19 == 0) goto LAB_2c5f7e6e;
LAB_2c5f8ca4:
                        if (local_1010 == (undefined4 *)0x5b || local_1010 == (undefined4 *)0x28) {
                          bVar27 = true;
                          goto LAB_2c5f8cba;
                        }
                        bVar26 = false;
                        bVar27 = true;
                        bVar4 = true;
                      }
                      goto LAB_2c5f8cce;
                    }
LAB_2c5f8840:
                    bVar4 = (bool)(bVar27 | bVar26);
                  }
                }
LAB_2c5f8846:
                if ((uVar13 == 0) || (!bVar3)) {
LAB_2c5f8b40:
                  local_1010 = (undefined4 *)(local_ffc + (local_fec - (int)pcVar24));
                  local_100c = pcVar24;
                  piVar8 = (int *)FUN_2c5f764c(&local_1000,local_fec - (int)pcVar24,local_fec + -1,
                                               local_1010,pcVar24);
                  if (bVar4) goto LAB_2c5f8b62;
                }
                else {
                  local_1010 = DAT_2c5f89a4;
                  if (bVar27) {
                    local_1010 = DAT_2c5f89a8;
                  }
LAB_2c5f8ce6:
                  local_100c = (char *)0x3;
                  piVar8 = (int *)FUN_2c5f764c(&local_1000,local_fec - (int)pcVar24,local_fec + -1,
                                               local_1010,3);
                  if (bVar4) goto LAB_2c5f8b6a;
                }
              }
              else {
                if (cVar17 != '_') {
                  if (!bVar2 && !bVar3) goto LAB_2c5f8840;
                  if (!bVar26) {
                    bVar27 = false;
                    bVar4 = false;
                    goto LAB_2c5f8cce;
                  }
LAB_2c5f7e6e:
                  bVar27 = false;
LAB_2c5f8cba:
                  if (local_1010 == (undefined4 *)0x5d || local_1010 == (undefined4 *)0x29) {
                    bVar26 = false;
                    bVar4 = bVar27;
                  }
                  else {
                    bVar26 = true;
                    bVar4 = bVar26;
                  }
LAB_2c5f8cce:
                  if (uVar13 == 0) goto LAB_2c5f8b40;
                  if (!bVar2) goto LAB_2c5f8846;
                  local_1010 = DAT_2c5f8ff4;
                  goto LAB_2c5f8ce6;
                }
                if (!bVar26) goto LAB_2c5f85c0;
LAB_2c5f8ec8:
                bVar26 = true;
                bVar27 = false;
                local_1010 = (undefined4 *)(local_ffc + (local_fec - (int)pcVar24));
                local_100c = pcVar24;
                piVar8 = (int *)FUN_2c5f764c(&local_1000,local_fec - (int)pcVar24,local_fec + -1,
                                             local_1010,pcVar24);
LAB_2c5f8b62:
                if (((cVar17 == '\'') || (cVar17 == '\"')) && ((param_4 & 0x400) == 0))
                goto LAB_2c5f8036;
LAB_2c5f8b6a:
                piVar9 = (int *)(*(code *)*local_1000)(1,0x18);
                *(char *)(piVar9 + 5) = cVar17;
                *(bool *)((int)piVar9 + 0x15) = bVar26;
                *(bool *)((int)piVar9 + 0x16) = bVar27;
                piVar9[2] = (int)piVar8;
                piVar9[3] = local_fec;
                piVar9[4] = piVar8[8];
                *piVar9 = (int)local_fdc;
                piVar9[1] = 0;
                if (local_fdc != (int *)0x0) {
                  local_fdc[1] = (int)piVar9;
                }
                local_fdc = piVar9;
              }
            }
            else {
              pcVar24 = (char *)0x0;
              for (; local_fec < local_ff8; local_fec = local_fec + 1) {
                if (*(char *)(local_ffc + local_fec) == '\0') {
                    /* WARNING: Subroutine does not return */
                  FUN_2c62c82c(3,DAT_2c5f8638,0xe7,DAT_2c5f8640,DAT_2c5f863c,DAT_2c5f8634);
                }
                if (cVar17 != *(char *)(local_ffc + local_fec)) break;
                pcVar24 = pcVar24 + 1;
              }
              iVar19 = FUN_2c5fa034(local_ffc + local_fec,local_ff8 - local_fec,&local_1030);
              if (iVar19 == -1) {
                local_1030 = 10;
              }
              if (pcVar24 != (char *)0x0) goto LAB_2c5f7e3a;
LAB_2c5f85c0:
              local_1010 = (undefined4 *)(local_ffc + (local_fec - (int)pcVar24));
              local_100c = pcVar24;
              piVar8 = (int *)FUN_2c5f764c(&local_1000,local_fec - (int)pcVar24,local_fec + -1,
                                           local_1010,pcVar24);
            }
            goto LAB_2c5f8036;
          case '&':
            local_fec = local_fec + 1;
            local_1010 = local_1000;
            local_1008 = 0;
            local_1004 = 0;
            local_100c = DAT_2c5f8058;
            iVar19 = FUN_2c5f4e70(&local_1010,local_ffc + local_fec,local_ff8 - local_fec);
            if (iVar19 < 1) {
              piVar8 = (int *)FUN_2c5f764c(&local_1000,local_fec + -1,local_fec + -1,DAT_2c5f8c70,1)
              ;
            }
            else {
              iVar18 = local_fec + iVar19;
              local_fec = iVar18;
              piVar8 = (int *)(*(code *)*local_1000)(1,0x4c);
              *piVar8 = (int)local_1000;
              piVar8[0xb] = local_ff0;
              piVar8[9] = local_ff0;
              piVar8[10] = (iVar18 - iVar19) + local_fe4 + local_fe8;
              piVar8[0xc] = local_fe4 + iVar18 + local_fe8;
              *(undefined2 *)(piVar8 + 0xd) = 0xe;
              piVar8[8] = local_1004;
              iVar19 = FUN_2c5f6ba8(&local_1010);
              piVar8[7] = iVar19;
            }
            goto LAB_2c5f8036;
          case '-':
            iVar18 = local_fec + 1;
            uVar14 = DAT_2c5f8654;
            if (((int)(param_4 << 0x15) < 0) && (iVar18 < local_ff8)) {
              local_fec = iVar18;
              if (*(char *)(local_ffc + iVar18) == '\0') {
                    /* WARNING: Subroutine does not return */
                FUN_2c62c82c(3,DAT_2c5f8638,0xe7,DAT_2c5f8640,DAT_2c5f863c,DAT_2c5f8634);
              }
              if (*(char *)(local_ffc + iVar18) == '-') {
                while ((*(char *)(local_ffc + local_fec) == '-' &&
                       (local_fec = local_fec + 1, local_fec < local_ff8))) {
                  if (*(char *)(local_ffc + local_fec) == '\0') {
                    /* WARNING: Subroutine does not return */
                    FUN_2c62c82c(3,DAT_2c5f8c68,0xe7,DAT_2c5f8640,DAT_2c5f863c,DAT_2c5f8634);
                  }
                }
                iVar19 = local_fec - iVar19;
                local_1008 = 0;
                local_1004 = 0;
                local_100c = DAT_2c5f8648;
                iVar7 = iVar19 / 3;
                local_1010 = local_1000;
                if (iVar19 % 3 == 0) {
                  iVar23 = 0;
                  if (2 < iVar19) goto LAB_2c5f8428;
                }
                else {
                  if (iVar19 * -0x80000000 < 0) {
                    if (iVar19 % 3 == 2) {
                      iVar7 = (int)((ulonglong)((longlong)DAT_2c5f9018 * (longlong)(iVar19 + -2)) >>
                                   0x20) - (iVar19 + -2 >> 0x1f);
                      if (iVar19 < 5) {
                        FUN_2c5f6b70(&local_1010,DAT_2c5f9048);
                        goto LAB_2c5f844a;
                      }
                      iVar23 = 1;
LAB_2c5f8428:
                      do {
                        FUN_2c5f6b70(&local_1010,uVar11);
                        iVar7 = iVar7 + -1;
                      } while (iVar7 != 0);
                      goto LAB_2c5f8434;
                    }
                    iVar23 = 2;
                    iVar7 = (int)((ulonglong)((longlong)DAT_2c5f8c74 * (longlong)(iVar19 + -4)) >>
                                 0x20) - (iVar19 + -4 >> 0x1f);
                    uVar14 = DAT_2c5f864c;
                    if (6 < iVar19) goto LAB_2c5f8428;
                  }
                  else {
                    if (iVar19 < 0) {
                      iVar19 = iVar19 + 1;
                    }
                    iVar23 = iVar19 >> 1;
LAB_2c5f8434:
                    uVar14 = DAT_2c5f864c;
                    if (iVar23 < 1) goto LAB_2c5f844a;
                  }
                  do {
                    FUN_2c5f6b70(&local_1010,uVar14);
                    iVar23 = iVar23 + -1;
                  } while (iVar23 != 0);
                }
LAB_2c5f844a:
                iVar19 = local_fec;
                piVar8 = (int *)(*(code *)*local_1000)(1,0x4c);
                *piVar8 = (int)local_1000;
                piVar8[10] = iVar18 + local_fe4 + local_fe8;
                piVar8[0xc] = local_fe4 + iVar19 + local_fe8;
                piVar8[0xb] = local_ff0;
                piVar8[9] = local_ff0;
                *(undefined2 *)(piVar8 + 0xd) = 0xe;
                piVar8[8] = local_1004;
                iVar19 = FUN_2c5f6ba8(&local_1010);
                piVar8[7] = iVar19;
                goto LAB_2c5f8036;
              }
            }
LAB_2c5f855c:
            local_fec = iVar19 + 1;
            piVar8 = (int *)FUN_2c5f764c(&local_1000,iVar19,iVar19,uVar14,1);
LAB_2c5f8036:
            bVar27 = false;
            break;
          case '.':
            iVar18 = local_fec + 1;
            uVar11 = DAT_2c5f8644;
            if ((-1 < (int)(param_4 << 0x15)) || (local_ff8 <= iVar18)) goto LAB_2c5f838e;
            if (*(char *)(local_ffc + iVar18) == '\0') {
              local_fec = iVar18;
                    /* WARNING: Subroutine does not return */
              FUN_2c62c82c(3,DAT_2c5f8638,0xe7,DAT_2c5f8640,DAT_2c5f863c,DAT_2c5f8634);
            }
            if (*(char *)(local_ffc + iVar18) != '.') goto LAB_2c5f838e;
            iVar18 = local_fec + 2;
            if (local_ff8 <= iVar18) {
LAB_2c5f8e4a:
              iVar7 = local_fec + 1;
              local_fec = iVar18;
              piVar8 = (int *)FUN_2c5f764c(&local_1000,iVar19,iVar7,DAT_2c5f9010,2);
              goto LAB_2c5f8036;
            }
            if (*(char *)(local_ffc + iVar18) == '\0') {
              local_fec = iVar18;
                    /* WARNING: Subroutine does not return */
              FUN_2c62c82c(3,DAT_2c5f9004,0xe7,DAT_2c5f900c,DAT_2c5f9008,DAT_2c5f9000);
            }
            if (*(char *)(local_ffc + iVar18) != '.') goto LAB_2c5f8e4a;
            local_fec = local_fec + 3;
            bVar27 = false;
            piVar8 = (int *)FUN_2c5f764c(&local_1000,iVar19,iVar18,DAT_2c5f835c,3);
            break;
          case '[':
            local_fec = local_fec + 1;
            piVar8 = (int *)FUN_2c5f764c(&local_1000,iVar19,iVar19,DAT_2c5f8054,1);
            FUN_2c5f6ebc(&local_1000,0,piVar8);
            goto joined_r0x2c5f8b38;
          case '\\':
            local_fec = local_fec + 1;
            if (local_fec < local_ff8) {
              if (*(char *)(local_ffc + local_fec) == '\0') {
                    /* WARNING: Subroutine does not return */
                FUN_2c62c82c(3,DAT_2c5f89a0,0xe7,DAT_2c5f899c,DAT_2c5f8998,DAT_2c5f8994);
              }
              iVar19 = (int)*(char *)(local_ffc + local_fec);
            }
            else {
              iVar19 = 0;
            }
            iVar18 = FUN_2c5fb9b0(iVar19);
            iVar19 = local_fec;
            if (iVar18 == 0) {
              if (local_fec < local_ff8) {
                if (*(char *)(local_ffc + local_fec) == '\0') {
                    /* WARNING: Subroutine does not return */
                  FUN_2c62c82c(3,DAT_2c5f89a0,0xe7,DAT_2c5f899c,DAT_2c5f8998,DAT_2c5f8994);
                }
                if (*(char *)(local_ffc + local_fec) == '\r') {
                  local_fec = local_fec + 1;
                  if (local_ff8 <= local_fec) goto LAB_2c5f7eca;
                  bVar27 = true;
                }
                else {
                  bVar27 = false;
                }
                if (*(char *)(local_ffc + local_fec) == '\0') {
                    /* WARNING: Subroutine does not return */
                  FUN_2c62c82c(3,DAT_2c5f9004,0xe7,DAT_2c5f900c,DAT_2c5f9008,DAT_2c5f9000);
                }
                if (*(char *)(local_ffc + local_fec) == '\n') {
                  local_fec = local_fec + 1;
                }
                else if ((local_fec < local_ff8) && (!bVar27)) goto LAB_2c5f857a;
LAB_2c5f7eca:
                puVar5 = local_1000;
                bVar27 = false;
                piVar8 = (int *)(*(code *)*local_1000)(1,0x4c);
                *piVar8 = (int)puVar5;
                *(undefined2 *)(piVar8 + 0xd) = 0x10;
                goto LAB_2c5f7eee;
              }
LAB_2c5f857a:
              piVar8 = (int *)FUN_2c5f764c(&local_1000,local_fec + -1,local_fec + -1,DAT_2c5f8658,1)
              ;
            }
            else {
              iVar7 = local_ffc + local_fec;
              iVar18 = local_fec + -1;
              local_fec = local_fec + 1;
              piVar8 = (int *)FUN_2c5f764c(&local_1000,iVar18,iVar19,iVar7,1);
            }
joined_r0x2c5f8b38:
            bVar27 = false;
            break;
          case ']':
            iVar18 = local_fec + 1;
            if (local_fd8 == (int *)0x0) {
              local_1018 = DAT_2c5f9014;
              uStack_1014 = 1;
              uVar14 = DAT_2c5f9014;
              goto LAB_2c5f855c;
            }
            cVar17 = (char)local_fd8[3];
            if ((cVar17 == '\0') && (local_30._1_1_ != '\0')) {
              local_fd8 = (int *)*local_fd8;
              local_fec = iVar18;
              (*(code *)local_1000[2])(piVar8);
              local_1020 = DAT_2c5f8c6c;
              uStack_101c = 1;
              piVar8 = (int *)FUN_2c5f764c(&local_1000,local_fec + -1,local_fec + -1,DAT_2c5f8c6c,1)
              ;
              goto LAB_2c5f8036;
            }
            iVar7 = iVar18;
            if (local_ff8 <= iVar18) {
LAB_2c5f80fe:
              local_fec = iVar7;
              iVar7 = DAT_2c5f8354;
              local_1038 = DAT_2c5f8354;
              local_1034 = 0;
              iVar23 = FUN_2c5f7848(&local_1000,&local_1038);
              if (iVar23 == 0) {
                local_fec = iVar18;
                if (*(char *)((int)piVar8 + 0xe) == '\0') goto LAB_2c5f869e;
              }
              else {
                if ((local_1034 == 0) && (*(char *)((int)piVar8 + 0xe) == '\0')) {
LAB_2c5f869e:
                  local_1038 = local_ffc + piVar8[2];
                  local_1034 = (iVar18 - piVar8[2]) + -1;
                }
                iVar23 = FUN_2c5fbb60(local_fe0,&local_1038);
                puVar5 = local_1000;
                local_1038 = 0;
                local_1034 = 0;
                if (iVar23 != 0) {
                  iVar19 = *(int *)(iVar23 + 8);
                  if (iVar19 == 0) {
                    local_10b4 = 0;
                  }
                  else {
                    iVar22 = FUN_2c66c4ec(iVar19);
                    local_10b4 = (*(code *)puVar5[1])(0,iVar22 + 1);
                    FUN_2c674668(local_10b4,iVar19,iVar22 + 1);
                  }
                  puVar5 = local_1000;
                  iVar23 = *(int *)(iVar23 + 0xc);
                  iVar19 = 0;
                  if (iVar23 != 0) {
                    iVar22 = FUN_2c66c4ec(iVar23);
                    iVar19 = (*(code *)puVar5[1])(0,iVar22 + 1);
                    FUN_2c674668(iVar19,iVar23,iVar22 + 1);
                  }
                  goto LAB_2c5f819c;
                }
              }
              if (local_fd8 != (int *)0x0) {
                local_fd8 = (int *)*local_fd8;
                (*(code *)local_1000[2])();
              }
              local_1028 = DAT_2c5f8c6c;
              local_1024 = 1;
              uVar14 = DAT_2c5f8c6c;
              goto LAB_2c5f855c;
            }
            if (*(char *)(local_ffc + iVar18) == '\0') {
              local_fec = iVar18;
                    /* WARNING: Subroutine does not return */
              FUN_2c62c82c(3,DAT_2c5f8c68,0xe7,DAT_2c5f8c80,DAT_2c5f8c7c,DAT_2c5f8c78);
            }
            if (((*(char *)(local_ffc + iVar18) != '(') ||
                (iVar7 = local_fec + 2, local_fec = iVar18,
                iVar23 = FUN_2c5f187c(DAT_2c5f8350,&local_ffc,iVar7), iVar7 = local_fec, iVar23 < 0)
                ) || (iVar22 = FUN_2c5f717c(&local_ffc,local_fec + 1 + iVar23,&uStack_1048),
                     iVar7 = local_fec, iVar22 < 0)) goto LAB_2c5f80fe;
            iVar22 = iVar23 + local_fec + 1 + iVar22;
            iVar10 = FUN_2c5f187c(DAT_2c5f8ff8,&local_ffc,iVar22);
            iVar10 = iVar22 + iVar10;
            iVar23 = iVar10;
            if (iVar22 != iVar10) {
              iVar7 = FUN_2c5f187c(DAT_2c5f8ffc,&local_ffc,iVar10);
              iVar23 = iVar10 + iVar7;
            }
            iVar22 = FUN_2c5f187c(DAT_2c5f8ff8,&local_ffc,iVar23);
            iVar7 = iVar18;
            if (*(char *)(local_ffc + iVar22 + iVar23) != ')') goto LAB_2c5f80fe;
            local_fec = iVar22 + iVar23 + 1;
            local_1040 = local_ffc + iVar10;
            local_103c = iVar23 - iVar10;
            local_10b4 = FUN_2c5f79a4(local_1000,&uStack_1048);
            iVar19 = FUN_2c5f7a44(local_1000,&local_1040);
            uStack_1048 = 0;
            uStack_1044 = 0;
            local_1040 = 0;
            local_103c = 0;
            iVar7 = DAT_2c5f901c;
LAB_2c5f819c:
            iVar23 = local_fec;
            local_102c = 0;
            local_1030 = iVar7;
            local_fec = iVar18;
            iVar7 = FUN_2c5f7848(&local_1000,&local_1030);
            local_1010 = local_1000;
            local_1008 = 0;
            local_1004 = 0;
            local_100c = DAT_2c5f8358;
            if (iVar7 == 0) {
              local_1030 = local_ffc + piVar8[2];
              local_102c = (iVar18 - piVar8[2]) + -1;
              FUN_2c5f6b40(&local_1010);
              local_1030 = 0;
              local_102c = 0;
            }
            else {
              FUN_2c5f6b40(&local_1010,local_1030,local_102c);
            }
            puVar5 = local_1000;
            if (cVar17 == '\0') {
              uVar25 = 0x16;
            }
            else {
              uVar25 = 0x17;
            }
            local_fec = iVar23;
            piVar9 = (int *)(*(code *)*local_1000)(1,0x4c);
            *(undefined2 *)(piVar9 + 0xd) = uVar25;
            *piVar9 = (int)puVar5;
            piVar9[0xf] = local_10b4;
            piVar9[0x10] = iVar19;
            iVar19 = FUN_2c5f6ba8(&local_1010);
            piVar9[0xb] = local_ff0;
            piVar9[9] = local_ff0;
            piVar9[0xe] = iVar19;
            piVar9[10] = *(int *)(piVar8[1] + 0x28);
            piVar9[0xc] = local_fec + local_fe4 + local_fe8;
            FUN_2c5f9e5c(piVar8[1],piVar9);
            iVar19 = *(int *)(piVar8[1] + 4);
            while (iVar19 != 0) {
              iVar7 = *(int *)(iVar19 + 4);
              FUN_2c5f9e14(iVar19);
              iVar18 = piVar9[5];
              *(undefined4 *)(iVar19 + 4) = 0;
              *(int *)(iVar19 + 8) = iVar18;
              *(int **)(iVar19 + 0xc) = piVar9;
              piVar9[5] = iVar19;
              if (iVar18 == 0) {
                piVar9[4] = iVar19;
                iVar19 = iVar7;
              }
              else {
                *(int *)(iVar18 + 4) = iVar19;
                iVar19 = iVar7;
              }
            }
            iVar19 = piVar9[3];
            if (iVar19 == 0) {
              FUN_2c5f9d24(piVar8[1]);
              FUN_2c5f7280(&local_1000,piVar8[2]);
              if (local_fd8 != (int *)0x0) goto LAB_2c5f82ce;
LAB_2c5f82dc:
              if (cVar17 != '\0') goto LAB_2c5f7d02;
            }
            else {
              iVar18 = *(int *)(iVar19 + 0x48);
              if (iVar18 == 0) {
                iVar19 = FUN_2c5f9dd0(iVar19);
                iVar18 = piVar9[3];
                uVar11 = FUN_2c5f0db8(*(undefined4 *)(iVar19 + 0x48));
                *(undefined4 *)(iVar18 + 0x48) = uVar11;
                iVar18 = *(int *)(piVar9[3] + 0x48);
              }
              if (cVar17 != '\0') {
                iVar19 = FUN_2c5f0cc8();
                iVar18 = piVar9[0xe];
                piVar9[0x12] = iVar19;
                if ((iVar18 == 0) && (iVar18 = piVar9[0x10], iVar18 == 0)) {
                  iVar18 = piVar9[0xf];
                }
                FUN_2c5f0ce8(iVar19,iVar18);
                FUN_2c5f9d24(piVar8[1]);
                FUN_2c5f7280(&local_1000,piVar8[2]);
                if (local_fd8 == (int *)0x0) goto LAB_2c5f7d02;
LAB_2c5f82ce:
                local_fd8 = (int *)*local_fd8;
                (*(code *)local_1000[2])();
                goto LAB_2c5f82dc;
              }
              iVar19 = FUN_2c5f07b0(iVar18);
              iVar18 = piVar9[0xe];
              piVar9[0x12] = iVar19;
              if ((iVar18 == 0) && (iVar18 = piVar9[0x10], iVar18 == 0)) {
                iVar18 = piVar9[0xf];
              }
              FUN_2c5f07d4(iVar19,iVar18);
              FUN_2c5f9d24(piVar8[1]);
              FUN_2c5f7280(&local_1000,piVar8[2]);
              if (local_fd8 != (int *)0x0) goto LAB_2c5f82ce;
            }
            local_30 = CONCAT11(1,(char)local_30);
            goto LAB_2c5f7d02;
          case '`':
            iVar18 = 0;
            while( true ) {
              if (cVar17 == '\0') {
                    /* WARNING: Subroutine does not return */
                FUN_2c62c82c(3,DAT_2c5f89a0,0xe7,DAT_2c5f899c,DAT_2c5f8998,DAT_2c5f8994);
              }
              if (*(char *)(local_ffc + local_fec) != '`') break;
              local_fec = local_fec + 1;
              iVar18 = iVar18 + 1;
              if (local_ff8 <= local_fec) break;
              cVar17 = *(char *)(local_ffc + local_fec);
            }
            iVar7 = local_fec;
            local_1030 = local_ffc + iVar19;
            local_102c = iVar18;
            if ((iVar18 < 0x3e9) && (((char)local_30 == '\0' || (local_fec < aiStack_fd4[iVar18]))))
            {
              do {
                while( true ) {
                  if (local_ff8 <= local_fec) {
                    local_30 = CONCAT11(local_30._1_1_,1);
                    goto LAB_2c5f874a;
                  }
                  cVar17 = *(char *)(local_ffc + local_fec);
                  if (cVar17 == '\0') {
                    /* WARNING: Subroutine does not return */
                    FUN_2c62c82c(3,DAT_2c5f89a0,0xe7,DAT_2c5f899c,DAT_2c5f8998,DAT_2c5f8994);
                  }
                  if (cVar17 == '\0' || cVar17 == '`') break;
                  local_fec = local_fec + 1;
                }
                iVar22 = 0;
                iVar23 = iVar22;
                do {
                  if (*(char *)(local_ffc + local_fec) == '\0') {
                    /* WARNING: Subroutine does not return */
                    FUN_2c62c82c(3,DAT_2c5f89a0,0xe7,DAT_2c5f899c,DAT_2c5f8998,DAT_2c5f8994);
                  }
                  if (*(char *)(local_ffc + local_fec) != '`') break;
                  local_fec = local_fec + 1;
                  iVar23 = iVar23 + 1;
                } while (local_fec < local_ff8);
                iVar10 = local_fec;
              } while ((1000 < iVar23) ||
                      (aiStack_fd4[iVar23] = local_fec - iVar23, iVar18 != iVar23));
              if (local_fec == 0) goto LAB_2c5f874a;
              iVar23 = 0;
              local_1010 = local_1000;
              iVar19 = local_fec - iVar7;
              local_100c = DAT_2c5f89ac;
              local_1008 = 0;
              local_1004 = 0;
              FUN_2c5f6a88(&local_1010,local_ffc + iVar7,iVar19 - iVar18);
              if (local_1004 < 1) {
LAB_2c5f89f4:
                FUN_2c5f6bcc(&local_1010,iVar23);
              }
              else {
                iVar15 = 0;
                do {
                  cVar17 = local_100c[iVar15];
                  if (cVar17 == '\n') {
LAB_2c5f8914:
                    local_100c[iVar23] = ' ';
LAB_2c5f891c:
                    iVar23 = iVar23 + 1;
                    if (local_100c[iVar15] != ' ') {
                      iVar22 = 1;
                    }
                  }
                  else {
                    if (cVar17 != '\r') {
                      local_100c[iVar23] = cVar17;
                      goto LAB_2c5f891c;
                    }
                    if (local_100c[iVar15 + 1] != '\n') goto LAB_2c5f8914;
                    iVar22 = 1;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < local_1004);
                if (((iVar22 == 0) || (*local_100c != ' ')) || (local_100c[iVar23 + -1] != ' '))
                goto LAB_2c5f89f4;
                FUN_2c5f6be0(&local_1010,1);
                FUN_2c5f6bcc(&local_1010,iVar23 + -2);
              }
              piVar8 = (int *)(*(code *)*local_1000)(1,0x4c);
              *piVar8 = (int)local_1000;
              piVar8[0xc] = local_fe8 + (iVar10 - iVar18) + local_fe4;
              piVar8[10] = iVar7 + 1 + local_fe4 + local_fe8;
              piVar8[0xb] = local_ff0;
              piVar8[9] = local_ff0;
              *(undefined2 *)(piVar8 + 0xd) = 0x11;
              piVar8[8] = local_1004;
              iVar7 = FUN_2c5f6ba8(&local_1010);
              piVar8[7] = iVar7;
              if (((int)(param_4 << 0x1e) < 0) &&
                 (iVar7 = (local_fec - iVar19) - iVar18, iVar19 != 0)) {
                pcVar21 = (char *)(local_ffc + iVar19 + iVar7);
                iVar19 = 0;
                iVar23 = 0;
                pcVar24 = (char *)(local_ffc + iVar7);
                do {
                  while (pcVar16 = pcVar24 + 1, *pcVar24 == '\n') {
                    iVar23 = iVar23 + 1;
                    iVar19 = 0;
                    iVar7 = 0;
                    pcVar24 = pcVar16;
                    if (pcVar21 == pcVar16) goto LAB_2c5f8a8a;
                  }
                  iVar19 = iVar19 + 1;
                  iVar7 = iVar19;
                  pcVar24 = pcVar16;
                } while (pcVar21 != pcVar16);
LAB_2c5f8a8a:
                if (iVar23 != 0) {
                  piVar8[0xc] = iVar7;
                  local_fe4 = (iVar7 - local_fec) + iVar18;
                  local_ff0 = local_ff0 + iVar23;
                  piVar8[0xb] = piVar8[0xb] + iVar23;
                }
              }
            }
            else {
LAB_2c5f874a:
              local_fec = iVar7;
              piVar8 = (int *)FUN_2c5f764c(&local_1000,iVar19,iVar18 + iVar19 + -1,
                                           local_ffc + iVar19,iVar18);
            }
            bVar27 = true;
            iVar19 = FUN_2c5f0f5c(*(undefined4 *)(param_2 + 0x48));
            piVar8[0x12] = iVar19;
            goto LAB_2c5f7eee;
          }
          goto joined_r0x2c5f8b38;
        }
      }
    }
  }
LAB_2c5f7ba2:
  FUN_2c5f7280(&local_1000,0);
  piVar8 = (int *)0;
  if (local_fdc != (int *)0x0) {
    do {
      FUN_2c5f6ef4(&local_1000);
    } while (local_fdc != (int *)0x0);
    piVar8 = (int *)0;
  }
  while (local_fdc = piVar8, local_fd8 != (int *)0x0) {
    local_fd8 = (int *)*local_fd8;
    (*(code *)local_1000[2])();
    piVar8 = local_fdc;
  }
  if ((*DAT_2c5f7d40 ^ local_2c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(0,*DAT_2c5f7d40 ^ local_2c,0);
  while (pcVar24 = pcVar24 + -1, pcVar24 != (char *)0x0) {
LAB_2c5f7da4:
    pcVar21 = pcVar21 + -1;
    iVar7 = FUN_2c5fb998((int)*pcVar21);
    if (iVar7 == 0) break;
  }
LAB_2c5f7db0:
  local_100c = pcVar24;
  piVar8 = (int *)FUN_2c5f764c(&local_1000,iVar19,iVar18 + -1,local_1010,pcVar24);
  bVar27 = local_fd8 == (int *)0x0;
joined_r0x2c5f8b38:
  if (piVar8 != (int *)0x0) {
LAB_2c5f7eee:
    iVar19 = *(int *)(param_2 + 0x14);
    piVar8[3] = param_2;
    piVar8[1] = 0;
    piVar8[2] = iVar19;
    *(int **)(param_2 + 0x14) = piVar8;
    if (iVar19 == 0) {
      *(int **)(param_2 + 0x10) = piVar8;
    }
    else {
      *(int **)(iVar19 + 4) = piVar8;
    }
    if (bVar27) {
      FUN_2c5f6f50(param_2,piVar8);
    }
  }
LAB_2c5f7d02:
  if (local_ff8 <= local_fec) goto LAB_2c5f7ba2;
  goto LAB_2c5f7b80;
}

