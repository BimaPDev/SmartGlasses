/* FUN_2c4b75b0 @ 0x2c4b75b0 */

void FUN_2c4b75b0(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint in_fpscr;
  undefined4 uVar9;
  
  iVar4 = DAT_2c4b7628;
  uVar6 = 0;
  do {
    if ((1 << (uVar6 & 0xff) & param_1) != 0) {
      *(char *)(uVar6 + iVar4) = (char)param_2;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 != 6);
  if ((*(char *)(DAT_2c4b762c + 1) == '\x01') || (param_1 == 0)) {
    iVar4 = 0;
  }
  else {
    if (param_2 == 0) {
      uVar9 = 0x1000;
    }
    else if (param_2 < -0x62) {
      uVar9 = 0;
    }
    else {
      uVar9 = DAT_2c4b7630;
      if (param_2 < 0x33) {
        uVar9 = VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
      }
      uVar9 = FUN_2c49ab84(uVar9);
      uVar9 = VectorFloatToSignedFixed(uVar9,0x20,0xc);
    }
    iVar4 = SignedSaturate(uVar9,0x13);
    SignedDoesSaturate(uVar9,0x13);
  }
  uVar6 = DAT_2c4b7544;
  uVar5 = 0;
  uVar3 = DAT_2c4b753c & iVar4 << 10;
  uVar8 = 0;
  puVar7 = DAT_2c4b7540;
  do {
    uVar1 = uVar5 & 0xff;
    uVar2 = uVar5 & 0xff;
    uVar5 = uVar5 + 1;
    if ((1 << uVar1 & param_1) != 0) {
      uVar8 = uVar8 | 0x400000 << uVar2;
      *puVar7 = *puVar7 & uVar6 | uVar3;
    }
    iVar4 = DAT_2c4b7548;
    puVar7 = puVar7 + 1;
  } while (uVar5 != 6);
  *(uint *)(DAT_2c4b7548 + 0xb4) = *(uint *)(DAT_2c4b7548 + 0xb4) & ~uVar8;
  FUN_2c673b08(2);
  *(uint *)(iVar4 + 0xb4) = uVar8 | *(uint *)(iVar4 + 0xb4);
  return;
}

