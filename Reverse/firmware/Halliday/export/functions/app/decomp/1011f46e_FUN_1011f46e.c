/* FUN_1011f46e @ 0x1011f46e */

uint FUN_1011f46e(uint *param_1,int param_2,uint param_3)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  puVar6 = param_1;
  for (uVar5 = param_3; 3 < uVar5; uVar5 = uVar5 - 4) {
    uVar4 = *(uint *)((param_2 + param_3) - uVar5);
    *puVar6 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
              uVar4 >> 0x18;
    puVar6 = puVar6 + 1;
  }
  uVar5 = param_3 >> 2;
  iVar1 = uVar5 * -4 + param_3;
  puVar6 = (uint *)((int)param_1 + (param_3 & 0xfffffffc));
  pbVar2 = (byte *)((param_3 & 0xfffffffc) + param_2);
  if (iVar1 != 0) {
    param_1[uVar5] = (uint)*(byte *)(param_2 + uVar5 * 4);
    pbVar3 = pbVar2 + iVar1;
    while (pbVar2 = pbVar2 + 1, pbVar3 != pbVar2) {
      *puVar6 = (uint)*pbVar2 | *puVar6 << 8;
    }
  }
  return param_3 + 3 >> 2;
}

