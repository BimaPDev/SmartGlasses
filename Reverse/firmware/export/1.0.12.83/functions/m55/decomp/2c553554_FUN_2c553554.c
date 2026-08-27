/* FUN_2c553554 @ 0x2c553554 */

void FUN_2c553554(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 extraout_r1;
  int *extraout_r1_00;
  int *extraout_r1_01;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined8 uVar16;
  int *piStack_108;
  int iStack_104;
  int iStack_f4;
  uint uStack_f0;
  uint *puStack_ec;
  uint uStack_e8;
  uint auStack_e4 [4];
  uint *puStack_d4;
  uint uStack_d0;
  uint auStack_cc [4];
  uint *puStack_bc;
  uint uStack_b8;
  uint auStack_b4 [4];
  uint *puStack_a4;
  uint uStack_a0;
  uint auStack_9c [4];
  uint *puStack_8c;
  uint uStack_88;
  uint auStack_84 [4];
  uint *puStack_74;
  uint uStack_70;
  uint auStack_6c [4];
  uint *puStack_5c;
  uint uStack_58;
  uint auStack_54 [4];
  uint *puStack_44;
  uint uStack_40;
  uint auStack_3c [4];
  uint uStack_2c;
  
  uStack_2c = *DAT_2c5535d8;
  FUN_2c5533c8(&puStack_5c,param_1);
  FUN_2c5533c8(&puStack_44,param_2);
  uVar3 = uStack_40;
  puVar2 = puStack_44;
  uVar12 = uStack_58;
  puVar1 = puStack_5c;
  uVar7 = uStack_58;
  if (uStack_40 <= uStack_58) {
    uVar7 = uStack_40;
  }
  uVar4 = extraout_r1;
  if (uVar7 == 0) {
LAB_2c5535d2:
    uVar16 = CONCAT44(uVar4,uVar12 - uVar3);
  }
  else {
    uVar16 = FUN_2c66960c(puStack_5c,puStack_44);
    uVar4 = (undefined4)((ulonglong)uVar16 >> 0x20);
    if ((int)uVar16 == 0) goto LAB_2c5535d2;
  }
  piVar9 = (int *)((ulonglong)uVar16 >> 0x20);
  if (puVar2 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar2);
  }
  if (puVar1 != auStack_54) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar1);
  }
  if ((int)uVar16 != 0) {
    uVar4 = 0;
    goto LAB_2c5535bc;
  }
  iStack_104 = *(int *)(param_2 + 0xb0);
  iVar6 = *(int *)(param_2 + 0xb4);
  if (iStack_104 == iVar6) {
    piStack_108 = *(int **)(param_1 + 0xb4);
  }
  else {
    piStack_108 = *(int **)(param_1 + 0xb4);
    do {
      iStack_f4 = iStack_104;
      piVar9 = *(int **)(param_1 + 0xb0);
      iVar8 = DAT_2c5538d4 * ((int)piStack_108 - (int)piVar9 >> 3);
      if (0 < iVar8 >> 2) {
        piVar10 = piVar9 + (iVar8 >> 2) * 0x58;
        do {
          puVar14 = (undefined1 *)piVar9[1];
          uVar12 = piVar9[2];
          puStack_ec = auStack_e4;
          if ((puVar14 + uVar12 != (undefined1 *)0x0) && (puVar14 == (undefined1 *)0x0))
          goto LAB_2c553d9e;
          uStack_f0 = uVar12;
          if (uVar12 < 0x10) {
            if (uVar12 == 1) {
              auStack_e4[0] = CONCAT31(auStack_e4[0]._1_3_,*puVar14);
            }
            else if (uVar12 != 0) goto LAB_2c553b46;
          }
          else {
            puStack_ec = (uint *)FUN_2c54f538(&uStack_f0,0);
            auStack_e4[0] = uStack_f0;
LAB_2c553b46:
            FUN_2c674668(puStack_ec,puVar14,uVar12);
          }
          *(undefined1 *)((int)puStack_ec + uStack_f0) = 0;
          uStack_e8 = uStack_f0;
          FUN_2c5392f4(&puStack_ec,piVar9[7],piVar9[8]);
          iVar8 = iStack_f4;
          puVar14 = *(undefined1 **)(iStack_f4 + 4);
          uVar12 = *(uint *)(iStack_f4 + 8);
          puStack_d4 = auStack_cc;
          if ((puVar14 + uVar12 != (undefined1 *)0x0) && (puVar14 == (undefined1 *)0x0))
          goto LAB_2c553d9e;
          uStack_f0 = uVar12;
          if (uVar12 < 0x10) {
            if (uVar12 == 1) {
              auStack_cc[0] = CONCAT31(auStack_cc[0]._1_3_,*puVar14);
            }
            else if (uVar12 != 0) goto LAB_2c553b62;
          }
          else {
            puStack_d4 = (uint *)FUN_2c54f538(&uStack_f0,0);
            auStack_cc[0] = uStack_f0;
LAB_2c553b62:
            FUN_2c674668(puStack_d4,puVar14,uVar12);
          }
          *(undefined1 *)((int)puStack_d4 + uStack_f0) = 0;
          uStack_d0 = uStack_f0;
          FUN_2c5392f4(&puStack_d4,*(undefined4 *)(iVar8 + 0x1c),*(undefined4 *)(iVar8 + 0x20));
          uVar3 = uStack_d0;
          puVar2 = puStack_d4;
          uVar12 = uStack_e8;
          puVar1 = puStack_ec;
          uVar7 = uStack_e8;
          if (uStack_d0 <= uStack_e8) {
            uVar7 = uStack_d0;
          }
          if ((uVar7 == 0) || (iVar8 = FUN_2c66960c(puStack_ec), iVar8 == 0)) {
            iVar8 = uVar12 - uVar3;
          }
          if (puVar2 != auStack_cc) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          if (puVar1 != auStack_e4) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,puVar1);
          }
          piVar5 = piVar9;
          if (iVar8 == 0) goto LAB_2c553970;
          puVar14 = (undefined1 *)piVar9[0x17];
          uVar12 = piVar9[0x18];
          puStack_bc = auStack_b4;
          if ((puVar14 + uVar12 != (undefined1 *)0x0) && (puVar14 == (undefined1 *)0x0))
          goto LAB_2c553d9e;
          uStack_f0 = uVar12;
          if (uVar12 < 0x10) {
            if (uVar12 == 1) {
              auStack_b4[0] = CONCAT31(auStack_b4[0]._1_3_,*puVar14);
            }
            else if (uVar12 != 0) goto LAB_2c553bb0;
          }
          else {
            puStack_bc = (uint *)FUN_2c54f538(&uStack_f0,0);
            auStack_b4[0] = uStack_f0;
LAB_2c553bb0:
            FUN_2c674668(puStack_bc,puVar14,uVar12);
          }
          *(undefined1 *)((int)puStack_bc + uStack_f0) = 0;
          uStack_b8 = uStack_f0;
          FUN_2c5392f4(&puStack_bc,piVar9[0x1d],piVar9[0x1e]);
          iVar8 = iStack_f4;
          puVar14 = *(undefined1 **)(iStack_f4 + 4);
          uVar12 = *(uint *)(iStack_f4 + 8);
          puStack_a4 = auStack_9c;
          if ((puVar14 + uVar12 != (undefined1 *)0x0) && (puVar14 == (undefined1 *)0x0))
          goto LAB_2c553d9e;
          uStack_f0 = uVar12;
          if (uVar12 < 0x10) {
            if (uVar12 == 1) {
              auStack_9c[0] = CONCAT31(auStack_9c[0]._1_3_,*puVar14);
            }
            else if (uVar12 != 0) goto LAB_2c553b96;
          }
          else {
            puStack_a4 = (uint *)FUN_2c54f538(&uStack_f0,0);
            auStack_9c[0] = uStack_f0;
LAB_2c553b96:
            FUN_2c674668(puStack_a4,puVar14,uVar12);
          }
          *(undefined1 *)((int)puStack_a4 + uStack_f0) = 0;
          uStack_a0 = uStack_f0;
          FUN_2c5392f4(&puStack_a4,*(undefined4 *)(iVar8 + 0x1c),*(undefined4 *)(iVar8 + 0x20));
          uVar3 = uStack_a0;
          puVar2 = puStack_a4;
          uVar12 = uStack_b8;
          puVar1 = puStack_bc;
          uVar7 = uStack_b8;
          if (uStack_a0 <= uStack_b8) {
            uVar7 = uStack_a0;
          }
          if ((uVar7 == 0) || (iVar8 = FUN_2c66960c(puStack_bc), iVar8 == 0)) {
            iVar8 = uVar12 - uVar3;
          }
          if (puVar2 != auStack_9c) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          if (puVar1 != auStack_b4) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,puVar1);
          }
          if (iVar8 == 0) {
            piVar5 = piVar9 + 0x16;
            goto LAB_2c553970;
          }
          puVar14 = (undefined1 *)piVar9[0x2d];
          uVar12 = piVar9[0x2e];
          puStack_8c = auStack_84;
          if ((puVar14 + uVar12 != (undefined1 *)0x0) && (puVar14 == (undefined1 *)0x0))
          goto LAB_2c553d9e;
          uStack_f0 = uVar12;
          if (uVar12 < 0x10) {
            if (uVar12 == 1) {
              auStack_84[0] = CONCAT31(auStack_84[0]._1_3_,*puVar14);
            }
            else if (uVar12 != 0) goto LAB_2c553be0;
          }
          else {
            puStack_8c = (uint *)FUN_2c54f538(&uStack_f0,0);
            auStack_84[0] = uStack_f0;
LAB_2c553be0:
            FUN_2c674668(puStack_8c,puVar14,uVar12);
          }
          *(undefined1 *)((int)puStack_8c + uStack_f0) = 0;
          uStack_88 = uStack_f0;
          FUN_2c5392f4(&puStack_8c,piVar9[0x33],piVar9[0x34]);
          iVar8 = iStack_f4;
          puVar14 = *(undefined1 **)(iStack_f4 + 4);
          uVar12 = *(uint *)(iStack_f4 + 8);
          puStack_74 = auStack_6c;
          if ((puVar14 + uVar12 != (undefined1 *)0x0) && (puVar14 == (undefined1 *)0x0))
          goto LAB_2c553d9e;
          uStack_f0 = uVar12;
          if (uVar12 < 0x10) {
            if (uVar12 == 1) {
              auStack_6c[0] = CONCAT31(auStack_6c[0]._1_3_,*puVar14);
            }
            else if (uVar12 != 0) goto LAB_2c553c00;
          }
          else {
            puStack_74 = (uint *)FUN_2c54f538(&uStack_f0,0);
            auStack_6c[0] = uStack_f0;
LAB_2c553c00:
            FUN_2c674668(puStack_74,puVar14,uVar12);
          }
          *(undefined1 *)((int)puStack_74 + uStack_f0) = 0;
          uStack_70 = uStack_f0;
          FUN_2c5392f4(&puStack_74,*(undefined4 *)(iVar8 + 0x1c),*(undefined4 *)(iVar8 + 0x20));
          uVar3 = uStack_70;
          puVar2 = puStack_74;
          uVar12 = uStack_88;
          puVar1 = puStack_8c;
          uVar7 = uStack_88;
          if (uStack_70 <= uStack_88) {
            uVar7 = uStack_70;
          }
          if ((uVar7 == 0) || (iVar8 = FUN_2c66960c(puStack_8c), iVar8 == 0)) {
            iVar8 = uVar12 - uVar3;
          }
          if (puVar2 != auStack_6c) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          if (puVar1 != auStack_84) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,puVar1);
          }
          if (iVar8 == 0) {
            piVar5 = piVar9 + 0x2c;
            goto LAB_2c553970;
          }
          puVar14 = (undefined1 *)piVar9[0x43];
          uVar12 = piVar9[0x44];
          puStack_5c = auStack_54;
          if ((puVar14 + uVar12 != (undefined1 *)0x0) && (puVar14 == (undefined1 *)0x0))
          goto LAB_2c553d9e;
          uStack_f0 = uVar12;
          if (uVar12 < 0x10) {
            if (uVar12 == 1) {
              auStack_54[0] = CONCAT31(auStack_54[0]._1_3_,*puVar14);
            }
            else if (uVar12 != 0) goto LAB_2c553c34;
          }
          else {
            puStack_5c = (uint *)FUN_2c54f538(&uStack_f0,0);
            auStack_54[0] = uStack_f0;
LAB_2c553c34:
            FUN_2c674668(puStack_5c,puVar14,uVar12);
          }
          *(undefined1 *)((int)puStack_5c + uStack_f0) = 0;
          uStack_58 = uStack_f0;
          FUN_2c5392f4(&puStack_5c,piVar9[0x49],piVar9[0x4a]);
          iVar8 = iStack_f4;
          puStack_44 = auStack_3c;
          puVar14 = *(undefined1 **)(iStack_f4 + 4);
          uVar12 = *(uint *)(iStack_f4 + 8);
          if ((puVar14 + uVar12 != (undefined1 *)0x0) && (puVar14 == (undefined1 *)0x0)) {
LAB_2c553d9e:
                    /* WARNING: Subroutine does not return */
            FUN_2c658674(DAT_2c553dcc);
          }
          uStack_f0 = uVar12;
          if (uVar12 < 0x10) {
            if (uVar12 == 1) {
              auStack_3c[0] = CONCAT31(auStack_3c[0]._1_3_,*puVar14);
            }
            else if (uVar12 != 0) goto LAB_2c553c50;
          }
          else {
            puStack_44 = (uint *)FUN_2c54f538(&uStack_f0,0);
            auStack_3c[0] = uStack_f0;
LAB_2c553c50:
            FUN_2c674668(puStack_44,puVar14,uVar12);
          }
          *(undefined1 *)((int)puStack_44 + uStack_f0) = 0;
          uStack_40 = uStack_f0;
          FUN_2c5392f4(&puStack_44,*(undefined4 *)(iVar8 + 0x1c),*(undefined4 *)(iVar8 + 0x20));
          uVar3 = uStack_40;
          puVar2 = puStack_44;
          uVar12 = uStack_58;
          puVar1 = puStack_5c;
          uVar7 = uStack_58;
          if (uStack_40 <= uStack_58) {
            uVar7 = uStack_40;
          }
          if ((uVar7 == 0) || (iVar8 = FUN_2c66960c(puStack_5c), iVar8 == 0)) {
            iVar8 = uVar12 - uVar3;
          }
          if (puVar2 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          if (puVar1 != auStack_54) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,puVar1);
          }
          if (iVar8 == 0) {
            piVar5 = piVar9 + 0x42;
            goto LAB_2c553970;
          }
          piVar9 = piVar9 + 0x58;
        } while (piVar10 != piVar9);
        iVar8 = DAT_2c553c18 * ((int)piStack_108 - (int)piVar9 >> 3);
      }
      if (iVar8 == 2) {
LAB_2c553d0e:
        iVar8 = FUN_2c5528b4(&iStack_f4,piVar9);
        piVar5 = piVar9;
        if (iVar8 == 0) {
          piVar9 = piVar9 + 0x16;
LAB_2c553cea:
          iVar8 = FUN_2c5528b4(&iStack_f4,piVar9);
          piVar5 = piStack_108;
          if (iVar8 != 0) {
            piVar5 = piVar9;
          }
        }
      }
      else if (iVar8 == 3) {
        iVar8 = FUN_2c5528b4(&iStack_f4,piVar9);
        piVar5 = piVar9;
        if (iVar8 == 0) {
          piVar9 = piVar9 + 0x16;
          goto LAB_2c553d0e;
        }
      }
      else {
        piVar5 = piStack_108;
        if (iVar8 == 1) goto LAB_2c553cea;
      }
