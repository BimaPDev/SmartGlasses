/* FUN_2c4f06e8 @ 0x2c4f06e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4f06e8(int param_1,uint param_2,int param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint *puVar11;
  byte *pbVar12;
  int iVar13;
  undefined1 *puVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  uint uVar18;
  uint uStack_bc;
  undefined2 uStack_a2;
  undefined4 uStack_a0;
  int iStack_9c;
  uint auStack_98 [6];
  int aiStack_80 [5];
  undefined4 uStack_6c;
  undefined1 uStack_69;
  undefined4 uStack_68;
  undefined1 auStack_64 [56];
  int iStack_2c;
  
  iStack_2c = *DAT_2c4f09ac;
  uVar9 = (uint)((ulonglong)DAT_2c4f09a8 * (ulonglong)param_2 >> 0x20);
  if ((uint)((ulonglong)DAT_2c4f09a8 * (ulonglong)param_4 >> 0x27) != uVar9 >> 5) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4f0b4c,_LAB_2c4f0b48,param_2);
  }
  uVar9 = uVar9 >> 5;
  uStack_a2 = 0;
  aiStack_80[0] = 0;
  uStack_68 = 0;
  uStack_6c = 0;
  aiStack_80[1] = 0;
  aiStack_80[2] = 0;
  aiStack_80[3] = 0;
  aiStack_80[4] = 0;
  FUN_2c674268(auStack_64,0,0x38);
  piVar4 = _LAB_2c4f09b0;
  if (param_2 == 0) {
    iVar16 = *_LAB_2c4f09b4;
    uVar15 = 0;
    if (iVar16 == 0) goto LAB_2c4f088a;
  }
  else {
    puVar14 = (undefined1 *)(param_1 + -1);
    puVar7 = puVar14 + param_2;
    puVar10 = (undefined1 *)(*_LAB_2c4f09b0 + 0x3b);
    do {
      puVar14 = puVar14 + 1;
      puVar10 = puVar10 + 1;
      *puVar10 = *puVar14;
    } while (puVar14 != puVar7);
    if (0x3b < param_2) {
      uVar15 = 0;
      puVar11 = auStack_98;
      do {
        uVar15 = uVar15 + 1;
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      } while (uVar15 < uVar9);
    }
    iVar16 = *_LAB_2c4f09b4;
    if (iVar16 == 0) {
      pbVar12 = (byte *)*piVar4;
      uVar9 = 1;
      do {
        uVar15 = uVar9;
        if (((*pbVar12 == 1) && ((pbVar12[1] & 0xf) == 8)) && (pbVar12[2] == 0xad)) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x121,_LAB_2c4f09bc,_LAB_2c4f09c0,_LAB_2c4f09b8,uVar15 - 1);
        }
        pbVar12 = pbVar12 + 1;
        uVar9 = uVar15 + 1;
      } while (uVar15 < param_2);
LAB_2c4f088a:
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x121,_LAB_2c4f09bc,_LAB_2c4f09c0,_LAB_2c4f09b8,uVar15);
    }
  }
  piVar5 = _LAB_2c4f09b4;
  if (iVar16 == 1) {
    uStack_bc = *DAT_2c4f0b44;
    if (uStack_bc < 2) {
      uStack_bc = uStack_bc + 0x3c;
    }
    if (param_2 < 0x3c) {
      iVar16 = *piVar4;
      goto LAB_2c4f0976;
    }
    piVar17 = aiStack_80;
    iVar16 = *piVar4;
    uVar18 = 0;
    uVar15 = uStack_bc;
    puVar11 = auStack_98;
    do {
      if (*DAT_2c4f09c8 == 1) {
        *puVar11 = 1;
        *DAT_2c4f0b40 = 0;
      }
      else {
        iVar13 = iVar16 + uVar15;
        bVar2 = *(byte *)(iVar16 + uVar15);
        bVar1 = *(byte *)(iVar13 + 1);
        bVar3 = *(byte *)(iVar13 + 2);
        if ((*(char *)(iVar13 + -1) == '\x01') && ((bVar2 & 0xf) == 8)) {
          if (bVar1 == 0xad) {
            *puVar11 = 0;
            *piVar17 = -1;
                    /* WARNING: Subroutine does not return */
            TRACE(4,0x15b,DAT_2c4f0b18,DAT_2c4f0b1c,DAT_2c4f0b38,DAT_2c4f0b34);
          }
