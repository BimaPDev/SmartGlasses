/* FUN_1013d524 @ 0x1013d524 */

uint FUN_1013d524(void)

{
  int iVar1;
  uint *puVar2;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined8 uVar16;
  uint *puVar3;
  
  FUN_10119bcc(6);
  uVar16 = FUN_10068bb4(1);
  iVar13 = (int)((ulonglong)uVar16 >> 0x20);
  iVar1 = (int)uVar16;
  iVar8 = *(int *)(iVar13 + 0x10);
  if (*(int *)(iVar1 + 0x10) < iVar8) {
    uVar10 = 0;
  }
  else {
    iVar8 = iVar8 + -1;
    puVar9 = (uint *)(iVar1 + 0x14);
    puVar11 = (uint *)(iVar13 + 0x14);
    puVar4 = puVar9 + iVar8;
    puVar12 = puVar11 + iVar8;
    uVar10 = puVar9[iVar8] / (puVar11[iVar8] + 1);
    if (puVar11[iVar8] + 1 <= puVar9[iVar8]) {
      uVar15 = 0;
      iVar13 = 0;
      puVar2 = puVar11;
      puVar14 = puVar9;
      do {
        puVar3 = puVar2 + 1;
        uVar7 = uVar10 * (*puVar2 & 0xffff) + uVar15;
        uVar5 = uVar10 * (*puVar2 >> 0x10) + (uVar7 >> 0x10);
        uVar15 = uVar5 >> 0x10;
        uVar7 = (iVar13 - (uVar7 & 0xffff)) + (*puVar14 & 0xffff);
        iVar6 = ((*puVar14 >> 0x10) - (uVar5 & 0xffff)) + ((int)uVar7 >> 0x10);
        iVar13 = iVar6 >> 0x10;
        *puVar14 = uVar7 & 0xffff | iVar6 * 0x10000;
        puVar2 = puVar3;
        puVar14 = puVar14 + 1;
      } while (puVar3 <= puVar12);
      if (puVar9[iVar8] == 0) {
        while ((puVar4 = puVar4 + -1, puVar9 < puVar4 && (*puVar4 == 0))) {
          iVar8 = iVar8 + -1;
        }
        *(int *)(iVar1 + 0x10) = iVar8;
      }
    }
    iVar13 = FUN_1013d7a2(iVar1);
    if (-1 < iVar13) {
      uVar10 = uVar10 + 1;
      iVar13 = 0;
      puVar4 = puVar9;
      do {
        puVar2 = puVar11 + 1;
        uVar15 = (iVar13 - (*puVar11 & 0xffff)) + (*puVar4 & 0xffff);
        iVar6 = ((*puVar4 >> 0x10) - (*puVar11 >> 0x10)) + ((int)uVar15 >> 0x10);
        iVar13 = iVar6 >> 0x10;
        *puVar4 = uVar15 & 0xffff | iVar6 * 0x10000;
        puVar4 = puVar4 + 1;
        puVar11 = puVar2;
      } while (puVar2 <= puVar12);
      puVar11 = puVar9 + iVar8;
      if (puVar9[iVar8] == 0) {
        while ((puVar11 = puVar11 + -1, puVar9 < puVar11 && (*puVar11 == 0))) {
          iVar8 = iVar8 + -1;
        }
        *(int *)(iVar1 + 0x10) = iVar8;
      }
    }
  }
  return uVar10;
}

