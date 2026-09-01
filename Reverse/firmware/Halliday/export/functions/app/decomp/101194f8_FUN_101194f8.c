/* FUN_101194f8 @ 0x101194f8 */

void FUN_101194f8(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  
  iVar5 = param_3;
  if (*(int *)(param_2 + 0x10) < *(int *)(param_3 + 0x10)) {
    iVar5 = param_2;
    param_2 = param_3;
  }
  iVar13 = *(int *)(param_2 + 0x10);
  iVar12 = *(int *)(iVar5 + 0x10);
  iVar1 = *(int *)(param_2 + 4);
  iVar10 = iVar13 + iVar12;
  if (*(int *)(param_2 + 8) < iVar10) {
    iVar1 = iVar1 + 1;
  }
  iVar1 = FUN_10119374(param_1,iVar1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(DAT_10119640,0x15d,0,DAT_1011963c);
  }
  puVar9 = (uint *)(iVar1 + 0x14);
  puVar11 = puVar9 + iVar10;
  for (puVar15 = puVar9; puVar15 < puVar11; puVar15 = puVar15 + 1) {
    *puVar15 = 0;
  }
  puVar7 = (ushort *)(iVar5 + 0x14);
  puVar15 = (uint *)(param_2 + 0x14 + iVar13 * 4);
  puVar4 = puVar7 + iVar12 * 2;
  iVar5 = ((int)puVar15 + (-0x15 - param_2) & 0xfffffffcU) + 4;
  if (puVar15 < (uint *)(param_2 + 0x15)) {
    iVar5 = 4;
  }
  while (puVar7 < puVar4) {
    uVar14 = (uint)*puVar7;
    if (uVar14 != 0) {
      uVar6 = 0;
      puVar3 = puVar9;
      puVar17 = (uint *)(param_2 + 0x14);
      do {
        puVar16 = puVar17 + 1;
        uVar2 = uVar14 * (*puVar17 & 0xffff) + (*puVar3 & 0xffff) + uVar6;
        uVar8 = uVar14 * (*puVar17 >> 0x10) + (*puVar3 >> 0x10) + (uVar2 >> 0x10);
        uVar6 = uVar8 >> 0x10;
        *puVar3 = uVar2 & 0xffff | uVar8 * 0x10000;
        puVar3 = puVar3 + 1;
        puVar17 = puVar16;
      } while (puVar16 < puVar15);
      *(uint *)((int)puVar9 + iVar5) = uVar6;
    }
    uVar14 = (uint)puVar7[1];
    if (uVar14 != 0) {
      uVar6 = *puVar9;
      uVar2 = 0;
      puVar3 = (uint *)(param_2 + 0x14);
      puVar17 = puVar9;
      do {
        uVar2 = uVar2 + uVar14 * (ushort)*puVar3 + (uint)*(ushort *)((int)puVar17 + 2);
        *puVar17 = uVar6 & 0xffff | uVar2 * 0x10000;
        puVar16 = puVar3 + 1;
        uVar6 = uVar14 * (*puVar3 >> 0x10) + (uint)(ushort)puVar17[1] + (uVar2 >> 0x10);
        uVar2 = uVar6 >> 0x10;
        puVar3 = puVar16;
        puVar17 = puVar17 + 1;
      } while (puVar16 < puVar15);
      *(uint *)((int)puVar9 + iVar5) = uVar6;
    }
    puVar9 = puVar9 + 1;
    puVar7 = puVar7 + 2;
  }
  while ((0 < iVar10 && (puVar11 = puVar11 + -1, *puVar11 == 0))) {
    iVar10 = iVar10 + -1;
  }
  *(int *)(iVar1 + 0x10) = iVar10;
  return;
}

