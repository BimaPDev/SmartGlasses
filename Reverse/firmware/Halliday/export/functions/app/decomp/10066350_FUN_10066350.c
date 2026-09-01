/* FUN_10066350 @ 0x10066350 */

void FUN_10066350(ushort *param_1,byte *param_2,uint param_3,int param_4,ushort param_5,byte param_6
                 ,ushort param_7,ushort param_8)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  byte *local_48;
  byte abStack_38 [20];
  
  if (param_3 >> 0x18 == 0xff) {
    local_48 = DAT_10066458;
  }
  else {
    local_48 = abStack_38;
    iVar4 = 0x10;
    pbVar5 = local_48;
    pbVar7 = DAT_10066458;
    do {
      iVar4 = iVar4 + -1;
      *pbVar5 = (byte)((param_3 >> 0x18) * (uint)*pbVar7 >> 8);
      pbVar5 = pbVar5 + 1;
      pbVar7 = pbVar7 + 1;
    } while (iVar4 != 0);
  }
  puVar9 = param_1 + param_7;
  for (uVar8 = (uint)param_8; uVar6 = 4 - param_6 & 0xff, pbVar5 = param_2, puVar10 = param_1,
      uVar8 != 0; uVar8 = uVar8 - 1) {
    while (puVar10 != puVar9) {
      uVar1 = (uint)local_48[(int)(uint)*pbVar5 >> uVar6 & 0xf];
      uVar2 = *puVar10;
      uVar3 = (uint)uVar2;
      if (uVar1 != 0) {
        if (uVar1 == 0xff) {
          uVar2 = (ushort)((param_3 & 0xfc00) >> 5) | (ushort)DAT_1006645c & (ushort)(param_3 >> 8)
                  | (ushort)((param_3 << 0x18) >> 0x1b);
        }
        else {
          iVar4 = (0xff - uVar1) * ((uVar3 & 0xf800) << 8 | (uVar3 & 0x1f) << 3) +
                  uVar1 * (param_3 & 0xff00ff);
          uVar2 = (ushort)((0xff - uVar1) * (uVar3 & 0x7e0) * 0x20 + uVar1 * (param_3 & 0xff00) >>
                          0xd) & 0x7e0 |
                  (ushort)iVar4 >> 0xb | (ushort)DAT_1006645c & (ushort)((uint)iVar4 >> 0x10);
        }
      }
      *puVar10 = uVar2;
      if (uVar6 == 0) {
        uVar6 = 4;
        pbVar5 = pbVar5 + 1;
        puVar10 = puVar10 + 1;
      }
      else {
        uVar6 = uVar6 - 4 & 0xff;
        puVar10 = puVar10 + 1;
      }
    }
    param_1 = (ushort *)((int)param_1 + param_4);
    param_2 = param_2 + param_5;
    puVar9 = (ushort *)((int)puVar9 + param_4);
  }
  return;
}

