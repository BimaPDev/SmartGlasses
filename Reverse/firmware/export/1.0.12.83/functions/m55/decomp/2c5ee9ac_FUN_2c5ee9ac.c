/* FUN_2c5ee9ac @ 0x2c5ee9ac */

undefined4 FUN_2c5ee9ac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_2c5ee9d0;
  uVar2 = 0;
  if (param_1 != 0) {
    FUN_2c644044(*DAT_2c5ee9d0,0xffffffff,param_3,param_4,param_4);
    uVar2 = FUN_2c5f0094(param_1);
    FUN_2c644080(*puVar1);
  }
  return uVar2;
}

