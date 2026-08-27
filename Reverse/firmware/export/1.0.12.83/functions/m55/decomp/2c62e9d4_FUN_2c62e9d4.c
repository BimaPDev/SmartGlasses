/* FUN_2c62e9d4 @ 0x2c62e9d4 */

uint FUN_2c62e9d4(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  
  param_2 = param_2 - param_3;
  if (param_2 < 0) {
    param_2 = -param_2;
  }
  uVar1 = (uint)(param_2 * 1000) / param_1;
  if ((uint)(param_2 * 1000) < param_1) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

