/* FUN_2c4b78ac @ 0x2c4b78ac */

void FUN_2c4b78ac(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint in_fpscr;
  undefined4 in_cr0;
  undefined4 in_cr7;
  float fVar3;
  undefined4 uVar4;
  
  if ((param_1 & 1) != 0) {
    *DAT_2c4b7964 = (char)param_2;
  }
  if ((param_1 & 2) != 0) {
    DAT_2c4b7964[1] = (char)param_2;
  }
  if (*DAT_2c4b7968 == '\0') {
    fVar3 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    if (fVar3 == 0.0) {
      uVar4 = 0x4000;
    }
    else {
      uVar4 = 0;
      if (DAT_2c4b7974 < fVar3) {
        coprocessor_function2(10,3,4,in_cr0,in_cr7,in_cr0);
        uVar4 = FUN_2c49ab84();
        uVar4 = VectorFloatToSignedFixed(uVar4,0x20,0xe);
      }
    }
    uVar2 = SignedSaturate(uVar4,0x13);
    SignedDoesSaturate(uVar4,0x13);
  }
  else {
    uVar2 = 0;
  }
  iVar1 = DAT_2c4b796c;
  *(uint *)(DAT_2c4b796c + 0x788) = *(uint *)(DAT_2c4b796c + 0x788) & 0xffdfffff;
  FUN_2c673b08(2);
  if ((param_1 & 1) != 0) {
    *(uint *)(iVar1 + 0x788) = DAT_2c4b7970 & *(uint *)(iVar1 + 0x788) | uVar2 & 0xfffff;
  }
  if ((param_1 & 2) != 0) {
    *(uint *)(DAT_2c4b796c + 0x78c) =
         DAT_2c4b7970 & *(uint *)(DAT_2c4b796c + 0x78c) | uVar2 & 0xfffff;
  }
  *(uint *)(DAT_2c4b796c + 0x788) = *(uint *)(DAT_2c4b796c + 0x788) | 0x200000;
  return;
}

