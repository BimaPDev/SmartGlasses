/* FUN_10067008 @ 0x10067008 */

void FUN_10067008(ushort *param_1,int param_2,int param_3,int param_4,ushort param_5,short param_6,
                 short param_7,short param_8,short param_9,ushort param_10,ushort param_11,
                 int *param_12)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ushort *local_64;
  int local_30;
  int local_2c [2];
  
  uVar6 = (uint)param_5;
  uVar14 = param_12[2] * (int)param_8 + (int)param_9 * param_12[4] + *param_12;
  uVar11 = param_12[3] * (int)param_8 + (int)param_9 * param_12[5] + param_12[1];
  for (uVar7 = (uint)param_11; uVar7 != 0; uVar7 = uVar7 - 1) {
    local_30 = 0;
    local_2c[0] = param_10 - 1;
    FUN_1011e31c(&local_30,local_2c,(int)param_6,(int)param_7,uVar14,uVar11,param_12[2],param_12[3])
    ;
    if (local_30 <= local_2c[0]) {
      uVar12 = uVar14;
      uVar13 = uVar11;
      local_64 = param_1;
      if (0 < local_30) {
        local_64 = param_1 + local_30;
        uVar12 = param_12[2] * local_30 + uVar14;
        uVar13 = param_12[3] * local_30 + uVar11;
      }
      for (local_2c[0] = local_2c[0] - local_30; -1 < local_2c[0]; local_2c[0] = local_2c[0] + -1) {
        iVar4 = uVar6 * ((int)uVar13 >> 0x10) + ((int)uVar12 >> 0x10);
        uVar15 = (uVar13 & 0xffff) >> 8;
        iVar8 = param_2 + iVar4;
        uVar1 = *(uint *)(param_3 + (uint)*(byte *)(param_2 + iVar4) * 4);
        uVar16 = *(uint *)(param_3 + (uint)*(byte *)(iVar8 + 1) * 4);
        uVar3 = *(uint *)(param_3 + (uint)*(byte *)(iVar8 + uVar6) * 4);
        uVar9 = *(uint *)(param_3 + (uint)*(byte *)(iVar8 + uVar6 + 1) * 4);
        uVar5 = (uVar12 & 0xffff) >> 8;
        uVar17 = uVar15 * uVar5;
        iVar8 = uVar5 - (uVar17 >> 8);
        iVar10 = uVar15 - (uVar17 >> 8);
        iVar4 = (0x100 - (uVar5 + uVar15)) + (uVar17 >> 8);
        uVar5 = (uVar17 >> 8) * (uVar9 >> 8 & 0xff00ff) +
                iVar10 * (uVar3 >> 8 & 0xff00ff) +
                iVar4 * (uVar1 >> 8 & 0xff00ff) + iVar8 * (uVar16 >> 8 & 0xff00ff);
        uVar9 = (uVar17 >> 8) * (uVar9 & 0xff00ff) +
                iVar10 * (uVar3 & 0xff00ff) +
                iVar4 * (uVar1 & 0xff00ff) + iVar8 * (uVar16 & 0xff00ff) >> 8;
        uVar15 = uVar9 & 0xff00ff;
        uVar3 = uVar5 >> 0x18;
        uVar2 = *local_64;
        uVar1 = (uint)uVar2;
        if (uVar3 != 0) {
          if (uVar3 == 0xff) {
            uVar2 = (ushort)((uVar5 & 0xfc00) >> 5) |
                    (ushort)DAT_10067214 & ((ushort)(uVar15 >> 8) | (ushort)(uVar5 >> 8) & 0xff) |
                    (ushort)((uVar9 << 0x18) >> 0x1b);
          }
          else {
            iVar4 = (0xff - uVar3) * ((uVar1 & 0xf800) << 8 | (uVar1 & 0x1f) << 3) + uVar3 * uVar15;
            uVar2 = (ushort)((0xff - uVar3) * (uVar1 & 0x7e0) * 0x20 + uVar3 * (uVar5 & 0xff00) >>
                            0xd) & 0x7e0 |
                    (ushort)DAT_10067214 & (ushort)((uint)iVar4 >> 0x10) | (ushort)iVar4 >> 0xb;
          }
        }
        *local_64 = uVar2;
        uVar12 = uVar12 + param_12[2];
        uVar13 = uVar13 + param_12[3];
        local_64 = local_64 + 1;
      }
    }
    uVar14 = uVar14 + param_12[4];
    uVar11 = uVar11 + param_12[5];
    param_1 = (ushort *)((int)param_1 + param_4);
  }
  return;
}

