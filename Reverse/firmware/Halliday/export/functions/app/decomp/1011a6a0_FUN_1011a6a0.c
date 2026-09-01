/* FUN_1011a6a0 @ 0x1011a6a0 */

uint FUN_1011a6a0(uint param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_1 < param_2) && (param_2 <= param_1 * 3 >> 1)) {
    return 0xe;
  }
  if ((param_1 * 2 < param_2) && (param_2 <= param_1 * 5 >> 1)) {
    return 0xf;
  }
  uVar1 = (param_2 + (param_1 - 1)) / param_1 - 1 & 0xff;
  if (0xc < uVar1) {
    uVar1 = 0xd;
  }
  return uVar1;
}

