/* FUN_1405021c @ 0x1405021c */

void FUN_1405021c(void)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  byte *pbVar9;
  int iVar11;
  byte *pbVar12;
  undefined1 auStack_28 [12];
  undefined4 local_1c;
  undefined4 *puVar8;
  byte *pbVar10;
  
  local_1c = *DAT_1405031c;
  FUN_140bd0f0();
  thunk_FUN_140863fc(1);
  uVar4 = FUN_140e5848();
  pbVar12 = DAT_14050320 + 6;
  pbVar10 = DAT_14050320;
  do {
    pbVar9 = pbVar10 + 1;
    bVar1 = *pbVar10;
    uVar5 = FUN_140e5848();
    uVar4 = uVar4 ^ (uint)bVar1 << (uVar5 & 0xf);
    pbVar10 = pbVar9;
  } while (pbVar9 != pbVar12);
  FUN_140dc044(uVar4);
  thunk_FUN_140749d0();
  FUN_14038ae8();
  thunk_FUN_14086190();
  FUN_140926e0(1);
  FUN_14049ca8();
  FUN_1403aeac();
  FUN_140923f0();
  FUN_1407737c(DAT_14050324);
  FUN_140923e0(DAT_14050328);
  FUN_14096d3c();
  FUN_14094f14();
  FUN_1409408c();
  FUN_1404d43c();
  FUN_1404ff48();
  FUN_14092480(DAT_1405032c);
  FUN_140950e4(DAT_14050338,DAT_14050334,DAT_14050330);
  iVar11 = 0;
  FUN_14049864();
  thunk_FUN_140a20f4();
  puVar3 = DAT_14050340;
  puVar2 = DAT_1405033c;
  do {
    FUN_140b4344(0xf,0);
    FUN_140e5938(auStack_28,*puVar2,0xffffffff);
    FUN_140b4344(0xf,10);
    FUN_140926ac();
    thunk_FUN_14073d40();
    puVar7 = DAT_14050344;
    do {
      puVar8 = puVar7 + 1;
      if ((code *)*puVar7 != (code *)0x0) {
        (*(code *)*puVar7)();
      }
      puVar7 = puVar8;
    } while (puVar3 != puVar8);
    FUN_140483e8();
    iVar6 = FUN_140e5848();
    uVar4 = FUN_140e5548(iVar6 - iVar11);
    if (5000 < uVar4) {
      iVar11 = FUN_140b3734();
      if (((iVar11 != 0) && (iVar11 = thunk_FUN_14086408(), iVar11 != 0)) &&
         (iVar11 = FUN_14095848(), iVar11 == 0)) {
        FUN_1404a8f8();
      }
      iVar11 = FUN_140e5848();
    }
  } while( true );
}

