/* FUN_10128a22 @ 0x10128a22 */

void FUN_10128a22(int param_1,uint param_2,ushort *param_3)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort uVar13;
  uint uVar14;
  ushort *puVar15;
  ushort *local_3c;
  ushort *local_38;
  
  iVar5 = (int)param_2 >> 1;
  iVar9 = iVar5;
  if ((param_2 & 1) == 0) {
    iVar9 = iVar5 + -1;
  }
  uVar14 = 0x10128a4b;
  puVar2 = (ushort *)FUN_100942d8(param_1 * 2);
  puVar11 = param_3;
  for (iVar6 = 0; iVar6 < param_1; iVar6 = iVar6 + 1) {
    iVar3 = iVar5 + param_1 + -1;
    iVar7 = param_2 * puVar11[param_1 + -1];
    iVar4 = (param_1 + -2) - iVar9;
    puVar10 = puVar2 + param_1;
    do {
      if (param_1 <= iVar3) {
        uVar14 = 0;
      }
      puVar10 = puVar10 + -1;
      *puVar10 = (ushort)iVar7;
      if (iVar3 < param_1) {
        uVar14 = (uint)puVar11[iVar3];
      }
      uVar14 = iVar7 - uVar14;
      if (iVar4 < 0) {
        uVar13 = *puVar11;
      }
      else {
        uVar13 = puVar11[iVar4];
      }
      iVar7 = uVar13 + uVar14;
      iVar3 = iVar3 + -1;
      iVar4 = iVar4 + -1;
    } while (puVar10 != puVar2);
    uVar14 = 0x10128b03;
    thunk_FUN_1011ea40(puVar11,puVar2,param_1 * 2);
    puVar11 = puVar11 + param_1;
  }
  for (iVar6 = 0; param_1 * param_1 - iVar6 != 0; iVar6 = iVar6 + 1) {
    uVar14 = (uint)param_3[iVar6];
    if (uVar14 != 0) {
      if (uVar14 == 0x3fc0) {
        param_3[iVar6] = (ushort)(0x3fc0 / param_2);
      }
      else {
        param_3[iVar6] = (ushort)((int)uVar14 / (int)param_2);
      }
    }
  }
  local_38 = param_3 + (param_1 + -1) * param_1;
  iVar3 = iVar9 * param_1 + param_1;
  puVar11 = param_3 + iVar3;
  for (iVar6 = 0; iVar6 < param_1; iVar6 = iVar6 + 1) {
    puVar15 = param_3 + iVar6;
    local_3c = puVar11 + (-iVar3 - param_1 * iVar5);
    iVar4 = 0;
    iVar7 = param_2 * param_3[iVar6];
    puVar10 = puVar11;
    puVar12 = puVar15;
    do {
      if (iVar7 < 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = (ushort)((uint)(iVar7 << 10) >> 0x10);
      }
      puVar2[iVar4] = uVar13;
      if (iVar4 - iVar5 < 1) {
        uVar13 = *puVar12;
      }
      else {
        uVar13 = *local_3c;
      }
      local_3c = local_3c + param_1;
      if (iVar9 + 1 + iVar4 < param_1) {
        uVar1 = *puVar10;
      }
      else {
        uVar1 = *local_38;
      }
      iVar4 = iVar4 + 1;
      iVar7 = (uint)uVar1 + (iVar7 - (uint)uVar13);
      puVar12 = puVar12 + param_1;
      puVar10 = puVar10 + param_1;
      puVar8 = puVar2;
    } while (param_1 != iVar4);
    do {
      puVar10 = puVar8 + 1;
      *puVar15 = *puVar8;
      puVar15 = puVar15 + param_1;
      puVar8 = puVar10;
    } while (puVar2 + param_1 != puVar10);
    local_38 = local_38 + 1;
    puVar11 = puVar11 + 1;
  }
  FUN_10094444(puVar2);
  return;
}

