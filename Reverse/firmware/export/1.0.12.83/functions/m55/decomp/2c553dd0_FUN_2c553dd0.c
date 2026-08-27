/* FUN_2c553dd0 @ 0x2c553dd0 */

void FUN_2c553dd0(int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar7;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  longlong lVar20;
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
  
  uStack_2c = *DAT_2c553e54;
  FUN_2c5533c8(&puStack_5c,param_1);
  FUN_2c5533c8(&puStack_44,param_2);
  uVar4 = uStack_40;
  puVar3 = puStack_44;
  uVar14 = uStack_58;
  puVar2 = puStack_5c;
  uVar9 = uStack_58;
  if (uStack_40 <= uStack_58) {
    uVar9 = uStack_40;
  }
  uVar7 = extraout_r1;
  if (uVar9 != 0) {
    uVar19 = FUN_2c66960c(puStack_5c,puStack_44);
    uVar7 = (undefined4)((ulonglong)uVar19 >> 0x20);
    if ((int)uVar19 != 0) goto LAB_2c553e14;
  }
  uVar19 = CONCAT44(uVar7,uVar14 - uVar4);
LAB_2c553e14:
  uVar7 = (undefined4)((ulonglong)uVar19 >> 0x20);
  if (puVar3 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar3);
  }
  if (puVar2 != auStack_54) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar2);
  }
  if ((int)uVar19 == 0) {
    iVar8 = *(int *)(param_2 + 0xb4);
    for (iVar10 = *(int *)(param_2 + 0xb0); iVar10 != iVar8; iVar10 = iVar10 + 0x58) {
      puVar13 = *(undefined4 **)(param_1 + 0xb0);
      puVar11 = *(undefined4 **)(param_1 + 0xb4);
      iVar12 = DAT_2c554144 * ((int)puVar11 - (int)puVar13 >> 3);
      iStack_f4 = iVar10;
      if (0 < iVar12 >> 2) {
        puVar16 = puVar13 + (iVar12 >> 2) * 0x58;
        do {
          puVar15 = (undefined1 *)puVar13[1];
          uVar14 = puVar13[2];
          puStack_ec = auStack_e4;
          if ((puVar15 + uVar14 != (undefined1 *)0x0) && (puVar15 == (undefined1 *)0x0))
          goto LAB_2c554572;
          uStack_f0 = uVar14;
          if (uVar14 < 0x10) {
            if (uVar14 == 1) {
              auStack_e4[0] = CONCAT31(auStack_e4[0]._1_3_,*puVar15);
            }
            else if (uVar14 != 0) goto LAB_2c554246;
          }
          else {
            puStack_ec = (uint *)FUN_2c54f538(&uStack_f0,0);
            auStack_e4[0] = uStack_f0;
LAB_2c554246:
            FUN_2c674668(puStack_ec,puVar15,uVar14);
          }
          *(undefined1 *)((int)puStack_ec + uStack_f0) = 0;
          uStack_e8 = uStack_f0;
          FUN_2c5392f4(&puStack_ec,puVar13[7],puVar13[8]);
          iVar12 = iStack_f4;
          puVar15 = *(undefined1 **)(iStack_f4 + 4);
          uVar14 = *(uint *)(iStack_f4 + 8);
          puStack_d4 = auStack_cc;
          if ((puVar15 + uVar14 != (undefined1 *)0x0) && (puVar15 == (undefined1 *)0x0))
          goto LAB_2c554572;
          uStack_f0 = uVar14;
          if (uVar14 < 0x10) {
            if (uVar14 == 1) {
              auStack_cc[0] = CONCAT31(auStack_cc[0]._1_3_,*puVar15);
            }
            else if (uVar14 != 0) goto LAB_2c55422a;
          }
          else {
            puStack_d4 = (uint *)FUN_2c54f538(&uStack_f0,0);
            auStack_cc[0] = uStack_f0;
LAB_2c55422a:
            FUN_2c674668(puStack_d4,puVar15,uVar14);
          }
          *(undefined1 *)((int)puStack_d4 + uStack_f0) = 0;
          uStack_d0 = uStack_f0;
          FUN_2c5392f4(&puStack_d4,*(undefined4 *)(iVar12 + 0x1c),*(undefined4 *)(iVar12 + 0x20));
          uVar4 = uStack_d0;
          puVar3 = puStack_d4;
          uVar14 = uStack_e8;
          puVar2 = puStack_ec;
          uVar9 = uStack_e8;
          if (uStack_d0 <= uStack_e8) {
            uVar9 = uStack_d0;
          }
          if ((uVar9 == 0) || (iVar12 = FUN_2c66960c(puStack_ec), iVar12 == 0)) {
            iVar12 = uVar14 - uVar4;
          }
          if (puVar3 != auStack_cc) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          if (puVar2 != auStack_e4) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,puVar2);
          }
          if (iVar12 == 0) goto LAB_2c5541e2;
          puVar15 = (undefined1 *)puVar13[0x17];
          uVar14 = puVar13[0x18];
          puStack_bc = auStack_b4;
          if ((puVar15 + uVar14 != (undefined1 *)0x0) && (puVar15 == (undefined1 *)0x0))
          goto LAB_2c554572;
          uStack_f0 = uVar14;
          if (uVar14 < 0x10) {
            if (uVar14 == 1) {
              auStack_b4[0] = CONCAT31(auStack_b4[0]._1_3_,*puVar15);
            }
            else if (uVar14 != 0) goto LAB_2c554276;
          }
          else {
            puStack_bc = (uint *)FUN_2c54f538(&uStack_f0,0);
            auStack_b4[0] = uStack_f0;
LAB_2c554276:
            FUN_2c674668(puStack_bc,puVar15,uVar14);
          }
          *(undefined1 *)((int)puStack_bc + uStack_f0) = 0;
          uStack_b8 = uStack_f0;
          FUN_2c5392f4(&puStack_bc,puVar13[0x1d],puVar13[0x1e]);
          iVar12 = iStack_f4;
          puVar15 = *(undefined1 **)(iStack_f4 + 4);
          uVar14 = *(uint *)(iStack_f4 + 8);
          puStack_a4 = auStack_9c;
          if ((puVar15 + uVar14 != (undefined1 *)0x0) && (puVar15 == (undefined1 *)0x0))
          goto LAB_2c554572;
          uStack_f0 = uVar14;
          if (uVar14 < 0x10) {
            if (uVar14 == 1) {
              auStack_9c[0] = CONCAT31(auStack_9c[0]._1_3_,*puVar15);
            }
            else if (uVar14 != 0) goto LAB_2c554296;
          }
          else {
            puStack_a4 = (uint *)FUN_2c54f538(&uStack_f0,0);
            auStack_9c[0] = uStack_f0;
LAB_2c554296:
            FUN_2c674668(puStack_a4,puVar15,uVar14);
          }
          *(undefined1 *)((int)puStack_a4 + uStack_f0) = 0;
          uStack_a0 = uStack_f0;
          FUN_2c5392f4(&puStack_a4,*(undefined4 *)(iVar12 + 0x1c),*(undefined4 *)(iVar12 + 0x20));
          uVar4 = uStack_a0;
          puVar3 = puStack_a4;
          uVar14 = uStack_b8;
          puVar2 = puStack_bc;
          uVar9 = uStack_b8;
          if (uStack_a0 <= uStack_b8) {
            uVar9 = uStack_a0;
          }
          if ((uVar9 == 0) || (iVar12 = FUN_2c66960c(puStack_bc), iVar12 == 0)) {
            iVar12 = uVar14 - uVar4;
          }
          if (puVar3 != auStack_9c) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          if (puVar2 != auStack_b4) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,puVar2);
          }
          if (iVar12 == 0) {
            puVar13 = puVar13 + 0x16;
            goto LAB_2c5541e2;
          }
          puVar15 = (undefined1 *)puVar13[0x2d];
          uVar14 = puVar13[0x2e];
          puStack_8c = auStack_84;
          if ((puVar15 + uVar14 != (undefined1 *)0x0) && (puVar15 == (undefined1 *)0x0))
          goto LAB_2c554572;
          uStack_f0 = uVar14;
          if (uVar14 < 0x10) {
            if (uVar14 == 1) {
              auStack_84[0] = CONCAT31(auStack_84[0]._1_3_,*puVar15);
            }
            else if (uVar14 != 0) goto LAB_2c5542e2;
          }
          else {
            puStack_8c = (uint *)FUN_2c54f538(&uStack_f0,0);
            auStack_84[0] = uStack_f0;
LAB_2c5542e2:
            FUN_2c674668(puStack_8c,puVar15,uVar14);
          }
          *(undefined1 *)((int)puStack_8c + uStack_f0) = 0;
          uStack_88 = uStack_f0;
          FUN_2c5392f4(&puStack_8c,puVar13[0x33],puVar13[0x34]);
          iVar12 = iStack_f4;
          puVar15 = *(undefined1 **)(iStack_f4 + 4);
          uVar14 = *(uint *)(iStack_f4 + 8);
          puStack_74 = auStack_6c;
          if ((puVar15 + uVar14 != (undefined1 *)0x0) && (puVar15 == (undefined1 *)0x0))
          goto LAB_2c554572;
          uStack_f0 = uVar14;
          if (uVar14 < 0x10) {
            if (uVar14 == 1) {
              auStack_6c[0] = CONCAT31(auStack_6c[0]._1_3_,*puVar15);
            }
            else if (uVar14 != 0) goto LAB_2c5542c8;
          }
          else {
            puStack_74 = (uint *)FUN_2c54f538(&uStack_f0,0);
            auStack_6c[0] = uStack_f0;
LAB_2c5542c8:
            FUN_2c674668(puStack_74,puVar15,uVar14);
          }
          *(undefined1 *)((int)puStack_74 + uStack_f0) = 0;
          uStack_70 = uStack_f0;
          FUN_2c5392f4(&puStack_74,*(undefined4 *)(iVar12 + 0x1c),*(undefined4 *)(iVar12 + 0x20));
          uVar4 = uStack_70;
          puVar3 = puStack_74;
          uVar14 = uStack_88;
          puVar2 = puStack_8c;
          uVar9 = uStack_88;
          if (uStack_70 <= uStack_88) {
            uVar9 = uStack_70;
          }
          if ((uVar9 == 0) || (iVar12 = FUN_2c66960c(puStack_8c), iVar12 == 0)) {
            iVar12 = uVar14 - uVar4;
          }
          if (puVar3 != auStack_6c) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          if (puVar2 != auStack_84) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,puVar2);
          }
          if (iVar12 == 0) {
            puVar13 = puVar13 + 0x2c;
            goto LAB_2c5541e2;
          }
          puVar15 = (undefined1 *)puVar13[0x43];
          uVar14 = puVar13[0x44];
          puStack_5c = auStack_54;
          if ((puVar15 + uVar14 != (undefined1 *)0x0) && (puVar15 == (undefined1 *)0x0))
          goto LAB_2c554572;
          uStack_f0 = uVar14;
          if (uVar14 < 0x10) {
            if (uVar14 == 1) {
              auStack_54[0] = CONCAT31(auStack_54[0]._1_3_,*puVar15);
            }
            else if (uVar14 != 0) goto LAB_2c554312;
          }
          else {
            puStack_5c = (uint *)FUN_2c54f538(&uStack_f0,0);
            auStack_54[0] = uStack_f0;
LAB_2c554312:
            FUN_2c674668(puStack_5c,puVar15,uVar14);
          }
          *(undefined1 *)((int)puStack_5c + uStack_f0) = 0;
          uStack_58 = uStack_f0;
          FUN_2c5392f4(&puStack_5c,puVar13[0x49],puVar13[0x4a]);
          iVar12 = iStack_f4;
          puStack_44 = auStack_3c;
          puVar15 = *(undefined1 **)(iStack_f4 + 4);
          uVar14 = *(uint *)(iStack_f4 + 8);
          if ((puVar15 + uVar14 != (undefined1 *)0x0) && (puVar15 == (undefined1 *)0x0))
          goto LAB_2c554572;
          uStack_f0 = uVar14;
          if (uVar14 < 0x10) {
            if (uVar14 == 1) {
              auStack_3c[0] = CONCAT31(auStack_3c[0]._1_3_,*puVar15);
            }
            else if (uVar14 != 0) goto LAB_2c55432e;
          }
          else {
            puStack_44 = (uint *)FUN_2c54f538(&uStack_f0,0);
            auStack_3c[0] = uStack_f0;
LAB_2c55432e:
            FUN_2c674668(puStack_44,puVar15,uVar14);
          }
          *(undefined1 *)((int)puStack_44 + uStack_f0) = 0;
          uStack_40 = uStack_f0;
          FUN_2c5392f4(&puStack_44,*(undefined4 *)(iVar12 + 0x1c),*(undefined4 *)(iVar12 + 0x20));
          uVar4 = uStack_40;
          puVar3 = puStack_44;
          uVar14 = uStack_58;
          puVar2 = puStack_5c;
          uVar9 = uStack_58;
          if (uStack_40 <= uStack_58) {
            uVar9 = uStack_40;
          }
          if ((uVar9 == 0) || (iVar12 = FUN_2c66960c(puStack_5c), iVar12 == 0)) {
            iVar12 = uVar14 - uVar4;
          }
          if (puVar3 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          if (puVar2 != auStack_54) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,puVar2);
          }
          if (iVar12 == 0) {
            puVar13 = puVar13 + 0x42;
            goto LAB_2c5541e2;
          }
          puVar13 = puVar13 + 0x58;
        } while (puVar16 != puVar13);
        iVar12 = DAT_2c55447c * ((int)puVar11 - (int)puVar13 >> 3);
      }
      if (iVar12 == 2) {
LAB_2c554552:
        iVar12 = FUN_2c552774(&iStack_f4,puVar13);
        if (iVar12 == 0) {
          puVar13 = puVar13 + 0x16;
LAB_2c5544f8:
          iVar12 = FUN_2c552774(&iStack_f4,puVar13);
          if (iVar12 == 0) goto LAB_2c5541e0;
        }
      }
      else if (iVar12 == 3) {
        iVar12 = FUN_2c552774(&iStack_f4,puVar13);
        if (iVar12 == 0) {
          puVar13 = puVar13 + 0x16;
          goto LAB_2c554552;
        }
      }
      else {
        if (iVar12 == 1) goto LAB_2c5544f8;
LAB_2c5541e0:
        puVar13 = puVar11;
      }
