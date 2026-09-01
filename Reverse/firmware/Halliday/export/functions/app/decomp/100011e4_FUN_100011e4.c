/* FUN_100011e4 @ 0x100011e4 */

void FUN_100011e4(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 *puVar19;
  int iVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined8 uVar29;
  int local_c4;
  undefined2 auStack_c0 [16];
  undefined1 auStack_a0 [124];
  
  puVar2 = DAT_100014d4;
  puVar1 = DAT_100014d0;
  uVar15 = *DAT_100014d0;
  uVar16 = *DAT_100014d4;
  uVar17 = *DAT_100014d8;
  uVar28 = *DAT_100014dc;
  uVar29 = FUN_10003118();
  puVar12 = DAT_100014e8;
  puVar7 = (uint *)((ulonglong)uVar29 >> 0x20);
  puVar10 = DAT_100014e0;
  puVar13 = DAT_100014e4;
  do {
    puVar11 = puVar13 + 1;
    *puVar10 = *puVar13;
    puVar10 = puVar10 + 1;
    puVar13 = puVar11;
  } while (puVar11 != puVar12);
  iVar18 = 0;
  puVar12 = DAT_100014ec + -6;
  puVar10 = DAT_100014ec;
  do {
    iVar18 = iVar18 + 1;
    *puVar12 = *(undefined4 *)*puVar10;
    puVar12 = puVar12 + 1;
    puVar10 = puVar10 + 1;
  } while (iVar18 != 6);
  iVar18 = 0;
  puVar12 = DAT_100014f0 + -9;
  puVar10 = DAT_100014f0;
  do {
    iVar18 = iVar18 + 1;
    *puVar12 = *(undefined4 *)*puVar10;
    puVar13 = DAT_100014fc;
    puVar12 = puVar12 + 1;
    puVar11 = DAT_100014f4;
    puVar10 = puVar10 + 1;
    puVar19 = DAT_100014f8;
  } while (iVar18 != 9);
  do {
    puVar12 = puVar19 + 1;
    *puVar11 = *puVar19;
    iVar8 = DAT_10001508;
    iVar18 = DAT_10001504;
    puVar11 = puVar11 + 1;
    puVar19 = puVar12;
  } while (puVar12 != puVar13);
  iVar6 = 0;
  *(undefined4 *)(DAT_10001504 + 0xbc) = *(undefined4 *)(DAT_10001500 + 8);
  puVar12 = (undefined4 *)(iVar18 + 0x108);
  *(undefined4 *)(iVar18 + 0x220) = *DAT_1000150c;
  *(undefined4 *)(iVar18 + 0x224) = *DAT_10001510;
  *(undefined4 *)(iVar18 + 0x228) = *DAT_10001514;
  do {
    iVar20 = 0;
    puVar10 = puVar12;
    do {
      puVar13 = (undefined4 *)(iVar20 + iVar8 * 4);
      iVar20 = iVar20 + 4;
      *puVar10 = *puVar13;
      puVar13 = DAT_1000151c;
      puVar10 = puVar10 + 1;
    } while (iVar20 != 0x1c);
    iVar6 = iVar6 + 7;
    puVar12 = puVar12 + 7;
    iVar8 = iVar8 + 0x40;
  } while (iVar6 != 0x46);
  iVar6 = 0;
  *(undefined4 *)(iVar18 + 0x2d8) = *DAT_10001518;
  iVar8 = DAT_10001524;
  *(undefined4 *)(iVar18 + 0x2d4) = *DAT_10001520;
  *(undefined4 *)(iVar18 + 0x2d0) = *DAT_10001528;
  *(undefined4 *)(iVar18 + 0x2b8) = *DAT_1000152c;
  *(undefined4 *)(iVar18 + 700) = *DAT_10001530;
  *(undefined4 *)(iVar18 + 0x2c0) = *DAT_10001534;
  *(undefined4 *)(iVar18 + 0x2c4) = *DAT_10001538;
  *(undefined4 *)(iVar18 + 0x2c8) = *DAT_1000153c;
  *(undefined4 *)(iVar18 + 0x2cc) = *DAT_10001540;
  do {
    iVar20 = 0;
    puVar12 = puVar13;
    do {
      puVar10 = (undefined4 *)(iVar20 + iVar8);
      iVar20 = iVar20 + 4;
      *puVar12 = *puVar10;
      puVar12 = puVar12 + 1;
    } while (iVar20 != 0x1c);
    iVar6 = iVar6 + 1;
    puVar13 = puVar13 + 7;
    iVar8 = iVar8 + 0x100;
  } while (iVar6 != 5);
  FUN_10003188(1);
  *puVar7 = uVar28 & 0x10000;
  FUN_100031e8(3,0x38000000,0x1000);
  FUN_100031e8(4,0x38000000,0x1000);
  FUN_100030a8();
  *DAT_10001544 = *DAT_10001544 & 0xfffffffe;
  iVar6 = 0;
  puVar9 = auStack_c0;
  iVar8 = DAT_10001548;
  do {
    iVar6 = iVar6 + 1;
    *puVar9 = *(undefined2 *)(iVar8 + 2);
    iVar8 = iVar8 + 0xc;
    puVar9 = puVar9 + 1;
  } while (iVar6 != 0xf);
  FUN_10001720(1);
  puVar3 = DAT_1000154c;
  FUN_10000a38(1);
  FUN_10000a70(1);
  FUN_10000cf0();
  uVar26 = *puVar3;
  uVar27 = uVar26 & 0xfffffff8;
  *puVar3 = uVar27 | 1;
  FUN_100007c0(1);
  iVar8 = FUN_100007b0();
  if (iVar8 == 0) {
    uVar21 = 0x201;
  }
  else {
    uVar21 = 1;
  }
  *puVar3 = uVar21;
  piVar5 = DAT_10001570;
  puVar12 = DAT_10001558;
  puVar4 = DAT_10001554;
  puVar3 = DAT_10001550;
  uVar21 = *DAT_10001550;
  uVar14 = *DAT_10001554;
  *DAT_10001550 = *DAT_10001550 & 0xffffff7f;
  *puVar3 = 0;
  *DAT_1000155c = *DAT_1000155c & 0xfffffffe;
  uVar22 = *puVar12;
  FUN_10000f4c(0x3b6);
  FUN_10000da4();
  *puVar4 = *puVar4 & 0xfffff000 | 0x988;
  FUN_100007c0(0x1e);
  *(undefined4 *)(iVar18 + 0x2e8) = *DAT_10001560;
  *(undefined4 *)(iVar18 + 0x2ec) = *DAT_10001564;
  puVar3 = DAT_10001568;
  uVar23 = *DAT_10001568;
  uVar24 = puVar4[-0xbd4];
  while( true ) {
    uVar25 = uVar23 & 0xf1ffffff;
    *puVar3 = uVar25;
    FUN_10000d18();
    FUN_10000d40();
    FUN_10000f8e();
    *puVar3 = uVar25 | 0x8000000;
    FUN_10000d5c();
    FUN_10000b54();
    FUN_10001720(0);
    iVar18 = FUN_10000f80();
    if (iVar18 != 0) {
      *piVar5 = 1;
      do {
      } while (*piVar5 << 0x1f < 0);
    }
    FUN_10003198();
    FUN_10000bb4();
    iVar18 = FUN_10000e00(auStack_c0,auStack_a0,&local_c4);
    if (iVar18 == 1) break;
    FUN_10000db8();
    *(uint *)(DAT_10001688 + 0x10) = *(uint *)(DAT_10001688 + 0x10) | 4;
  }
  *DAT_10001568 = uVar23;
  puVar4[-0xbd4] = uVar24;
  *DAT_1000156c = 7;
  *puVar1 = uVar15;
  *puVar2 = uVar16;
  *(undefined4 *)uVar29 = uVar17;
  *puVar7 = uVar28;
  FUN_10000d70();
  FUN_10000d84();
  FUN_10000b94();
  FUN_10001124();
  FUN_10000c04();
  FUN_10000c74();
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  *DAT_10001544 = *DAT_10001544 | 1;
  iVar18 = 300;
  *puVar12 = uVar22;
  piVar5 = DAT_10001670;
  *DAT_1000166c = uVar14;
  FUN_100007c0(0x1e);
  *DAT_10001674 = *DAT_10001674 & 0xffffffee | 1;
  FUN_100007c0(1);
  FUN_10000a70(0);
  do {
    if (*piVar5 << 3 < 0) break;
    FUN_100007c0(5);
    iVar18 = iVar18 + -1;
  } while (iVar18 != 0);
  iVar18 = FUN_100007b0();
  if (iVar18 == 0) {
    FUN_100007c0(200);
  }
  puVar3 = DAT_1000167c;
  puVar7 = DAT_10001678;
  iVar18 = 300;
  *DAT_10001678 = uVar21;
  *puVar3 = *puVar3 & 0xfffffcf0;
  do {
    if ((int)(*puVar7 << 0x17) < 0) break;
    FUN_100007c0(5);
    iVar18 = iVar18 + -1;
  } while (iVar18 != 0);
  puVar7 = DAT_10001680;
  *DAT_10001680 = *DAT_10001680 & 7 | uVar27;
  FUN_100007c0(1);
  *puVar7 = uVar26;
  puVar7 = puVar7 + 0xac00;
  FUN_10000a38(0);
  *puVar7 = *puVar7 & 0xffffffef;
  *puVar7 = *puVar7 & 0xffffffdf;
  FUN_100007c0(1);
  *puVar7 = *puVar7 | 0x10;
  *puVar7 = *puVar7 | 0x20;
  FUN_100031e8(5,0x38000000,0x1000);
  FUN_10003188(0);
  iVar18 = DAT_10001684;
  *(int *)(DAT_10001684 + 0x84) = local_c4;
  FUN_10003088(iVar18 + 0xc,auStack_a0,local_c4 << 3,0x7c);
  return;
}

