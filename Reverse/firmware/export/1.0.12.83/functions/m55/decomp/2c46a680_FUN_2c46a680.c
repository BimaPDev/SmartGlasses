/* FUN_2c46a680 @ 0x2c46a680 */

undefined4 FUN_2c46a680(int param_1,byte *param_2,int param_3)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  byte bVar10;
  short *psVar11;
  char cVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  byte *pbVar15;
  int iVar16;
  char *pcVar17;
  uint uVar18;
  short *psVar19;
  uint uVar20;
  uint uVar21;
  undefined4 in_cr0;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 local_6c;
  byte local_59;
  int local_58;
  int iStack_54;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  
  local_44 = *DAT_2c46a930;
  local_59 = 1;
  iVar3 = FUN_2c669494(4,0,0);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_2c66b660();
  }
  FUN_2c669494(4,DAT_2c46a934);
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  if (-2 < param_3) {
    iVar16 = *(int *)(param_1 + 0xc);
    psVar11 = *(short **)(param_1 + 0x28);
    uVar14 = (undefined4)DAT_2c46a918;
    local_6c = 0;
LAB_2c46a6da:
    if (param_3 != iVar4) {
      local_59 = *param_2;
      do {
        iVar4 = DAT_2c46ac7c;
        psVar19 = psVar11 + iVar16 * 8;
        cVar12 = (char)psVar11[iVar16 * 8];
        pbVar15 = param_2;
        bVar10 = local_59;
        switch(cVar12) {
        case '\0':
          iVar5 = (int)(char)local_59;
          bVar10 = local_59;
          if ((int)((uint)*(byte *)(DAT_2c46ac7c + iVar5) << 0x1c) < 0) {
            bVar1 = false;
            iVar8 = *(int *)(param_1 + 0x18) - (int)param_2;
            pbVar15 = param_2 + (param_3 - *(int *)(param_1 + 0x18));
            do {
              param_2 = param_2 + 1;
              *(byte **)(param_1 + 0x18) = param_2 + iVar8;
              if (iVar5 == 0) {
                if (bVar1) {
                  cVar12 = (char)*psVar19;
                  local_59 = (byte)iVar5;
                  goto LAB_2c46a776;
                }
                cVar12 = (char)*psVar19;
                goto LAB_2c46afa4;
              }
              if (pbVar15 == param_2) {
                if (bVar1) {
                  local_59 = (byte)iVar5;
                }
                if ((iVar16 == 0) && (*psVar19 == 0x200)) {
                  *(undefined1 *)(param_1 + 0x1c) = 0;
                  cVar12 = (char)*psVar19;
                }
                else {
                  *(undefined1 *)(param_1 + 0x1c) = 1;
                  cVar12 = (char)*psVar19;
                }
                goto LAB_2c46afa4;
              }
              iVar5 = (int)(char)*param_2;
              bVar1 = true;
              bVar10 = *param_2;
            } while ((int)((uint)*(byte *)(iVar4 + iVar5) << 0x1c) < 0);
          }
          local_59 = bVar10;
          if ((iVar5 == 0x2f) && ((*(uint *)(param_1 + 0x2c) & 1) == 0)) {
            FUN_2c46a598(*(undefined4 *)(param_1 + 4));
            piVar6 = *(int **)(param_1 + 4);
            if (piVar6[2] - piVar6[1] < 2) {
              FUN_2c46a48c(piVar6,&local_59,1);
            }
            else {
              *(byte *)(*piVar6 + piVar6[1]) = local_59;
              *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(*(int *)(param_1 + 4) + 4) + 1;
              *(undefined1 *)(**(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[1]) = 0;
            }
            pbVar15 = param_2 + 1;
            *(undefined1 *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10) = 4;
            psVar11 = *(short **)(param_1 + 0x28);
            iVar16 = *(int *)(param_1 + 0xc);
            psVar19 = psVar11 + iVar16 * 8;
            goto LAB_2c46a760;
          }
          *(undefined1 *)psVar19 = *(undefined1 *)((int)psVar19 + 1);
          iVar16 = *(int *)(param_1 + 0xc);
          break;
        case '\x01':
          switch(local_59) {
          case 0x22:
            goto switchD_2c46aa9e_caseD_22;
          default:
            *(undefined1 *)(param_1 + 0x1c) = 4;
            cVar12 = (char)*psVar19;
            goto LAB_2c46afa4;
          case 0x27:
            if (-1 < *(int *)(param_1 + 0x2c) << 0x1f) {
switchD_2c46aa9e_caseD_22:
              pbVar15 = param_2 + 1;
              *(undefined1 *)psVar19 = 8;
              FUN_2c46a598(*(undefined4 *)(param_1 + 4));
              psVar11 = *(short **)(param_1 + 0x28);
              iVar16 = *(int *)(param_1 + 0xc);
              *(byte *)(param_1 + 0x24) = local_59;
              psVar19 = psVar11 + iVar16 * 8;
              goto LAB_2c46a760;
            }
LAB_2c46b584:
            *(undefined1 *)(param_1 + 0x1c) = 4;
            cVar12 = (char)*psVar19;
            goto LAB_2c46afae;
          case 0x2d:
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
            *(undefined1 *)psVar19 = 0xc;
            FUN_2c46a598(*(undefined4 *)(param_1 + 4));
            iVar16 = *(int *)(param_1 + 0xc);
            *(undefined4 *)(param_1 + 0x10) = 0;
            goto LAB_2c46a7b6;
          case 0x46:
          case 0x54:
          case 0x66:
          case 0x74:
            uVar13 = 0xb;
            break;
          case 0x49:
          case 0x69:
            uVar13 = 0x18;
            break;
          case 0x4e:
          case 0x6e:
            uVar13 = 3;
            break;
          case 0x5b:
            pbVar15 = param_2 + 1;
            *(undefined1 *)psVar19 = 0;
            *(undefined1 *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10 + 1) = 0xd;
            iVar16 = *(int *)(param_1 + 0xc);
            iVar4 = *(int *)(param_1 + 0x28);
            uVar7 = FUN_2c46c8a0();
            *(undefined4 *)(iVar4 + iVar16 * 0x10 + 8) = uVar7;
            psVar11 = *(short **)(param_1 + 0x28);
            iVar16 = *(int *)(param_1 + 0xc);
            psVar19 = psVar11 + iVar16 * 8;
            goto LAB_2c46a760;
          case 0x7b:
            pbVar15 = param_2 + 1;
            *(undefined1 *)psVar19 = 0;
            *(undefined1 *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10 + 1) = 0x10;
            iVar16 = *(int *)(param_1 + 0xc);
            iVar4 = *(int *)(param_1 + 0x28);
            uVar7 = FUN_2c46c580();
            *(undefined4 *)(iVar4 + iVar16 * 0x10 + 8) = uVar7;
            psVar11 = *(short **)(param_1 + 0x28);
            iVar16 = *(int *)(param_1 + 0xc);
            psVar19 = psVar11 + iVar16 * 8;
            goto LAB_2c46a760;
          }
          *(undefined1 *)psVar19 = uVar13;
          FUN_2c46a598(*(undefined4 *)(param_1 + 4));
          iVar16 = *(int *)(param_1 + 0xc);
          *(undefined4 *)(param_1 + 0x14) = 0;
          break;
        case '\x02':
          if (iVar16 == 0) {
            if (local_59 != 0) goto LAB_2c46b2da;
            goto LAB_2c46afb8;
          }
          local_6c = FUN_2c46c508(*(undefined4 *)(psVar19 + 4));
          FUN_2c46a5bc(param_1,*(undefined4 *)(param_1 + 0xc));
          iVar16 = *(int *)(param_1 + 0xc) + -1;
          *(int *)(param_1 + 0xc) = iVar16;
          break;
        case '\x03':
          piVar6 = *(int **)(param_1 + 4);
          if (piVar6[2] - piVar6[1] < 2) {
            FUN_2c46a48c(piVar6,&local_59,1);
          }
          else {
            *(byte *)(*piVar6 + piVar6[1]) = local_59;
            *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(*(int *)(param_1 + 4) + 4) + 1;
            *(undefined1 *)(**(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[1]) = 0;
          }
          iVar4 = *(int *)(param_1 + 0x14);
          if (iVar4 < 3) {
            iVar16 = iVar4 + 1;
            iVar5 = iVar16;
            if (iVar4 == 2) goto LAB_2c46b21a;
          }
          else {
            iVar16 = 4;
LAB_2c46b21a:
            iVar5 = 3;
          }
          uVar7 = **(undefined4 **)(param_1 + 4);
          if ((*(uint *)(param_1 + 0x2c) & 1) == 0) {
            iVar8 = FUN_2c66c4fc(DAT_2c46ac74);
            if ((iVar8 != 0) && (iVar16 = FUN_2c66c540(DAT_2c46ac74,uVar7,iVar16), iVar16 != 0)) {
              iVar16 = FUN_2c66c4fc(DAT_2c46ac78,uVar7,iVar5);
              if (iVar16 != 0) goto LAB_2c46abf0;
LAB_2c46abfe:
              uVar7 = uVar14;
              if (iVar4 != 3) goto LAB_2c46b8f6;
              goto LAB_2c46aa02;
            }
          }
          else {
            iVar16 = FUN_2c66c540(DAT_2c46b0ac);
            if (iVar16 != 0) {
LAB_2c46abf0:
              iVar16 = FUN_2c66c540(DAT_2c46ac78,uVar7,iVar5);
              if (iVar16 == 0) goto LAB_2c46abfe;
              iVar16 = *(int *)(param_1 + 0xc);
              *(undefined1 *)(param_1 + 0x1c) = 5;
              psVar19 = (short *)(*(int *)(param_1 + 0x28) + iVar16 * 0x10);
              cVar12 = *(char *)(*(int *)(param_1 + 0x28) + iVar16 * 0x10);
              goto LAB_2c46afa4;
            }
          }
          if (iVar4 == 4) {
            *(undefined4 *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10 + 8) = 0;
            iVar4 = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10;
            uVar13 = 2;
            goto LAB_2c46a96a;
          }
          goto LAB_2c46b8f6;
        case '\x04':
          goto switchD_2c46a6f4_caseD_4;
        case '\x05':
          if (local_59 == 0x2a) goto LAB_2c46b434;
          iVar4 = *(int *)(param_1 + 0x18);
          bVar1 = false;
          goto LAB_2c46ac94;
        case '\x06':
          if (local_59 != 10) {
            iVar4 = *(int *)(param_1 + 0x18);
            bVar1 = false;
            goto LAB_2c46ad18;
          }
          iVar4 = 0;
          goto LAB_2c46b46e;
        case '\a':
          piVar6 = *(int **)(param_1 + 4);
          if (piVar6[2] - piVar6[1] < 2) {
            FUN_2c46a48c(piVar6,&local_59,1);
          }
          else {
            *(byte *)(*piVar6 + piVar6[1]) = local_59;
            *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(*(int *)(param_1 + 4) + 4) + 1;
            *(undefined1 *)(**(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[1]) = 0;
          }
          pbVar15 = param_2 + 1;
          iVar4 = *(int *)(param_1 + 0x28);
          iVar16 = *(int *)(param_1 + 0xc) * 0x10;
          if (local_59 == 0x2f) goto LAB_2c46a8fc;
          *(undefined1 *)(iVar4 + iVar16) = 5;
          psVar11 = *(short **)(param_1 + 0x28);
          iVar16 = *(int *)(param_1 + 0xc);
          psVar19 = psVar11 + iVar16 * 8;
          goto LAB_2c46a760;
        case '\b':
          if (*(byte *)(param_1 + 0x24) != local_59) {
            bVar1 = false;
            goto LAB_2c46adae;
          }
          iVar4 = 0;
          goto LAB_2c46b758;
        case '\t':
          iVar4 = (int)(char)local_59;
          if (iVar4 < 0x76) {
            if (iVar4 < 0x5c) {
              if ((iVar4 == 0x22) || (iVar4 == 0x2f)) goto switchD_2c46ae26_caseD_5c;
            }
            else {
              switch(iVar4) {
              case 0x5c:
switchD_2c46ae26_caseD_5c:
                piVar6 = *(int **)(param_1 + 4);
                if (1 < piVar6[2] - piVar6[1]) {
                  *(byte *)(*piVar6 + piVar6[1]) = local_59;
                  iVar4 = *(int *)(param_1 + 4);
                  iVar16 = *(int *)(iVar4 + 4) + 1;
                  goto LAB_2c46b1a0;
                }
                FUN_2c46a48c(piVar6,&local_59,1);
                goto LAB_2c46b1aa;
              case 0x62:
              case 0x66:
              case 0x6e:
              case 0x72:
              case 0x74:
                if (iVar4 == 0x62) {
                  piVar6 = *(int **)(param_1 + 4);
                  iVar4 = piVar6[1];
                  if (piVar6[2] - iVar4 < 2) {
                    FUN_2c46a48c(piVar6,DAT_2c46b958,1);
                    psVar19 = (short *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10);
                  }
                  else {
                    iVar16 = *piVar6;
                    uVar13 = 8;
LAB_2c46b874:
                    *(undefined1 *)(iVar16 + iVar4) = uVar13;
                    *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(*(int *)(param_1 + 4) + 4) + 1;
                    *(undefined1 *)(**(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[1]) = 0;
                    psVar19 = (short *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10);
                  }
                }
                else if (iVar4 == 0x6e) {
                  piVar6 = *(int **)(param_1 + 4);
                  iVar4 = piVar6[1];
                  if (1 < piVar6[2] - iVar4) {
                    iVar16 = *piVar6;
                    uVar13 = 10;
                    goto LAB_2c46b874;
                  }
                  FUN_2c46a48c(piVar6,DAT_2c46bbdc,1);
                  psVar19 = (short *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10);
                }
                else if (iVar4 == 0x72) {
                  piVar6 = *(int **)(param_1 + 4);
                  iVar4 = piVar6[1];
                  if (1 < piVar6[2] - iVar4) {
                    iVar16 = *piVar6;
                    uVar13 = 0xd;
                    goto LAB_2c46b874;
                  }
                  FUN_2c46a48c(piVar6,DAT_2c46bbe0,1);
                  psVar19 = (short *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10);
                }
                else if (iVar4 == 0x74) {
                  piVar6 = *(int **)(param_1 + 4);
                  iVar4 = piVar6[1];
                  if (1 < piVar6[2] - iVar4) {
                    iVar16 = *piVar6;
                    uVar13 = 9;
                    goto LAB_2c46b874;
                  }
                  FUN_2c46a48c(piVar6,DAT_2c46bbe4,1);
                  psVar19 = (short *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10);
                }
                else if (iVar4 == 0x66) {
                  piVar6 = *(int **)(param_1 + 4);
                  iVar4 = piVar6[1];
                  if (1 < piVar6[2] - iVar4) {
                    iVar16 = *piVar6;
                    uVar13 = 0xc;
                    goto LAB_2c46b874;
                  }
                  FUN_2c46a48c(piVar6,DAT_2c46bbe8,1);
                  psVar19 = (short *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10);
                }
                pbVar15 = param_2 + 1;
                *(undefined1 *)psVar19 = *(undefined1 *)((int)psVar19 + 1);
                psVar11 = *(short **)(param_1 + 0x28);
                iVar16 = *(int *)(param_1 + 0xc);
                psVar19 = psVar11 + iVar16 * 8;
                goto LAB_2c46a760;
              case 0x75:
                pbVar15 = param_2 + 1;
                *(undefined4 *)(param_1 + 0x20) = 0;
                *(undefined4 *)(param_1 + 0x14) = 0;
                *(undefined1 *)psVar19 = 10;
                psVar11 = *(short **)(param_1 + 0x28);
                iVar16 = *(int *)(param_1 + 0xc);
                psVar19 = psVar11 + iVar16 * 8;
                goto LAB_2c46a760;
              }
            }
          }
          *(undefined1 *)(param_1 + 0x1c) = 0xc;
          cVar12 = (char)*psVar19;
          goto LAB_2c46afa4;
        case '\n':
          uVar7 = *DAT_2c46b098;
          uVar21 = 0;
          goto LAB_2c46ae6a;
        case '\v':
          piVar6 = *(int **)(param_1 + 4);
          if (piVar6[2] - piVar6[1] < 2) {
            FUN_2c46a48c(piVar6,&local_59,1);
          }
          else {
            *(byte *)(*piVar6 + piVar6[1]) = local_59;
            *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(*(int *)(param_1 + 4) + 4) + 1;
            *(undefined1 *)(**(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[1]) = 0;
          }
          iVar4 = *(int *)(param_1 + 0x14);
          if (iVar4 < 3) {
            iVar16 = iVar4 + 1;
            iVar5 = iVar16;
          }
          else if (iVar4 == 3) {
            iVar16 = 4;
            iVar5 = iVar16;
          }
          else {
            iVar16 = 4;
            iVar5 = 5;
          }
          uVar7 = **(undefined4 **)(param_1 + 4);
          if ((*(uint *)(param_1 + 0x2c) & 1) == 0) {
            iVar8 = FUN_2c66c4fc(DAT_2c46b09c);
            if ((iVar8 != 0) && (iVar16 = FUN_2c66c540(DAT_2c46b09c,uVar7,iVar16), iVar16 != 0)) {
              iVar16 = FUN_2c66c4fc(DAT_2c46b0a0,uVar7,iVar5);
              if (iVar16 != 0) goto LAB_2c46af5a;
              goto LAB_2c46af68;
            }
LAB_2c46b052:
            if (iVar4 == 4) {
              iVar4 = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10;
              uVar7 = FUN_2c46c644(1,uVar7);
              goto LAB_2c46aa0e;
            }
          }
          else {
            iVar16 = FUN_2c66c540(DAT_2c46b09c);
            if (iVar16 == 0) goto LAB_2c46b052;
LAB_2c46af5a:
            iVar16 = FUN_2c66c540(DAT_2c46b0a0,uVar7,iVar5);
            if (iVar16 != 0) {
              iVar16 = *(int *)(param_1 + 0xc);
              *(undefined1 *)(param_1 + 0x1c) = 6;
              psVar19 = (short *)(*(int *)(param_1 + 0x28) + iVar16 * 0x10);
              cVar12 = *(char *)(*(int *)(param_1 + 0x28) + iVar16 * 0x10);
              goto LAB_2c46afa4;
            }
LAB_2c46af68:
            if (iVar4 == 5) {
              iVar4 = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10;
              uVar7 = FUN_2c46c644(0);
              goto LAB_2c46aa0e;
            }
          }
LAB_2c46b8f6:
          psVar11 = *(short **)(param_1 + 0x28);
          pbVar15 = param_2 + 1;
          *(int *)(param_1 + 0x14) = iVar4 + 1;
          iVar16 = *(int *)(param_1 + 0xc);
          psVar19 = psVar11 + iVar16 * 8;
          goto LAB_2c46a760;
        case '\f':
          uVar21 = (uint)(char)local_59;
          if (uVar21 == 0) {
LAB_2c46a826:
            puVar9 = *(undefined4 **)(param_1 + 4);
            pcVar17 = (char *)*puVar9;
          }
          else {
            uVar7 = *DAT_2c46a938;
            iVar4 = 0;
            do {
              iVar5 = FUN_2c66b60a(uVar7,uVar21);
              if (iVar5 == 0) {
                if (iVar4 == 0) goto LAB_2c46a826;
                break;
              }
              iVar4 = iVar4 + 1;
              if (((uVar21 & 0xffffffdf) == 0x45) || (uVar21 == 0x2e)) {
                *(undefined4 *)(param_1 + 0x10) = 1;
              }
              pbVar15 = param_2 + iVar4;
              iVar5 = *(int *)(param_1 + 0x18) + 1;
              *(int *)(param_1 + 0x18) = iVar5;
              if (iVar5 == param_3) {
                if (iVar16 == 0) {
                  uVar13 = 0;
                  if (*psVar19 != 0x200) {
                    uVar13 = 1;
                  }
                }
                else {
                  uVar13 = 1;
                }
                piVar6 = *(int **)(param_1 + 4);
                *(undefined1 *)(param_1 + 0x1c) = uVar13;
                if (piVar6[2] - piVar6[1] <= iVar4) goto LAB_2c46b2a2;
                FUN_2c674668(*piVar6 + piVar6[1],param_2,iVar4);
                *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(*(int *)(param_1 + 4) + 4) + iVar4;
                goto LAB_2c46acd0;
              }
              local_59 = param_2[iVar4];
              uVar21 = (uint)(char)local_59;
            } while (uVar21 != 0);
            piVar6 = *(int **)(param_1 + 4);
            if (iVar4 < piVar6[2] - piVar6[1]) {
              FUN_2c674668(*piVar6 + piVar6[1],param_2,iVar4);
              *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(*(int *)(param_1 + 4) + 4) + iVar4;
              *(undefined1 *)(**(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[1]) = 0;
            }
            else {
              FUN_2c46a48c(piVar6,param_2,iVar4);
            }
            puVar9 = *(undefined4 **)(param_1 + 4);
            pcVar17 = (char *)*puVar9;
            if (((*pcVar17 == '-') && (iVar4 == 1)) && ((local_59 & 0xdf) == 0x49)) {
              *(undefined1 *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10) = 0x18;
              iVar16 = *(int *)(param_1 + 0xc);
              param_2 = pbVar15;
              break;
            }
          }
          if (*(int *)(param_1 + 0x10) != 0) {
LAB_2c46a834:
            iVar4 = FUN_2c46bc5c(*puVar9,&local_50);
            if (iVar4 != 0) goto LAB_2c46ba42;
            iVar16 = *(int *)(param_1 + 0xc);
            iVar4 = *(int *)(param_1 + 0x28);
            uVar7 = FUN_2c46c768((int)local_50,**(undefined4 **)(param_1 + 4));
            *(undefined4 *)(iVar4 + iVar16 * 0x10 + 8) = uVar7;
            goto LAB_2c46a858;
          }
          iVar4 = FUN_2c46bc74(pcVar17,&local_58);
          if (iVar4 == 0) {
            if (((local_58 == 0 && iStack_54 == 0) ||
                (*(char *)**(undefined4 **)(param_1 + 4) != '0')) ||
               (-1 < *(int *)(param_1 + 0x2c) << 0x1f)) {
              iVar16 = *(int *)(param_1 + 0xc);
              iVar4 = *(int *)(param_1 + 0x28);
              uVar7 = FUN_2c46c6fc();
              *(undefined4 *)(iVar4 + iVar16 * 0x10 + 8) = uVar7;
              goto LAB_2c46a858;
            }
          }
          else if (*(int *)(param_1 + 0x10) != 0) {
            puVar9 = *(undefined4 **)(param_1 + 4);
            goto LAB_2c46a834;
          }
LAB_2c46ba42:
          iVar16 = *(int *)(param_1 + 0xc);
          *(undefined1 *)(param_1 + 0x1c) = 7;
          psVar19 = (short *)(*(int *)(param_1 + 0x28) + iVar16 * 0x10);
          cVar12 = *(char *)(*(int *)(param_1 + 0x28) + iVar16 * 0x10);
          goto LAB_2c46afa4;
        case '\r':
        case '\x16':
          if (local_59 == 0x5d) {
            if (cVar12 == '\x16') goto LAB_2c46b57c;
            goto LAB_2c46b170;
          }
          if (*(int *)(param_1 + 8) + -1 <= iVar16) goto LAB_2c46b908;
          uVar13 = 0xe;
          goto LAB_2c46a7a4;
        case '\x0e':
          FUN_2c46c8d8(*(undefined4 *)(psVar19 + 4),local_6c);
          iVar4 = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10;
          uVar13 = 0xf;
          goto LAB_2c46aa26;
        case '\x0f':
          if (local_59 == 0x5d) goto LAB_2c46b170;
          if (local_59 == 0x2c) {
            pbVar15 = param_2 + 1;
            *(undefined1 *)((int)psVar19 + 1) = 0x16;
            goto LAB_2c46a8f6;
          }
          *(undefined1 *)(param_1 + 0x1c) = 8;
          cVar12 = (char)*psVar19;
          goto LAB_2c46afa4;
        case '\x10':
        case '\x17':
          if (local_59 == 0x7d) {
            if (cVar12 == '\x17') {
LAB_2c46b57c:
              if (*(int *)(param_1 + 0x2c) << 0x1f < 0) goto LAB_2c46b584;
            }
LAB_2c46b170:
            uVar13 = 2;
            goto LAB_2c46a8f2;
          }
          if ((local_59 == 0x22) || (local_59 == 0x27)) {
            *(byte *)(param_1 + 0x24) = local_59;
            pbVar15 = param_2 + 1;
            FUN_2c46a598(*(undefined4 *)(param_1 + 4));
            *(undefined1 *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10) = 0x11;
            psVar11 = *(short **)(param_1 + 0x28);
            iVar16 = *(int *)(param_1 + 0xc);
            psVar19 = psVar11 + iVar16 * 8;
            goto LAB_2c46a760;
          }
          *(undefined1 *)(param_1 + 0x1c) = 9;
          cVar12 = (char)*psVar19;
          goto LAB_2c46afa4;
        case '\x11':
          if (local_59 != *(byte *)(param_1 + 0x24)) {
            bVar1 = false;
            goto LAB_2c46a89a;
          }
          iVar4 = 0;
          goto LAB_2c46b700;
        case '\x12':
          if (local_59 == 0x3a) {
            uVar13 = 0x13;
            goto LAB_2c46a8f2;
          }
          *(undefined1 *)(param_1 + 0x1c) = 10;
          cVar12 = (char)*psVar19;
          goto LAB_2c46afa4;
        case '\x13':
          if (*(int *)(param_1 + 8) + -1 <= iVar16) {
LAB_2c46b908:
            *(undefined1 *)(param_1 + 0x1c) = 2;
            cVar12 = (char)*psVar19;
            goto LAB_2c46afa4;
          }
          uVar13 = 0x14;
LAB_2c46a7a4:
          *(undefined1 *)psVar19 = uVar13;
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
          FUN_2c46a5bc(param_1);
          iVar16 = *(int *)(param_1 + 0xc);
          break;
        case '\x14':
          FUN_2c46c5e8(*(undefined4 *)(psVar19 + 4),*(undefined4 *)(psVar19 + 6),local_6c);
          FUN_2c669588(*(undefined4 *)
                        (*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10 + 0xc));
          *(undefined4 *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10 + 0xc) = 0;
          iVar4 = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10;
          uVar13 = 0x15;
LAB_2c46a96a:
          *(undefined1 *)(iVar4 + 1) = uVar13;
          *(undefined1 *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10) = 0;
          iVar16 = *(int *)(param_1 + 0xc);
          break;
        case '\x15':
          if (local_59 == 0x7d) goto LAB_2c46b170;
          if (local_59 != 0x2c) {
            *(undefined1 *)(param_1 + 0x1c) = 0xb;
            cVar12 = (char)*psVar19;
            goto LAB_2c46afa4;
          }
          uVar13 = 0x17;
LAB_2c46a8f2:
          pbVar15 = param_2 + 1;
          *(undefined1 *)((int)psVar19 + 1) = uVar13;
          goto LAB_2c46a8f6;
        case '\x18':
          piVar6 = *(int **)(param_1 + 4);
          if (piVar6[2] - piVar6[1] < 2) {
            FUN_2c46a48c(piVar6,&local_59,1);
          }
          else {
            *(byte *)(*piVar6 + piVar6[1]) = local_59;
            *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(*(int *)(param_1 + 4) + 4) + 1;
            *(undefined1 *)(**(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[1]) = 0;
          }
          iVar4 = *(int *)(param_1 + 0x14);
          pcVar17 = (char *)**(undefined4 **)(param_1 + 4);
          if (*pcVar17 == '-') {
            pcVar17 = pcVar17 + 1;
          }
          if (((*(int *)(param_1 + 0x2c) << 0x1f < 0) ||
              (iVar16 = FUN_2c66c4fc(DAT_2c46ac70,pcVar17), uVar7 = extraout_s0, iVar16 != 0)) &&
             (iVar16 = FUN_2c66c540(DAT_2c46b0a8,pcVar17), uVar7 = extraout_s0_00, iVar16 != 0)) {
            iVar16 = *(int *)(param_1 + 0xc);
            *(undefined1 *)(param_1 + 0x1c) = 4;
            psVar19 = (short *)(*(int *)(param_1 + 0x28) + iVar16 * 0x10);
            cVar12 = *(char *)(*(int *)(param_1 + 0x28) + iVar16 * 0x10);
            goto LAB_2c46afa4;
          }
          if (iVar4 != 8) {
            psVar11 = *(short **)(param_1 + 0x28);
            iVar16 = *(int *)(param_1 + 0xc);
            pbVar15 = param_2 + 1;
            *(int *)(param_1 + 0x14) = iVar4 + 1;
            psVar19 = psVar11 + iVar16 * 8;
            goto LAB_2c46a760;
          }
          coprocessor_function2(0xb,0,0,in_cr0,in_cr8,in_cr9);
LAB_2c46aa02:
          iVar4 = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10;
          uVar7 = FUN_2c46c72c(uVar7);
LAB_2c46aa0e:
          *(undefined4 *)(iVar4 + 8) = uVar7;
LAB_2c46a858:
          iVar4 = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10;
          uVar13 = 2;
          param_2 = pbVar15;
LAB_2c46aa26:
          *(undefined1 *)(iVar4 + 1) = uVar13;
          *(undefined1 *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10) = 0;
          iVar16 = *(int *)(param_1 + 0xc);
          break;
        default:
          pbVar15 = param_2 + 1;
          goto LAB_2c46a760;
        }
LAB_2c46a7b6:
        psVar11 = *(short **)(param_1 + 0x28);
      } while( true );
    }
    if ((iVar16 == 0) && (*psVar11 == 0x200)) {
      *(undefined1 *)(param_1 + 0x1c) = 0;
      cVar12 = (char)*psVar11;
      psVar19 = psVar11;
    }
    else {
      psVar19 = psVar11 + iVar16 * 8;
      *(undefined1 *)(param_1 + 0x1c) = 1;
      cVar12 = (char)psVar11[iVar16 * 8];
    }
    goto LAB_2c46afa4;
  }
  uVar14 = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0xe;
LAB_2c46afd4:
  if (*DAT_2c46b0a4 == local_44) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
  while( true ) {
    pbVar15 = pbVar15 + 1;
    iVar4 = *(int *)(param_1 + 0x18) + 1;
    *(int *)(param_1 + 0x18) = iVar4;
    if (bVar10 == 0) goto LAB_2c46b274;
    if (iVar4 == param_3) goto LAB_2c46b2ac;
    bVar10 = *pbVar15;
    bVar1 = true;
    if (bVar10 == *(byte *)(param_1 + 0x24)) break;
LAB_2c46a89a:
    if (bVar10 == 0x5c) {
      if (bVar1) {
        local_59 = bVar10;
      }
      piVar6 = *(int **)(param_1 + 4);
      iVar4 = (int)pbVar15 - (int)param_2;
      if (iVar4 < piVar6[2] - piVar6[1]) {
        FUN_2c674668(*piVar6 + piVar6[1],param_2,iVar4);
        *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(*(int *)(param_1 + 4) + 4) + iVar4;
        *(undefined1 *)(**(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[1]) = 0;
      }
      else {
        FUN_2c46a48c(piVar6,param_2,iVar4);
      }
      iVar4 = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10;
      uVar13 = 0x11;
      goto LAB_2c46adf6;
    }
  }
  iVar4 = (int)pbVar15 - (int)param_2;
  local_59 = bVar10;
LAB_2c46b700:
  piVar6 = *(int **)(param_1 + 4);
  if (iVar4 < piVar6[2] - piVar6[1]) {
    FUN_2c674668(*piVar6 + piVar6[1],param_2,iVar4);
    *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(*(int *)(param_1 + 4) + 4) + iVar4;
    *(undefined1 *)(**(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[1]) = 0;
  }
  else {
    FUN_2c46a48c(piVar6,param_2,iVar4);
  }
  pbVar15 = pbVar15 + 1;
  iVar16 = *(int *)(param_1 + 0xc);
  iVar4 = *(int *)(param_1 + 0x28);
  uVar7 = FUN_2c66b660(**(undefined4 **)(param_1 + 4));
  *(undefined4 *)(iVar4 + iVar16 * 0x10 + 0xc) = uVar7;
  *(undefined1 *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10 + 1) = 0x12;
  goto LAB_2c46a8f6;
LAB_2c46ae6a:
  uVar20 = (uint)(char)local_59;
  iVar4 = FUN_2c66b60a(uVar7,uVar20);
  while( true ) {
    if (iVar4 == 0) {
      iVar16 = *(int *)(param_1 + 0xc);
      *(undefined1 *)(param_1 + 0x1c) = 0xc;
      psVar19 = (short *)(*(int *)(param_1 + 0x28) + iVar16 * 0x10);
      cVar12 = *(char *)(*(int *)(param_1 + 0x28) + iVar16 * 0x10);
      goto LAB_2c46afa4;
    }
    if ((int)uVar20 < 0x3a) {
      iVar4 = uVar20 - 0x30;
    }
    else {
      iVar4 = (uVar20 & 7) + 9;
    }
    iVar16 = *(int *)(param_1 + 0x14);
    iVar5 = iVar16 + 1;
    *(int *)(param_1 + 0x14) = iVar5;
    uVar18 = (iVar4 << ((3 - iVar16) * 4 & 0xffU)) + *(int *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = uVar18;
    if (iVar5 == 4) break;
    iVar4 = *(int *)(param_1 + 0x18) + 1;
    *(int *)(param_1 + 0x18) = iVar4;
    if (uVar20 == 0) {
      if (uVar21 != 0) goto LAB_2c46b236;
      psVar19 = (short *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10);
      cVar12 = *(char *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10);
      goto LAB_2c46a776;
    }
    if (iVar4 == param_3) {
      iVar16 = *(int *)(param_1 + 0xc);
      if ((iVar16 == 0) && (**(short **)(param_1 + 0x28) == 0x200)) {
        *(undefined1 *)(param_1 + 0x1c) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x1c) = 1;
      }
      if (uVar21 != 0) goto LAB_2c46b236;
      cVar12 = *(char *)(*(int *)(param_1 + 0x28) + iVar16 * 0x10);
      goto LAB_2c46afae;
    }
    local_59 = param_2[1];
    uVar20 = (uint)(char)local_59;
    iVar4 = FUN_2c66b60a(uVar7,uVar20);
    param_2 = param_2 + 1;
  }
  if (uVar21 == 0) {
LAB_2c46b0f2:
    uVar13 = (undefined1)uVar18;
    if (uVar18 < 0x80) {
      piVar6 = *(int **)(param_1 + 4);
      local_48 = CONCAT31(local_48._1_3_,uVar13);
      if (1 < piVar6[2] - piVar6[1]) {
        *(undefined1 *)(*piVar6 + piVar6[1]) = uVar13;
        iVar4 = *(int *)(param_1 + 4);
        iVar16 = *(int *)(iVar4 + 4) + 1;
        goto LAB_2c46b1a0;
      }
      FUN_2c46a48c(piVar6,&local_48,1);
      goto LAB_2c46b1aa;
    }
    if (uVar18 < 0x800) {
      piVar6 = *(int **)(param_1 + 4);
      local_48 = CONCAT22(local_48._2_2_,CONCAT11(uVar13,(char)(uVar18 >> 6))) & 0xffff3fff | 0x80c0
      ;
      if (2 < piVar6[2] - piVar6[1]) {
        *(ushort *)(*piVar6 + piVar6[1]) = (ushort)local_48;
        iVar4 = *(int *)(param_1 + 4);
        iVar16 = *(int *)(iVar4 + 4) + 2;
        goto LAB_2c46b1a0;
      }
      FUN_2c46a48c(piVar6,&local_48,2);
      goto LAB_2c46b1aa;
    }
  }
  else {
    if ((uVar18 & 0xfc00) != 0xdc00) {
      piVar6 = *(int **)(param_1 + 4);
      iVar4 = piVar6[1];
      if (piVar6[2] - iVar4 < 4) {
        FUN_2c46a48c(piVar6,DAT_2c46b954,3);
        uVar18 = *(uint *)(param_1 + 0x20);
      }
      else {
        iVar16 = *piVar6;
        uVar13 = *(undefined1 *)(DAT_2c46b3b8 + 1);
        *(undefined2 *)(iVar16 + iVar4) = *DAT_2c46b3b8;
        *(undefined1 *)(iVar16 + iVar4 + 2) = uVar13;
        *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(*(int *)(param_1 + 4) + 4) + 3;
        *(undefined1 *)(**(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[1]) = 0;
        uVar18 = *(uint *)(param_1 + 0x20);
      }
      goto LAB_2c46b0f2;
    }
    uVar18 = (DAT_2c46b950 & uVar21 << 10 | uVar18 & 0x3ff) + 0x10000;
    *(uint *)(param_1 + 0x20) = uVar18;
  }
  if ((uVar18 & 0xfc00) != 0xd800) {
    piVar6 = *(int **)(param_1 + 4);
    if ((uVar18 & 0xfc00) == 0xdc00) goto LAB_2c46b82a;
    if (uVar18 < 0x10000) {
      uVar21 = CONCAT13(local_48._3_1_,
                        CONCAT12((char)uVar18,
                                 CONCAT11((byte)((uVar18 << 0x14) >> 0x1a),(char)(uVar18 >> 0xc))))
               & 0xff3fffff;
      local_48._0_2_ = (ushort)uVar21 | 0x80e0;
      uVar2 = (ushort)local_48;
      local_48 = uVar21 | 0x8080e0;
      iVar4 = piVar6[1];
      if (3 < piVar6[2] - iVar4) {
        iVar16 = *piVar6;
        *(ushort *)(iVar16 + iVar4) = uVar2;
        *(undefined1 *)(iVar16 + iVar4 + 2) = local_48._2_1_;
        iVar4 = *(int *)(param_1 + 4);
        iVar16 = *(int *)(iVar4 + 4) + 3;
        goto LAB_2c46b1a0;
      }
      FUN_2c46a48c(piVar6,&local_48,3);
    }
    else {
      if (0x10ffff < uVar18) goto LAB_2c46b82a;
      local_48 = CONCAT13((char)uVar18,
                          CONCAT12((byte)((uVar18 << 0x14) >> 0x1a),
                                   CONCAT11((byte)((uVar18 << 0xe) >> 0x1a),(char)(uVar18 >> 0x12)))
                         ) & 0x3fffffff | 0x808080f0;
      if (piVar6[2] - piVar6[1] < 5) {
        FUN_2c46a48c(piVar6,&local_48,4);
      }
      else {
        *(uint *)(*piVar6 + piVar6[1]) = local_48;
        iVar4 = *(int *)(param_1 + 4);
        iVar16 = *(int *)(iVar4 + 4) + 4;
LAB_2c46b1a0:
        *(int *)(iVar4 + 4) = iVar16;
        *(undefined1 *)(**(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[1]) = 0;
      }
    }
    goto LAB_2c46b1aa;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if ((((iVar4 + 1 == param_3) || (iVar4 + 2 == param_3)) || (param_2[1] != 0x5c)) ||
     (param_2[2] != 0x75)) goto LAB_2c46b828;
  *(int *)(param_1 + 0x18) = iVar4 + 1;
  pbVar15 = param_2 + 1;
  if (local_59 == 0) {
    piVar6 = *(int **)(param_1 + 4);
    iVar4 = piVar6[1];
    if (piVar6[2] - iVar4 < 4) {
      FUN_2c46a48c(piVar6,DAT_2c46b954,3);
      iVar4 = *(int *)(param_1 + 0x18);
    }
    else {
      iVar16 = *piVar6;
      uVar13 = *(undefined1 *)(DAT_2c46b3b8 + 1);
      *(undefined2 *)(iVar16 + iVar4) = *DAT_2c46b3b8;
      *(undefined1 *)(iVar16 + iVar4 + 2) = uVar13;
      *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(*(int *)(param_1 + 4) + 4) + 3;
      *(undefined1 *)(**(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[1]) = 0;
      iVar4 = *(int *)(param_1 + 0x18);
    }
    iVar4 = iVar4 + 1;
    *(int *)(param_1 + 0x18) = iVar4;
    if (local_59 != 0) goto LAB_2c46b148;
LAB_2c46b236:
    piVar6 = *(int **)(param_1 + 4);
    iVar4 = piVar6[1];
    if (piVar6[2] - iVar4 < 4) {
      FUN_2c46a48c(piVar6,DAT_2c46b954,3);
    }
    else {
      iVar16 = *piVar6;
      uVar13 = *(undefined1 *)(DAT_2c46b3b8 + 1);
      *(undefined2 *)(iVar16 + iVar4) = *DAT_2c46b3b8;
      *(undefined1 *)(iVar16 + iVar4 + 2) = uVar13;
      *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(*(int *)(param_1 + 4) + 4) + 3;
      *(undefined1 *)(**(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[1]) = 0;
    }
    goto LAB_2c46acda;
  }
  iVar4 = iVar4 + 3;
  pbVar15 = param_2 + 2;
  *(int *)(param_1 + 0x18) = iVar4;
LAB_2c46b148:
  if (param_3 == iVar4) {
    if ((*(int *)(param_1 + 0xc) != 0) || (uVar13 = 0, **(short **)(param_1 + 0x28) != 0x200)) {
      uVar13 = 1;
    }
    *(undefined1 *)(param_1 + 0x1c) = uVar13;
    goto LAB_2c46b236;
  }
  local_59 = pbVar15[1];
  param_2 = pbVar15 + 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  puVar9 = DAT_2c46b3bc;
  *(undefined4 *)(param_1 + 0x14) = 0;
  uVar7 = *puVar9;
  uVar21 = uVar18;
  goto LAB_2c46ae6a;
LAB_2c46b828:
  piVar6 = *(int **)(param_1 + 4);
LAB_2c46b82a:
  iVar4 = piVar6[1];
  if (piVar6[2] - iVar4 < 4) {
    FUN_2c46a48c(piVar6,DAT_2c46b954,3);
  }
  else {
    iVar16 = *piVar6;
    uVar13 = *(undefined1 *)(DAT_2c46b954 + 1);
    *(undefined2 *)(iVar16 + iVar4) = *DAT_2c46b954;
    *(undefined1 *)(iVar16 + iVar4 + 2) = uVar13;
    *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(*(int *)(param_1 + 4) + 4) + 3;
    *(undefined1 *)(**(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[1]) = 0;
  }
LAB_2c46b1aa:
  pbVar15 = param_2 + 1;
  *(undefined1 *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10) =
       *(undefined1 *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10 + 1);
  psVar11 = *(short **)(param_1 + 0x28);
  iVar16 = *(int *)(param_1 + 0xc);
  psVar19 = psVar11 + iVar16 * 8;
  goto LAB_2c46a760;
LAB_2c46adae:
  if (bVar10 == 0x5c) {
    if (bVar1) {
      local_59 = bVar10;
    }
    piVar6 = *(int **)(param_1 + 4);
    iVar4 = (int)pbVar15 - (int)param_2;
    if (iVar4 < piVar6[2] - piVar6[1]) {
      FUN_2c674668(*piVar6 + piVar6[1],param_2,iVar4);
      *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(*(int *)(param_1 + 4) + 4) + iVar4;
      *(undefined1 *)(**(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[1]) = 0;
    }
    else {
      FUN_2c46a48c(piVar6,param_2,iVar4);
    }
    iVar4 = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10;
    uVar13 = 8;
LAB_2c46adf6:
    pbVar15 = pbVar15 + 1;
    *(undefined1 *)(iVar4 + 1) = uVar13;
    *(undefined1 *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10) = 9;
    psVar11 = *(short **)(param_1 + 0x28);
    iVar16 = *(int *)(param_1 + 0xc);
    psVar19 = psVar11 + iVar16 * 8;
    goto LAB_2c46a760;
  }
  pbVar15 = pbVar15 + 1;
  iVar4 = *(int *)(param_1 + 0x18) + 1;
  *(int *)(param_1 + 0x18) = iVar4;
  if (bVar10 == 0) {
LAB_2c46b274:
    if (bVar1) {
      local_59 = bVar10;
    }
  }
  else {
    if (iVar4 != param_3) goto code_r0x2c46ada2;
LAB_2c46b2ac:
    if (bVar1) {
      local_59 = bVar10;
    }
    if ((iVar16 == 0) && (*psVar19 == 0x200)) {
      *(undefined1 *)(param_1 + 0x1c) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x1c) = 1;
    }
  }
  piVar6 = *(int **)(param_1 + 4);
  iVar4 = (int)pbVar15 - (int)param_2;
  if (iVar4 < piVar6[2] - piVar6[1]) {
    FUN_2c674668(*piVar6 + piVar6[1],param_2,iVar4);
    iVar16 = *(int *)(param_1 + 4);
    iVar4 = *(int *)(iVar16 + 4) + iVar4;
LAB_2c46acce:
    *(int *)(iVar16 + 4) = iVar4;
LAB_2c46acd0:
    *(undefined1 *)(**(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[1]) = 0;
  }
  else {
LAB_2c46b2a2:
    FUN_2c46a48c(piVar6,param_2,iVar4);
  }
LAB_2c46acda:
  iVar16 = *(int *)(param_1 + 0xc);
  psVar19 = (short *)(*(int *)(param_1 + 0x28) + iVar16 * 0x10);
  cVar12 = *(char *)(*(int *)(param_1 + 0x28) + iVar16 * 0x10);
LAB_2c46afa4:
  if (local_59 == 0) goto LAB_2c46a776;
LAB_2c46afae:
  if ((cVar12 == '\x02') && (iVar16 == 0)) {
LAB_2c46b2da:
    if (*(int *)(param_1 + 0x2c) << 0x1f < 0) {
      *(undefined1 *)(param_1 + 0x1c) = 4;
    }
  }
  goto LAB_2c46afb8;
code_r0x2c46ada2:
  bVar10 = *pbVar15;
  bVar1 = true;
  if (bVar10 == *(byte *)(param_1 + 0x24)) goto LAB_2c46b750;
  goto LAB_2c46adae;
LAB_2c46b750:
  iVar4 = (int)pbVar15 - (int)param_2;
  local_59 = bVar10;
LAB_2c46b758:
  piVar6 = *(int **)(param_1 + 4);
  if (iVar4 < piVar6[2] - piVar6[1]) {
    FUN_2c674668(*piVar6 + piVar6[1],param_2,iVar4);
    *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(*(int *)(param_1 + 4) + 4) + iVar4;
    *(undefined1 *)(**(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[1]) = 0;
  }
  else {
    FUN_2c46a48c(piVar6,param_2,iVar4);
  }
  iVar4 = *(int *)(param_1 + 0x28);
  pbVar15 = pbVar15 + 1;
  iVar16 = *(int *)(param_1 + 0xc);
  uVar7 = FUN_2c46c830(**(undefined4 **)(param_1 + 4),(*(undefined4 **)(param_1 + 4))[1]);
  *(undefined4 *)(iVar4 + iVar16 * 0x10 + 8) = uVar7;
  *(undefined1 *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10 + 1) = 2;
  goto LAB_2c46a8f6;
  while( true ) {
    bVar10 = *pbVar15;
    bVar1 = true;
    if (bVar10 == 10) break;
LAB_2c46ad18:
    pbVar15 = pbVar15 + 1;
    *(byte **)(param_1 + 0x18) = pbVar15 + (iVar4 - (int)param_2);
    if (bVar10 == 0) {
      if (bVar1) goto LAB_2c46aca8;
      goto LAB_2c46acac;
    }
    if (param_2 + (param_3 - iVar4) == pbVar15) {
      if (bVar1) goto LAB_2c46b3ca;
      goto LAB_2c46b3ce;
    }
  }
  iVar4 = (int)pbVar15 - (int)param_2;
  local_59 = bVar10;
LAB_2c46b46e:
  piVar6 = *(int **)(param_1 + 4);
  if (iVar4 < piVar6[2] - piVar6[1]) {
    FUN_2c674668(*piVar6 + piVar6[1],param_2,iVar4);
    *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(*(int *)(param_1 + 4) + 4) + iVar4;
    *(undefined1 *)(**(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[1]) = 0;
  }
  else {
    FUN_2c46a48c(piVar6,param_2,iVar4);
  }
  pbVar15 = pbVar15 + 1;
LAB_2c46a8f6:
  iVar4 = *(int *)(param_1 + 0x28);
  iVar16 = *(int *)(param_1 + 0xc) << 4;
LAB_2c46a8fc:
  *(undefined1 *)(iVar4 + iVar16) = 0;
  psVar11 = *(short **)(param_1 + 0x28);
  iVar16 = *(int *)(param_1 + 0xc);
  psVar19 = psVar11 + iVar16 * 8;
LAB_2c46a760:
  iVar4 = *(int *)(param_1 + 0x18) + 1;
  *(int *)(param_1 + 0x18) = iVar4;
  param_2 = pbVar15;
  if (local_59 == 0) goto code_r0x2c46a76e;
  goto LAB_2c46a6da;
LAB_2c46ac94:
  pbVar15 = pbVar15 + 1;
  *(byte **)(param_1 + 0x18) = pbVar15 + (iVar4 - (int)param_2);
  if (bVar10 == 0) {
    if (bVar1) {
LAB_2c46aca8:
      local_59 = bVar10;
    }
  }
  else {
    if (param_2 + (param_3 - iVar4) != pbVar15) goto code_r0x2c46ac86;
    if (bVar1) {
LAB_2c46b3ca:
      local_59 = bVar10;
    }
LAB_2c46b3ce:
    if ((iVar16 == 0) && (*psVar19 == 0x200)) {
      *(undefined1 *)(param_1 + 0x1c) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x1c) = 1;
    }
  }
LAB_2c46acac:
  piVar6 = *(int **)(param_1 + 4);
  iVar4 = (int)pbVar15 - (int)param_2;
  if (iVar4 < piVar6[2] - piVar6[1]) {
    FUN_2c674668(*piVar6 + piVar6[1],param_2,iVar4);
    iVar16 = *(int *)(param_1 + 4);
    iVar4 = *(int *)(iVar16 + 4) + iVar4;
    goto LAB_2c46acce;
  }
  FUN_2c46a48c(piVar6,param_2,iVar4);
  goto LAB_2c46acda;
code_r0x2c46ac86:
  bVar10 = *pbVar15;
  bVar1 = true;
  if (bVar10 == 0x2a) goto LAB_2c46b434;
  goto LAB_2c46ac94;
LAB_2c46b434:
  local_59 = bVar10;
  piVar6 = *(int **)(param_1 + 4);
  pbVar15 = pbVar15 + 1;
  iVar4 = (int)pbVar15 - (int)param_2;
  if (iVar4 < piVar6[2] - piVar6[1]) {
    FUN_2c674668(*piVar6 + piVar6[1],param_2,iVar4);
    *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(*(int *)(param_1 + 4) + 4) + iVar4;
    *(undefined1 *)(**(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[1]) = 0;
  }
  else {
    FUN_2c46a48c(piVar6,param_2,iVar4);
  }
  *(undefined1 *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10) = 7;
  psVar11 = *(short **)(param_1 + 0x28);
  iVar16 = *(int *)(param_1 + 0xc);
  psVar19 = psVar11 + iVar16 * 8;
  goto LAB_2c46a760;
switchD_2c46a6f4_caseD_4:
  if (local_59 == 0x2a) {
    *(undefined1 *)psVar19 = 5;
  }
  else {
    if (local_59 != 0x2f) {
      *(undefined1 *)(param_1 + 0x1c) = 0xd;
      cVar12 = (char)*psVar19;
      goto LAB_2c46afa4;
    }
    *(undefined1 *)psVar19 = 6;
  }
  piVar6 = *(int **)(param_1 + 4);
  if (piVar6[2] - piVar6[1] < 2) {
    FUN_2c46a48c(piVar6,&local_59,1);
    psVar11 = *(short **)(param_1 + 0x28);
    iVar16 = *(int *)(param_1 + 0xc);
    pbVar15 = param_2 + 1;
    psVar19 = psVar11 + iVar16 * 8;
  }
  else {
    pbVar15 = param_2 + 1;
    *(byte *)(*piVar6 + piVar6[1]) = local_59;
    *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(*(int *)(param_1 + 4) + 4) + 1;
    *(undefined1 *)(**(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[1]) = 0;
    psVar11 = *(short **)(param_1 + 0x28);
    iVar16 = *(int *)(param_1 + 0xc);
    psVar19 = psVar11 + iVar16 * 8;
  }
  goto LAB_2c46a760;
code_r0x2c46a76e:
  cVar12 = (char)*psVar19;
LAB_2c46a776:
  if ((cVar12 != '\x02') && (*(char *)((int)psVar19 + 1) != '\x02')) {
    *(undefined1 *)(param_1 + 0x1c) = 3;
  }
LAB_2c46afb8:
  FUN_2c669494(4,iVar3);
  if (iVar3 != 0) {
    FUN_2c669588(iVar3);
  }
  if (*(char *)(param_1 + 0x1c) == '\0') {
    uVar14 = FUN_2c46c508(*(undefined4 *)
                           (*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x10 + 8));
    iVar3 = *(int *)(param_1 + 0xc);
    if (-1 < *(int *)(param_1 + 0xc)) {
      do {
        iVar4 = iVar3 + -1;
        FUN_2c46a5bc(param_1,iVar3);
        iVar3 = iVar4;
      } while (iVar4 != -1);
    }
  }
  else {
    uVar14 = 0;
  }
  goto LAB_2c46afd4;
}

