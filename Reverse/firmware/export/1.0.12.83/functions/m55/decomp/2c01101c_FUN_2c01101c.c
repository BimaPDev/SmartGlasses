/* FUN_2c01101c @ 0x2c01101c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c01101c(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  ushort uVar2;
  ushort uStack_e;
  uint uStack_c;
  
  uStack_c = *_DAT_2c011094;
  if (param_1 - 0x50U < 2) {
    FUN_2c008e4c(0x4f,&uStack_e);
    if (param_1 == 0x50) {
      uVar2 = 0x400;
    }
    else {
      uVar2 = 0x800;
    }
    uVar1 = (uint)((uStack_e & uVar2) != 0);
    param_2 = extraout_r1;
  }
  else if ((*_DAT_2c011098 - 1 < 2) && (param_1 == 0x52)) {
    FUN_2c008e4c(0x4f,&uStack_e);
    uVar1 = (uStack_e & 0x1fff) >> 0xc;
    param_2 = extraout_r1_00;
  }
  else {
    uVar1 = 0;
  }
  if ((*_DAT_2c011094 ^ uStack_c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c0084a8(uVar1,param_2,*_DAT_2c011094 ^ uStack_c,0);
  }
  return;
}

