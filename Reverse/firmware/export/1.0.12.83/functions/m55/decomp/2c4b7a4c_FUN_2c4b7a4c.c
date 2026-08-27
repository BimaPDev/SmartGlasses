/* FUN_2c4b7a4c @ 0x2c4b7a4c */

void FUN_2c4b7a4c(uint param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint in_fpscr;
  
  if ((param_1 & 1) != 0) {
    *DAT_2c4b7af4 = (char)param_2;
  }
  if ((param_1 & 2) != 0) {
    DAT_2c4b7af4[1] = (char)param_2;
  }
  if ((*(uint *)(DAT_2c4b7af8 + 0xbc) & 0x10) == 0) {
    if (param_2 == 0) {
      uVar2 = 0x4000;
    }
    else {
      uVar2 = 0;
      if (-99 < param_2) {
        uVar2 = DAT_2c4b7b00;
        if (param_2 < 0x33) {
          uVar2 = VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
        }
        uVar2 = FUN_2c49ab84(uVar2);
        uVar2 = VectorFloatToSignedFixed(uVar2,0x20,0xe);
      }
    }
    uVar3 = SignedSaturate(uVar2,0x13);
    SignedDoesSaturate(uVar2,0x13);
  }
  else {
    uVar3 = 0;
  }
  iVar1 = DAT_2c4b7af8;
  *(uint *)(DAT_2c4b7af8 + 0xb4) = *(uint *)(DAT_2c4b7af8 + 0xb4) & 0xffdfffff;
  FUN_2c673b08(2);
  if ((param_1 & 1) != 0) {
    *(uint *)(iVar1 + 0xb4) = DAT_2c4b7afc & *(uint *)(iVar1 + 0xb4) | uVar3 & 0xfffff;
  }
  if ((param_1 & 2) != 0) {
    *(uint *)(DAT_2c4b7af8 + 0xb8) = DAT_2c4b7afc & *(uint *)(DAT_2c4b7af8 + 0xb8) | uVar3 & 0xfffff
    ;
  }
  *(uint *)(DAT_2c4b7af8 + 0xb4) = *(uint *)(DAT_2c4b7af8 + 0xb4) | 0x200000;
  return;
}

