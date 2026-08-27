/* FUN_14032d80 @ 0x14032d80 */

void FUN_14032d80(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort uVar6;
  ushort *puVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined2 local_56;
  undefined2 local_54;
  ushort local_52;
  ushort local_50 [18];
  int local_2c [2];
  
  local_2c[0] = *DAT_140330d0;
  local_54 = 0;
  iVar1 = FUN_140e5848(param_1,param_2,0);
  puVar12 = DAT_140330f0;
  uVar6 = 0xa1;
  puVar7 = local_50;
  puVar9 = DAT_140330f0;
  while( true ) {
    FUN_1402e1fc(uVar6 & 0xfff | 0x2000,puVar7);
    if ((ushort *)local_2c == puVar7 + 1) break;
    puVar9 = puVar9 + 1;
    uVar6 = *puVar9;
    puVar7 = puVar7 + 1;
  }
  FUN_1402e37c(0x20a1,0x94cc);
  FUN_1402e37c(0x20d0,0x4800);
  FUN_1402e37c(0x20d1,0x3800);
  FUN_1402e37c(0x2161,0x8571);
  FUN_1402e37c(0x2160,0xc71c);
  FUN_1402e37c(0x202f,0x4000);
  FUN_1402e37c(0x20d9,&DAT_00004004);
  FUN_1402e37c(0x20cf,0x1040);
  FUN_1402e37c(0x202a,0x2000);
  FUN_1402e37c(0x20d5,0x400);
  FUN_1402e37c(0x2152,0x8b82);
  FUN_140e5818(2);
  FUN_1402e37c(0x202a,0x2400);
  FUN_1402e37c(0x2309,0);
  FUN_140e5818(2);
  FUN_1402e37c(0x2015,0xc00);
  FUN_1402e37c(0x2017,0x8000);
  FUN_1402e37c(0x2019,0x907);
  FUN_1402e37c(0x2163,0x3ffa);
  FUN_1402e37c(0x20cf,0x1040);
  FUN_1402e37c(0x20cf,0x1041);
  FUN_140e5818(1);
  FUN_1402e1fc(0x20e6,&local_54);
  FUN_1402e1fc(0x20e7,&local_56);
  uVar10 = CONCAT22(local_56,local_54) & 0x3ffff;
  FUN_1402a6e8(4,0x7f8,DAT_140330d8,DAT_140330dc,DAT_140330d4,local_54,local_56,uVar10,uVar10);
  FUN_1402e37c(0x2163,10);
  FUN_1402e37c(0x20cf,0x1040);
  FUN_1402e37c(0x20cf,0x1041);
  FUN_140e5818(1);
  FUN_1402e1fc(0x20e6,&local_54);
  FUN_1402e1fc(0x20e7,&local_56);
  uVar8 = CONCAT22(local_56,local_54) & 0x3ffff;
  FUN_1402a6e8(4,0x805,DAT_140330d8,DAT_140330dc,DAT_140330e0,local_54,local_56,uVar8,uVar8);
  uVar14 = FUN_140e370c(uVar10);
  uVar5 = (undefined4)((ulonglong)uVar14 >> 0x20);
  uVar15 = FUN_140e3a54(DAT_140330b0,DAT_140330b4,(int)uVar14,uVar5);
  uVar16 = FUN_140e370c(uVar8);
  uVar4 = (undefined4)((ulonglong)uVar16 >> 0x20);
  uVar17 = FUN_140e3a54(DAT_140330b8,DAT_140330bc,(int)uVar16,uVar4);
  uVar14 = FUN_140e3a54((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar14,uVar5);
  uVar15 = FUN_140e3a54((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar16,uVar4);
  uVar14 = FUN_140e3490((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar15,
                        (int)((ulonglong)uVar15 >> 0x20));
  uVar14 = FUN_140e3a54((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),DAT_140330c0,DAT_140330c4);
  uVar5 = (undefined4)((ulonglong)uVar14 >> 0x20);
  uVar15 = FUN_140e3490(0,DAT_140330e4,(int)uVar14,uVar5);
  FUN_140e3a54((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),DAT_140330c8,DAT_140330cc);
  iVar2 = FUN_140e3d60();
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  FUN_1402a6e8(4,0x815,DAT_140330d8,DAT_140330dc,DAT_140330e8,iVar2);
  iVar3 = FUN_140e3ce4((int)uVar14,uVar5,0,DAT_140330e4);
  uVar5 = DAT_140330f4;
  if (iVar3 == 0) {
    if (iVar2 < 3) {
      uVar10 = iVar2 * -6 + 0x10;
      uVar8 = uVar10 & 0xffff;
    }
    else {
      uVar8 = 0;
      uVar10 = 0;
    }
  }
  else if (iVar2 < 7) {
    uVar10 = iVar2 * 6 + 0x10;
    uVar8 = uVar10 & 0xffff;
  }
  else {
    uVar8 = 0x36;
    uVar10 = 0x36;
  }
  iVar2 = 0;
  FUN_1402a6e8(4,0x827,DAT_140330d8,DAT_140330dc,DAT_140330ec,DAT_140330f4,uVar10);
  do {
    if (iVar2 < 4) {
      uVar11 = uVar10 + 4 & 0xffff;
    }
    else if (iVar2 - 4U < 4) {
      uVar11 = uVar8 + 3 & 0xffff;
    }
    else {
      uVar11 = uVar8;
      if (iVar2 - 8U < 4) {
        uVar11 = uVar8 + 2 & 0xffff;
      }
    }
    uVar13 = iVar2 + 0x1d6U & 0xffff | 0x2000;
    FUN_1402e1fc(uVar13,&local_52);
    local_52 = local_52 & 0xc07f | (ushort)((uVar11 & 0x1ff) << 7);
    iVar2 = iVar2 + 1;
    FUN_1402e37c(uVar13);
  } while (iVar2 != 0x10);
  uVar6 = 0xa1;
  puVar9 = &local_52;
  while( true ) {
    puVar9 = puVar9 + 1;
    FUN_1402e37c(uVar6 & 0xfff | 0x2000,*puVar9);
    if (local_50 + 0x11 == puVar9) break;
    puVar12 = puVar12 + 1;
    uVar6 = *puVar12;
  }
  FUN_1402e1fc(0x209f,&local_52);
  local_52 = (ushort)(((uint)local_52 << 0x11) >> 0x11);
  FUN_1402e37c(0x209f);
  FUN_1402e37c(0x2014,0x6688);
  FUN_1402e37c(0x2019,0x38a);
  FUN_1402e37c(0x2021,100);
  iVar2 = FUN_140e5848();
  uVar4 = FUN_140e5548(iVar2 - iVar1);
  FUN_1402a6e8(4,0x840,DAT_140331b4,DAT_140331b0,DAT_140331ac,uVar5,uVar4);
  if (*DAT_140331b8 == local_2c[0]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

