/* FUN_2c13f320 @ 0x2c13f320 */

uint FUN_2c13f320(undefined4 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_2c14139c();
  if ((int)uVar1 < 0) {
    uVar1 = 0x80000000;
  }
  else {
    uVar1 = uVar1 & ~param_2;
  }
  return uVar1;
}

