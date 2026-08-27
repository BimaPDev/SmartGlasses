/* FUN_2c62b1b8 @ 0x2c62b1b8 */

uint FUN_2c62b1b8(uint param_1)

{
  uint uVar1;
  
  if ((param_1 >> 4 & 0x18) == 0) {
    uVar1 = param_1 >> 4 & 0x1f;
  }
  else {
    uVar1 = 7;
  }
  return uVar1;
}

