/* FUN_2c64ab6e @ 0x2c64ab6e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c64ab6e(int *param_1,uint param_2,int *param_3,int param_4)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 unaff_lr;
  undefined4 *puVar21;
  undefined8 uVar22;
  undefined4 *puStack_60;
  int iStack_4c;
  int aiStack_48 [5];
  
  aiStack_48[3] = *param_1;
  piVar18 = aiStack_48;
  aiStack_48[0] = *param_3;
  aiStack_48[1] = param_3[1];
  aiStack_48[2] = param_3[2];
  if (param_4 - 2U < 2) {
    puVar12 = _LAB_2c64af74;
    if (param_4 != 3) {
      puVar12 = _LAB_2c64af6c;
    }
    uVar20 = 0x40;
    iStack_4c = 0x40;
    uVar5 = _LAB_2c64af70;
  }
  else {
    uVar20 = 0x10;
    iStack_4c = 0x10;
    uVar5 = _LAB_2c64ae48;
    puVar12 = _LAB_2c64ae44;
  }
  puStack_60 = puVar12 + -0x1000;
  FUN_2c648600(_LAB_2c64ae4c,uVar5,puStack_60,puVar12,uVar20);
  FUN_2c49b090();
  FUN_2c674278(0x20,0x13);
  func_0x2c4bba50(1);
  if (aiStack_48[0] != -1) {
    iVar3 = iStack_4c << 10;
    puVar7 = puStack_60 + iStack_4c * 0x100;
    do {
      if ((int)param_2 < 0) {
        uVar19 = 0;
      }
      else {
        iVar15 = 0;
        uVar19 = 0;
        do {
          FUN_2c673c08();
          FUN_2c673e08(0x10);
          puVar8 = DAT_2c64ae50;
          iVar16 = 0;
          bVar1 = (bool)isCurrentModePrivileged();
          if (bVar1) {
            iVar16 = getBasePriority();
          }
          if (iVar16 != 0x40) {
            *DAT_2c64ae50 = 0x2c64ac22;
            puVar8[1] = unaff_lr;
          }
          puVar14 = DAT_2c64ae68;
          bVar1 = (bool)isCurrentModePrivileged();
          if (bVar1) {
            setBasePriority(0x40);
          }
          iVar17 = *piVar18;
          if (iVar17 == 0) {
            iVar17 = FUN_2c674818();
            puVar14[1] = 0;
            *puVar14 = *puVar14 | 1;
            FUN_2c674668(puVar12,puStack_60,iVar3);
LAB_2c64ad0e:
            uVar4 = puVar14[1];
            *puVar14 = *puVar14 & 0xfffffffe;
            iVar6 = FUN_2c674818();
LAB_2c64ad20:
            uVar13 = FUN_2c6740d8();
            lVar2 = (ulonglong)DAT_2c64ae58 * (ulonglong)(uVar13 >> 5);
            uVar13 = (uint)((iVar6 - iVar17) * 10) / (uint)((ulonglong)lVar2 >> 0x27);
            if (uVar4 != 0xffffffff) {
              FUN_2c648600(DAT_2c64ae6c,uVar4,(int)lVar2);
            }
          }
          else {
            if (iVar17 == 1) {
              iVar17 = FUN_2c674818();
              puVar14 = DAT_2c64ae68;
              DAT_2c64ae68[1] = 0;
              *puVar14 = *puVar14 | 1;
              FUN_2c674268(puStack_60,0xaa,iVar3);
              goto LAB_2c64ad0e;
            }
            if (iVar17 == 2) {
              iVar17 = FUN_2c674818();
              puVar14 = DAT_2c64ae68;
              DAT_2c64ae68[1] = 0;
              *puVar14 = *puVar14 | 1;
              FUN_2c673eb8(puStack_60,puVar12,iVar3);
              goto LAB_2c64ad0e;
            }
            if (iVar17 != 3) {
              if (iVar17 == 4) {
                iVar17 = FUN_2c674818();
                puVar8 = puVar12;
                while (puVar9 = (undefined4 *)((int)puVar8 + iStack_4c), puVar10 = puStack_60,
                      puVar9 <= puVar12 + iStack_4c * 0x100) {
                  puVar10 = puVar8;
                  puVar21 = puStack_60;
                  if (puVar8 < puVar9) {
                    do {
                      puVar11 = puVar10 + 1;
                      *puVar10 = *puVar21;
                      puVar10 = puVar11;
                      puVar21 = puVar21 + 1;
                    } while (puVar11 < puVar9);
                    puVar8 = (undefined4 *)
                             ((int)puVar8 + ((int)puVar9 + (-1 - (int)puVar8) & 0xfffffffcU) + 4);
                  }
                }
                for (; puVar8 < puVar12 + iStack_4c * 0x100; puVar8 = puVar8 + 1) {
                  *puVar8 = *puVar10;
                  puVar10 = puVar10 + 1;
                }
                iVar6 = FUN_2c674818();
                uVar13 = (iVar6 - iVar17) * 10;
                goto LAB_2c64ac62;
              }
              if (iVar17 == 5) {
                uVar22 = FUN_2c674818();
                puVar14 = DAT_2c64af68;
                uVar5 = (undefined4)uVar22;
                DAT_2c64af68[1] = 0;
                *puVar14 = *puVar14 | 1;
                for (puVar8 = puStack_60; puVar8 < puVar7; puVar8 = puVar8 + 0x10) {
                  uVar22 = CONCAT44(puVar8[0xf],uVar5);
                }
              }
              else {
                if (iVar17 != 6) {
                  uVar13 = 0;
                  FUN_2c648600(DAT_2c64ae54);
                  goto LAB_2c64ac62;
                }
                uVar5 = FUN_2c674818();
                puVar14 = DAT_2c64ae68;
                DAT_2c64ae68[1] = 0;
                *puVar14 = *puVar14 | 1;
                for (puVar8 = puStack_60; uVar22 = CONCAT44(puVar7,uVar5), puVar8 < puVar7;
                    puVar8 = puVar8 + 0x10) {
                  *puVar8 = 0xff;
                  puVar8[1] = 0xff;
                  puVar8[2] = 0xff;
                  puVar8[3] = 0xff;
                  puVar8[4] = 0xff;
                  puVar8[5] = 0xff;
                  puVar8[6] = 0xff;
                  puVar8[7] = 0xff;
                  puVar8[8] = 0xff;
                  puVar8[9] = 0xff;
                  puVar8[10] = 0xff;
                  puVar8[0xb] = 0xff;
                  puVar8[0xc] = 0xff;
                  puVar8[0xd] = 0xff;
                  puVar8[0xe] = 0xff;
                  puVar8[0xf] = 0xff;
                }
              }
              iVar17 = (int)uVar22;
              uVar4 = DAT_2c64ae68[1];
              *DAT_2c64ae68 = *DAT_2c64ae68 & 0xfffffffe;
              iVar6 = FUN_2c674818(iVar17,(int)((ulonglong)uVar22 >> 0x20));
              goto LAB_2c64ad20;
            }
            iVar17 = FUN_2c674818();
            puVar8 = puVar12;
            for (puVar9 = puStack_60; puVar9 < puVar7; puVar9 = puVar9 + 1) {
              *puVar9 = *puVar8;
              puVar8 = puVar8 + 1;
            }
            iVar6 = FUN_2c674818();
            uVar13 = (iVar6 - iVar17) * 10;
LAB_2c64ac62:
            uVar4 = FUN_2c6740d8();
            uVar13 = uVar13 / (uint)((ulonglong)DAT_2c64ae58 * (ulonglong)(uVar4 >> 5) >> 0x27);
          }
          if (iVar16 == 0) {
            *DAT_2c64ae50 = 0xffffffff;
          }
          bVar1 = (bool)isCurrentModePrivileged();
          if (bVar1) {
            setBasePriority(iVar16);
          }
          FUN_2c648600(DAT_2c64ae5c,iVar15);
          FUN_2c64aa84(uVar13,uVar20,*piVar18);
          iVar15 = iVar15 + 1;
          uVar19 = uVar19 + uVar13;
        } while ((iVar15 < (int)param_2) || (param_2 == 0));
      }
      FUN_2c648600(DAT_2c64ae60);
      FUN_2c64aa84(uVar19 / param_2,uVar20,*piVar18);
      FUN_2c648600(DAT_2c64ae64);
      piVar18 = piVar18 + 1;
    } while (*piVar18 != -1);
  }
  FUN_2c674278(0x20,0);
  if (*DAT_2c64ae40 != aiStack_48[3]) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

