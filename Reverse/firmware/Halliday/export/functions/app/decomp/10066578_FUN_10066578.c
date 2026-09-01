/* FUN_10066578 @ 0x10066578 */

void FUN_10066578(ushort *param_1,byte *param_2,uint param_3,int param_4,ushort param_5,
                 sbyte param_6,ushort param_7,ushort param_8)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  byte *pbVar8;
  ushort *puVar9;
  uint uVar10;
  
  uVar5 = param_3 >> 0x18;
  uVar1 = (ushort)DAT_10066654;
  puVar6 = param_1 + param_7;
  for (uVar7 = (uint)param_8; pbVar8 = param_2, puVar9 = param_1, uVar10 = 0x80 >> param_6 & 0xff,
      uVar7 != 0; uVar7 = uVar7 - 1) {
    while (puVar9 != puVar6) {
      if ((uVar10 & *pbVar8) != 0) {
        uVar3 = (uint)*puVar9;
        uVar2 = *puVar9;
        if ((uVar5 != 0) &&
           (uVar2 = (ushort)((param_3 & 0xff) >> 3) |
                    uVar1 & (ushort)(param_3 >> 8) | (ushort)(param_3 >> 5) & 0x7e0, uVar5 != 0xff))
        {
          iVar4 = (0xff - uVar5) * ((uVar3 & 0xf800) << 8 | (uVar3 & 0x1f) << 3) +
                  uVar5 * (param_3 & 0xff00ff);
          uVar2 = (ushort)((0xff - uVar5) * (uVar3 & 0x7e0) * 0x20 + uVar5 * (param_3 & 0xff00) >>
                          0xd) & 0x7e0 |
                  (ushort)iVar4 >> 0xb | uVar1 & (ushort)((uint)iVar4 >> 0x10);
        }
        *puVar9 = uVar2;
      }
      uVar10 = uVar10 >> 1;
      puVar9 = puVar9 + 1;
      if (uVar10 == 0) {
        pbVar8 = pbVar8 + 1;
        uVar10 = 0x80;
      }
    }
    param_1 = (ushort *)((int)param_1 + param_4);
    param_2 = param_2 + param_5;
    puVar6 = (ushort *)((int)puVar6 + param_4);
  }
  return;
}