LAB_2c553970:
      piStack_108 = piVar5;
      if (*(int **)(param_1 + 0xb4) != piStack_108) {
        FUN_2c552d48(piStack_108,iStack_104);
        piStack_108 = *(int **)(param_1 + 0xb4);
      }
      iStack_104 = iStack_104 + 0x58;
    } while (iVar6 != iStack_104);
  }
  piVar10 = *(int **)(param_1 + 0xb0);
  iVar6 = DAT_2c553c18 * ((int)piStack_108 - (int)piVar10 >> 3);
  piVar9 = (int *)(iVar6 >> 2);
  if (0 < (int)piVar9) {
    piVar9 = piVar10 + (int)piVar9 * 0x58;
    do {
      if (piVar10[0xe] == piVar10[0xd]) goto LAB_2c5539ec;
      if (piVar10[0x24] == piVar10[0x23]) {
        piVar10 = piVar10 + 0x16;
        goto LAB_2c5539ec;
      }
      if (piVar10[0x3a] == piVar10[0x39]) {
        piVar10 = piVar10 + 0x2c;
        goto LAB_2c5539ec;
      }
      if (piVar10[0x50] == piVar10[0x4f]) {
        piVar10 = piVar10 + 0x42;
        goto LAB_2c5539ec;
      }
      piVar10 = piVar10 + 0x58;
    } while (piVar9 != piVar10);
    iVar6 = DAT_2c553dc8 * ((int)piStack_108 - (int)piVar10 >> 3);
  }
  if (iVar6 == 2) {
LAB_2c553d62:
    if (piVar10[0xe] != piVar10[0xd]) {
      piVar10 = piVar10 + 0x16;
LAB_2c553d3c:
      if (piVar10[0xe] != piVar10[0xd]) goto LAB_2c553b20;
    }
LAB_2c5539ec:
    if (piStack_108 != piVar10) {
      piVar11 = piVar10 + 0x16;
      piVar5 = piVar10;
      if (piStack_108 != piVar11) {
        do {
          if (piVar11[0xe] != piVar11[0xd]) {
            piVar9 = piVar11 + 3;
            piVar5 = (int *)piVar10[1];
            if (piVar9 == (int *)piVar11[1]) {
              iVar6 = 0;
              if (piVar11[2] != 0) {
                if (piVar11[2] == 1) {
                  *(char *)piVar5 = (char)piVar11[3];
                  iVar6 = piVar11[2];
                  piVar5 = (int *)piVar10[1];
                }
                else {
                  FUN_2c674668();
                  iVar6 = piVar11[2];
                  piVar5 = (int *)piVar10[1];
                }
              }
              piVar10[2] = iVar6;
              *(undefined1 *)((int)piVar5 + iVar6) = 0;
              piVar9 = (int *)piVar11[1];
            }
            else {
              piVar10[1] = piVar11[1];
              piVar10[2] = piVar11[2];
              if (piVar5 == piVar10 + 3) {
                piVar10[3] = piVar11[3];
              }
              else {
                iVar6 = piVar10[3];
                piVar10[3] = piVar11[3];
                if (piVar5 != (int *)0x0) {
                  piVar11[3] = iVar6;
                  piVar11[1] = (int)piVar5;
                  piVar9 = piVar5;
                  goto LAB_2c553a3a;
                }
              }
              piVar11[1] = (int)piVar9;
            }
LAB_2c553a3a:
            piVar11[2] = 0;
            piVar5 = piVar11 + 9;
            *(undefined1 *)piVar9 = 0;
            piVar9 = (int *)piVar10[7];
            if (piVar5 == (int *)piVar11[7]) {
              iVar6 = 0;
              if (piVar11[8] != 0) {
                if (piVar11[8] == 1) {
                  *(char *)piVar9 = (char)piVar11[9];
                  iVar6 = piVar11[8];
                  piVar9 = (int *)piVar10[7];
                }
                else {
                  FUN_2c674668();
                  iVar6 = piVar11[8];
                  piVar9 = (int *)piVar10[7];
                }
              }
              piVar10[8] = iVar6;
              *(undefined1 *)((int)piVar9 + iVar6) = 0;
              piVar5 = (int *)piVar11[7];
            }
            else {
              piVar10[7] = piVar11[7];
              piVar10[8] = piVar11[8];
              if (piVar9 == piVar10 + 9) {
                piVar10[9] = piVar11[9];
              }
              else {
                iVar6 = piVar10[9];
                piVar10[9] = piVar11[9];
                if (piVar9 != (int *)0x0) {
                  piVar11[9] = iVar6;
                  piVar11[7] = (int)piVar9;
                  piVar5 = piVar9;
                  goto LAB_2c553a70;
                }
              }
              piVar11[7] = (int)piVar5;
            }
LAB_2c553a70:
            piVar11[8] = 0;
            *(undefined1 *)piVar5 = 0;
            iVar6 = piVar10[0xd];
            iVar8 = piVar10[0xe];
            piVar10[0xd] = piVar11[0xd];
            piVar10[0xe] = piVar11[0xe];
            piVar10[0xf] = piVar11[0xf];
            piVar11[0xf] = 0;
            piVar11[0xd] = 0;
            piVar11[0xe] = 0;
            if (iVar6 != iVar8) {
              iVar13 = iVar6 + 8;
              iVar15 = iVar6;
              do {
                if (iVar13 != *(int *)(iVar13 + -8)) {
                    /* WARNING: Subroutine does not return */
                  FUN_2c472680(0);
                }
                iVar15 = iVar15 + 0x18;
                iVar13 = iVar13 + 0x18;
              } while (iVar8 != iVar15);
            }
            if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_2c472680(0,iVar6);
            }
            piVar9 = piVar11 + 0x12;
            piVar5 = (int *)piVar10[0x10];
            if (piVar9 == (int *)piVar11[0x10]) {
              iVar6 = 0;
              if (piVar11[0x11] != 0) {
                if (piVar11[0x11] == 1) {
                  *(char *)piVar5 = (char)piVar11[0x12];
                  iVar6 = piVar11[0x11];
                  piVar5 = (int *)piVar10[0x10];
                }
                else {
                  FUN_2c674668();
                  iVar6 = piVar11[0x11];
                  piVar5 = (int *)piVar10[0x10];
                  piVar9 = extraout_r1_01;
                }
              }
              piVar10[0x11] = iVar6;
              *(undefined1 *)((int)piVar5 + iVar6) = 0;
              piVar5 = (int *)piVar11[0x10];
            }
            else {
              piVar10[0x10] = piVar11[0x10];
              piVar10[0x11] = piVar11[0x11];
              if (piVar5 == piVar10 + 0x12) {
                piVar10[0x12] = piVar11[0x12];
              }
              else {
                iVar6 = piVar10[0x12];
                piVar10[0x12] = piVar11[0x12];
                if (piVar5 != (int *)0x0) {
                  piVar11[0x12] = iVar6;
                  piVar11[0x10] = (int)piVar5;
                  goto LAB_2c553af0;
                }
              }
              piVar11[0x10] = (int)piVar9;
              piVar5 = piVar9;
            }
LAB_2c553af0:
            piVar10 = piVar10 + 0x16;
            piVar11[0x11] = 0;
            *(undefined1 *)piVar5 = 0;
          }
          piVar11 = piVar11 + 0x16;
        } while (piStack_108 != piVar11);
        piVar11 = *(int **)(param_1 + 0xb4);
        piVar5 = piVar10;
        if (piVar11 == piVar10) goto LAB_2c553b20;
      }
      do {
        piVar9 = piVar10 + 0x16;
        (**(code **)(*piVar10 + 4))(piVar10);
        piVar10 = piVar9;
      } while (piVar11 != piVar9);
      *(int **)(param_1 + 0xb4) = piVar5;
      piVar9 = extraout_r1_00;
    }
  }
  else {
    if (iVar6 == 3) {
      if (piVar10[0xe] != piVar10[0xd]) {
        piVar10 = piVar10 + 0x16;
        goto LAB_2c553d62;
      }
      goto LAB_2c5539ec;
    }
    if (iVar6 == 1) goto LAB_2c553d3c;
  }
LAB_2c553b20:
  uVar4 = 1;
LAB_2c5535bc:
  if ((*DAT_2c5535d8 ^ uStack_2c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(uVar4,piVar9,*DAT_2c5535d8 ^ uStack_2c,0);
  }
  return;
}

