/* FUN_10066658 @ 0x10066658 */

void FUN_10066658(ushort *param_1,int param_2,int param_3,int param_4,ushort param_5,ushort param_6,
                 ushort param_7)

{
  undefined4 uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  ushort *puVar9;
  ushort *puVar10;
  
  uVar1 = DAT_10066708;
  puVar9 = param_1 + param_6;
  for (uVar7 = (uint)param_7; uVar7 != 0; uVar7 = uVar7 - 1) {
    pbVar8 = (byte *)(param_2 + -1);
    for (puVar10 = param_1; puVar10 != puVar9; puVar10 = puVar10 + 1) {
      pbVar8 = pbVar8 + 1;
      uVar2 = *puVar10;
      uVar3 = (uint)uVar2;
      uVar5 = *(uint *)(param_3 + (uint)*pbVar8 * 4);
      uVar6 = uVar5 >> 0x18;
      if (uVar6 != 0) {
        if (uVar6 == 0xff) {
          uVar2 = (ushort)uVar1 & (ushort)(uVar5 >> 8) | (ushort)(uVar5 >> 5) & 0x7e0 |
                  (ushort)((uVar5 << 0x18) >> 0x1b);
        }
        else {
          iVar4 = (0xff - uVar6) * ((uVar3 & 0xf800) << 8 | (uVar3 & 0x1f) << 3) +
                  uVar6 * (uVar5 & 0xff00ff);
          uVar2 = (ushort)((0xff - uVar6) * (uVar3 & 0x7e0) * 0x20 + uVar6 * (uVar5 & 0xff00) >> 0xd
                          ) & 0x7e0 |
                  (ushort)iVar4 >> 0xb | (ushort)uVar1 & (ushort)((uint)iVar4 >> 0x10);
        }
      }
      *puVar10 = uVar2;
    }
    param_1 = (ushort *)((int)param_1 + param_4);
    param_2 = param_2 + (uint)param_5;
    puVar9 = (ushort *)((int)puVar9 + param_4);
  }
  return;
}

