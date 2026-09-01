/* FUN_10066460 @ 0x10066460 */

void FUN_10066460(ushort *param_1,byte *param_2,uint param_3,int param_4,ushort param_5,byte param_6
                 ,ushort param_7,ushort param_8)

{
  uint uVar1;
  ushort uVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined1 local_2c [8];
  
  puVar3 = DAT_10066570;
  if (param_3 >> 0x18 != 0xff) {
    puVar3 = local_2c;
  }
  puVar9 = param_1 + param_7;
  for (uVar7 = (uint)param_8; uVar6 = 6 - param_6 & 0xff, pbVar8 = param_2, puVar10 = param_1,
      uVar7 != 0; uVar7 = uVar7 - 1) {
    while (puVar10 != puVar9) {
      uVar1 = (uint)(byte)puVar3[(int)(uint)*pbVar8 >> uVar6 & 3];
      uVar2 = *puVar10;
      uVar4 = (uint)uVar2;
      if (uVar1 != 0) {
        if (uVar1 == 0xff) {
          uVar2 = (ushort)((param_3 & 0xfc00) >> 5) | (ushort)DAT_10066574 & (ushort)(param_3 >> 8)
                  | (ushort)((param_3 << 0x18) >> 0x1b);
        }
        else {
          iVar5 = (0xff - uVar1) * ((uVar4 & 0xf800) << 8 | (uVar4 & 0x1f) << 3) +
                  uVar1 * (param_3 & 0xff00ff);
          uVar2 = (ushort)((0xff - uVar1) * (uVar4 & 0x7e0) * 0x20 + uVar1 * (param_3 & 0xff00) >>
                          0xd) & 0x7e0 |
                  (ushort)iVar5 >> 0xb | (ushort)DAT_10066574 & (ushort)((uint)iVar5 >> 0x10);
        }
      }
      *puVar10 = uVar2;
      if (uVar6 == 0) {
        uVar6 = 6;
        pbVar8 = pbVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      else {
        uVar6 = uVar6 - 2 & 0xff;
        puVar10 = puVar10 + 1;
      }
    }
    param_1 = (ushort *)((int)param_1 + param_4);
    param_2 = param_2 + param_5;
    puVar9 = (ushort *)((int)puVar9 + param_4);
  }
  return;
}

