/* FUN_2c670994 @ 0x2c670994 */

void FUN_2c670994(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  
  iVar4 = param_3;
  if (*(int *)(param_2 + 0x10) < *(int *)(param_3 + 0x10)) {
    iVar4 = param_2;
    param_2 = param_3;
  }
  iVar9 = *(int *)(param_2 + 0x10);
  iVar13 = *(int *)(iVar4 + 0x10);
  iVar1 = *(int *)(param_2 + 4);
  iVar8 = iVar9 + iVar13;
  if (*(int *)(param_2 + 8) < iVar8) {
    iVar1 = iVar1 + 1;
  }
  iVar1 = FUN_2c6706e0(param_1,iVar1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c668484(DAT_2c670ae0,0x15d,0,DAT_2c670adc);
  }
  puVar7 = (uint *)(iVar1 + 0x14);
  puVar11 = puVar7 + iVar8;
  for (puVar10 = puVar7; puVar10 < puVar11; puVar10 = puVar10 + 1) {
    *puVar10 = 0;
  }
  puVar10 = (uint *)(param_2 + 0x14 + iVar9 * 4);
  puVar6 = (ushort *)(iVar4 + 0x14);
  puVar3 = puVar6 + iVar13 * 2;
  iVar4 = ((int)puVar10 + (-0x15 - param_2) & 0xfffffffcU) + 4;
  if (puVar10 < (uint *)(param_2 + 0x15)) {
    iVar4 = 4;
  }
  while (puVar6 < puVar3) {
    uVar14 = (uint)*puVar6;
    if (uVar14 != 0) {
      uVar15 = 0;
      puVar12 = puVar7;
      puVar17 = (uint *)(param_2 + 0x14);
      do {
        puVar16 = puVar17 + 1;
        uVar2 = uVar14 * (*puVar17 & 0xffff) + (*puVar12 & 0xffff) + uVar15;
        uVar5 = uVar14 * (*puVar17 >> 0x10) + (*puVar12 >> 0x10) + (uVar2 >> 0x10);
        uVar15 = uVar5 >> 0x10;
        *puVar12 = uVar2 & 0xffff | uVar5 * 0x10000;
        puVar12 = puVar12 + 1;
        puVar17 = puVar16;
      } while (puVar16 < puVar10);
      *(uint *)((int)puVar7 + iVar4) = uVar15;
    }
    uVar14 = (uint)puVar6[1];
    if (uVar14 != 0) {
      uVar15 = *puVar7;
      uVar2 = 0;
      puVar12 = (uint *)(param_2 + 0x14);
      puVar17 = puVar7;
      do {
        uVar2 = uVar2 + uVar14 * (ushort)*puVar12 + (uint)*(ushort *)((int)puVar17 + 2);
        *puVar17 = uVar15 & 0xffff | uVar2 * 0x10000;
        puVar16 = puVar12 + 1;
        uVar15 = uVar14 * (*puVar12 >> 0x10) + (uint)(ushort)puVar17[1] + (uVar2 >> 0x10);
        uVar2 = uVar15 >> 0x10;
        puVar12 = puVar16;
        puVar17 = puVar17 + 1;
      } while (puVar16 < puVar10);
      *(uint *)((int)puVar7 + iVar4) = uVar15;
    }
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 2;
  }
  while ((0 < iVar8 && (puVar11 = puVar11 + -1, *puVar11 == 0))) {
    iVar8 = iVar8 + -1;
  }
  *(int *)(iVar1 + 0x10) = iVar8;
  return;
}

