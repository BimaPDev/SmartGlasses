/* FUN_10066adc @ 0x10066adc */

void FUN_10066adc(ushort *param_1,int param_2,int param_3,int param_4,short param_5,short param_6,
                 short param_7,short param_8,ushort param_9,ushort param_10,int *param_11)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ushort *local_60;
  int local_30;
  int local_2c [2];
  
  uVar11 = param_11[2] * (int)param_7 + (int)param_8 * param_11[4] + *param_11;
  uVar9 = param_11[3] * (int)param_7 + (int)param_8 * param_11[5] + param_11[1];
  for (uVar10 = (uint)param_10; uVar10 != 0; uVar10 = uVar10 - 1) {
    local_30 = 0;
    local_2c[0] = param_9 - 1;
    FUN_1011e31c(&local_30,local_2c,(int)param_5,(int)param_6,uVar11,uVar9,param_11[2],param_11[3]);
    if (local_30 <= local_2c[0]) {
      uVar1 = uVar9;
      uVar2 = uVar11;
      local_60 = param_1;
      if (0 < local_30) {
        local_60 = param_1 + local_30;
        uVar1 = param_11[3] * local_30 + uVar9;
        uVar2 = param_11[2] * local_30 + uVar11;
      }
      for (local_2c[0] = local_2c[0] - local_30; -1 < local_2c[0]; local_2c[0] = local_2c[0] + -1) {
        iVar3 = param_4 * ((int)uVar1 >> 0x10) + ((int)uVar2 >> 0x10) * 4;
        uVar14 = *(uint *)(param_2 + iVar3);
        iVar3 = param_2 + iVar3;
        uVar12 = (uVar2 & 0xffff) >> 8;
        uVar4 = (uVar1 & 0xffff) >> 8;
        uVar13 = uVar12 * uVar4;
        uVar6 = *(uint *)(iVar3 + param_4 + 4);
        iVar7 = uVar12 - (uVar13 >> 8);
        iVar8 = uVar4 - (uVar13 >> 8);
        iVar5 = (0x100 - (uVar4 + uVar12)) + (uVar13 >> 8);
        uVar12 = (uVar13 >> 8) * (uVar6 & 0xff00ff) +
                 iVar8 * (*(uint *)(iVar3 + param_4) & 0xff00ff) +
                 iVar5 * (uVar14 & 0xff00ff) + iVar7 * (*(uint *)(iVar3 + 4) & 0xff00ff);
        uVar4 = (uVar13 >> 8) * (uVar6 >> 8 & 0xff00ff) +
                iVar8 * (*(uint *)(iVar3 + param_4) >> 8 & 0xff00ff) +
                iVar5 * (uVar14 >> 8 & 0xff00ff) + iVar7 * (*(uint *)(iVar3 + 4) >> 8 & 0xff00ff);
        *local_60 = (ushort)((uVar4 & 0xfc00) >> 5) |
                    (ushort)DAT_10066c84 &
                    ((ushort)(uVar12 >> 0x10) & 0xff00 | (ushort)(uVar4 >> 8) & 0xff) |
                    (ushort)(((uVar12 >> 8) << 0x18) >> 0x1b);
        uVar2 = uVar2 + param_11[2];
        uVar1 = uVar1 + param_11[3];
        local_60 = local_60 + 1;
      }
    }
    uVar11 = uVar11 + param_11[4];
    uVar9 = uVar9 + param_11[5];
    param_1 = (ushort *)((int)param_1 + param_3);
  }
  return;
}

