/* FUN_2c13b5ac @ 0x2c13b5ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13b5ac(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  undefined4 extraout_r1_00;
  bool bVar2;
  uint uStack_18;
  uint uStack_14;
  
  uStack_14 = *_DAT_2c13b618;
  uStack_18 = 0;
  FUN_2c13b1dc(0x38,&uStack_18,param_3,0);
  uStack_18 = uStack_18 >> 0x10;
  bVar2 = uStack_18 == 0x2164;
  if (bVar2) {
    FUN_2c135988(4,0x143,_DAT_2c13b624,_DAT_2c13b620,_DAT_2c13b628);
    uVar1 = extraout_r1_00;
  }
  else {
    FUN_2c135988(4,0x146,_DAT_2c13b624,_DAT_2c13b620,_DAT_2c13b61c,uStack_18);
    uVar1 = extraout_r1;
  }
  if ((*_DAT_2c13b618 ^ uStack_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c(bVar2,uVar1,*_DAT_2c13b618 ^ uStack_14,0);
}

