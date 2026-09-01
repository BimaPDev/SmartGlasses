/* FUN_10066e40 @ 0x10066e40 */

void FUN_10066e40(ushort *param_1,int param_2,uint param_3,int param_4,ushort param_5,short param_6,
                 short param_7,short param_8,short param_9,ushort param_10,ushort param_11,
                 int *param_12)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ushort *puVar14;
  ushort *local_5c;
  int local_30;
  int local_2c [2];
  
  uVar5 = (uint)param_5;
  uVar3 = param_3 >> 0x18;
  uVar12 = param_12[2] * (int)param_8 + (int)param_9 * param_12[4] + *param_12;
  uVar11 = param_12[3] * (int)param_8 + (int)param_9 * param_12[5] + param_12[1];
  local_5c = param_1;
  for (uVar6 = (uint)param_11; uVar6 != 0; uVar6 = uVar6 - 1) {
    local_30 = 0;
    local_2c[0] = param_10 - 1;
    FUN_1011e31c(&local_30,local_2c,(int)param_6,(int)param_7,uVar12,uVar11,param_12[2],param_12[3])
    ;
    if (local_30 <= local_2c[0]) {
      uVar4 = uVar11;
      uVar7 = uVar12;
      puVar14 = local_5c;
      if (0 < local_30) {
        uVar4 = param_12[3] * local_30 + uVar11;
        uVar7 = param_12[2] * local_30 + uVar12;
        puVar14 = local_5c + local_30;
      }
      for (local_2c[0] = local_2c[0] - local_30; -1 < local_2c[0]; local_2c[0] = local_2c[0] + -1) {
        iVar10 = uVar5 * ((int)uVar4 >> 0x10) + ((int)uVar7 >> 0x10);
        uVar8 = (uVar7 & 0xffff) >> 8;
        iVar13 = param_2 + iVar10;
        uVar2 = (uVar4 & 0xffff) >> 8;
        uVar9 = uVar8 * uVar2;
        uVar2 = ((uVar9 >> 8) * (uint)*(byte *)(iVar13 + uVar5 + 1) +
                 (uVar2 - (uVar9 >> 8)) * (uint)*(byte *)(iVar13 + uVar5) +
                 (uint)*(byte *)(param_2 + iVar10) * ((0x100 - (uVar2 + uVar8)) + (uVar9 >> 8)) +
                 (uint)*(byte *)(iVar13 + 1) * (uVar8 - (uVar9 >> 8)) & 0xffff) >> 8;
        if (uVar3 != 0xff) {
          uVar2 = uVar3 * uVar2 >> 8;
        }
        uVar8 = param_3 & 0xffffff;
        uVar1 = *puVar14;
        uVar9 = (uint)uVar1;
        if (uVar2 != 0) {
          if (uVar2 == 0xff) {
            uVar1 = (ushort)DAT_10067004 & (ushort)(uVar8 >> 8) | (ushort)(uVar8 >> 5) & 0x7e0 |
                    (ushort)((param_3 << 0x18) >> 0x1b);
          }
          else {
            iVar10 = (0xff - uVar2) * ((uVar9 & 0xf800) << 8 | (uVar9 & 0x1f) << 3) +
                     uVar2 * (param_3 & 0xff00ff);
            uVar1 = (ushort)((0xff - uVar2) * (uVar9 & 0x7e0) * 0x20 + uVar2 * (param_3 & 0xff00) >>
                            0xd) & 0x7e0 |
                    (ushort)DAT_10067004 & (ushort)((uint)iVar10 >> 0x10) | (ushort)iVar10 >> 0xb;
          }
        }
        *puVar14 = uVar1;
        uVar7 = uVar7 + param_12[2];
        uVar4 = uVar4 + param_12[3];
        param_3 = uVar8;
        puVar14 = puVar14 + 1;
      }
    }
    uVar12 = uVar12 + param_12[4];
    uVar11 = uVar11 + param_12[5];
    local_5c = (ushort *)((int)local_5c + param_4);
  }
  return;
}

