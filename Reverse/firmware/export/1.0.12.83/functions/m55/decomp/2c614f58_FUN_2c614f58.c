/* FUN_2c614f58 @ 0x2c614f58 */

undefined4 FUN_2c614f58(byte *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (byte *)0x0) {
    return 3;
  }
  if (0x5f < *param_1 - 0x20) {
    if ((*param_1 & 0x80) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
    return uVar1;
  }
  return 1;
}

