/* FUN_140e2780 @ 0x140e2780 */

uint FUN_140e2780(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar2;
  
  if (*(int *)(param_1 + 0x10) < *(int *)(param_2 + 0x10)) {
    uVar9 = 0;
  }
  else {
    iVar7 = *(int *)(param_2 + 0x10) + -1;
    puVar8 = (uint *)(param_1 + 0x14);
    puVar10 = (uint *)(param_2 + 0x14);
    puVar3 = puVar8 + iVar7;
    puVar11 = puVar10 + iVar7;
    uVar9 = puVar8[iVar7] / (puVar10[iVar7] + 1);
    if (puVar10[iVar7] + 1 <= puVar8[iVar7]) {
      uVar14 = 0;
      iVar12 = 0;
      puVar1 = puVar10;
      puVar13 = puVar8;
      do {
        puVar2 = puVar1 + 1;
        uVar6 = uVar9 * (*puVar1 & 0xffff) + uVar14;
        uVar4 = uVar9 * (*puVar1 >> 0x10) + (uVar6 >> 0x10);
        uVar14 = uVar4 >> 0x10;
        uVar6 = (iVar12 - (uVar6 & 0xffff)) + (*puVar13 & 0xffff);
        iVar5 = ((*puVar13 >> 0x10) - (uVar4 & 0xffff)) + ((int)uVar6 >> 0x10);
        iVar12 = iVar5 >> 0x10;
        *puVar13 = uVar6 & 0xffff | iVar5 * 0x10000;
        puVar1 = puVar2;
        puVar13 = puVar13 + 1;
      } while (puVar2 <= puVar11);
      if (puVar8[iVar7] == 0) {
        while ((puVar3 = puVar3 + -1, puVar8 < puVar3 && (*puVar3 == 0))) {
          iVar7 = iVar7 + -1;
        }
        *(int *)(param_1 + 0x10) = iVar7;
      }
    }
    iVar12 = FUN_140e0b7c(param_1);
    if (-1 < iVar12) {
      uVar9 = uVar9 + 1;
      iVar12 = 0;
      puVar3 = puVar8;
      do {
        puVar1 = puVar10 + 1;
        uVar14 = (iVar12 - (*puVar10 & 0xffff)) + (*puVar3 & 0xffff);
        iVar5 = ((*puVar3 >> 0x10) - (*puVar10 >> 0x10)) + ((int)uVar14 >> 0x10);
        iVar12 = iVar5 >> 0x10;
        *puVar3 = uVar14 & 0xffff | iVar5 * 0x10000;
        puVar3 = puVar3 + 1;
        puVar10 = puVar1;
      } while (puVar1 <= puVar11);
      puVar10 = puVar8 + iVar7;
      if (puVar8[iVar7] == 0) {
        while ((puVar10 = puVar10 + -1, puVar8 < puVar10 && (*puVar10 == 0))) {
          iVar7 = iVar7 + -1;
        }
        *(int *)(param_1 + 0x10) = iVar7;
      }
    }
  }
  return uVar9;
}

