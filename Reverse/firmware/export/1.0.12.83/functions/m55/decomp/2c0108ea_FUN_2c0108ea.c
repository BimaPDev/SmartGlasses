/* FUN_2c0108ea @ 0x2c0108ea */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0108ea(int param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  ushort uVar2;
  ushort uStack_e;
  uint uStack_c;
  
  uStack_c = *param_4;
  if (param_1 == 0) {
    FUN_2c008f74(0x5e,0xc00);
    uVar2 = 0;
  }
  else if (param_1 == 1) {
    uVar2 = 8;
  }
  else if (param_1 == 2) {
    uVar2 = 0x10;
  }
  else {
    if (param_1 != 3) {
      uVar1 = 1;
      goto LAB_2c01092e;
    }
    uVar2 = 0x18;
  }
  FUN_2c008e4c(0x44,&uStack_e);
  uStack_e = uStack_e & 0xffe7 | uVar2;
  FUN_2c008f74(0x44);
  uVar1 = 0;
  param_2 = extraout_r1;
LAB_2c01092e:
  if ((*_DAT_2c01095c ^ uStack_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8(uVar1,param_2,*_DAT_2c01095c ^ uStack_c,0);
}

