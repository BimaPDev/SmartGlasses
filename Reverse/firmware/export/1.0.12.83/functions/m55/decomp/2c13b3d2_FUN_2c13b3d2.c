/* FUN_2c13b3d2 @ 0x2c13b3d2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13b3d2(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  short sVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint in_fpscr;
  uint uStack_180;
  uint auStack_17c [4];
  uint uStack_16c;
  uint uStack_168;
  uint auStack_164 [4];
  uint uStack_154;
  uint uStack_150;
  uint auStack_14c [4];
  uint uStack_13c;
  uint uStack_138;
  uint auStack_134 [4];
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint auStack_104 [4];
  uint uStack_f4;
  uint uStack_f0;
  uint auStack_ec [4];
  uint uStack_dc;
  uint uStack_d8;
  undefined1 auStack_d4 [4];
  undefined4 uStack_d0;
  undefined4 auStack_cc [12];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 auStack_94 [12];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 auStack_5c [12];
  int iStack_2c;
  
  puVar8 = auStack_14c;
  iStack_2c = *_DAT_2c13b5a8;
  uStack_180 = param_1;
  auStack_17c[0] = param_1;
  auStack_17c[1] = param_1;
  auStack_17c[2] = param_1;
  auStack_17c[3] = param_1;
  uStack_16c = param_1;
  uStack_168 = param_1;
  auStack_164[0] = param_1;
  auStack_164[1] = param_1;
  auStack_164[2] = param_1;
  auStack_164[3] = param_1;
  uStack_154 = param_1;
  uStack_150 = param_1;
  auStack_14c[0] = param_1;
  auStack_14c[1] = param_1;
  auStack_14c[2] = param_1;
  auStack_14c[3] = param_1;
  uStack_13c = param_1;
  uStack_138 = param_1;
  auStack_134[0] = param_1;
  auStack_134[1] = param_1;
  auStack_134[2] = param_1;
  auStack_134[3] = param_1;
  uStack_124 = param_1;
  uStack_120 = param_1;
  uStack_11c = param_1;
  uStack_118 = param_1;
  uStack_114 = param_1;
  uStack_110 = param_1;
  uStack_10c = param_1;
  uStack_108 = param_1;
  auStack_104[0] = param_1;
  auStack_104[1] = param_1;
  auStack_104[2] = param_1;
  auStack_104[3] = param_1;
  uStack_f4 = param_1;
  uStack_f0 = param_1;
  auStack_ec[0] = param_1;
  auStack_ec[1] = param_1;
  auStack_ec[2] = param_1;
  auStack_ec[3] = param_1;
  uStack_dc = param_1;
  uStack_d8 = param_1;
  FUN_2c13b1dc(param_1,&uStack_180,param_3,0);
  puVar10 = auStack_164;
  puVar12 = auStack_17c;
  sVar4 = 0x500;
  puVar14 = &uStack_11c;
  puVar5 = auStack_ec;
  puVar6 = auStack_104;
  puVar7 = puVar10;
  puVar9 = puVar8;
  puVar11 = puVar12;
  puVar13 = auStack_134;
  do {
    FUN_2c13b1dc(sVar4,puVar13);
    FUN_2c13b1dc(sVar4 + 0x18,puVar14);
    FUN_2c13b1dc(sVar4 + 0x30,puVar6);
    FUN_2c13b1dc(sVar4 + 0x48,puVar5);
    uVar2 = *puVar13;
    sVar4 = sVar4 + 4;
    if ((int)uVar2 < 0) {
      uVar2 = -(-uVar2 >> 7);
    }
    else {
      uVar2 = uVar2 >> 7;
    }
    *puVar11 = uVar2;
    uVar2 = *puVar6;
    if ((int)uVar2 < 0) {
      uVar2 = -(-uVar2 >> 7);
    }
    else {
      uVar2 = uVar2 >> 7;
    }
    *puVar7 = uVar2;
    *puVar9 = *puVar5 & 0x3ff;
    puVar5 = puVar5 + 1;
    puVar14 = puVar14 + 1;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
    puVar13 = puVar13 + 1;
  } while (sVar4 != 0x518);
  FUN_2c13e9dc(auStack_d4,0,0x38);
  FUN_2c14486c();
  uVar1 = FUN_2c1448c4();
  uStack_d0 = VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  puVar3 = auStack_cc;
  do {
    uVar2 = *puVar12;
    puVar12 = puVar12 + 1;
    uVar1 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  } while (auStack_164 != puVar12);
  FUN_2c13ac68(auStack_d4);
  FUN_2c13e9dc(&uStack_98,0,0x34);
  uStack_9c = 1;
  FUN_2c14486c();
  uVar1 = FUN_2c1448c4();
  uStack_98 = VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  puVar3 = auStack_94;
  do {
    uVar2 = *puVar10;
    puVar10 = puVar10 + 1;
    uVar1 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  } while (auStack_14c != puVar10);
  FUN_2c13ac68(&uStack_9c);
  FUN_2c13e9dc(&uStack_60,0,0x34);
  uStack_64 = 2;
  FUN_2c14486c();
  uVar1 = FUN_2c1448c4();
  uStack_60 = VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  puVar3 = auStack_5c;
  do {
    uVar2 = *puVar8;
    puVar8 = puVar8 + 1;
    uVar1 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  } while (puVar8 != auStack_134);
  FUN_2c13ac68(&uStack_64);
  if (*_DAT_2c13b5a8 != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c13424c();
  }
  return;
}

