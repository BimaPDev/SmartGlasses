/* FUN_2c610690 @ 0x2c610690 */

uint * FUN_2c610690(uint param_1,uint param_2,uint param_3)

{
  byte bVar1;
  char *pcVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  short sVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint local_40;
  uint local_3c;
  
  puVar5 = DAT_2c610958;
  puVar4 = DAT_2c610954;
  puVar3 = DAT_2c610950;
  pcVar2 = DAT_2c61094c;
  if ((*(byte *)(param_1 + 0x19) & 7) == 0) {
    return (uint *)0x0;
  }
  local_3c = param_3;
  uVar9 = param_2;
  if (*DAT_2c61094c == '\0') {
    uVar19 = param_1 ^ (int)param_2 >> 1;
    FUN_2c62bea8(*DAT_2c610954);
    uVar8 = lv_mem_alloc(0);
    *puVar4 = uVar8;
    *DAT_2c610958 = uVar8;
    FUN_2c62c3b0(uVar8,0);
    puVar17 = DAT_2c610950;
    bVar1 = *(byte *)(param_1 + 0x19);
    *pcVar2 = '\x01';
    *puVar17 = 0;
    if ((bVar1 & 7) == 2) {
      uVar19 = uVar19 ^ param_2;
    }
    else {
      uVar19 = uVar19 ^ param_3;
      uVar9 = param_3;
    }
LAB_2c6107e2:
    uVar8 = 0;
    if ((int)param_3 < (int)param_2) {
      local_3c = param_2;
    }
    puVar6 = (uint *)*puVar4;
    local_40 = local_3c * 4 + 0x10;
    puVar17 = (uint *)*puVar5;
    uVar11 = (int)puVar17 + (local_40 - (int)puVar6);
  }
  else {
    if ((*(byte *)(param_1 + 0x19) & 7) != 2) {
      uVar9 = param_3;
    }
    uVar8 = *DAT_2c610950;
    uVar19 = param_1 ^ (int)param_2 >> 1 ^ uVar9;
    if (uVar8 == 0) goto LAB_2c6107e2;
    puVar6 = (uint *)*DAT_2c610954;
    puVar17 = (uint *)*DAT_2c610958;
    puVar10 = puVar6;
    do {
      if ((puVar10 == (uint *)0x0) || (uVar11 = puVar10[1], (uVar11 & 0x3fffffff) == 0)) break;
      if (uVar19 == *puVar10) {
        puVar10[1] = uVar11 & 0xc0000000 | uVar11 + 1 & 0x3fffffff;
        return puVar10;
      }
      puVar10 = puVar10 + (short)puVar10[3] + 4;
    } while (puVar10 < puVar17);
    if ((int)param_3 < (int)param_2) {
      local_3c = param_2;
    }
    local_40 = local_3c * 4 + 0x10;
    uVar11 = (int)puVar17 + (local_40 - (int)puVar6);
    if (uVar11 < uVar8) {
      *(byte *)((int)puVar17 + 7) = *(byte *)((int)puVar17 + 7) & 0x7f;
      goto LAB_2c61072c;
    }
  }
  if (uVar8 < local_40) {
    puVar17 = (uint *)lv_mem_alloc(local_40);
    if (puVar17 == (uint *)0x0) {
      return (uint *)0x0;
    }
    *(byte *)((int)puVar17 + 7) = *(byte *)((int)puVar17 + 7) | 0x80;
  }
  else {
    if (uVar8 < uVar11) {
      do {
        puVar10 = puVar17;
        if (uVar8 != 0) {
          uVar11 = 0xffffffff;
          puVar12 = puVar6;
          do {
            puVar15 = puVar6;
            if ((puVar12 == (uint *)0x0) ||
               (uVar14 = puVar12[1] & 0x3fffffff, (puVar12[1] & 0x3fffffff) == 0)) break;
            if (uVar14 <= uVar11) {
              uVar11 = uVar14;
            }
            puVar12 = puVar12 + (short)puVar12[3] + 4;
          } while (puVar12 < puVar17);
          do {
            if ((puVar15 == (uint *)0x0) || ((puVar15[1] & 0x3fffffff) == 0)) break;
            if (uVar11 == (puVar15[1] & 0x3fffffff)) {
              iVar13 = (int)(short)puVar15[3];
              iVar18 = iVar13 * 4 + 0x10;
              puVar10 = puVar17 + (-4 - iVar13);
              iVar20 = (int)puVar17 + (-iVar18 - (int)puVar15);
              *puVar5 = (uint)puVar10;
              if (iVar20 != 0) {
                FUN_2c62c0d8(puVar15,puVar15 + iVar13 + 4,iVar20);
                puVar6 = (uint *)*puVar5;
                for (puVar17 = puVar15; puVar17 != puVar6; puVar17 = puVar17 + (short)puVar17[3] + 4
                    ) {
                  puVar17[2] = puVar17[2] + iVar13 * -4 + -0x10;
                }
                FUN_2c62c3b0((int)puVar15 + iVar20,iVar18);
                puVar10 = (uint *)*puVar5;
                puVar6 = (uint *)*puVar4;
                uVar8 = *puVar3;
              }
              break;
            }
            puVar15 = puVar15 + (short)puVar15[3] + 4;
          } while (puVar15 < puVar17);
        }
        puVar17 = puVar10;
      } while (uVar8 < (int)puVar10 + (local_40 - (int)puVar6));
    }
    *(byte *)((int)puVar17 + 7) = *(byte *)((int)puVar17 + 7) & 0x7f;
  }
LAB_2c61072c:
  *puVar17 = uVar19;
  *(short *)(puVar17 + 3) = (short)local_3c;
  uVar8 = puVar17[1];
  *(short *)((int)puVar17 + 0xe) = (short)uVar9;
  puVar17[1] = uVar8 & 0x80000000 | 1;
  if ((uVar8 & 0x80000000) == 0) {
    uVar8 = *puVar5;
    *puVar5 = local_40 + uVar8;
    puVar17[2] = uVar8 + 0x10;
  }
  else {
    puVar17[2] = (uint)(puVar17 + 4);
  }
  if ((int)uVar9 < 1) {
    return puVar17;
  }
  sVar16 = 0;
  iVar13 = 0;
  do {
    uVar7 = FUN_2c610588(param_1,uVar9,iVar13);
    sVar16 = sVar16 + 1;
    *(undefined4 *)(puVar17[2] + iVar13 * 4) = uVar7;
    iVar13 = (int)sVar16;
    uVar9 = (uint)*(short *)((int)puVar17 + 0xe);
  } while (iVar13 < (int)uVar9);
  return puVar17;
}