LAB_2c5541e2:
      if (*(undefined4 **)(param_1 + 0xb4) == puVar13) {
        if (*(undefined4 **)(param_1 + 0xb8) == puVar13) {
          FUN_2c551284(param_1 + 0xb0,puVar13,iVar10);
          uVar7 = extraout_r1_01;
        }
        else {
          puVar11 = puVar13 + 3;
          *puVar13 = DAT_2c554480;
          puVar13[1] = puVar11;
          puVar15 = *(undefined1 **)(iVar10 + 4);
          uVar14 = *(uint *)(iVar10 + 8);
          if ((puVar15 + uVar14 != (undefined1 *)0x0) && (puVar15 == (undefined1 *)0x0))
          goto LAB_2c554572;
          uStack_f0 = uVar14;
          if (uVar14 < 0x10) {
            if (uVar14 == 1) {
              *(undefined1 *)(puVar13 + 3) = *puVar15;
            }
            else if (uVar14 != 0) goto LAB_2c554532;
          }
          else {
            puVar11 = (undefined4 *)FUN_2c54f538(&uStack_f0,0);
            puVar13[1] = puVar11;
            puVar13[3] = uStack_f0;
LAB_2c554532:
            FUN_2c674668(puVar11,puVar15,uVar14);
            puVar11 = (undefined4 *)puVar13[1];
          }
          puVar13[2] = uStack_f0;
          *(undefined1 *)((int)puVar11 + uStack_f0) = 0;
          puVar11 = puVar13 + 9;
          puVar13[7] = puVar11;
          puVar15 = *(undefined1 **)(iVar10 + 0x1c);
          uVar14 = *(uint *)(iVar10 + 0x20);
          if ((puVar15 + uVar14 != (undefined1 *)0x0) && (puVar15 == (undefined1 *)0x0))
          goto LAB_2c554572;
          uStack_f0 = uVar14;
          if (uVar14 < 0x10) {
            if (uVar14 == 1) {
              *(undefined1 *)(puVar13 + 9) = *puVar15;
            }
            else if (uVar14 != 0) goto LAB_2c5544e8;
          }
          else {
            puVar11 = (undefined4 *)FUN_2c54f538(&uStack_f0,0);
            puVar13[7] = puVar11;
            puVar13[9] = uStack_f0;
LAB_2c5544e8:
            FUN_2c674668(puVar11,puVar15,uVar14);
            puVar11 = (undefined4 *)puVar13[7];
          }
          puVar13[8] = uStack_f0;
          *(undefined1 *)((int)puVar11 + uStack_f0) = 0;
          uVar14 = *(uint *)(iVar10 + 0x34);
          iVar12 = *(int *)(iVar10 + 0x38);
          puVar13[0xd] = 0;
          puVar13[0xe] = 0;
          iVar12 = iVar12 - uVar14;
          puVar13[0xf] = 0;
          piVar1 = DAT_2c554484;
          if (iVar12 == 0) {
            lVar20 = (ulonglong)uVar14 << 0x20;
          }
          else {
            if (*DAT_2c554484 == 0) {
              FUN_2c4723c4();
              *piVar1 = 1;
            }
            lVar20 = FUN_2c47245c(0,iVar12);
          }
          iVar17 = (int)lVar20;
          puVar13[0xf] = iVar12 + iVar17;
          puVar13[0xd] = iVar17;
          puVar13[0xe] = iVar17;
          puVar11 = *(undefined4 **)(iVar10 + 0x34);
          puVar16 = *(undefined4 **)(iVar10 + 0x38);
          while( true ) {
            puVar18 = (undefined4 *)lVar20;
            uVar7 = (undefined4)((ulonglong)lVar20 >> 0x20);
            if (puVar11 == puVar16) break;
            *puVar18 = puVar18 + 2;
            puVar15 = (undefined1 *)*puVar11;
            uVar14 = puVar11[1];
            if ((puVar15 + uVar14 != (undefined1 *)0x0) && (puVar15 == (undefined1 *)0x0))
            goto LAB_2c554572;
            uStack_f0 = uVar14;
            if (uVar14 < 0x10) {
              puVar6 = (undefined1 *)*puVar18;
              if (uVar14 == 1) {
                *puVar6 = *puVar15;
                puVar6 = (undefined1 *)*puVar18;
              }
              else if (uVar14 != 0) goto LAB_2c55446a;
            }
            else {
              puVar6 = (undefined1 *)FUN_2c54f538(&uStack_f0,0);
              *puVar18 = puVar6;
              puVar18[2] = uStack_f0;
LAB_2c55446a:
              FUN_2c674668(puVar6,puVar15,uVar14);
              puVar6 = (undefined1 *)*puVar18;
              uVar7 = extraout_r1_02;
            }
            lVar20 = CONCAT44(uVar7,puVar18 + 6);
            puVar11 = puVar11 + 6;
            puVar18[1] = uStack_f0;
            puVar6[uStack_f0] = 0;
          }
          puVar11 = puVar13 + 0x12;
          puVar13[0xe] = puVar18;
          puVar13[0x10] = puVar11;
          puVar15 = *(undefined1 **)(iVar10 + 0x40);
          uVar14 = *(uint *)(iVar10 + 0x44);
          if ((puVar15 + uVar14 != (undefined1 *)0x0) && (puVar15 == (undefined1 *)0x0)) {
LAB_2c554572:
                    /* WARNING: Subroutine does not return */
            FUN_2c658674(DAT_2c55459c);
          }
          uStack_f0 = uVar14;
          if (uVar14 < 0x10) {
            if (uVar14 == 1) {
              *(undefined1 *)(puVar13 + 0x12) = *puVar15;
            }
            else if (uVar14 != 0) goto LAB_2c554516;
          }
          else {
            puVar11 = (undefined4 *)FUN_2c54f538(&uStack_f0,0);
            puVar13[0x10] = puVar11;
            puVar13[0x12] = uStack_f0;
LAB_2c554516:
            FUN_2c674668(puVar11,puVar15,uVar14);
            puVar11 = (undefined4 *)puVar13[0x10];
            uVar7 = extraout_r1_03;
          }
          puVar13[0x11] = uStack_f0;
          *(undefined1 *)((int)puVar11 + uStack_f0) = 0;
          *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 0x58;
        }
      }
      else {
        FUN_2c5529f4(puVar13,iVar10);
        uVar7 = extraout_r1_00;
      }
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  if ((*DAT_2c553e54 ^ uStack_2c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar5,uVar7,*DAT_2c553e54 ^ uStack_2c,0);
}

