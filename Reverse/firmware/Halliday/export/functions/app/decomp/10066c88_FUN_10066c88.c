/* FUN_10066c88 @ 0x10066c88 */

void FUN_10066c88(ushort *param_1,int param_2,int param_3,int param_4,short param_5,short param_6,
                 short param_7,short param_8,ushort param_9,ushort param_10,int *param_11)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ushort *puVar15;
  ushort *local_68;
  int local_30;
  int local_2c [2];
  
  uVar11 = param_11[2] * (int)param_7 + (int)param_8 * param_11[4] + *param_11;
  uVar8 = param_11[3] * (int)param_7 + (int)param_8 * param_11[5] + param_11[1];
  local_68 = param_1;
  for (uVar4 = (uint)param_10; uVar4 != 0; uVar4 = uVar4 - 1) {
    local_30 = 0;
    local_2c[0] = param_9 - 1;
    FUN_1011e31c(&local_30,local_2c,(int)param_5,(int)param_6,uVar11,uVar8,param_11[2],param_11[3]);
    if (local_30 <= local_2c[0]) {
      uVar10 = uVar11;
      uVar14 = uVar8;
      puVar15 = local_68;
      if (0 < local_30) {
        uVar10 = param_11[2] * local_30 + uVar11;
        uVar14 = param_11[3] * local_30 + uVar8;
        puVar15 = local_68 + local_30;
      }
      for (local_2c[0] = local_2c[0] - local_30; -1 < local_2c[0]; local_2c[0] = local_2c[0] + -1) {
        iVar5 = param_4 * ((int)uVar14 >> 0x10) + ((int)uVar10 >> 0x10) * 3;
        iVar9 = param_2 + iVar5;
        iVar6 = iVar9 + param_4 + 3;
        uVar1 = (uVar10 & 0xffff) >> 8;
        uVar7 = (uVar14 & 0xffff) >> 8;
        uVar13 = uVar1 * uVar7;
        iVar12 = uVar7 - (uVar13 >> 8);
        iVar3 = uVar1 - (uVar13 >> 8);
        iVar2 = (0x100 - (uVar1 + uVar7)) + (uVar13 >> 8);
        uVar7 = (uVar13 >> 8) *
                ((uint)*(byte *)(iVar9 + param_4 + 3) | (uint)*(byte *)(iVar6 + 2) << 0x10) +
                iVar12 * ((uint)*(byte *)(iVar9 + param_4) |
                         (uint)*(byte *)(iVar9 + param_4 + 2) << 0x10) +
                iVar2 * ((uint)*(byte *)(param_2 + iVar5) | (uint)*(byte *)(iVar9 + 2) << 0x10) +
                iVar3 * ((uint)*(byte *)(iVar9 + 3) | (uint)*(byte *)(iVar9 + 5) << 0x10);
        uVar1 = (uint)*(byte *)(iVar6 + 1) * (uVar13 >> 8) +
                (uint)*(byte *)(iVar9 + 4) * iVar3 +
                (uint)*(byte *)(iVar9 + 1) * iVar2 + (uint)*(byte *)(iVar9 + param_4 + 1) * iVar12;
        *puVar15 = (ushort)((uVar1 & 0xfc00) >> 5) |
                   (ushort)DAT_10066e3c &
                   ((ushort)(uVar7 >> 0x10) & 0xff00 | (ushort)(uVar1 >> 8) & 0xff) |
                   (ushort)(((uVar7 >> 8) << 0x18) >> 0x1b);
        uVar10 = uVar10 + param_11[2];
        uVar14 = uVar14 + param_11[3];
        puVar15 = puVar15 + 1;
      }
    }
    uVar11 = uVar11 + param_11[4];
    uVar8 = uVar8 + param_11[5];
    local_68 = (ushort *)((int)local_68 + param_3);
  }
  return;
}

