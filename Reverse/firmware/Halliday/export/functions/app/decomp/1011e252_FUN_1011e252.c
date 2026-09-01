/* FUN_1011e252 @ 0x1011e252 */

void FUN_1011e252(ushort *param_1,int param_2,int param_3,int param_4,ushort param_5,ushort param_6)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort uVar4;
  uint uVar5;
  ushort *puVar6;
  
  puVar2 = param_1 + param_5;
  for (uVar5 = (uint)param_6; uVar5 != 0; uVar5 = uVar5 - 1) {
    puVar6 = (ushort *)(param_2 + -2);
    for (puVar3 = param_1; puVar3 != puVar2; puVar3 = puVar3 + 1) {
      puVar6 = puVar6 + 1;
      uVar1 = *puVar6;
      uVar4 = *puVar3;
      if ((short)uVar1 < 0) {
        uVar4 = (uVar1 & 0x7fe0) << 1 | uVar1 & 0x3f;
      }
      *puVar3 = uVar4;
    }
    param_1 = (ushort *)((int)param_1 + param_3);
    param_2 = param_2 + param_4;
    puVar2 = (ushort *)((int)puVar2 + param_3);
  }
  return;
}

