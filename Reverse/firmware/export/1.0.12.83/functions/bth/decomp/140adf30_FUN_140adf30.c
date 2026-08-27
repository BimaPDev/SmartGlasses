/* FUN_140adf30 @ 0x140adf30 */

void FUN_140adf30(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  
  uVar3 = DAT_140ae074;
  uVar2 = DAT_140ae054;
  uVar1 = DAT_140ae050;
  uVar5 = DAT_140ae04c;
  puVar11 = DAT_140ae048;
  DAT_140ae048[1] = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  *(undefined2 *)(puVar11 + 6) = 0;
  FUN_1402a6e8(4,0x356,uVar2,uVar1,uVar5,uVar3);
  uVar5 = FUN_140ae8b8(param_1);
  FUN_140ae784(uVar5,DAT_140ae058,puVar11);
  uVar6 = puVar11[2];
  *(char *)(puVar11 + 6) = 'd' - (char)((uVar6 * 100) / *puVar11);
  if (uVar6 == 0) {
    cVar9 = '\0';
  }
  else {
    cVar9 = 'd' - (char)((puVar11[3] * 100) / uVar6);
  }
  *(char *)((int)puVar11 + 0x19) = cVar9;
  FUN_1402a6e8(4,0x362,DAT_140ae054,DAT_140ae050,DAT_140ae05c,*puVar11,puVar11[1],uVar6,puVar11[3]);
  puVar12 = DAT_140ae064;
  uVar7 = puVar11[5];
  uVar6 = (uint)*(byte *)((int)puVar11 + 0x19);
  uVar10 = (uint)(byte)puVar11[6];
  FUN_1402a6e8(4,0x364,DAT_140ae054,DAT_140ae050,DAT_140ae060,puVar11[4],uVar7,uVar10,uVar6);
  uVar4 = DAT_140ae078;
  uVar2 = DAT_140ae06c;
  uVar1 = DAT_140ae054;
  uVar5 = DAT_140ae050;
  puVar13 = puVar12 + 0xb;
  uVar8 = DAT_140ae068;
  puVar11 = DAT_140ae048;
  while( true ) {
    FUN_1402a6e8(4,0x367,uVar1,uVar5,uVar4,uVar8,uVar7,uVar10,uVar6);
    uVar10 = puVar11[9];
    uVar7 = puVar11[8];
    FUN_1402a6e8(4,0x368,uVar1,uVar5,uVar2,puVar11[7]);
    puVar11 = puVar11 + 3;
    if (puVar12 == puVar13) break;
    puVar12 = puVar12 + 1;
    uVar8 = *puVar12;
  }
  FUN_1402a6e8(4,0x36d,DAT_140ae054,DAT_140ae050,DAT_140ae070,uVar3,uVar7,uVar10,uVar6);
  return;
}

