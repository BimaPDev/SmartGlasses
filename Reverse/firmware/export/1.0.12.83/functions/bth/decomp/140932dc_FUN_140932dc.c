/* FUN_140932dc @ 0x140932dc */

int FUN_140932dc(byte *param_1,int param_2,int param_3)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint *puVar6;
  uint uVar8;
  uint *puVar7;
  
  pbVar5 = *(byte **)(param_2 + 0xc);
  *param_1 = *pbVar5 >> 6;
  param_1[1] = (byte)(((uint)*pbVar5 << 0x1a) >> 0x1f);
  bVar1 = *pbVar5;
  uVar8 = bVar1 & 0xf;
  param_1[0x10] = (byte)uVar8;
  param_1[2] = pbVar5[1] >> 7;
  param_1[3] = pbVar5[1] & 0x7f;
  *(ushort *)(param_1 + 4) = *(ushort *)(pbVar5 + 2) << 8 | *(ushort *)(pbVar5 + 2) >> 8;
  uVar3 = *(uint *)(pbVar5 + 4);
  *(uint *)(param_1 + 8) =
       uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
  uVar3 = *(uint *)(pbVar5 + 8);
  *(uint *)(param_1 + 0xc) =
       uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
  uVar3 = *pbVar5 & 0x10;
  if (((*pbVar5 & 0x10) != 0) && (uVar3 = uVar8, (bVar1 & 0xf) != 0)) {
    puVar2 = (uint *)(param_1 + 0x10);
    puVar7 = (uint *)(pbVar5 + 0xc);
    do {
      puVar6 = (uint *)((int)puVar7 + 1);
      uVar4 = *puVar7;
      puVar2 = puVar2 + 1;
      *puVar2 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
                uVar4 >> 0x18;
      puVar7 = puVar6;
    } while ((uint *)(uVar8 + (int)(pbVar5 + 0xc)) != puVar6);
  }
  if (param_3 != 0) {
    return uVar3 * 4 + 0xd;
  }
  return uVar3 * 4 + 0xc;
}

