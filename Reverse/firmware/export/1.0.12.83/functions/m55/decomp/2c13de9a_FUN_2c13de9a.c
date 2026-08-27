/* FUN_2c13de9a @ 0x2c13de9a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c13de9a(undefined4 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*_DAT_2c13debc;
  if (uVar1 == 0) {
    return 0;
  }
  if (param_2 <= uVar1) {
    uVar1 = param_2;
  }
  FUN_2c13e7f0(param_1,_DAT_2c13dec0,uVar1);
  return uVar1;
}

