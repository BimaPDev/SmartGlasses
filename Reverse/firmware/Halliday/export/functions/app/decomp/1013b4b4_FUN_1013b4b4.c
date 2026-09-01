/* FUN_1013b4b4 @ 0x1013b4b4 */

undefined4 FUN_1013b4b4(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint local_58;
  uint local_54;
  uint local_50;
  
  uVar10 = param_1[0x32];
  if (param_1[0x10] == 0) {
    param_1[0x11] = 0;
    *param_1 = 0xff000000;
    param_1[0x12] = 0xff;
    param_1[1] = 0xffffffff;
    param_1[0x10] = 2;
  }
  else if (param_1[0x11] != 0) {
    for (uVar4 = 0; uVar4 < param_1[0x11]; uVar4 = uVar4 + 1) {
      *(uint *)(uVar10 + uVar4 * 4) = *param_1;
    }
  }
  uVar17 = 0;
  uVar4 = *param_1;
  puVar1 = param_1;
  uVar11 = (uVar4 & 0xffffff) >> 0x10;
  uVar12 = (uVar4 & 0xffff) >> 8;
  uVar2 = uVar4 & 0xff;
  while( true ) {
    local_50 = uVar2;
    local_54 = uVar12;
    local_58 = uVar11;
    puVar3 = puVar1;
    uVar14 = uVar4 >> 0x18;
    if (param_1[0x10] - 1 <= uVar17) break;
    *(uint *)(uVar10 + puVar3[0x11] * 4) = *puVar3;
    iVar9 = puVar3[0x12] - puVar3[0x11];
    uVar4 = puVar3[1];
    uVar17 = uVar17 + 1;
    uVar11 = (uVar4 & 0xffffff) >> 0x10;
    uVar12 = (uVar4 & 0xffff) >> 8;
    iVar5 = (uVar4 >> 0x18) - uVar14;
    iVar6 = uVar11 - local_58;
    iVar7 = uVar12 - local_54;
    iVar8 = (uVar4 & 0xff) - local_50;
    iVar15 = iVar6;
    iVar16 = iVar5;
    iVar18 = iVar8;
    iVar19 = iVar7;
    for (iVar13 = 1; puVar1 = puVar3 + 1, uVar2 = uVar4 & 0xff, iVar13 < iVar9; iVar13 = iVar13 + 1)
    {
      *(uint *)(uVar10 + (iVar13 + puVar3[0x11]) * 4) =
           (iVar15 / iVar9 + local_58) * 0x10000 | (iVar16 / iVar9 + uVar14) * 0x1000000 |
           iVar18 / iVar9 + local_50 | (iVar19 / iVar9 + local_54) * 0x100;
      iVar16 = iVar16 + iVar5;
      iVar15 = iVar15 + iVar6;
      iVar19 = iVar19 + iVar7;
      iVar18 = iVar18 + iVar8;
    }
  }
  for (uVar4 = param_1[param_1[0x10] + 0x10]; uVar4 < 0x400; uVar4 = uVar4 + 1) {
    *(uint *)(uVar10 + uVar4 * 4) = param_1[param_1[0x10] - 1];
  }
  return 0;
}

