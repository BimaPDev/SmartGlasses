/* FUN_2c4758f8 @ 0x2c4758f8 */

int * FUN_2c4758f8(int *param_1,undefined4 *param_2,uint param_3,byte *param_4)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  int iVar22;
  uint uVar23;
  undefined4 *puVar24;
  undefined1 **ppuVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  byte *pbVar30;
  int iVar31;
  bool bVar32;
  undefined8 uVar33;
  uint local_204;
  int *local_200;
  uint local_1fc;
  undefined1 **local_1f0;
  uint local_1ec;
  undefined1 *local_1d8 [23];
  undefined1 auStack_17c [320];
  undefined1 auStack_3c [16];
  int local_2c;
  
  uVar17 = param_1[7];
  local_2c = *DAT_2c475b94;
  if (*param_1 != DAT_2c475b98) {
                    /* WARNING: Subroutine does not return */
    FUN_2c668484(DAT_2c4765e0,0xc03,DAT_2c4765dc,DAT_2c4765d8);
  }
  if (param_2 == (undefined4 *)0x0) {
    param_2 = DAT_2c476538;
  }
  piVar4 = (int *)(*(code *)*param_2)(param_2[2],param_1[5]);
  if (piVar4 == (int *)0x0) {
LAB_2c475b04:
    local_200 = (int *)0x0;
    piVar4 = local_200;
    goto LAB_2c475b08;
  }
  local_1d8[0] = auStack_17c;
  uVar7 = param_1[6] + 7U >> 3;
  if (param_1[6] + 7U < 0x88) {
    bVar2 = false;
    local_200 = (int *)auStack_3c;
  }
  else {
    local_200 = (int *)(*(code *)*param_2)(param_2[2],uVar7);
    if (local_200 == (int *)0x0) {
      (*(code *)param_2[1])(param_2[2],piVar4,uVar7);
      piVar4 = (int *)0x0;
      goto LAB_2c475b08;
    }
    bVar2 = true;
  }
  piVar3 = local_200;
  FUN_2c674268(local_200,0);
  if ((code *)param_1[0xb] == (code *)0x0) {
    FUN_2c674268(piVar4,0,param_1[5]);
    *piVar4 = (int)param_1;
    uVar7 = param_1[6];
    if (uVar7 != 0) {
      uVar18 = 0;
      iVar28 = 0;
      do {
        iVar5 = param_1[7] + iVar28;
        puVar24 = *(undefined4 **)(iVar5 + 0x18);
        if ((puVar24 != (undefined4 *)0x0) && (*(char *)(iVar5 + 8) != '\x02')) {
          iVar10 = *(int *)(iVar5 + 0x10);
          switch(*(undefined1 *)(iVar5 + 9)) {
          case 0:
          case 1:
          case 2:
          case 6:
          case 7:
          case 10:
          case 0xc:
          case 0xd:
            *(undefined4 *)((int)piVar4 + iVar10) = *puVar24;
            uVar7 = param_1[6];
            break;
          case 3:
          case 4:
          case 5:
          case 8:
          case 9:
          case 0xb:
          case 0xf:
            uVar21 = puVar24[1];
            *(undefined4 *)((int)piVar4 + iVar10) = *puVar24;
            *(undefined4 *)((int)piVar4 + iVar10 + 4) = uVar21;
            uVar7 = param_1[6];
            break;
          case 0xe:
          case 0x10:
            *(undefined4 **)((int)piVar4 + iVar10) = puVar24;
            uVar7 = param_1[6];
          }
        }
        uVar18 = uVar18 + 1;
        iVar28 = iVar28 + 0x2c;
      } while (uVar18 < uVar7);
    }
  }
  else {
    (*(code *)param_1[0xb])(piVar4);
  }
  if (param_3 != 0) {
    uVar7 = 0;
    local_204 = 0;
    local_1f0 = (undefined1 **)0x0;
    local_1ec = 0;
LAB_2c47599c:
    uVar18 = (uint)*param_4;
    if ((*param_4 & 0xf8) == 0) goto switchD_2c475a90_caseD_3;
    uVar23 = (uVar18 & 0x7f) >> 3;
    uVar29 = uVar18 & 7;
    if ((int)(uVar18 << 0x18) < 0) {
      if (param_3 == 1) goto switchD_2c475a90_caseD_3;
      uVar8 = 4;
      uVar27 = 1;
      pbVar30 = param_4;
      uVar18 = param_3;
      if (4 < param_3) {
        uVar18 = 5;
      }
      while( true ) {
        uVar19 = (uint)pbVar30[1];
        if (-1 < (int)(uVar19 << 0x18)) break;
        uVar27 = uVar27 + 1;
        uVar26 = uVar8 & 0xff;
        uVar8 = uVar8 + 7;
        uVar23 = uVar23 | (uVar19 & 0x7f) << uVar26;
        pbVar30 = pbVar30 + 1;
        if (uVar18 <= uVar27) goto switchD_2c475a90_caseD_3;
      }
      iVar28 = uVar27 + 1;
      uVar23 = uVar23 | uVar19 << (uVar8 & 0xff);
    }
    else {
      iVar28 = 1;
    }
    if ((uVar17 == 0) || (*(uint *)(uVar17 + 4) != uVar23)) {
      iVar5 = param_1[10];
      if (param_1[9] != 0) {
        uVar18 = param_1[9];
        iVar10 = 0;
        while (uVar8 = uVar18, 1 < uVar8) {
          iVar9 = iVar10 + (uVar8 >> 1);
          iVar20 = *(int *)(iVar5 + iVar9 * 8);
          uVar18 = uVar8 >> 1;
          if (iVar20 <= (int)uVar23) {
            iVar11 = iVar9 + 1;
            iVar9 = *(int *)(iVar5 + iVar9 * 8 + 4);
            if ((int)uVar23 < (*(int *)(iVar5 + iVar11 * 8 + 4) - iVar9) + iVar20) {
              uVar18 = (uVar23 - iVar20) + iVar9;
              goto LAB_2c475a4c;
            }
            uVar18 = (uVar8 + iVar10) - iVar11;
            iVar10 = iVar11;
          }
        }
        if (uVar8 != 0) {
          iVar20 = iVar5 + iVar10 * 8;
          iVar10 = *(int *)(iVar5 + iVar10 * 8);
          iVar5 = *(int *)(iVar20 + 4);
          if ((iVar10 <= (int)uVar23) && ((int)uVar23 < (*(int *)(iVar20 + 0xc) - iVar5) + iVar10))
          {
            uVar18 = iVar5 + (uVar23 - iVar10);
LAB_2c475a4c:
            if (-1 < (int)uVar18) {
              uVar17 = uVar18 * 0x2c + param_1[7];
              uVar8 = uVar17;
              local_1f0 = (undefined1 **)uVar18;
              if (uVar17 != 0) goto LAB_2c475a64;
              goto LAB_2c475a84;
            }
          }
        }
      }
      local_1ec = local_1ec + 1;
      uVar8 = 0;
    }
    else {
LAB_2c475a64:
      uVar8 = uVar17;
      if (*(char *)(uVar17 + 8) == '\0') {
        *(byte *)((int)local_200 + ((uint)local_1f0 >> 3)) =
             (byte)(1 << ((uint)local_1f0 & 7)) | *(byte *)((int)local_200 + ((uint)local_1f0 >> 3))
        ;
      }
    }
LAB_2c475a84:
    param_4 = param_4 + iVar28;
    param_3 = param_3 - iVar28;
    switch(uVar29) {
    case 0:
      uVar19 = param_3;
      if (9 < param_3) {
        uVar19 = 10;
      }
      if (param_3 != 0) {
        pbVar30 = param_4 + -1;
        uVar26 = 0;
        do {
          uVar27 = uVar26;
          pbVar30 = pbVar30 + 1;
          uVar18 = uVar29;
          if (-1 < (char)*pbVar30) {
            uVar27 = uVar27 + 1;
            goto LAB_2c475b28;
          }
          uVar26 = uVar27 + 1;
        } while (uVar26 < uVar19);
        if (uVar19 != uVar26) {
          uVar27 = uVar27 + 2;
          goto LAB_2c475b28;
        }
      }
      break;
    case 1:
      if (param_3 < 8) break;
      uVar27 = 8;
      uVar18 = 0;
LAB_2c475b28:
      if (1 << (uVar7 + 4 & 0xff) == local_204) {
        if (uVar7 != 0x16) {
          uVar19 = uVar7 + 5;
          uVar7 = uVar7 + 1;
          puVar6 = (uint *)(*(code *)*param_2)(param_2[2],0x14 << (uVar19 & 0xff));
          local_1d8[uVar7] = (undefined1 *)puVar6;
          if (puVar6 == (uint *)0x0) break;
          local_204 = 1;
          goto LAB_2c475b4c;
        }
        (*(code *)param_2[1])(param_2[2],piVar4);
        goto LAB_2c475ae6;
      }
      puVar6 = (uint *)(local_1d8[uVar7] + local_204 * 0x14);
      local_204 = local_204 + 1;
LAB_2c475b4c:
      *puVar6 = uVar23;
      *(char *)(puVar6 + 1) = (char)uVar29;
      *(char *)((int)puVar6 + 5) = (char)uVar18;
      puVar6[4] = (uint)param_4;
      puVar6[2] = uVar8;
      puVar6[3] = uVar27;
      if ((uVar8 == 0) || (*(char *)(uVar8 + 8) != '\x02')) goto LAB_2c475b6c;
      iVar28 = *(int *)(uVar8 + 0xc);
      if ((uVar29 != 2) ||
         (((*(uint *)(uVar8 + 0x1c) & 1) == 0 && (*(byte *)(uVar8 + 9) - 0xe < 3)))) {
        *(int *)((int)piVar4 + iVar28) = *(int *)((int)piVar4 + iVar28) + 1;
        goto LAB_2c475b6c;
      }
      uVar23 = uVar27 - uVar18;
      switch((uint)*(byte *)(uVar8 + 9)) {
      case 0:
      case 1:
      case 3:
      case 4:
      case 6:
      case 8:
      case 0xd:
        if (uVar23 == 0) goto switchD_2c475cdc_caseD_c;
        uVar23 = 0;
        pbVar30 = param_4 + uVar18;
        do {
          pbVar12 = pbVar30 + 1;
          if (-1 < (char)*pbVar30) {
            uVar23 = uVar23 + 1;
          }
          pbVar30 = pbVar12;
        } while (param_4 + uVar27 != pbVar12);
        goto LAB_2c475db8;
      case 2:
      case 7:
      case 10:
        if ((uVar23 & 3) == 0) {
          uVar23 = uVar23 >> 2;
          goto LAB_2c475db8;
        }
        break;
      case 5:
      case 9:
      case 0xb:
        if ((uVar23 & 7) == 0) {
          uVar23 = uVar23 >> 3;
          goto switchD_2c475cdc_caseD_c;
        }
        break;
      case 0xc:
switchD_2c475cdc_caseD_c:
LAB_2c475db8:
        *(uint *)((int)piVar4 + iVar28) = *(int *)((int)piVar4 + iVar28) + uVar23;
LAB_2c475b6c:
        param_4 = param_4 + uVar27;
        param_3 = param_3 - uVar27;
        if (param_3 == 0) goto code_r0x2c475b74;
        goto LAB_2c47599c;
      }
      break;
    case 2:
      uVar18 = param_3;
      if (4 < param_3) {
        uVar18 = 5;
      }
      if (param_3 != 0) {
        uVar27 = 0;
        pbVar30 = param_4 + -1;
        uVar19 = 0;
        do {
          pbVar30 = pbVar30 + 1;
          uVar27 = uVar27 | (*pbVar30 & 0x7f) << (uVar19 * 7 & 0xff);
          if (-1 < (int)((uint)*pbVar30 << 0x18)) {
            if ((int)uVar27 < 0) goto switchD_2c475a90_caseD_3;
            goto LAB_2c475cb0;
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 < uVar18);
        if ((uVar18 != uVar19) && (-1 < (int)uVar27)) {
LAB_2c475cb0:
          uVar27 = uVar27 + uVar19 + 1;
          if (uVar27 <= param_3) {
            uVar18 = uVar19 + 1 & 0xff;
            goto LAB_2c475b28;
          }
        }
      }
      break;
    case 5:
      if (3 < param_3) {
        uVar27 = 4;
        uVar18 = 0;
        goto LAB_2c475b28;
      }
    }
switchD_2c475a90_caseD_3:
    (*(code *)param_2[1])(param_2[2],piVar4);
    if (uVar7 != 0) {
LAB_2c475ae6:
      ppuVar25 = local_1d8;
      uVar17 = 1;
      do {
        ppuVar25 = ppuVar25 + 1;
        if (*ppuVar25 != (undefined1 *)0x0) {
          (*(code *)param_2[1])(param_2[2]);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 <= uVar7);
    }
    goto LAB_2c475afc;
  }
  uVar17 = param_1[6];
  uVar7 = 0;
  local_204 = uVar17;
  if (uVar17 != 0) {
    local_204 = 0;
    local_1ec = 0;
    goto LAB_2c475b82;
  }
LAB_2c475ea0:
  ppuVar25 = local_1d8;
  local_1ec = 0;
  local_1f0 = ppuVar25;
  do {
    if (uVar7 == local_1ec) {
      local_1fc = local_204;
    }
    else {
      local_1fc = 1 << (local_1ec + 4 & 0xff);
    }
    puVar24 = (undefined4 *)*local_1f0;
    if (local_1fc != 0) {
      uVar17 = 0;
      do {
        iVar28 = puVar24[2];
        if (iVar28 == 0) {
          iVar28 = piVar4[1];
          piVar4[1] = iVar28 + 1;
          iVar5 = piVar4[2] + iVar28 * 0x10;
          *(undefined4 *)(piVar4[2] + iVar28 * 0x10) = *puVar24;
          *(undefined1 *)(iVar5 + 4) = *(undefined1 *)(puVar24 + 1);
          *(undefined4 *)(iVar5 + 8) = puVar24[3];
          iVar28 = (*(code *)*param_2)(param_2[2]);
          *(int *)(iVar5 + 0xc) = iVar28;
          if (iVar28 != 0) {
            FUN_2c674668(iVar28,puVar24[4],*(undefined4 *)(iVar5 + 8));
            goto LAB_2c475fba;
          }
          goto LAB_2c475e5e;
        }
        iVar10 = *(int *)(iVar28 + 0x10);
        iVar5 = (int)piVar4 + iVar10;
        switch(*(undefined1 *)(iVar28 + 8)) {
        case 0:
          iVar28 = FUN_2c4765f0(puVar24,iVar5,param_2,1);
          if (iVar28 == 0) goto LAB_2c475e5e;
          break;
        case 1:
        case 3:
          if (*(int *)(iVar28 + 0x1c) << 0x1d < 0) {
            iVar28 = *(int *)(iVar28 + 0xc);
            iVar20 = *(int *)((int)piVar4 + iVar28);
            if (iVar20 != 0) {
              iVar11 = *piVar4;
              iVar9 = *(int *)(iVar11 + 0x28);
              if (*(uint *)(iVar11 + 0x24) == 0) goto LAB_2c475e5e;
              uVar18 = *(uint *)(iVar11 + 0x24);
              iVar31 = 0;
              while (uVar23 = uVar18, 1 < uVar23) {
                iVar13 = iVar31 + (uVar23 >> 1);
                iVar22 = *(int *)(iVar9 + iVar13 * 8);
                uVar18 = uVar23 >> 1;
                if (iVar22 <= iVar20) {
                  iVar16 = iVar13 + 1;
                  iVar13 = *(int *)(iVar9 + iVar13 * 8 + 4);
                  if (iVar20 < (*(int *)(iVar9 + iVar16 * 8 + 4) - iVar13) + iVar22) {
                    iVar13 = (iVar20 - iVar22) + iVar13;
                    goto LAB_2c475f66;
                  }
                  uVar18 = (uVar23 + iVar31) - iVar16;
                  iVar31 = iVar16;
                }
              }
              if (uVar23 == 0) goto LAB_2c475e5e;
              iVar22 = iVar9 + iVar31 * 8;
              iVar9 = *(int *)(iVar9 + iVar31 * 8);
              iVar13 = *(int *)(iVar22 + 4);
              if ((iVar20 < iVar9) || ((*(int *)(iVar22 + 0xc) - iVar13) + iVar9 <= iVar20))
              goto LAB_2c475e5e;
              iVar13 = (iVar20 - iVar9) + iVar13;
LAB_2c475f66:
              if (iVar13 < 0) goto LAB_2c475e5e;
              iVar20 = iVar13 * 0x2c + *(int *)(iVar11 + 0x1c);
              bVar1 = *(byte *)(iVar20 + 9);
              switch(bVar1) {
              case 0:
              case 1:
              case 2:
              case 6:
              case 7:
              case 10:
              case 0xc:
              case 0xd:
              case 0xe:
              case 0x10:
                if (bVar1 == 0xe) {
                  if ((*(int *)(iVar20 + 0x18) != *(int *)((int)piVar4 + iVar10)) &&
                     (*(int *)((int)piVar4 + iVar10) != 0)) {
                    uVar21 = 4;
                    (*(code *)param_2[1])(param_2[2]);
                    break;
                  }
                }
                else if (0xd < bVar1) {
                  if (bVar1 == 0xf) {
                    uVar21 = 4;
                    goto LAB_2c476222;
                  }
                  if (((bVar1 == 0x10) &&
                      (iVar10 = *(int *)((int)piVar4 + iVar10), *(int *)(iVar20 + 0x18) != iVar10))
                     && (iVar10 != 0)) {
                    uVar21 = 4;
                    FUN_2c47573c(iVar10,param_2);
                    break;
                  }
                }
                uVar21 = 4;
                break;
              case 3:
              case 4:
              case 5:
              case 8:
              case 9:
              case 0xb:
                uVar21 = 8;
                break;
              case 0xf:
                uVar21 = 8;
LAB_2c476222:
                if ((*(int *)(iVar5 + 4) != 0) &&
                   ((*(int *)(iVar20 + 0x18) == 0 ||
                    (*(int *)(iVar5 + 4) != *(int *)(*(int *)(iVar20 + 0x18) + 4))))) {
                  (*(code *)param_2[1])(param_2[2]);
                }
                break;
              default:
                goto switchD_2c475bc8_default;
              }
              FUN_2c674268(iVar5,0,uVar21);
            }
            iVar5 = FUN_2c4765f0(puVar24,iVar5,param_2,1);
            if (iVar5 == 0) goto LAB_2c475e5e;
            *(undefined4 *)((int)piVar4 + iVar28) = *puVar24;
          }
          else {
            iVar28 = FUN_2c4765f0(puVar24,iVar5,param_2,1);
            if (iVar28 == 0) goto LAB_2c475e5e;
            if (*(int *)(puVar24[2] + 0xc) != 0) {
              *(undefined4 *)((int)piVar4 + *(int *)(puVar24[2] + 0xc)) = 1;
            }
          }
          break;
        case 2:
          if (*(char *)(puVar24 + 1) != '\x02') {
            uVar18 = (uint)*(byte *)(iVar28 + 9);
LAB_2c476288:
            iVar28 = *(int *)(iVar28 + 0xc);
            switch(uVar18) {
            case 0:
            case 1:
            case 2:
            case 6:
            case 7:
            case 10:
            case 0xc:
            case 0xd:
            case 0xe:
            case 0x10:
              iVar5 = 4;
              break;
            case 3:
            case 4:
            case 5:
            case 8:
            case 9:
            case 0xb:
            case 0xf:
              iVar5 = 8;
              break;
            default:
              goto switchD_2c475bc8_default;
            }
            iVar5 = FUN_2c4765f0(puVar24,*(int *)((int)piVar4 + iVar28) * iVar5 +
                                         *(int *)((int)piVar4 + iVar10),param_2,0);
            if (iVar5 != 0) {
              *(int *)((int)piVar4 + iVar28) = *(int *)((int)piVar4 + iVar28) + 1;
              break;
            }
            goto LAB_2c475e5e;
          }
          uVar18 = (uint)*(byte *)(iVar28 + 9);
          if ((-1 < *(int *)(iVar28 + 0x1c) << 0x1f) && (uVar18 - 0xe < 3)) goto LAB_2c476288;
          iVar28 = *(int *)(iVar28 + 0xc);
          switch(uVar18) {
          case 0:
          case 1:
          case 2:
          case 6:
          case 7:
          case 10:
          case 0xc:
          case 0xd:
          case 0xe:
          case 0x10:
            iVar5 = 4;
            break;
          case 3:
          case 4:
          case 5:
          case 8:
          case 9:
          case 0xb:
            iVar5 = 8;
            break;
          case 0xf:
            goto switchD_2c47602a_caseD_f;
          default:
            goto switchD_2c475bc8_default;
          }
          iVar20 = *(int *)((int)piVar4 + iVar28);
          iVar10 = iVar20 * iVar5 + *(int *)((int)piVar4 + iVar10);
          pbVar30 = (byte *)(puVar24[4] + (uint)*(byte *)((int)puVar24 + 5));
          uVar23 = puVar24[3] - (uint)*(byte *)((int)puVar24 + 5);
          if (0xd < uVar18) {
switchD_2c47602a_caseD_f:
                    /* WARNING: Subroutine does not return */
            FUN_2c668484(DAT_2c476534,0xb3f,DAT_2c476530,DAT_2c47652c);
          }
          bVar1 = (&switchD_2c476074::switchdataD_2c476078)[uVar18];
          switch(uVar18) {
          case 0:
          case 0xd:
            if (uVar23 != 0) {
              puVar6 = (uint *)(iVar10 + -4);
              uVar18 = 0;
              do {
                pbVar12 = pbVar30 + -1;
                uVar8 = 0;
                uVar29 = uVar23;
                if (9 < uVar23) {
                  uVar29 = 10;
                }
                while (pbVar12 = pbVar12 + 1, (char)*pbVar12 < '\0') {
                  uVar8 = uVar8 + 1;
                  if (uVar29 == uVar8) goto LAB_2c475e5e;
                }
                iVar5 = uVar8 + 1;
                uVar29 = *pbVar30 & 0x7f;
                if (((uVar8 != 0) && (uVar29 = uVar29 | (pbVar30[1] & 0x7f) << 7, iVar5 != 2)) &&
                   ((uVar29 = uVar29 | (pbVar30[2] & 0x7f) << 0xe, iVar5 != 3 &&
                    (uVar29 = uVar29 | (pbVar30[3] & 0x7f) << 0x15, iVar5 != 4)))) {
                  uVar29 = uVar29 | (uint)pbVar30[4] << 0x1c;
                }
                uVar23 = uVar23 - iVar5;
                uVar18 = uVar18 + 1;
                pbVar30 = pbVar30 + iVar5;
                puVar6 = puVar6 + 1;
                *puVar6 = uVar29;
              } while (uVar23 != 0);
LAB_2c476334:
              iVar20 = *(int *)((int)piVar4 + iVar28);
              uVar23 = uVar18;
            }
            break;
          case 1:
            if (uVar23 != 0) {
              puVar6 = (uint *)(iVar10 + -4);
              uVar18 = 0;
              do {
                pbVar12 = pbVar30 + -1;
                uVar8 = 0;
                uVar29 = uVar23;
                if (9 < uVar23) {
                  uVar29 = 10;
                }
                while (pbVar12 = pbVar12 + 1, (char)*pbVar12 < '\0') {
                  uVar8 = uVar8 + 1;
                  if (uVar29 == uVar8) goto LAB_2c475e5e;
                }
                iVar5 = uVar8 + 1;
                uVar29 = *pbVar30 & 0x7f;
                if ((((uVar8 != 0) && (uVar29 = uVar29 | (pbVar30[1] & 0x7f) << 7, iVar5 != 2)) &&
                    (uVar29 = uVar29 | (pbVar30[2] & 0x7f) << 0xe, iVar5 != 3)) &&
                   (uVar29 = uVar29 | (pbVar30[3] & 0x7f) << 0x15, iVar5 != 4)) {
                  uVar29 = uVar29 | (uint)pbVar30[4] << 0x1c;
                }
                uVar23 = uVar23 - iVar5;
                uVar18 = uVar18 + 1;
                pbVar30 = pbVar30 + iVar5;
                puVar6 = puVar6 + 1;
                *puVar6 = (int)(uVar29 << 0x1f) >> 0x1f ^ uVar29 >> 1;
              } while (uVar23 != 0);
              goto LAB_2c476334;
            }
            break;
          default:
            uVar23 = uVar23 >> 2;
            goto LAB_2c4760d0;
          case 3:
          case 8:
            if (uVar23 != 0) {
              puVar14 = (undefined8 *)(iVar10 + -8);
              uVar18 = 0;
              do {
                pbVar12 = pbVar30 + -1;
                uVar8 = 0;
                uVar29 = uVar23;
                if (9 < uVar23) {
                  uVar29 = 10;
                }
                while (pbVar12 = pbVar12 + 1, (char)*pbVar12 < '\0') {
                  uVar8 = uVar8 + 1;
                  if (uVar29 == uVar8) goto LAB_2c475e5e;
                }
                iVar5 = uVar8 + 1;
                uVar18 = uVar18 + 1;
                uVar33 = FUN_2c474018(iVar5,pbVar30);
                uVar23 = uVar23 - iVar5;
                puVar14 = puVar14 + 1;
                *puVar14 = uVar33;
                pbVar30 = pbVar30 + iVar5;
              } while (uVar23 != 0);
              iVar20 = *(int *)((int)piVar4 + iVar28);
              uVar23 = uVar18;
            }
            break;
          case 4:
            if (uVar23 != 0) {
              uVar18 = 0;
              puVar6 = (uint *)(iVar10 + -8);
              do {
                pbVar12 = pbVar30 + -1;
                uVar8 = 0;
                uVar29 = uVar23;
                if (9 < uVar23) {
                  uVar29 = 10;
                }
                while (pbVar12 = pbVar12 + 1, (char)*pbVar12 < '\0') {
                  uVar8 = uVar8 + 1;
                  if (uVar29 == uVar8) goto LAB_2c475e5e;
                }
                iVar5 = uVar8 + 1;
                uVar18 = uVar18 + 1;
                uVar29 = FUN_2c474018(iVar5,pbVar30);
                uVar8 = (int)(uVar29 << 0x1f) >> 0x1f;
                uVar23 = uVar23 - iVar5;
                puVar6[2] = uVar8 ^ uVar29;
                puVar6[3] = uVar8 ^ (uVar29 | (uint)(&switchD_2c476074::switchdataD_2c476078 +
                                                    (uint)bVar1 * 2) >> 1);
                puVar6 = puVar6 + 2;
                pbVar30 = pbVar30 + iVar5;
              } while (uVar23 != 0);
              goto LAB_2c476334;
            }
            break;
          case 5:
          case 9:
          case 0xb:
            uVar23 = uVar23 >> 3;
LAB_2c4760d0:
            FUN_2c674668(iVar10,pbVar30,uVar23 * iVar5);
            *(uint *)((int)piVar4 + iVar28) = uVar23 + *(int *)((int)piVar4 + iVar28);
            goto LAB_2c475fba;
          case 6:
            if (uVar23 != 0) {
              puVar6 = (uint *)(iVar10 + -4);
              uVar18 = 0;
              do {
                pbVar12 = pbVar30 + -1;
                uVar8 = 0;
                uVar29 = uVar23;
                if (9 < uVar23) {
                  uVar29 = 10;
                }
                while (pbVar12 = pbVar12 + 1, (char)*pbVar12 < '\0') {
                  uVar8 = uVar8 + 1;
                  if (uVar29 == uVar8) goto LAB_2c475e5e;
                }
                uVar18 = uVar18 + 1;
                iVar5 = uVar8 + 1;
                uVar29 = *pbVar30 & 0x7f;
                if (((uVar8 != 0) && (uVar29 = uVar29 | (pbVar30[1] & 0x7f) << 7, iVar5 != 2)) &&
                   ((uVar29 = uVar29 | (pbVar30[2] & 0x7f) << 0xe, iVar5 != 3 &&
                    (uVar29 = uVar29 | (pbVar30[3] & 0x7f) << 0x15, iVar5 != 4)))) {
                  uVar29 = uVar29 | (uint)pbVar30[4] << 0x1c;
                }
                uVar23 = uVar23 - iVar5;
                pbVar30 = pbVar30 + iVar5;
                puVar6 = puVar6 + 1;
                *puVar6 = uVar29;
              } while (uVar23 != 0);
              goto LAB_2c476334;
            }
            break;
          case 0xc:
            if (uVar23 != 0) {
              puVar6 = (uint *)(iVar10 + -4);
              uVar18 = 0;
              do {
                pbVar12 = pbVar30 + -1;
                uVar8 = 0;
                pbVar15 = pbVar12;
                uVar29 = uVar23;
                if (9 < uVar23) {
                  uVar29 = 10;
                }
                while ((char)pbVar15[1] < '\0') {
                  uVar8 = uVar8 + 1;
                  pbVar15 = pbVar15 + 1;
                  if (uVar29 == uVar8) goto LAB_2c475e5e;
                }
                uVar18 = uVar18 + 1;
                do {
                  pbVar12 = pbVar12 + 1;
                  uVar29 = *pbVar12 & 0x7f;
                  if ((*pbVar12 & 0x7f) != 0) {
                    uVar29 = 1;
                    break;
                  }
                } while (pbVar30 + uVar8 != pbVar12);
                uVar23 = uVar23 - (uVar8 + 1);
                pbVar30 = pbVar30 + uVar8 + 1;
                puVar6 = puVar6 + 1;
                *puVar6 = uVar29;
              } while (uVar23 != 0);
              iVar20 = *(int *)((int)piVar4 + iVar28);
              uVar23 = uVar18;
            }
          }
          *(uint *)((int)piVar4 + iVar28) = iVar20 + uVar23;
          break;
        default:
                    /* WARNING: Subroutine does not return */
          FUN_2c668484(DAT_2c4765e0,0xb86,DAT_2c4765ec,DAT_2c4765e8);
        }
LAB_2c475fba:
        uVar17 = uVar17 + 1;
        puVar24 = puVar24 + 5;
      } while (local_1fc != uVar17);
    }
    local_1ec = local_1ec + 1;
    local_1f0 = local_1f0 + 1;
  } while (local_1ec <= uVar7);
  if (uVar7 != 0) {
    uVar17 = 1;
    do {
      ppuVar25 = ppuVar25 + 1;
      if (*ppuVar25 != (undefined1 *)0x0) {
        (*(code *)param_2[1])(param_2[2]);
      }
      bVar32 = uVar7 != uVar17;
      uVar17 = uVar17 + 1;
    } while (bVar32);
  }
  if (bVar2) {
    (*(code *)param_2[1])(param_2[2],local_200);
  }
LAB_2c475b08:
  local_200 = piVar4;
  if (*DAT_2c475b94 == local_2c) {
    return local_200;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
code_r0x2c475b74:
  uVar17 = param_1[6];
  if (uVar17 != 0) {
LAB_2c475b82:
    uVar18 = 0;
    do {
      iVar28 = param_1[7];
      iVar5 = uVar18 * 0x2c + iVar28;
      if (iVar5 != 0) {
        if (*(char *)(iVar5 + 8) == '\x02') {
          switch(*(undefined1 *)(iVar5 + 9)) {
          case 0:
          case 1:
          case 2:
          case 6:
          case 7:
          case 10:
          case 0xc:
          case 0xd:
          case 0xe:
          case 0x10:
            iVar28 = 4;
            break;
          case 3:
          case 4:
          case 5:
          case 8:
          case 9:
          case 0xb:
          case 0xf:
            iVar28 = 8;
            break;
          default:
switchD_2c475bc8_default:
                    /* WARNING: Subroutine does not return */
            FUN_2c473f8c();
          }
          iVar10 = *(int *)((int)piVar4 + *(int *)(iVar5 + 0xc));
          if (iVar10 != 0) {
            *(undefined4 *)((int)piVar4 + *(int *)(iVar5 + 0xc)) = 0;
            if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_2c668484(DAT_2c4765e0,0xcc0,DAT_2c4765dc,DAT_2c4765e4);
            }
            iVar28 = (*(code *)*param_2)(param_2[2],iVar28 * iVar10);
            if (iVar28 == 0) {
              uVar18 = uVar18 + 1;
              uVar17 = param_1[6];
              if (uVar18 < uVar17) {
                do {
                  iVar28 = uVar18 * 0x2c + param_1[7];
                  if (*(char *)(iVar28 + 8) == '\x02') {
                    *(undefined4 *)((int)piVar4 + *(int *)(iVar28 + 0xc)) = 0;
                    uVar17 = param_1[6];
                  }
                  uVar18 = uVar18 + 1;
                } while (uVar18 < uVar17);
              }
              goto LAB_2c475e5e;
            }
            *(int *)((int)piVar4 + *(int *)(iVar5 + 0x10)) = iVar28;
            uVar17 = param_1[6];
          }
        }
        else if (((*(char *)(iVar5 + 8) == '\0') && (*(int *)(iVar5 + 0x18) == 0)) &&
                (bVar1 = *(byte *)((int)local_200 + (uVar18 >> 3)) >> (uVar18 & 7), (bVar1 & 1) == 0
                )) {
          uVar18 = uVar18 + 1;
          if (uVar18 < uVar17) {
            while( true ) {
              iVar28 = uVar18 * 0x2c + iVar28;
              if (*(char *)(iVar28 + 8) == '\x02') {
                *(uint *)((int)piVar4 + *(int *)(iVar28 + 0xc)) = bVar1 & 1;
                uVar17 = param_1[6];
              }
              uVar18 = uVar18 + 1;
              if (uVar17 <= uVar18) break;
              iVar28 = param_1[7];
            }
          }
          goto LAB_2c475e5e;
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar17);
  }
  if (local_1ec != 0) {
    iVar28 = (*(code *)*param_2)(param_2[2],local_1ec << 4);
    piVar4[2] = iVar28;
    if (iVar28 == 0) {
LAB_2c475e5e:
      FUN_2c47573c(piVar4,param_2);
      if (uVar7 != 0) {
        ppuVar25 = local_1d8;
        uVar17 = 1;
        do {
          ppuVar25 = ppuVar25 + 1;
          if (*ppuVar25 != (undefined1 *)0x0) {
            (*(code *)param_2[1])(param_2[2]);
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 <= uVar7);
      }
LAB_2c475afc:
      if (bVar2) {
        local_200 = (int *)0x0;
        (*(code *)param_2[1])(param_2[2],piVar3);
        piVar4 = local_200;
        goto LAB_2c475b08;
      }
      goto LAB_2c475b04;
    }
  }
  goto LAB_2c475ea0;
}

