/* FUN_2c621970 @ 0x2c621970 */

undefined4 FUN_2c621970(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int *piVar6;
  undefined1 uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  char *pcVar19;
  uint uVar20;
  char *pcVar21;
  uint uVar22;
  bool bVar23;
  
  iVar3 = FUN_2c62be98(0x40,param_1[3] << 2,param_3,param_4,param_4);
  *param_1 = iVar3;
  iVar3 = FUN_2c62be98(0x40,(param_1[2] + 1) * 4);
  piVar4 = (int *)FUN_2c62be98(0x40,(param_1[2] + 1) * 4);
  if (((*param_1 == 0) || (iVar3 == 0)) ||
     (uVar10 = (uint)(piVar4 == (int *)0x0), piVar4 == (int *)0x0)) {
    FUN_2c62bea8(iVar3);
    FUN_2c62bea8(piVar4);
    return 0x53;
  }
  if (param_1[2] == -1) {
    if (param_1[3] != 0) goto LAB_2c6219e8;
LAB_2c621a08:
    piVar6 = (int *)(iVar3 + -4);
    uVar10 = 1;
    piVar9 = piVar4;
    do {
      iVar16 = *piVar9;
      uVar10 = uVar10 + 1;
      piVar6 = piVar6 + 1;
      piVar9 = piVar9 + 1;
      *piVar9 = (iVar16 + *piVar6) * 2;
    } while (uVar10 <= (uint)param_1[2]);
    iVar8 = param_1[3];
  }
  else {
    puVar14 = (uint *)(piVar4 + -1);
    puVar5 = (uint *)(iVar3 + -4);
    uVar11 = uVar10;
    do {
      puVar14 = puVar14 + 1;
      *puVar14 = uVar10;
      puVar5 = puVar5 + 1;
      *puVar5 = uVar10;
      bVar23 = param_1[2] != uVar11;
      uVar11 = uVar11 + 1;
    } while (bVar23);
    if (param_1[3] == 0) {
      if (param_1[2] == 0) goto LAB_2c621a64;
      goto LAB_2c621a08;
    }
LAB_2c6219e8:
    iVar16 = 0;
    do {
      iVar8 = *(int *)(param_1[1] + iVar16 * 4);
      iVar16 = iVar16 + 1;
      *(int *)(iVar3 + iVar8 * 4) = *(int *)(iVar3 + iVar8 * 4) + 1;
      iVar8 = param_1[3];
    } while (iVar8 != iVar16);
    if (param_1[2] != 0) goto LAB_2c621a08;
  }
  if (iVar8 != 0) {
    iVar16 = 0;
    do {
      iVar12 = *(int *)(param_1[1] + iVar16 * 4);
      if (iVar12 != 0) {
        iVar8 = piVar4[iVar12];
        piVar4[iVar12] = iVar8 + 1;
        *(int *)(*param_1 + iVar16 * 4) = iVar8;
        *(uint *)(*param_1 + iVar16 * 4) =
             *(uint *)(*param_1 + iVar16 * 4) & ~(-1 << (*(uint *)(param_1[1] + iVar16 * 4) & 0xff))
        ;
        iVar8 = param_1[3];
      }
      iVar16 = iVar16 + 1;
    } while (iVar8 != iVar16);
  }
LAB_2c621a64:
  FUN_2c62bea8(iVar3);
  FUN_2c62bea8(piVar4);
  iVar3 = FUN_2c62be98(0x40,0x800);
  if (iVar3 == 0) {
    return 0x53;
  }
  FUN_2c62c314(iVar3,0,0x800);
  uVar10 = param_1[3];
  if (uVar10 != 0) {
    uVar11 = 0;
    do {
      while (uVar20 = *(uint *)(param_1[1] + uVar11 * 4), 9 < uVar20) {
        uVar10 = 0;
        uVar13 = 0;
        do {
          uVar17 = 8 - uVar13;
          uVar15 = uVar13 & 0xff;
          uVar13 = uVar13 + 1;
          uVar10 = uVar10 | ((*(uint *)(*param_1 + uVar11 * 4) >> (uVar20 - 9 & 0xff)) >>
                             (uVar17 & 0xff) & 1) << uVar15;
        } while (uVar13 != 9);
        uVar13 = *(uint *)(iVar3 + uVar10 * 4);
        uVar11 = uVar11 + 1;
        if (uVar13 < uVar20) {
          uVar13 = uVar20;
        }
        *(uint *)(iVar3 + uVar10 * 4) = uVar13;
        uVar10 = param_1[3];
        if (uVar10 <= uVar11) goto LAB_2c621ae2;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar10);
  }
LAB_2c621ae2:
  puVar5 = (uint *)(iVar3 + -4);
  uVar10 = 0x200;
  puVar14 = puVar5;
  do {
    puVar14 = puVar14 + 1;
    if (9 < *puVar14) {
      uVar10 = uVar10 + (1 << (*puVar14 - 9 & 0xff));
    }
  } while ((uint *)(iVar3 + 0x7fc) != puVar14);
  iVar16 = FUN_2c62be98(0x40,uVar10);
  param_1[4] = iVar16;
  iVar16 = FUN_2c62be98(0x40,uVar10 << 1);
  iVar8 = param_1[4];
  param_1[5] = iVar16;
  if ((iVar16 == 0) || (uVar11 = (uint)(iVar8 == 0), iVar8 == 0)) {
    FUN_2c62bea8(iVar3);
    return 0x53;
  }
  if (uVar10 != 0) {
    while( true ) {
      *(undefined1 *)(iVar8 + uVar11) = 0x10;
      uVar11 = uVar11 + 1;
      if (uVar11 == uVar10) break;
      iVar8 = param_1[4];
    }
  }
  iVar8 = 0x200;
  iVar16 = 0;
  do {
    puVar5 = puVar5 + 1;
    uVar11 = *puVar5;
    if (9 < uVar11) {
      *(char *)(param_1[4] + iVar16) = (char)uVar11;
      *(short *)(param_1[5] + iVar16 * 2) = (short)iVar8;
      iVar8 = iVar8 + (1 << (uVar11 - 9 & 0xff));
    }
    iVar16 = iVar16 + 1;
  } while (iVar16 != 0x200);
  FUN_2c62bea8(iVar3);
  uVar11 = param_1[3];
  if (uVar11 != 0) {
    uVar13 = 0;
    uVar20 = 0;
    do {
      uVar15 = *(uint *)(param_1[1] + uVar20 * 4);
      if (uVar15 != 0) {
        uVar22 = 0;
        uVar17 = 0;
        do {
          uVar18 = (uVar15 - 1) - uVar17;
          uVar2 = uVar17 & 0xff;
          uVar17 = uVar17 + 1;
          uVar22 = uVar22 | (*(uint *)(*param_1 + uVar20 * 4) >> (uVar18 & 0xff) & 1) << uVar2;
        } while (uVar15 != uVar17);
        uVar13 = uVar13 + 1;
        if (uVar15 < 10) {
          iVar3 = 0;
          do {
            uVar11 = iVar3 << (uVar15 & 0xff);
            iVar3 = iVar3 + 1;
            uVar11 = uVar11 | uVar22;
            if (*(char *)(param_1[4] + uVar11) != '\x10') {
              return 0x37;
            }
            *(char *)(param_1[4] + uVar11) = (char)uVar15;
            *(short *)(param_1[5] + uVar11 * 2) = (short)uVar20;
          } while (1 << (9 - uVar15 & 0xff) != iVar3);
        }
        else {
          iVar3 = param_1[4];
          uVar1 = *(ushort *)(param_1[5] + (uVar22 & 0x1ff) * 2);
          uVar17 = (uint)*(byte *)(iVar3 + (uVar22 & 0x1ff));
          iVar16 = 1 << (uVar17 - uVar15 & 0xff);
          if (uVar17 < uVar15) {
            return 0x37;
          }
          if (iVar16 == 0) goto LAB_2c621bea;
          iVar8 = 0;
          while( true ) {
            uVar11 = iVar8 << (uVar15 - 9 & 0xff);
            iVar8 = iVar8 + 1;
            iVar12 = (uVar11 | uVar22 >> 9) + (uint)uVar1;
            *(char *)(iVar3 + iVar12) = (char)uVar15;
            *(short *)(param_1[5] + iVar12 * 2) = (short)uVar20;
            if (iVar16 == iVar8) break;
            iVar3 = param_1[4];
          }
        }
        uVar11 = param_1[3];
      }
LAB_2c621bea:
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar11);
    if (1 < uVar13) {
      if (uVar10 == 0) {
        return 0;
      }
      pcVar19 = (char *)(param_1[4] + -1);
      pcVar21 = pcVar19 + uVar10;
      do {
        pcVar19 = pcVar19 + 1;
        if (*pcVar19 == '\x10') {
          return 0x37;
        }
      } while (pcVar21 != pcVar19);
      return 0;
    }
  }
  if (uVar10 != 0) {
    uVar11 = 0;
    do {
      if (*(char *)(param_1[4] + uVar11) == '\x10') {
        if (uVar11 < 0x200) {
          uVar7 = 1;
        }
        else {
          uVar7 = 10;
        }
        *(undefined1 *)(param_1[4] + uVar11) = uVar7;
        *(undefined2 *)(param_1[5] + uVar11 * 2) = 0xffff;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar10);
  }
  return 0;
}

