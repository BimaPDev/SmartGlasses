/* FUN_2c4da790 @ 0x2c4da790 */

uint FUN_2c4da790(uint *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = 0;
    do {
      param_2 = param_2 + -1;
      uVar1 = uVar1 | *param_1 ^ (int)*param_1 >> 0x1f;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
    return LZCOUNT(uVar1) - 1U & ~((int)(LZCOUNT(uVar1) - 1U) >> 0x1f);
  }
  return 0x1f;
}

