/* FUN_10066178 @ 0x10066178 */

void FUN_10066178(ushort *param_1,byte *param_2,int param_3,int param_4,ushort param_5,byte param_6,
                 byte param_7,ushort param_8,ushort param_9)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  ushort *puVar11;
  ushort *puVar12;
  
  uVar9 = (uint)param_7;
  uVar2 = 8 - uVar9 & 0xff;
  puVar11 = param_1 + param_8;
  for (uVar8 = (uint)param_9; uVar6 = uVar2 - param_6 & 0xff, pbVar10 = param_2, puVar12 = param_1,
      uVar8 != 0; uVar8 = uVar8 - 1) {
    while (puVar12 != puVar11) {
      uVar5 = *(uint *)(param_3 +
                       (char)((byte)((int)(uint)*pbVar10 >> uVar6) & (char)(1 << uVar9) - 1U) * 4);
      uVar1 = *puVar12;
      uVar3 = (uint)uVar1;
      uVar7 = uVar5 >> 0x18;
      if (uVar7 != 0) {
        if (uVar7 == 0xff) {
          uVar1 = (ushort)(uVar5 >> 5) & 0x7e0 | (ushort)DAT_10066268 & (ushort)(uVar5 >> 8) |
                  (ushort)((uVar5 << 0x18) >> 0x1b);
        }
        else {
          iVar4 = (0xff - uVar7) * ((uVar3 & 0xf800) << 8 | (uVar3 & 0x1f) << 3) +
                  uVar7 * (uVar5 & 0xff00ff);
          uVar1 = (ushort)((0xff - uVar7) * (uVar3 & 0x7e0) * 0x20 + uVar7 * (uVar5 & 0xff00) >> 0xd
                          ) & 0x7e0 |
                  (ushort)iVar4 >> 0xb | (ushort)DAT_10066268 & (ushort)((uint)iVar4 >> 0x10);
        }
      }
      *puVar12 = uVar1;
      if (uVar6 == 0) {
        uVar6 = uVar2;
        pbVar10 = pbVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      else {
        uVar6 = uVar6 - uVar9 & 0xff;
        puVar12 = puVar12 + 1;
      }
    }
    param_2 = param_2 + param_5;
    param_1 = (ushort *)((int)param_1 + param_4);
    puVar11 = (ushort *)((int)puVar11 + param_4);
  }
  return;
}

