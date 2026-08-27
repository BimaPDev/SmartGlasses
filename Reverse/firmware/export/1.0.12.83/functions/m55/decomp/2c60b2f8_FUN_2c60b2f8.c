/* FUN_2c60b2f8 @ 0x2c60b2f8 */

void FUN_2c60b2f8(int param_1,uint param_2,ushort *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  ushort *puVar10;
  ushort *puVar11;
  int iVar12;
  ushort *puVar13;
  undefined2 *puVar14;
  ushort *puVar15;
  bool bVar16;
  ushort *local_4c;
  int local_48;
  uint local_3c;
  int local_38;
  
  uVar1 = (int)param_2 >> 1;
  local_3c = uVar1;
  if (-1 < (int)(param_2 << 0x1f)) {
    local_3c = (int)(short)((short)uVar1 + -1);
  }
  iVar8 = param_1 * 2;
  iVar2 = FUN_2c62bf1c(iVar8);
  if (param_1 < 1) {
    uVar9 = (ushort)(0x3fc0 / param_2);
    if (param_1 * param_1 == 0) goto LAB_2c60b4b8;
LAB_2c60b3c4:
    uVar5 = 0;
    puVar13 = param_3 + -1;
    do {
      while( true ) {
        puVar13 = puVar13 + 1;
        uVar3 = (uint)*puVar13;
        if (uVar3 != 0) break;
LAB_2c60b3d6:
        uVar5 = uVar5 + 1;
        if ((uint)(param_1 * param_1) <= uVar5) goto LAB_2c60b3f2;
      }
      if (uVar3 != 0x3fc0) {
        *puVar13 = (ushort)((int)uVar3 / (int)param_2);
        goto LAB_2c60b3d6;
      }
      uVar5 = uVar5 + 1;
      *puVar13 = uVar9;
    } while (uVar5 < (uint)(param_1 * param_1));
LAB_2c60b3f2:
    if (param_1 < 1) goto LAB_2c60b4b8;
  }
  else {
    iVar12 = 0;
    puVar11 = param_3 + -(uVar1 + 1 + local_3c);
    puVar13 = param_3;
    do {
      iVar7 = param_2 * puVar13[param_1 + -1];
      uVar5 = uVar1 + param_1 + -1;
      puVar14 = (undefined2 *)(iVar2 + (param_1 + -1) * 2);
      do {
        iVar4 = uVar5 - (uVar1 + local_3c);
        uVar3 = 0;
        *puVar14 = (short)iVar7;
        if ((int)uVar5 < param_1) {
          uVar3 = (uint)puVar13[uVar5];
        }
        iVar7 = iVar7 - uVar3;
        if (uVar5 != uVar1 + local_3c && -1 < iVar4) {
          uVar3 = (uint)puVar11[uVar5];
        }
        if (iVar4 < 1) {
          uVar3 = (uint)*puVar13;
        }
        bVar16 = uVar5 != uVar1;
        iVar7 = iVar7 + uVar3;
        uVar5 = uVar5 - 1;
        puVar14 = puVar14 + -1;
      } while (bVar16);
      iVar12 = iVar12 + 1;
      FUN_2c62c0d8(puVar13,iVar2,iVar8);
      puVar11 = puVar11 + param_1;
      puVar13 = puVar13 + param_1;
    } while (param_1 != iVar12);
    uVar9 = (ushort)(0x3fc0 / param_2);
    if (param_1 * param_1 != 0) goto LAB_2c60b3c4;
  }
  local_38 = param_1 + -1;
  puVar13 = (ushort *)(iVar8 * local_38 + (int)param_3);
  local_48 = 0;
  local_4c = param_3;
  do {
    puVar6 = local_4c + 1;
    iVar4 = param_2 * *local_4c;
    puVar10 = (ushort *)(local_3c * iVar8 + iVar8 + -2 + (int)puVar6);
    iVar12 = 0;
    puVar11 = (ushort *)(iVar2 + -2);
    iVar7 = -uVar1;
    puVar15 = local_4c;
    do {
      uVar9 = 0;
      if (-1 < iVar4) {
        uVar9 = (ushort)((uint)(iVar4 << 10) >> 0x10);
      }
      puVar11 = puVar11 + 1;
      *puVar11 = uVar9;
      uVar5 = local_3c + 1 + iVar12;
      if (iVar7 < 1) {
        uVar9 = *puVar15;
      }
      else {
        uVar9 = puVar10[param_1 * (~uVar1 - local_3c)];
      }
      iVar12 = iVar12 + 1;
      puVar15 = puVar15 + param_1;
      uVar3 = uVar5;
      if ((int)uVar5 < param_1) {
        uVar3 = (uint)*puVar10;
      }
      if (param_1 <= (int)uVar5) {
        uVar3 = (uint)*puVar13;
      }
      puVar10 = puVar10 + param_1;
      iVar4 = (iVar4 - (uint)uVar9) + uVar3;
      iVar7 = iVar7 + 1;
    } while (iVar12 < param_1);
    iVar12 = 0;
    puVar11 = (ushort *)(iVar2 + -2);
    do {
      iVar12 = iVar12 + 1;
      puVar11 = puVar11 + 1;
      *local_4c = *puVar11;
      local_4c = local_4c + param_1;
    } while (iVar12 < param_1);
    puVar13 = puVar13 + 1;
    local_48 = local_48 + 1;
    local_4c = puVar6;
  } while (local_48 < param_1);
LAB_2c60b4b8:
  FUN_2c62c040(iVar2);
  return;
}

