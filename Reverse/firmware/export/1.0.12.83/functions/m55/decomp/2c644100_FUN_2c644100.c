/* FUN_2c644100 @ 0x2c644100 */

uint FUN_2c644100(undefined4 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_2c646ab8();
  if ((int)uVar1 < 0) {
    uVar1 = 0x80000000;
  }
  else {
    uVar1 = uVar1 & ~param_2;
  }
  return uVar1;
}

