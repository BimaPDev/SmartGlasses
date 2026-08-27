/* FUN_2c64b74e @ 0x2c64b74e */

/* WARNING: Removing unreachable block (ram,0x2c64b268) */
/* WARNING: Removing unreachable block (ram,0x2c64b5b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c64b74e(int param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uVar17;
  int iVar18;
  char *pcVar19;
  int iVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 *puVar25;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined8 uVar26;
  undefined4 *puStack_60;
  undefined4 *puVar27;
  uint auStack_48 [5];
  
  if (in_ZR || in_NG != in_OV) {
LAB_2c64b7d6:
    FUN_2c648600(DAT_2c64b9bc);
    FUN_2c648600(DAT_2c64b9c0);
    FUN_2c648600(DAT_2c64b9c4);
    FUN_2c648600(DAT_2c64b9c8);
    FUN_2c648600(DAT_2c64b9cc);
    FUN_2c648600(DAT_2c64b9d0);
    FUN_2c648600(DAT_2c64b9d4);
    FUN_2c648600(DAT_2c64b9d8);
    return;
  }
  pcVar19 = *(char **)(param_2 + 4);
  iVar7 = FUN_2c66c540(pcVar19,_LAB_2c64b9b0,4);
  if (iVar7 == 0) {
    if (param_1 != 3) {
      FUN_2c6684cc(*(undefined4 *)(param_2 + 0xc));
    }
    uVar17 = *(undefined4 *)(param_2 + 8);
    iVar7 = FUN_2c66c540(uVar17,_LAB_2c64b9b4,4);
    if (iVar7 == 0) {
      auStack_48[4] = FUN_2c673c88();
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x58,_LAB_2c64b230,_LAB_2c64b22c,_LAB_2c64b228);
    }
    iVar7 = FUN_2c66c540(uVar17,_LAB_2c64b9b8,5);
    if (iVar7 == 0) {
      auStack_48[4] = FUN_2c673c88();
                    /* WARNING: Subroutine does not return */
      TRACE(4,0xe4,_LAB_2c64b57c,_LAB_2c64b578,_LAB_2c64b574);
    }
    goto LAB_2c64b7d6;
  }
  if ((*pcVar19 == 'r') && (pcVar19[1] == 'w')) {
    if (param_1 != 3) {
      FUN_2c6684cc(*(undefined4 *)(param_2 + 0xc));
    }
    uVar17 = *(undefined4 *)(param_2 + 8);
    iVar7 = FUN_2c66c540(uVar17,_LAB_2c64b9b4,4);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x97,_LAB_2c64b3d0,_LAB_2c64b3cc,_LAB_2c64b3c8,_LAB_2c64b3c4);
    }
    iVar7 = FUN_2c66c540(uVar17,_LAB_2c64b9b8,5);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x129,_LAB_2c64b720,_LAB_2c64b71c,_LAB_2c64b718,_LAB_2c64b714);
    }
    goto LAB_2c64b7d6;
  }
  if (((*pcVar19 == 'm') && (pcVar19[1] == 'b')) && (pcVar19[2] == 'w')) {
    if (param_1 == 3) {
      uVar8 = 10;
    }
    else {
      uVar8 = FUN_2c6684cc(*(undefined4 *)(param_2 + 0xc));
    }
    uVar17 = *(undefined4 *)(param_2 + 8);
    iVar7 = FUN_2c66c540(uVar17,_LAB_2c64b9b4,4);
    if (iVar7 == 0) {
      iVar7 = 1;
    }
    else {
      iVar7 = FUN_2c66c540(uVar17,_LAB_2c64b9dc,8);
      if (iVar7 == 0) {
        iVar7 = 3;
      }
      else {
        iVar7 = FUN_2c66c540(uVar17,_LAB_2c64b9b8,5);
        if (iVar7 != 0) goto LAB_2c64b7d6;
        iVar7 = 2;
      }
    }
    auStack_48[3] = *DAT_2c64ae40;
    puVar22 = auStack_48;
    auStack_48[0] = *_LAB_2c64ae3c;
    auStack_48[1] = _LAB_2c64ae3c[1];
    auStack_48[2] = _LAB_2c64ae3c[2];
    if (iVar7 - 2U < 2) {
      puVar14 = _LAB_2c64af74;
      if (iVar7 != 3) {
        puVar14 = _LAB_2c64af6c;
      }
      uVar24 = 0x40;
      iVar7 = 0x40;
      uVar17 = _LAB_2c64af70;
    }
    else {
      uVar24 = 0x10;
      iVar7 = 0x10;
      uVar17 = _LAB_2c64ae48;
      puVar14 = _LAB_2c64ae44;
    }
    puStack_60 = puVar14 + -0x1000;
    FUN_2c648600(_LAB_2c64ae4c,uVar17,puStack_60,puVar14,uVar24);
    FUN_2c49b090();
    FUN_2c674278(0x20,0x13);
    func_0x2c4bba50(1);
    if (auStack_48[0] != 0xffffffff) {
      iVar4 = iVar7 << 10;
      puVar27 = puVar14 + iVar7 * 0x100;
      puVar9 = puStack_60 + iVar7 * 0x100;
      do {
        if ((int)uVar8 < 0) {
          uVar23 = 0;
        }
        else {
          iVar18 = 0;
          uVar23 = 0;
          do {
            FUN_2c673c08();
            FUN_2c673e08(0x10);
            puVar10 = DAT_2c64ae50;
            iVar20 = 0;
            bVar1 = (bool)isCurrentModePrivileged();
            if (bVar1) {
              iVar20 = getBasePriority();
            }
            if (iVar20 != 0x40) {
              *DAT_2c64ae50 = 0x2c64ac22;
              puVar10[1] = unaff_lr;
            }
            puVar16 = DAT_2c64ae68;
            bVar1 = (bool)isCurrentModePrivileged();
            if (bVar1) {
              setBasePriority(0x40);
            }
            uVar21 = *puVar22;
            if (uVar21 == 0) {
              iVar6 = FUN_2c674818();
              puVar16[1] = 0;
              *puVar16 = *puVar16 | 1;
              FUN_2c674668(puVar14,puStack_60,iVar4);
LAB_2c64ad0e:
              uVar21 = puVar16[1];
              *puVar16 = *puVar16 & 0xfffffffe;
              iVar5 = FUN_2c674818();
LAB_2c64ad20:
              uVar15 = FUN_2c6740d8();
              lVar2 = (ulonglong)DAT_2c64ae58 * (ulonglong)(uVar15 >> 5);
              uVar15 = (uint)((iVar5 - iVar6) * 10) / (uint)((ulonglong)lVar2 >> 0x27);
              if (uVar21 != 0xffffffff) {
                FUN_2c648600(DAT_2c64ae6c,uVar21,(int)lVar2);
              }
            }
            else {
              if (uVar21 == 1) {
                iVar6 = FUN_2c674818();
                puVar16 = DAT_2c64ae68;
                DAT_2c64ae68[1] = 0;
                *puVar16 = *puVar16 | 1;
                FUN_2c674268(puStack_60,0xaa,iVar4);
                goto LAB_2c64ad0e;
              }
              if (uVar21 == 2) {
                iVar6 = FUN_2c674818();
                puVar16 = DAT_2c64ae68;
                DAT_2c64ae68[1] = 0;
                *puVar16 = *puVar16 | 1;
                FUN_2c673eb8(puStack_60,puVar14,iVar4);
                goto LAB_2c64ad0e;
              }
              if (uVar21 != 3) {
                if (uVar21 == 4) {
                  iVar6 = FUN_2c674818();
                  puVar10 = puVar14;
                  while (puVar11 = (undefined4 *)((int)puVar10 + iVar7), puVar12 = puStack_60,
                        puVar11 <= puVar27) {
                    puVar12 = puVar10;
                    puVar25 = puStack_60;
                    if (puVar10 < puVar11) {
                      do {
                        puVar13 = puVar12 + 1;
                        *puVar12 = *puVar25;
                        puVar12 = puVar13;
                        puVar25 = puVar25 + 1;
                      } while (puVar13 < puVar11);
                      puVar10 = (undefined4 *)
                                ((int)puVar10 +
                                ((int)puVar11 + (-1 - (int)puVar10) & 0xfffffffcU) + 4);
                    }
                  }
                  for (; puVar10 < puVar27; puVar10 = puVar10 + 1) {
                    *puVar10 = *puVar12;
                    puVar12 = puVar12 + 1;
                  }
                  iVar5 = FUN_2c674818();
                  uVar15 = (iVar5 - iVar6) * 10;
                  goto LAB_2c64ac62;
                }
                if (uVar21 == 5) {
                  uVar26 = FUN_2c674818();
                  puVar16 = DAT_2c64af68;
                  uVar17 = (undefined4)uVar26;
                  DAT_2c64af68[1] = 0;
                  *puVar16 = *puVar16 | 1;
                  for (puVar10 = puStack_60; puVar10 < puVar9; puVar10 = puVar10 + 0x10) {
                    uVar26 = CONCAT44(puVar10[0xf],uVar17);
                  }
                }
                else {
                  if (uVar21 != 6) {
                    uVar15 = 0;
                    FUN_2c648600(DAT_2c64ae54);
                    goto LAB_2c64ac62;
                  }
                  uVar17 = FUN_2c674818();
                  puVar16 = DAT_2c64ae68;
                  DAT_2c64ae68[1] = 0;
                  *puVar16 = *puVar16 | 1;
                  for (puVar10 = puStack_60; uVar26 = CONCAT44(puVar9,uVar17), puVar10 < puVar9;
                      puVar10 = puVar10 + 0x10) {
                    *puVar10 = 0xff;
                    puVar10[1] = 0xff;
                    puVar10[2] = 0xff;
                    puVar10[3] = 0xff;
                    puVar10[4] = 0xff;
                    puVar10[5] = 0xff;
                    puVar10[6] = 0xff;
                    puVar10[7] = 0xff;
                    puVar10[8] = 0xff;
                    puVar10[9] = 0xff;
                    puVar10[10] = 0xff;
                    puVar10[0xb] = 0xff;
                    puVar10[0xc] = 0xff;
                    puVar10[0xd] = 0xff;
                    puVar10[0xe] = 0xff;
                    puVar10[0xf] = 0xff;
                  }
                }
                iVar6 = (int)uVar26;
                uVar21 = DAT_2c64ae68[1];
                *DAT_2c64ae68 = *DAT_2c64ae68 & 0xfffffffe;
                iVar5 = FUN_2c674818(iVar6,(int)((ulonglong)uVar26 >> 0x20));
                goto LAB_2c64ad20;
              }
              iVar6 = FUN_2c674818();
              puVar10 = puVar14;
              for (puVar11 = puStack_60; puVar11 < puVar9; puVar11 = puVar11 + 1) {
                *puVar11 = *puVar10;
                puVar10 = puVar10 + 1;
              }
              iVar5 = FUN_2c674818();
              uVar15 = (iVar5 - iVar6) * 10;
LAB_2c64ac62:
              uVar21 = FUN_2c6740d8();
              uVar15 = uVar15 / (uint)((ulonglong)DAT_2c64ae58 * (ulonglong)(uVar21 >> 5) >> 0x27);
            }
            if (iVar20 == 0) {
              *DAT_2c64ae50 = 0xffffffff;
            }
            bVar1 = (bool)isCurrentModePrivileged();
            if (bVar1) {
              setBasePriority(iVar20);
            }
            FUN_2c648600(DAT_2c64ae5c,iVar18);
            FUN_2c64aa84(uVar15,uVar24,*puVar22);
            iVar18 = iVar18 + 1;
            uVar23 = uVar23 + uVar15;
          } while ((iVar18 < (int)uVar8) || (uVar8 == 0));
        }
        FUN_2c648600(DAT_2c64ae60);
        FUN_2c64aa84(uVar23 / uVar8,uVar24,*puVar22);
        FUN_2c648600(DAT_2c64ae64);
        puVar22 = puVar22 + 1;
      } while (*puVar22 != 0xffffffff);
    }
    FUN_2c674278(0x20,0);
    if (*DAT_2c64ae40 != auStack_48[3]) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return;
  }
  iVar7 = FUN_2c66c540(pcVar19,_LAB_2c64b9e0,7);
  if (iVar7 == 0) {
    if (param_1 == 3) {
      auStack_48[4] = 1000;
    }
    else {
      auStack_48[4] = FUN_2c6684cc(*(undefined4 *)(param_2 + 0xc));
    }
    uVar17 = *(undefined4 *)(param_2 + 8);
    iVar7 = FUN_2c66c540(uVar17,DAT_2c64bcb0,4);
    if (iVar7 == 0) {
      FUN_2c673c88();
      auStack_48[3] = DAT_2c64c060;
      uVar8 = DAT_2c64c068;
    }
    else {
      iVar7 = FUN_2c66c540(uVar17,DAT_2c64bcb4,4);
      if (iVar7 != 0) goto LAB_2c64b7d6;
      FUN_2c673c88();
      auStack_48[3] = DAT_2c64bcb8;
      uVar8 = DAT_2c64bcbc;
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1c5,DAT_2c64bcc8,DAT_2c64bcc4,DAT_2c64bcc0,uVar8);
  }
  iVar7 = FUN_2c66c540(pcVar19,_LAB_2c64b9e4,6);
  if (iVar7 == 0) {
    if (4 < param_1) {
      uVar17 = *(undefined4 *)(param_2 + 8);
      iVar7 = FUN_2c66c540(uVar17,_LAB_2c64b9b4,4);
      if (iVar7 == 0) {
        iVar7 = 1;
      }
      else {
        iVar7 = FUN_2c66c540(uVar17,_LAB_2c64b9b8,4);
        if (iVar7 != 0) goto LAB_2c64b7d6;
        iVar7 = 2;
      }
      bVar3 = FUN_2c6684cc(*(undefined4 *)(param_2 + 0xc));
      auStack_48[0] = (uint)bVar3;
      uVar8 = auStack_48[0] - 8 & 0xff;
      if ((uVar8 < 0x19) && ((int)((_LAB_2c64b9e8 >> uVar8) << 0x1f) < 0)) {
        FUN_2c6684cc(*(undefined4 *)(param_2 + 0x10));
        auStack_48[3] = FUN_2c673c88();
        uVar17 = _LAB_2c64b9f4;
        if (iVar7 == 1) {
          uVar17 = _LAB_2c64b9f0;
        }
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x297,_LAB_2c64b9f8,_LAB_2c64ba00,_LAB_2c64b9fc,uVar17);
      }
    }
    goto LAB_2c64b7d6;
  }
  iVar7 = FUN_2c66c540(pcVar19,_LAB_2c64bccc,6);
  if (iVar7 == 0) {
    if (param_1 < 5) goto LAB_2c64b7d6;
    uVar17 = *(undefined4 *)(param_2 + 8);
    iVar7 = FUN_2c66c540(uVar17,DAT_2c64bcb0,4);
    if (iVar7 == 0) {
      iVar7 = 1;
    }
    else {
      iVar7 = FUN_2c66c540(uVar17,DAT_2c64bcb4,4);
      if (iVar7 != 0) goto LAB_2c64b7d6;
      iVar7 = 2;
    }
    uVar17 = *(undefined4 *)(param_2 + 0xc);
    iVar4 = FUN_2c66c540(uVar17,DAT_2c64bcb0,4);
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    else {
      iVar4 = FUN_2c66c540(uVar17,DAT_2c64bcb4,4);
      if (iVar4 != 0) goto LAB_2c64b7d6;
      iVar4 = 2;
    }
    auStack_48[3] = FUN_2c6684cc(*(undefined4 *)(param_2 + 0x10));
    auStack_48[3] = auStack_48[3] & 0xff;
    uVar8 = auStack_48[3] - 8 & 0xff;
    if ((0x18 < uVar8) || (-1 < (int)((_LAB_2c64bcd0 >> uVar8) << 0x1f))) goto LAB_2c64b7d6;
    if (param_1 == 5) {
      auStack_48[4] = 1000;
    }
    else {
      auStack_48[4] = FUN_2c6684cc(*(undefined4 *)(param_2 + 0x14));
    }
    FUN_2c673c88();
    if (iVar7 == 1) {
      uVar23 = DAT_2c64c068;
      auStack_48[0] = _LAB_2c64c064;
      uVar8 = DAT_2c64c068;
      if (iVar4 != 1) goto joined_r0x2c64bfee;
    }
    else {
      uVar23 = _LAB_2c64c064;
      auStack_48[0] = _LAB_2c64bcd4;
      uVar8 = DAT_2c64bcbc;
      if (iVar4 == 1) {
joined_r0x2c64bfee:
        if (_LAB_2c64bce8 != DAT_2c64bcb8) goto LAB_2c64bc88;
      }
    }
    uVar8 = uVar23;
    auStack_48[0] = DAT_2c64c068;
    if (iVar4 != 1) {
      auStack_48[0] = _LAB_2c64c064;
    }
LAB_2c64bc88:
    auStack_48[1] = auStack_48[3];
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x2c3,DAT_2c64bcc8,DAT_2c64bcc4,_LAB_2c64bcd8,uVar8);
  }
  iVar7 = FUN_2c66c540(pcVar19,_LAB_2c64c050,6);
  if ((iVar7 != 0) || (param_1 == 3)) goto LAB_2c64b7d6;
  uVar17 = *(undefined4 *)(param_2 + 8);
  iVar7 = FUN_2c66c540(uVar17,_LAB_2c64c054,4);
  if (iVar7 == 0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c66c540(uVar17,_LAB_2c64c058,4);
    if (iVar7 != 0) goto LAB_2c64b7d6;
    iVar7 = 2;
  }
  uVar17 = *(undefined4 *)(param_2 + 0xc);
  iVar4 = FUN_2c66c540(uVar17,_LAB_2c64c054,4);
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = FUN_2c66c540(uVar17,_LAB_2c64c058,4);
    if (iVar4 != 0) goto LAB_2c64b7d6;
    iVar4 = 2;
  }
  if (param_1 != 4) {
    FUN_2c6684cc(*(undefined4 *)(param_2 + 0x10));
  }
  FUN_2c673c88();
  if (iVar7 == 1) {
    uVar8 = DAT_2c64c068;
    auStack_48[0] = _LAB_2c64c064;
    if (iVar4 != 1) goto joined_r0x2c64c010;
  }
  else {
    uVar8 = _LAB_2c64c064;
    auStack_48[0] = DAT_2c64c068;
    if (iVar4 == 1) {
joined_r0x2c64c010:
      if (DAT_2c64c060 != _LAB_2c64c05c) goto LAB_2c64be12;
    }
  }
  auStack_48[0] = DAT_2c64c068;
  if (iVar4 != 1) {
    auStack_48[0] = _LAB_2c64c064;
  }
LAB_2c64be12:
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x358,_LAB_2c64c074,_LAB_2c64c070,_LAB_2c64c06c,uVar8);
}

