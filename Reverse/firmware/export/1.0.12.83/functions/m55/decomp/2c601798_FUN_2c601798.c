/* FUN_2c601798 @ 0x2c601798 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c601798(int param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 extraout_r1;
  int iVar14;
  undefined4 *puVar15;
  uint uVar16;
  ushort uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  int iVar23;
  undefined4 uVar24;
  short *psVar25;
  undefined4 *puVar26;
  byte bVar27;
  undefined1 auStack_c4 [4];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [32];
  undefined4 uStack_98;
  short *psStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  int *piStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  uint uStack_74;
  ushort *puStack_70;
  int iStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  int iStack_5c;
  undefined4 *puStack_58;
  uint uStack_54;
  uint uStack_50;
  int iStack_4c;
  uint uStack_48;
  uint uStack_44;
  int iStack_40;
  int *piStack_3c;
  short sStack_34;
  short sStack_32;
  short sStack_30;
  short sStack_2e;
  int iStack_2c;
  int iStack_24;
  
  piVar12 = _LAB_2c6019b0;
  iStack_24 = *DAT_2c6019b4;
  piVar7 = (int *)FUN_2c62a500(*_LAB_2c6019b0,param_2,param_3,0);
  if ((*piVar7 != 0) && (piVar7[1] == 0)) {
    do {
      piVar8 = (int *)*piVar12;
      iVar10 = *piVar8;
      do {
        if (piVar7[4] == 0) {
          if (-1 < (int)((uint)*(byte *)(iVar10 + 0x10) << 0x19)) goto LAB_2c6017c0;
          if (*(code **)(iVar10 + 0x20) != (code *)0x0) {
            (**(code **)(iVar10 + 0x20))
                      (iVar10,*(undefined4 *)(*(int *)(iVar10 + 0xc) + 8),
                       *(undefined4 *)(*(int *)(iVar10 + 0xc) + 0xc));
            piVar8 = (int *)*piVar12;
            goto LAB_2c6017c0;
          }
          FUN_2c62c3b0(*(undefined4 *)(*(int *)(iVar10 + 0xc) + 8),
                       *(int *)(*(int *)(iVar10 + 0xc) + 0xc) << 2);
          goto LAB_2c6017be;
        }
      } while (*(code **)(iVar10 + 0x28) == (code *)0x0);
      (**(code **)(iVar10 + 0x28))(iVar10);
    } while( true );
  }
LAB_2c6017be:
  piVar8 = (int *)*piVar12;
LAB_2c6017c0:
  uVar24 = *(undefined4 *)(param_1 + 4);
  uVar9 = FUN_2c5fee44(piVar8);
  iVar10 = FUN_2c600c44(uVar24,uVar9);
  iVar20 = *piVar12;
  if (*(int *)(iVar20 + 0x14) == 0) {
    iVar11 = 0;
    iVar14 = 0;
    if (iVar10 == 0) goto LAB_2c6018c0;
LAB_2c6017ee:
    if ((int)((uint)*(byte *)(iVar20 + 0x2c) << 0x1f) < 0) {
      iVar11 = iVar14;
      if (iVar10 == 0) {
LAB_2c601976:
        iVar10 = *(int *)(iVar20 + 0x10);
      }
      FUN_2c6016dc(param_1,iVar10);
      iVar10 = *piVar12;
      if (*(int *)(iVar10 + 0x14) != 0) {
        iVar10 = *(int *)(iVar10 + 0x14);
        if (iVar11 != 0) {
          iVar10 = iVar11;
        }
        FUN_2c6016dc(param_1,iVar10);
        iVar10 = *piVar12;
      }
      goto LAB_2c60181a;
    }
    if (*(int *)(iVar20 + 0x14) != 0) {
      if (iVar14 == 0) {
        iVar14 = *(int *)(iVar20 + 0x14);
      }
LAB_2c60186e:
      FUN_2c6016dc(param_1,iVar14);
    }
  }
  else {
    iVar11 = FUN_2c600c44(*(undefined4 *)(param_1 + 4),*(int *)(iVar20 + 0x14));
    iVar20 = *piVar12;
    iVar14 = iVar11;
    if (iVar10 != 0 || iVar11 != 0) goto LAB_2c6017ee;
LAB_2c6018c0:
    sVar4 = FUN_2c62a47c(iVar20);
    sVar5 = FUN_2c62a4a0(*piVar12);
    FUN_2c62a624(auStack_c0,0,0,(int)(short)(sVar4 + -1),(int)(short)(sVar5 + -1));
    if (*(int *)(param_1 + 0x30) == 0) {
      if (*(int *)(*piVar12 + 0x34) == 0) {
        FUN_2c61314c(&uStack_7c);
        iStack_78 = *(int *)(*piVar12 + 0x30);
        uStack_7c = CONCAT13(*(undefined1 *)(*piVar12 + 0x2d),(undefined3)uStack_7c);
        FUN_2c61319c(param_1,&uStack_7c,*(undefined4 *)(param_1 + 4));
      }
      else {
        iVar20 = FUN_2c612838(*(int *)(*piVar12 + 0x34),auStack_c4);
        if (iVar20 == 1) {
          FUN_2c614a0c(auStack_b8);
          uStack_88._0_2_ = CONCAT11(*(undefined1 *)(*piVar12 + 0x2d),(undefined1)uStack_88);
          FUN_2c614a3c(param_1,auStack_b8,auStack_c0,*(undefined4 *)(*piVar12 + 0x34));
        }
      }
    }
    else {
      FUN_2c61314c(&uStack_7c);
      iVar20 = *piVar12;
      puStack_58 = *(undefined4 **)(iVar20 + 0x34);
      iStack_4c = CONCAT31(iStack_4c._1_3_,*(undefined1 *)(iVar20 + 0x2d));
      iStack_78 = *(int *)(iVar20 + 0x30);
      uStack_7c = CONCAT13(*(undefined1 *)(iVar20 + 0x2d),(undefined3)uStack_7c);
      (**(code **)(param_1 + 0x30))(param_1,&uStack_7c,auStack_c0);
    }
    iVar20 = *piVar12;
    if ((int)((uint)*(byte *)(iVar20 + 0x2c) << 0x1f) < 0) goto LAB_2c601976;
    iVar14 = *(int *)(iVar20 + 0x14);
    if (iVar14 != 0) goto LAB_2c60186e;
  }
  if (iVar10 == 0) {
    iVar10 = *(int *)(*piVar12 + 0x10);
  }
  FUN_2c6016dc(param_1,iVar10);
  iVar10 = *piVar12;
LAB_2c60181a:
  uVar9 = FUN_2c5fee6c(iVar10);
  FUN_2c6016dc(param_1,uVar9);
  uVar9 = FUN_2c5fee80(*piVar12);
  FUN_2c6016dc(param_1,uVar9);
  uVar9 = FUN_2c5fee94(*piVar12);
  FUN_2c6016dc(param_1,uVar9);
  puVar22 = DAT_2c600ef0;
  piVar12 = (int *)*piVar12;
  if ((*(byte *)(*piVar12 + 0x10) & 2) == 0) {
    if (*DAT_2c6019b4 == iStack_24) {
      iStack_2c = *DAT_2c600eec;
      piStack_80 = piVar12;
      piVar7 = (int *)FUN_2c62a500(*DAT_2c600ef0,extraout_r1,0,0);
      puVar21 = *(undefined4 **)(*piVar12 + 0x3c);
      if ((code *)puVar21[0xd] != (code *)0x0) {
        (*(code *)puVar21[0xd])(puVar21);
      }
      if ((*piVar7 != 0) && (piVar7[1] != 0)) {
        do {
          piVar12 = (int *)*puVar22;
          iVar10 = *piVar12;
          do {
            if (piVar7[4] == 0) {
              if (-1 < (int)((uint)*(byte *)(iVar10 + 0x10) << 0x19)) goto LAB_2c600d38;
              if (*(code **)(iVar10 + 0x20) != (code *)0x0) {
                (**(code **)(iVar10 + 0x20))
                          (iVar10,*(undefined4 *)(*(int *)(iVar10 + 0xc) + 8),
                           *(undefined4 *)(*(int *)(iVar10 + 0xc) + 0xc));
                piVar12 = (int *)*puVar22;
                goto LAB_2c600d38;
              }
              FUN_2c62c3b0(*(undefined4 *)(*(int *)(iVar10 + 0xc) + 8),
                           *(int *)(*(int *)(iVar10 + 0xc) + 0xc) << 2);
              goto LAB_2c600d36;
            }
          } while (*(code **)(iVar10 + 0x28) == (code *)0x0);
          (**(code **)(iVar10 + 0x28))();
        } while( true );
      }
LAB_2c600d36:
      piVar12 = (int *)*puVar22;
LAB_2c600d38:
      piVar7[4] = 1;
      if ((*(int *)(*(int *)(*piVar12 + 0xc) + 0x18) << 0x1f < 0) &&
         (*(int *)(*(int *)(*piVar12 + 0xc) + 0x18) << 0x1e < 0)) {
        piVar7[5] = 1;
      }
      else {
        piVar7[5] = 0;
      }
      uStack_7c = piVar7[5];
      iVar10 = *piStack_80;
      if (*(code **)(iVar10 + 0x14) != (code *)0x0) {
        if (((*(byte *)(iVar10 + 0x10) & 0x30) == 0) ||
           (-1 < (int)((uint)*(byte *)(iVar10 + 0x10) << 0x1d))) {
          psVar25 = (short *)puVar21[1];
          sStack_34 = *psVar25 + *(short *)(iVar10 + 8);
          sStack_30 = psVar25[2] + *(short *)(iVar10 + 8);
          sStack_32 = psVar25[1] + *(short *)(iVar10 + 10);
          sStack_2e = *(short *)(iVar10 + 10) + psVar25[3];
          (**(code **)(iVar10 + 0x14))(iVar10,&sStack_34,*puVar21);
        }
        else {
          psStack_90 = (short *)*piVar12;
          puStack_70 = (ushort *)puVar21[1];
          uVar18 = (uint)*(byte *)(psStack_90 + 8);
          puVar21 = (undefined4 *)*puVar21;
          if ((uVar18 & 6) == 6) {
            uStack_98 = DAT_2c601238;
                    /* WARNING: Subroutine does not return */
            FUN_2c62c82c(3,DAT_2c601240,0x4f3,DAT_2c60123c);
          }
          if ((uVar18 & 0x30) == 0x20) {
            uVar17 = puStack_70[3];
            uVar1 = *puStack_70;
            uVar3 = puStack_70[1];
            iVar10 = (int)(short)((puStack_70[2] + 1) - uVar1);
            iVar20 = (int)(short)((uVar17 + 1) - uVar3);
            uVar18 = iVar10 * iVar20 - 1;
            iVar10 = iVar10 * iVar20;
            if (uVar18 != 0) {
              puVar22 = puVar21 + iVar10;
              puVar13 = puVar21 + -1;
              do {
                uVar19 = uVar18 - 1;
                puVar22 = puVar22 + -1;
                uVar9 = *puVar22;
                uVar16 = iVar10 - uVar18;
                puVar13 = puVar13 + 1;
                *puVar22 = *puVar13;
                *puVar13 = uVar9;
                uVar18 = uVar19;
              } while (uVar16 < uVar19);
              uVar3 = puStack_70[1];
              uVar17 = puStack_70[3];
              uVar1 = *puStack_70;
            }
            uVar3 = (psStack_90[1] + -1) - uVar3;
            puStack_70[3] = uVar3;
            uVar17 = (psStack_90[1] + -1) - uVar17;
            puStack_70[1] = uVar17;
            sVar4 = *psStack_90;
            uVar2 = puStack_70[2];
            puStack_70[2] = ~uVar1 + sVar4;
            sVar5 = *psStack_90;
            *puStack_70 = ~uVar2 + sVar5;
            sStack_34 = ~uVar2 + sVar5 + psStack_90[4];
            sStack_30 = ~uVar1 + sVar4 + psStack_90[4];
            sStack_32 = uVar17 + psStack_90[5];
            sStack_2e = psStack_90[5] + uVar3;
            (**(code **)(psStack_90 + 10))(psStack_90,&sStack_34,puVar21);
          }
          else if ((int)(uVar18 << 0x1b) < 0) {
            iStack_84 = FUN_2c62a500(piVar12);
            uVar17 = puStack_70[2];
            uVar1 = puStack_70[1];
            iStack_40 = (int)(short)uVar1;
            uVar3 = *puStack_70;
            uStack_48 = (uint)uVar17;
            uStack_44 = (uint)uVar3;
            uStack_68 = (uint)uVar1;
            uVar18 = (uStack_48 + 1) - uStack_44;
            uStack_74 = (uint)(short)((puStack_70[3] + 1) - uVar1);
            uStack_54 = uVar18 & 0xffff;
            uVar18 = (uint)(short)uVar18;
            uStack_64 = 0xa00 / uVar18;
            if ((int)uStack_74 <= (int)(0xa00 / uVar18)) {
              uStack_64 = uStack_74;
            }
            if ((*(byte *)(psStack_90 + 8) & 0x30) == 0x10) {
              sVar4 = psStack_90[1];
              puStack_70[3] = ~uVar3 + sVar4;
              puStack_70[1] = ~uVar3 + sVar4 + (uVar3 - uVar17);
            }
            else {
              puStack_70[1] = uVar3;
              puStack_70[3] = uVar17;
            }
            if (0 < (int)uStack_74) {
              uVar19 = uVar18 + 1;
              uVar16 = uVar18;
              if ((int)uVar18 < 0) {
                uVar16 = uVar19;
              }
              puVar22 = (undefined4 *)0x0;
              if ((int)uVar19 < 0) {
                uVar19 = uVar18 + 2;
              }
              iStack_6c = (int)uVar16 >> 1;
              iStack_78 = 0;
              uStack_88 = (int)uVar19 >> 1;
              uStack_60 = (uint)((int)uVar18 <= (int)uStack_74);
              uStack_50 = uStack_54 - 1 & 0xffff;
              iStack_4c = uVar18 * uVar18;
              iStack_5c = (uStack_50 + 1) * 4;
              piStack_3c = piVar7;
              do {
                *(undefined4 *)(iStack_84 + 0x10) = 1;
                if ((iStack_78 == 0) && (uStack_60 != 0)) {
                  bVar27 = *(byte *)(psStack_90 + 8) & 0x30;
                  if (1 < (int)uVar18) {
                    iVar10 = 0;
                    iVar20 = 0;
                    do {
                      if (0 < (int)uVar18) {
                        uStack_8c = (uint)(short)((short)uStack_50 - (short)iVar20);
                        iVar11 = 0;
                        do {
                          iVar14 = (int)(short)((short)uStack_50 - (short)iVar11);
                          if (bVar27 == 0x30) {
                            iVar6 = iVar14 * uVar18 + iVar20;
                            iVar14 = iVar14 + uVar18 * uStack_8c;
                            iVar23 = uVar18 * iVar11 + uStack_8c;
                            uVar9 = puVar21[iVar10 + iVar11];
                            puVar21[iVar10 + iVar11] = puVar21[iVar6];
                            puVar21[iVar6] = puVar21[iVar14];
                            puVar21[iVar14] = puVar21[iVar23];
                            puVar21[iVar23] = uVar9;
                          }
                          else {
                            iVar23 = uVar18 * iVar11 + uStack_8c;
                            iVar6 = iVar14 + uVar18 * uStack_8c;
                            iVar14 = iVar14 * uVar18 + iVar20;
                            uVar9 = puVar21[iVar11 + iVar10];
                            puVar21[iVar11 + iVar10] = puVar21[iVar23];
                            puVar21[iVar23] = puVar21[iVar6];
                            puVar21[iVar6] = puVar21[iVar14];
                            puVar21[iVar14] = uVar9;
                          }
                          iVar11 = (int)(short)((short)iVar11 + 1);
                        } while (iVar11 < uStack_88);
                      }
                      iVar20 = iVar20 + 1;
                      iVar10 = iVar10 + uVar18;
                    } while ((short)iVar20 < iStack_6c);
                    bVar27 = *(byte *)(psStack_90 + 8) & 0x30;
                    puStack_58 = puVar22;
                  }
                  sVar4 = (short)uStack_54;
                  uVar16 = uVar18;
                  iVar10 = iStack_4c;
                  if (bVar27 == 0x10) {
                    *puStack_70 = (ushort)iStack_40;
                    puStack_70[2] = ((ushort)uStack_68 - 1) + sVar4;
                    sVar5 = 0;
                  }
                  else {
                    uVar17 = ~(ushort)uStack_68 + *psStack_90;
                    puStack_70[2] = uVar17;
                    *puStack_70 = uVar17 + ((short)uStack_44 - (short)uStack_48);
                    sVar5 = 0;
                  }
                }
                else {
                  if (puVar22 == (undefined4 *)0x0) {
                    puVar22 = (undefined4 *)FUN_2c62bf1c(0x2800);
                  }
                  uVar16 = uStack_74 - iStack_78;
                  if ((int)uStack_64 <= (int)(uStack_74 - iStack_78)) {
                    uVar16 = uStack_64;
                  }
                  iVar10 = uVar18 * uVar16;
                  sVar4 = (short)uVar16;
                  bVar27 = *(byte *)(psStack_90 + 8) & 0x30;
                  iVar20 = iVar10 - uVar16;
                  if (0 < (int)uVar16) {
                    iVar11 = (uVar16 - 1 & 0xffff) + 1 + iVar20;
                    puVar13 = puVar21;
                    do {
                      iVar14 = iVar20;
                      if (bVar27 == 0x30) {
                        iVar14 = (iVar10 + -1) - iVar20;
                      }
                      if (0 < (int)uVar18) {
                        puVar26 = (undefined4 *)((int)puVar13 + iStack_5c);
                        puVar15 = puVar13;
                        do {
                          puVar13 = puVar15 + 1;
                          puVar22[iVar14] = *puVar15;
                          iVar6 = (int)sVar4;
                          if (bVar27 != 0x30) {
                            iVar6 = -(int)sVar4;
                          }
                          iVar14 = iVar14 + iVar6;
                          puVar15 = puVar13;
                        } while (puVar13 != puVar26);
                      }
                      iVar20 = iVar20 + 1;
                    } while (iVar11 != iVar20);
                    bVar27 = *(byte *)(psStack_90 + 8) & 0x30;
                    uStack_8c = uVar16;
                  }
                  sVar5 = (short)iStack_78;
                  if (bVar27 == 0x10) {
                    uVar17 = (ushort)uStack_68 + (short)iStack_78;
                    *puStack_70 = uVar17;
                    puStack_70[2] = (uVar17 - 1) + sVar4;
                  }
                  else {
                    uVar17 = (~(ushort)uStack_68 + *psStack_90) - (short)iStack_78;
                    puStack_70[2] = uVar17;
                    *puStack_70 = (uVar17 + 1) - sVar4;
                  }
                }
                if ((((int)(iStack_78 + uVar16) < (int)uStack_74) ||
                    (-1 < *(int *)(iStack_84 + 0x18) << 0x1f)) ||
                   (-1 < *(int *)(iStack_84 + 0x18) << 0x1e)) {
                  *(undefined4 *)(iStack_84 + 0x14) = 0;
                }
                else {
                  *(undefined4 *)(iStack_84 + 0x14) = 1;
                }
                sStack_34 = *puStack_70 + psStack_90[4];
                sStack_30 = puStack_70[2] + psStack_90[4];
                sStack_32 = psStack_90[5] + puStack_70[1];
                sStack_2e = psStack_90[5] + puStack_70[3];
                puVar13 = puVar22;
                if (puVar22 == (undefined4 *)0x0) {
                  puVar13 = puVar21;
                }
                (**(code **)(psStack_90 + 10))(psStack_90,&sStack_34,puVar13);
                while (piVar7 = piStack_3c, *(int *)(iStack_84 + 0x10) != 0) {
                  if (*(code **)(psStack_90 + 0x14) != (code *)0x0) {
                    (**(code **)(psStack_90 + 0x14))(psStack_90);
                  }
                }
                puVar21 = puVar21 + iVar10;
                iStack_78 = (int)(short)(sVar5 + sVar4);
              } while (iStack_78 < (int)uStack_74);
              if (puVar22 != (undefined4 *)0x0) {
                FUN_2c62c040(puVar22);
              }
            }
          }
        }
      }
      iVar10 = *piVar7;
      if (((iVar10 != 0) && (piVar7[1] != 0)) &&
         ((-1 < (int)((uint)*(byte *)(*piStack_80 + 0x10) << 0x1f) || (uStack_7c != 0)))) {
        iVar20 = piVar7[1];
        if (iVar10 != piVar7[2]) {
          iVar20 = iVar10;
        }
        piVar7[2] = iVar20;
      }
      if (*DAT_2c600eec == iStack_2c) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
  }
  else if (*DAT_2c6019b4 == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

