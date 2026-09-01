/* FUN_1006670c @ 0x1006670c */

void FUN_1006670c(ushort *param_1,int param_2,int param_3,int param_4,ushort param_5,short param_6,
                 short param_7,byte param_8,short param_9,short param_10,ushort param_11,
                 ushort param_12,int *param_13)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ushort uVar17;
  int iVar18;
  uint local_7c;
  uint local_78;
  ushort *local_70;
  ushort *local_6c;
  int local_5c;
  short local_44;
  int local_30;
  int local_2c [2];
  
  uVar7 = (uint)param_5;
  uVar8 = (uint)param_8;
  uVar15 = param_13[2] * (int)param_9 + (int)param_10 * param_13[4] + *param_13;
  local_7c = param_13[3] * (int)param_9 + (int)param_10 * param_13[5] + param_13[1];
  bVar1 = (char)(1 << uVar8) - 1;
  local_6c = param_1;
  for (uVar9 = (uint)param_12; uVar9 != 0; uVar9 = uVar9 - 1) {
    local_30 = 0;
    local_2c[0] = param_11 - 1;
    FUN_1011e31c(&local_30,local_2c,(int)param_6,(int)param_7,uVar15,local_7c,param_13[2],
                 param_13[3]);
    if (local_30 <= local_2c[0]) {
      if (local_30 < 1) {
        local_70 = local_6c;
        uVar12 = local_7c;
        local_78 = uVar15;
      }
      else {
        local_70 = local_6c + local_30;
        uVar12 = param_13[3] * local_30 + local_7c;
        local_78 = param_13[2] * local_30 + uVar15;
      }
      local_44 = (short)(char)('\b' - param_8);
      for (local_5c = local_2c[0] - local_30; -1 < local_5c; local_5c = local_5c + -1) {
        uVar4 = ((int)local_78 >> 0x10) * uVar8;
        uVar10 = ((int)local_78 >> 0x10) * uVar8 + uVar8;
        iVar2 = uVar7 * ((int)uVar12 >> 0x10);
        iVar3 = ((uVar4 & 0xffff) >> 3) + iVar2;
        iVar2 = iVar2 + ((uVar10 & 0xffff) >> 3);
        uVar5 = (int)local_44 - (uVar4 & 7);
        uVar11 = (int)local_44 - (uVar10 & 7);
        uVar10 = *(uint *)(param_3 +
                          (char)((byte)((int)(uint)*(byte *)(param_2 + iVar3) >> (uVar5 & 0xff)) &
                                bVar1) * 4);
        uVar4 = *(uint *)(param_3 +
                         (char)((byte)((int)(uint)*(byte *)(param_2 + iVar2) >> (uVar11 & 0xff)) &
                               bVar1) * 4);
        uVar16 = (uVar12 & 0xffff) >> 8;
        uVar13 = *(uint *)(param_3 +
                          (char)((byte)((int)(uint)*(byte *)(param_2 + iVar3 + uVar7) >>
                                       (uVar5 & 0xff)) & bVar1) * 4);
        uVar5 = (local_78 & 0xffff) >> 8;
        uVar14 = uVar16 * uVar5;
        iVar3 = uVar5 - (uVar14 >> 8);
        iVar18 = uVar16 - (uVar14 >> 8);
        iVar6 = (0x100 - (uVar5 + uVar16)) + (uVar14 >> 8);
        uVar5 = *(uint *)(param_3 +
                         (char)((byte)((int)(uint)*(byte *)(param_2 + iVar2 + uVar7) >>
                                      (uVar11 & 0xff)) & bVar1) * 4);
        uVar11 = (uVar14 >> 8) * (uVar5 >> 8 & 0xff00ff) +
                 iVar6 * (uVar10 >> 8 & 0xff00ff) +
                 iVar3 * (uVar4 >> 8 & 0xff00ff) + iVar18 * (uVar13 >> 8 & 0xff00ff);
        uVar10 = (uVar14 >> 8) * (uVar5 & 0xff00ff) +
                 iVar6 * (uVar10 & 0xff00ff) +
                 iVar3 * (uVar4 & 0xff00ff) + iVar18 * (uVar13 & 0xff00ff) >> 8;
        uVar5 = uVar10 & 0xff00ff;
        uVar4 = uVar11 >> 0x18;
        uVar17 = *local_70;
        uVar13 = (uint)uVar17;
        if (uVar4 != 0) {
          if (uVar4 == 0xff) {
            uVar17 = (ushort)DAT_100669b4 & ((ushort)(uVar5 >> 8) | (ushort)(uVar11 >> 8) & 0xff) |
                     (ushort)((uVar11 & 0xfc00) >> 5) | (ushort)((uVar10 << 0x18) >> 0x1b);
          }
          else {
            iVar2 = (0xff - uVar4) * ((uVar13 & 0xf800) << 8 | (uVar13 & 0x1f) << 3) + uVar4 * uVar5
            ;
            uVar17 = (ushort)iVar2 >> 0xb | (ushort)DAT_100669b4 & (ushort)((uint)iVar2 >> 0x10) |
                     (ushort)((0xff - uVar4) * (uVar13 & 0x7e0) * 0x20 + uVar4 * (uVar11 & 0xff00)
                             >> 0xd) & 0x7e0;
          }
        }
        *local_70 = uVar17;
        local_78 = local_78 + param_13[2];
        uVar12 = uVar12 + param_13[3];
        local_70 = local_70 + 1;
      }
    }
    uVar15 = uVar15 + param_13[4];
    local_7c = local_7c + param_13[5];
    local_6c = (ushort *)((int)local_6c + param_4);
  }
  return;
}

