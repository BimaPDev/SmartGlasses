/* FUN_1409f3bc @ 0x1409f3bc */

void FUN_1409f3bc(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  byte *pbVar8;
  byte *pbVar7;
  
  FUN_140e5658(param_1,0,0x254);
  uVar3 = FUN_140e5848();
  pbVar8 = DAT_1409f40c + 6;
  pbVar7 = DAT_1409f40c;
  do {
    pbVar6 = pbVar7 + 1;
    bVar1 = *pbVar7;
    uVar4 = FUN_140e5848();
    uVar3 = uVar3 ^ (uint)bVar1 << (uVar4 & 0xf);
    pbVar7 = pbVar6;
  } while (pbVar6 != pbVar8);
  FUN_140dc044(uVar3);
  puVar5 = (undefined1 *)(param_1 + 9);
  do {
    uVar2 = FUN_140dc0a0();
    puVar5 = puVar5 + 1;
    *puVar5 = uVar2;
  } while ((undefined1 *)(param_1 + 0x19) != puVar5);
  return;
}