LAB_2c4f082a:
          if (bVar1 == 1) goto LAB_2c4f0a9e;
          if (((bVar2 == 0x55) && ((bVar1 & 0xf) == 5)) && (bVar3 == 0x55)) {
            *puVar11 = 1;
            goto LAB_2c4f0850;
          }
        }
        else {
          if (bVar2 != 1) goto LAB_2c4f082a;
          if ((bVar1 & 0xf) == 8) {
            if (bVar3 == 0xad) {
              *puVar11 = 0;
              goto LAB_2c4f0850;
            }
            goto code_r0x2c4f084a;
          }
          if (bVar1 != 1) goto code_r0x2c4f084a;
LAB_2c4f0a9e:
          if ((*(char *)(iVar13 + 3) == -0x53) && ((bVar3 & 0xf) == 8)) {
            *puVar11 = 0;
            *piVar17 = 1;
                    /* WARNING: Subroutine does not return */
            TRACE(4,0x179,DAT_2c4f0b18,DAT_2c4f0b1c,DAT_2c4f0b3c,DAT_2c4f0b34);
          }
        }
code_r0x2c4f084a:
        *puVar11 = 3;
      }
LAB_2c4f0850:
      uVar18 = uVar18 + 1;
      puVar11 = puVar11 + 1;
      piVar17 = piVar17 + 1;
      uVar15 = uVar15 + 0x3c;
    } while (uVar18 < uVar9);
    uVar15 = 0;
    uVar18 = 0;
    puVar11 = auStack_98;
    do {
      uVar18 = uVar18 + 1;
      uVar15 = uVar15 | *puVar11;
      puVar11 = puVar11 + 1;
    } while (uVar18 < uVar9);
    if (1 < (int)uVar15) {
      *piVar5 = 0;
    }
  }
  else {
    iVar16 = *piVar4;
    uStack_bc = 0;
  }
  puVar6 = DAT_2c4f09d8;
  if ((0xef < param_4) && (0x3b < param_2)) {
    piVar17 = aiStack_80;
    uVar18 = 0;
    uVar15 = uStack_bc;
    do {
      if (uStack_bc == 0) {
        if (*piVar17 == -1) {
          uStack_68 = CONCAT31(uStack_68._1_3_,1);
          iVar13 = 1;
        }
        else {
          iVar13 = 0;
        }
      }
      else {
        iVar13 = 0;
      }
      iVar8 = *piVar17 + uVar15;
      puVar14 = &uStack_69 + iVar13;
      puVar10 = (undefined1 *)(iVar13 + iVar8 + iVar16);
      do {
        puVar7 = puVar10 + 1;
        puVar14 = puVar14 + 1;
        *puVar14 = *puVar10;
        puVar10 = puVar7;
      } while ((undefined1 *)(iVar8 + iVar16 + 0x3c) != puVar7);
      iVar16 = 0;
      if (*piVar5 != 0) {
        iVar16 = *DAT_2c4f09c4 + 0x3cU +
                 (uint)((ulonglong)DAT_2c4f09a8 * (ulonglong)(*DAT_2c4f09c4 + 0x3cU) >> 0x25) *
                 -0x3c;
      }
      iVar16 = FUN_2c4f0174(DAT_2c4f09cc,&uStack_68,iVar16);
      if (iVar16 != 0) {
        FUN_2c674268(param_3,0,0xf0);
LAB_2c4f09f0:
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x1d9,DAT_2c4f0b18,DAT_2c4f0b1c,DAT_2c4f0b14,iVar16);
      }
      uStack_a0 = 0x100;
      iStack_9c = param_3;
      iVar16 = FUN_2c4ca90c(*puVar6,&uStack_68,0x3c,&uStack_a2,&uStack_a0,0xf0,DAT_2c4f09d0);
      if (iVar16 != 0) {
        FUN_2c4f0128(DAT_2c4f0b30,8);
        iVar16 = 8;
        goto LAB_2c4f09f0;
      }
      FUN_2c4e65e8(*DAT_2c4f09d4,param_3);
      uVar18 = uVar18 + 1;
      param_3 = param_3 + 0xf0;
      uVar15 = uVar15 + 0x3c;
      piVar17 = piVar17 + 1;
      iVar16 = *piVar4;
    } while (uVar18 < uVar9);
  }
LAB_2c4f0976:
  puVar10 = (undefined1 *)(iVar16 + -1);
  puVar14 = (undefined1 *)((param_2 - 1) + iVar16);
  do {
    puVar14 = puVar14 + 1;
    puVar10 = puVar10 + 1;
    *puVar10 = *puVar14;
  } while ((undefined1 *)(iVar16 + param_2 + 0x3b) != puVar14);
  if (*DAT_2c4f09ac == iStack_2c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

