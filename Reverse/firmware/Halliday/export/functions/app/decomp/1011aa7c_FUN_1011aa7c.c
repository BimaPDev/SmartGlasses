/* FUN_1011aa7c @ 0x1011aa7c */

undefined4 FUN_1011aa7c(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  code *pcVar9;
  ushort *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  bool bVar19;
  undefined4 *puVar20;
  undefined8 uVar21;
  
  piVar4 = DAT_1005734c;
  if ((param_1 & 0xff) - 1 < 3) {
    FUN_10057024(0);
    (*DAT_100573a0)();
  }
  else {
    FUN_1011a8d6();
    FUN_10057024(1 < *piVar4 - 1U);
    uVar21 = thunk_FUN_10115958();
    puVar6 = DAT_10057354;
    iVar12 = DAT_10057350;
    *(undefined8 *)(DAT_10057350 + 0x408) = uVar21;
    FUN_10055c2c(0x2c);
    piVar17 = DAT_10057358;
    *puVar6 = 4;
    pcVar9 = DAT_10057388;
    *(int *)(iVar12 + 0x3d8) = *piVar17;
    FUN_10055be0(0x2c);
    iVar15 = (*pcVar9)();
    puVar8 = DAT_10057360;
    puVar7 = DAT_1005735c;
    if (iVar15 != 0) {
      uVar14 = DAT_10057360[1];
      puVar20 = DAT_10057360 + 2;
      *DAT_1005735c = *DAT_10057360;
      puVar7[1] = uVar14;
      puVar7[2] = *puVar20;
      *DAT_10057364 = puVar8[-3];
      *DAT_10057368 = puVar8[-2];
      *DAT_1005736c = puVar8[-1];
      *DAT_10057370 = puVar8[3];
    }
    FUN_1011a71c(DAT_10057374,2);
    (*DAT_10057378)();
    FUN_1011a71c(DAT_1005737c,2);
    iVar15 = (*pcVar9)();
    if (iVar15 != 0) {
      FUN_1005d334();
      puVar8 = DAT_10057360;
      puVar7 = DAT_1005735c;
      uVar14 = DAT_1005735c[1];
      *DAT_10057360 = *DAT_1005735c;
      puVar8[1] = uVar14;
      puVar8[2] = puVar7[2];
      iVar15 = DAT_10057380;
      *(undefined4 *)(DAT_10057380 + 0xc) = *DAT_10057364;
      *(undefined4 *)(iVar15 + 0x10) = *DAT_10057368;
      *(undefined4 *)(iVar15 + 0x14) = *DAT_1005736c;
      *(undefined4 *)(iVar15 + 0x24) = *DAT_10057370;
    }
    FUN_10055c2c(0x2c);
    iVar11 = *piVar17;
    *puVar6 = 0;
    FUN_10055be0(0x2c);
    iVar11 = iVar11 - *(int *)(iVar12 + 0x3d8);
    iVar15 = FUN_10056618();
    pcVar9 = DAT_10057384;
    piVar4[1] = iVar15 * iVar11 + piVar4[1];
    uVar16 = (*pcVar9)(iVar11);
    uVar18 = *(uint *)(iVar12 + 0x3d0);
    *(uint *)(iVar12 + 0x3d0) = uVar18 + uVar16;
    *(uint *)(iVar12 + 0x3d4) = *(int *)(iVar12 + 0x3d4) + (uint)CARRY4(uVar18,uVar16);
    *(undefined4 *)(iVar12 + 0x3d8) = 0;
  }
  iVar12 = DAT_10056f78;
  *(uint *)(DAT_10056f74 + 0x10) = *(uint *)(DAT_10056f74 + 0x10) & 0xfffffffb;
  iVar15 = DAT_10056f7c;
  iVar11 = 0x1a;
  do {
    iVar1 = iVar11 * 4;
    iVar2 = iVar11 * 4;
    bVar19 = iVar11 != 0;
    iVar11 = iVar11 + -1;
    **(undefined4 **)(iVar15 + iVar2) = *(undefined4 *)(iVar12 + iVar1);
    iVar2 = DAT_10056f84;
    iVar1 = DAT_10056f80;
  } while (bVar19);
  iVar12 = 7;
  iVar15 = DAT_10056f80 + 0x36c;
  do {
    iVar11 = iVar12 * 4;
    iVar3 = iVar12 * 4;
    bVar19 = iVar12 != 0;
    iVar12 = iVar12 + -1;
    **(undefined4 **)(iVar2 + iVar3) = *(undefined4 *)(iVar15 + iVar11);
    puVar10 = DAT_10056f8c;
    piVar4 = DAT_10056f88;
  } while (bVar19);
  uVar16 = *(uint *)(iVar1 + 0x100);
  uVar18 = *(uint *)(iVar1 + 0x104);
  iVar12 = 0;
  *(undefined1 *)(DAT_10056f88 + 2) = 0;
  do {
    if (((int)(uint)*(ushort *)(iVar1 + 0x38c) >> (*puVar10 & 0xff)) << 0x1f < 0) {
      uVar13 = (uint)puVar10[1];
      if (uVar13 < 0x20) {
        uVar13 = 1 << (uVar13 & 0xff) & uVar16;
      }
      else {
        uVar13 = 1 << (uVar13 - 0x20 & 0xff) & uVar18;
      }
      if (uVar13 != 0) {
        *(char *)(piVar4 + 2) = (char)*puVar10;
        goto LAB_10056f02;
      }
    }
    iVar12 = iVar12 + 1;
    puVar10 = puVar10 + 6;
    if (iVar12 == 0xf) {
LAB_10056f02:
      if (*piVar4 != 0) {
        if (*piVar4 == 3) {
          *piVar4 = 0;
        }
        *(undefined2 *)(iVar1 + 0x38c) = *(undefined2 *)(iVar1 + 0x38e);
        FUN_10057708(1);
      }
      if (piVar4[0x21] == 0) {
        uVar14 = 1;
      }
      else {
        uVar14 = 0;
        FUN_10119dc2(DAT_10056f90);
        uVar5 = DAT_10056f94;
        piVar17 = DAT_10056f88;
        for (uVar16 = 0; uVar16 < (uint)piVar4[0x21]; uVar16 = uVar16 + 1) {
          FUN_10119dc2(uVar5,(char)piVar17[4]);
          iVar12 = (*(code *)piVar17[3])((char)piVar17[4]);
          if (iVar12 == 1) {
            uVar14 = 1;
          }
          piVar17 = piVar17 + 2;
        }
        piVar4[0x21] = 0;
      }
      return uVar14;
    }
  } while( true );
}

