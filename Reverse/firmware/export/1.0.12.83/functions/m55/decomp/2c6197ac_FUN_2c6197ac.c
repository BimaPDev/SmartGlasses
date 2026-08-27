/* FUN_2c6197ac @ 0x2c6197ac */

undefined4 FUN_2c6197ac(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_2c5fefc8(DAT_2c61980c,param_1);
  FUN_2c5ff0b8();
  FUN_2c607048(uVar1,0x2064,0x27d1);
  FUN_2c627e28(uVar1,0);
  if (param_2 != 0) {
    uVar2 = FUN_2c6313f4(uVar1);
    FUN_2c63140c(uVar2,param_2);
  }
  if (param_3 != 0) {
    uVar2 = FUN_2c637344(uVar1);
    FUN_2c638730(uVar2,param_3);
    FUN_2c6388dc(uVar2,4);
    FUN_2c627ea0(uVar2,1);
  }
  return uVar1;
}

