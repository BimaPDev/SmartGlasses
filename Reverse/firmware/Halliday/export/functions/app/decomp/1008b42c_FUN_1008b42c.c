/* FUN_1008b42c @ 0x1008b42c */

void FUN_1008b42c(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined2 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  int iVar14;
  code *pcVar15;
  int iVar16;
  int *piVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  undefined4 uVar24;
  int *piVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int local_e4;
  undefined2 *local_d4;
  undefined2 *local_d0;
  undefined2 *local_c4;
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [5];
  undefined1 local_6f;
  undefined2 local_6e;
  undefined1 local_65;
  undefined4 local_60;
  undefined1 local_56;
  
  piVar4 = DAT_1008b690;
  iVar5 = FUN_1012a74e(*DAT_1008b690);
  pcVar15 = *(code **)(*(int *)*piVar4 + 0x44);
  if (pcVar15 != (code *)0x0) {
    (*pcVar15)(*(int *)*piVar4,*(undefined4 *)(param_1 + 8));
  }
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))(param_1);
  }
  do {
    iVar16 = *(int *)*piVar4;
    do {
      if (*(int *)(iVar5 + 0x20) != *(int *)(iVar5 + 0x1c)) {
        if ((int)((uint)*(byte *)(iVar16 + 0x1c) << 0x19) < 0) {
          uVar6 = *(undefined4 *)(*(int *)(iVar16 + 0x18) + 0x14);
          if (*(code **)(iVar16 + 0x2c) == (code *)0x0) {
            FUN_101271ae(uVar6,*(int *)(*(int *)(iVar16 + 0x18) + 0x18) * 3);
          }
          else {
            (**(code **)(iVar16 + 0x2c))(iVar16,uVar6);
          }
        }
        uVar24 = *(undefined4 *)(param_1 + 4);
        uVar6 = FUN_10086bac(*piVar4);
        iVar5 = FUN_1012713c(uVar24,uVar6);
        if (*(int *)(*piVar4 + 0x14) == 0) {
          iVar16 = 0;
          iVar7 = iVar5;
joined_r0x1008b9dc:
          if (iVar7 == 0) {
            iVar16 = FUN_10092f10(*piVar4);
            iVar7 = FUN_10092f2c(*piVar4);
            FUN_1012a82e(auStack_84,0,0,iVar16 + -1,iVar7 + -1);
            if (*(int *)(param_1 + 0x30) == 0) {
              if (*(int *)(*piVar4 + 0x2c) == 0) {
                FUN_1008d20c(auStack_74);
                local_6e = *(undefined2 *)(*piVar4 + 0x2a);
                local_6f = *(undefined1 *)(*piVar4 + 0x29);
                FUN_10128076(param_1,auStack_74,*(undefined4 *)(param_1 + 4));
              }
              else {
                iVar16 = FUN_1008db78(*(int *)(*piVar4 + 0x2c),auStack_88);
                if (iVar16 == 1) {
                  FUN_10127788(auStack_74);
                  local_65 = *(undefined1 *)(*piVar4 + 0x29);
                  FUN_1008c0e0(param_1,auStack_74,auStack_84,*(undefined4 *)(*piVar4 + 0x2c));
                }
                else {
                  FUN_10094174(2,DAT_1008b69c,0x36b,DAT_1008b6a4,DAT_1008b6a0);
                }
              }
            }
            else {
              FUN_1008d20c(auStack_74);
              iVar16 = *piVar4;
              local_60 = *(undefined4 *)(iVar16 + 0x2c);
              local_6f = *(undefined1 *)(iVar16 + 0x29);
              local_6e = *(undefined2 *)(iVar16 + 0x2a);
              local_56 = local_6f;
              (**(code **)(param_1 + 0x30))(param_1,auStack_74,auStack_84);
            }
            iVar16 = 0;
          }
        }
        else {
          iVar16 = FUN_1012713c(*(undefined4 *)(param_1 + 4),*(int *)(*piVar4 + 0x14));
          iVar7 = iVar16;
          if (iVar5 == 0) goto joined_r0x1008b9dc;
        }
        iVar7 = *piVar4;
        if ((int)((uint)*(byte *)(iVar7 + 0x28) << 0x1f) < 0) {
          if (iVar5 == 0) {
            iVar5 = *(int *)(iVar7 + 0x10);
          }
          FUN_1008b3a0(param_1,iVar5);
          if (*(int *)(*piVar4 + 0x14) != 0) {
            iVar5 = *(int *)(*piVar4 + 0x14);
            if (iVar16 != 0) {
              iVar5 = iVar16;
            }
            goto LAB_1008b518;
          }
        }
        else {
          if (*(int *)(iVar7 + 0x14) != 0) {
            iVar7 = *(int *)(iVar7 + 0x14);
            if (iVar16 != 0) {
              iVar7 = iVar16;
            }
            FUN_1008b3a0(param_1,iVar7);
          }
          if (iVar5 == 0) {
            iVar5 = *(int *)(*piVar4 + 0x10);
          }
LAB_1008b518:
          FUN_1008b3a0(param_1,iVar5);
        }
        uVar6 = FUN_10086c14(*piVar4);
        FUN_1008b3a0(param_1,uVar6);
        uVar6 = FUN_10086c48(*piVar4);
        FUN_1008b3a0(param_1,uVar6);
        piVar17 = (int *)*piVar4;
        iVar5 = FUN_1012a74e(piVar17);
        if ((*(int *)(*(int *)(*(int *)*piVar4 + 0x18) + 0x28) << 0x1f < 0) &&
           (*(int *)(*(int *)(*(int *)*piVar4 + 0x18) + 0x28) << 0x1e < 0)) {
          uVar6 = 1;
        }
        else {
          uVar6 = 0;
        }
        *(undefined4 *)(iVar5 + 0x24) = uVar6;
        iVar16 = *(int *)(iVar5 + 0x24);
        piVar25 = *(int **)(*piVar17 + 0x4c);
        if ((iVar16 != 0) && ((code *)piVar25[0xd] != (code *)0x0)) {
          (*(code *)piVar25[0xd])(piVar25);
        }
        piVar8 = (int *)*piVar17;
        if (piVar8[8] == 0) goto LAB_1008b5be;
        if (((*(byte *)(piVar8 + 7) & 0x30) != 0) &&
           ((int)((uint)*(byte *)(piVar8 + 7) << 0x1d) < 0)) {
          if ((code *)piVar25[0xd] != (code *)0x0) {
            (*(code *)piVar25[0xd])(piVar25);
          }
          iVar7 = *piVar25;
          piVar25 = (int *)piVar25[1];
          piVar8 = *(int **)*piVar4;
          uVar18 = (uint)*(byte *)(piVar8 + 7);
          if ((uVar18 & 6) == 6) {
            FUN_10094174(3,DAT_1008b69c,0x515,DAT_1008b698,DAT_1008b694);
          }
          else if ((uVar18 & 0x30) == 0x20) {
            iVar30 = piVar25[3];
            iVar26 = piVar25[2];
            iVar11 = *piVar25;
            iVar9 = piVar25[1];
            iVar19 = (iVar30 + 1) - iVar9;
            uVar20 = (iVar26 - iVar11) * iVar19 + iVar19;
            for (uVar18 = 0; uVar20 = uVar20 - 1, uVar18 < uVar20; uVar18 = uVar18 + 1) {
              uVar3 = *(undefined2 *)(iVar7 + uVar20 * 2);
              *(undefined2 *)(iVar7 + uVar20 * 2) = *(undefined2 *)(iVar7 + uVar18 * 2);
              *(undefined2 *)(iVar7 + uVar18 * 2) = uVar3;
            }
            iVar19 = piVar8[1];
            iVar21 = *piVar8;
            piVar25[3] = (iVar19 + -1) - iVar9;
            piVar25[1] = (iVar19 + -1) - iVar30;
            piVar25[2] = (iVar21 + -1) - iVar11;
            *piVar25 = (iVar21 + -1) - iVar26;
LAB_1008b6ee:
            FUN_10127112(piVar8,piVar25,iVar7);
          }
          else if ((int)(uVar18 << 0x1b) < 0) {
            iVar9 = FUN_1012a74e();
            iVar11 = piVar25[2];
            iVar19 = *piVar25;
            iVar26 = iVar11 - iVar19;
            uVar27 = iVar26 + 1;
            iVar30 = piVar25[1];
            uVar20 = (piVar25[3] + 1) - iVar30;
            uVar18 = 0x1400 / uVar27;
            if ((int)uVar20 <= (int)(0x1400 / uVar27)) {
              uVar18 = uVar20;
            }
            if ((*(byte *)(piVar8 + 7) & 0x30) == 0x10) {
              iVar21 = piVar8[1];
              piVar25[3] = (iVar21 + -1) - iVar19;
              piVar25[1] = (iVar21 + -1) - iVar11;
            }
            else {
              piVar25[1] = iVar19;
              piVar25[3] = iVar19 + -1 + uVar27;
            }
            iVar21 = 0;
            local_e4 = 0;
            while (iVar21 < (int)uVar20) {
              uVar29 = uVar20 - iVar21;
              if ((int)uVar18 <= (int)(uVar20 - iVar21)) {
                uVar29 = uVar18;
              }
              if ((iVar21 == 0) && ((int)uVar27 <= (int)uVar20)) {
                bVar2 = *(byte *)(piVar8 + 7);
                local_c4 = (undefined2 *)(iVar7 + uVar27 * iVar26 * 2);
                iVar33 = 0;
                for (iVar31 = iVar26; iVar26 - iVar31 < (int)uVar27 / 2; iVar31 = iVar31 + -1) {
                  puVar12 = (undefined2 *)(iVar33 * -2 + (uVar27 * iVar26 + iVar26) * 2 + iVar7);
                  local_d4 = (undefined2 *)(iVar7 + iVar31 * 2);
                  puVar10 = (undefined2 *)(iVar7 + iVar33 * 2);
                  local_d0 = local_c4;
                  for (iVar28 = 0; iVar28 < (iVar26 + 2) / 2; iVar28 = iVar28 + 1) {
                    uVar3 = *puVar10;
                    if ((bVar2 & 0x30) == 0x30) {
                      *puVar10 = *local_d0;
                      *local_d0 = *puVar12;
                      *puVar12 = *local_d4;
                      puVar13 = local_d4;
                    }
                    else {
                      *puVar10 = *local_d4;
                      *local_d4 = *puVar12;
                      *puVar12 = *local_d0;
                      puVar13 = local_d0;
                    }
                    *puVar13 = uVar3;
                    local_d0 = local_d0 + -uVar27;
                    puVar10 = puVar10 + 1;
                    local_d4 = local_d4 + uVar27;
                    puVar12 = puVar12 + -1;
                  }
                  iVar33 = iVar33 + uVar27;
                  local_c4 = local_c4 + 1;
                }
                uVar29 = uVar27;
                if ((*(byte *)(piVar8 + 7) & 0x30) == 0x10) {
                  *piVar25 = iVar30;
                  piVar25[2] = iVar30 + -1 + uVar27;
                }
                else {
                  iVar33 = (*piVar8 + -1) - iVar30;
                  piVar25[2] = iVar33;
                  *piVar25 = iVar33 + (iVar19 - iVar11);
                }
              }
              else {
                if (local_e4 == 0) {
                  local_e4 = FUN_100942d8(0x2800);
                }
                uVar22 = *(byte *)(piVar8 + 7) & 0x30;
                iVar28 = uVar29 * uVar27 - uVar29;
                iVar33 = iVar7;
                for (iVar31 = 0; iVar31 < (int)uVar29; iVar31 = iVar31 + 1) {
                  iVar32 = 0;
                  uVar23 = uVar22;
                  if (uVar22 == 0x30) {
                    uVar23 = (uVar29 * uVar27 + -1) - iVar28;
                  }
                  iVar14 = iVar28 + iVar31;
                  if (uVar22 == 0x30) {
                    iVar14 = uVar23 - iVar31;
                  }
                  while (iVar32 < (int)uVar27) {
                    iVar1 = iVar32 * 2;
                    iVar32 = iVar32 + 1;
                    *(undefined2 *)(local_e4 + iVar14 * 2) = *(undefined2 *)(iVar33 + iVar1);
                    uVar23 = uVar29;
                    if (uVar22 != 0x30) {
                      uVar23 = -uVar29;
                    }
                    iVar14 = iVar14 + uVar23;
                  }
                  iVar33 = iVar33 + (uVar27 & ~((int)uVar27 >> 0x1f)) * 2;
                }
                if ((*(byte *)(piVar8 + 7) & 0x30) == 0x10) {
                  *piVar25 = iVar30 + iVar21;
                  piVar25[2] = iVar30 + iVar21 + -1 + uVar29;
                }
                else {
                  iVar33 = ((*piVar8 + -1) - iVar30) - iVar21;
                  piVar25[2] = iVar33;
                  *piVar25 = (iVar33 + 1) - uVar29;
                }
              }
              iVar21 = iVar21 + uVar29;
              if (((iVar21 < (int)uVar20) || (-1 < *(int *)(iVar9 + 0x28) << 0x1f)) ||
                 (-1 < *(int *)(iVar9 + 0x28) << 0x1e)) {
                uVar6 = 0;
              }
              else {
                uVar6 = 1;
              }
              *(undefined4 *)(iVar9 + 0x24) = uVar6;
              iVar33 = local_e4;
              if (local_e4 == 0) {
                iVar33 = iVar7;
              }
              FUN_10127112(piVar8,piVar25,iVar33);
              *(int *)(iVar9 + 0x20) = *(int *)(iVar9 + 0x20) + 1;
              while (iVar33 = FUN_1012a73c(piVar8), iVar33 == 0) {
                if ((code *)piVar8[0xd] != (code *)0x0) {
                  (*(code *)piVar8[0xd])(piVar8);
                }
              }
              uVar22 = uVar20;
              if ((int)uVar20 <= iVar21) {
                uVar22 = *(uint *)(iVar9 + 0x20);
              }
              iVar7 = iVar7 + uVar29 * uVar27 * 2;
              if ((int)uVar20 <= iVar21) {
                *(uint *)(iVar9 + 0x20) = uVar22 - 1;
              }
            }
            if (local_e4 != 0) {
              FUN_10094444(local_e4);
            }
          }
LAB_1008b5be:
          if ((-1 < (int)((uint)*(byte *)(*piVar17 + 0x1c) << 0x1f)) || (iVar16 != 0)) {
            *(int *)(iVar5 + 0x20) = *(int *)(iVar5 + 0x20) + 1;
            *(undefined4 *)(iVar5 + 0x14) =
                 *(undefined4 *)
                  (iVar5 + (*(uint *)(iVar5 + 0x20) -
                           (uint)*(byte *)(iVar5 + 0x10) *
                           (*(uint *)(iVar5 + 0x20) / (uint)*(byte *)(iVar5 + 0x10))) * 4);
          }
          return;
        }
        iVar7 = *piVar25;
        piVar25 = (int *)piVar25[1];
        goto LAB_1008b6ee;
      }
    } while (*(code **)(iVar16 + 0x34) == (code *)0x0);
    (**(code **)(iVar16 + 0x34))(iVar16);
  } while( true );
}

