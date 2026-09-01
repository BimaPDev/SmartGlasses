/* FUN_1007b62c @ 0x1007b62c */

void FUN_1007b62c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar2 = DAT_1007b878;
  bVar1 = *(byte *)(DAT_1007b878 + 0x13c);
  if ((bVar1 & 1) == 0) {
    uVar7 = (DAT_1007b880 - DAT_1007b87c) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_1007b884 | uVar7,DAT_1007b88c,DAT_1007b888);
    *(undefined4 *)(iVar2 + 0x1d4) = DAT_1007b890;
    uVar8 = ((uint)*(byte *)(iVar2 + 10) * 0x7d + 0xa19f) / 10;
    FUN_100a5b78(DAT_1007b894 | uVar7,DAT_1007b88c,DAT_1007b898,*(undefined2 *)(iVar2 + 0xc));
    FUN_100a5b78(DAT_1007b89c | uVar7,DAT_1007b88c,DAT_1007b8a0,uVar8);
    uVar8 = uVar8 - 0x14;
    if (uVar8 < *(ushort *)(iVar2 + 0xc)) {
      *(short *)(iVar2 + 0xc) = (short)uVar8;
    }
    FUN_1007a9ec();
    *(undefined1 *)(iVar2 + 0x146) = 100;
    *(undefined1 *)(iVar2 + 0x147) = *(undefined1 *)(iVar2 + 10);
    if (1000 < *(ushort *)(iVar2 + 0x40)) {
      FUN_100a5b78(DAT_1007b8a4 | uVar7,DAT_1007b88c,DAT_1007b8a8);
      *(undefined2 *)(iVar2 + 0x40) = 300;
    }
    FUN_1011ea48(DAT_1007b8ac,0xff,0x14);
    FUN_1011ea48(DAT_1007b8b0,0,0x3c);
    FUN_1007a2c8();
    *(byte *)(iVar2 + 0x13d) = *(byte *)(iVar2 + 0x13d) & 0xfc | 1;
    FUN_1007c900();
    FUN_1007cae0(1);
    FUN_1007b37c();
    uVar4 = FUN_1007a33c(3);
    uVar8 = (uint)*(ushort *)(iVar2 + 0x1e4);
    uVar9 = (uint)uVar4;
    FUN_100a5b78(DAT_1007b8b4 | uVar7,DAT_1007b88c,DAT_1007b8b8,uVar9,uVar8);
    if ((*(ushort *)(iVar2 + 0x1e4) != 0) &&
       (iVar5 = FUN_1013d02e(*(ushort *)(iVar2 + 0x1e4) - uVar9), iVar5 < 200)) {
      uVar9 = (uint)*(ushort *)(iVar2 + 0x1e4);
    }
    if (uVar9 < *(ushort *)(iVar2 + 0x15e)) {
      *(short *)(iVar2 + 0x15e) = (short)uVar9;
    }
    FUN_1011fe70(*(undefined2 *)(iVar2 + 0x15e));
    uVar6 = FUN_1011fe16();
    *(undefined4 *)(iVar2 + 0x1e8) = uVar6;
    FUN_100a5b78(DAT_1007b8bc | uVar7,DAT_1007b88c,DAT_1007b8c0,uVar6,uVar8);
    FUN_100a5b78(DAT_1007b8c4 | uVar7,DAT_1007b88c,DAT_1007b8c8,*(undefined2 *)(iVar2 + 0x15e));
    iVar5 = FUN_1007c388();
    if (iVar5 == 1) {
      uVar6 = FUN_1011fe16();
      *(undefined4 *)(iVar2 + 0x1d8) = uVar6;
      FUN_100a5b78(DAT_1007b900 | uVar7,DAT_1007b88c,DAT_1007b904,uVar6);
      FUN_1007c15c(0);
      if (*(code **)(iVar2 + 0x164) != (code *)0x0) {
        (**(code **)(iVar2 + 0x164))(1,0);
      }
    }
    else {
      FUN_1007aa68(*(undefined2 *)(iVar2 + 0x15e));
      FUN_1007c15c(1);
    }
    FUN_10114438(DAT_1007b8d0,DAT_1007b8cc);
    FUN_10061c18(DAT_1007b8d8,DAT_1007b8d4,0);
    FUN_10061c80(DAT_1007b8d8,DAT_1007b8dc);
    FUN_100a5b78(DAT_1007b8e0 | uVar7,DAT_1007b88c,DAT_1007b8e4);
    if ((*(byte *)(iVar2 + 0x13e) & 8) == 0) {
      FUN_101145f4(DAT_1007b8ec,DAT_1007b8e8,0x600,8,*(byte *)(iVar2 + 0x13e) & 8);
    }
    thunk_FUN_101146e4(DAT_1007b8f4,DAT_1007b8f0);
    FUN_1013cbb6(DAT_1007b8ec,DAT_1007b8f4,0x32,0);
    uVar3 = DAT_1007b8fc;
    uVar6 = DAT_1007b88c;
    uVar7 = DAT_1007b8f8 | uVar7;
    *(ushort *)(iVar2 + 0x13c) = *(ushort *)(iVar2 + 0x13c) | 0x4001;
    FUN_100a5b78(uVar7,uVar6,uVar3);
    return;
  }
  iVar5 = DAT_1007b878 + 0xd8;
  *(undefined1 *)(DAT_1007b878 + 0x13f) = 0xff;
  *(undefined1 *)(iVar2 + 0x141) = 0;
  *(undefined2 *)(iVar2 + 0x1e4) = 0;
  *(undefined4 *)(iVar2 + 0x1e8) = 0;
  FUN_1011ea48(iVar5,0xff,0x14,bVar1,param_1,param_2,param_3);
  FUN_1007c0ec();
  FUN_1007cae0(1);
  FUN_1007b37c();
  FUN_1007a2c8();
  *(byte *)(iVar2 + 0x13d) = *(byte *)(iVar2 + 0x13d) | 0x40;
  uVar6 = DAT_1007b8ec;
  *(undefined2 *)(iVar2 + 0x158) = 0;
  FUN_1013cbb6(uVar6,iVar2 + 0x98,0x32,0);
  return;
}

