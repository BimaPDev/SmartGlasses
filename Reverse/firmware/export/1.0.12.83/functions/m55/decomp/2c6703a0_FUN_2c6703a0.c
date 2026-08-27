/* FUN_2c6703a0 @ 0x2c6703a0 */

void FUN_2c6703a0(uint *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  
  do {
    puVar1 = param_1 + 1;
    *param_1 = *param_1 | *puVar1 << ((8 - param_3) * -4 + 0x20U & 0xff);
    param_1 = param_1 + 1;
    *param_1 = *puVar1 >> ((8 - param_3) * 4 & 0xffU);
  } while (param_1 < param_2);
  return;
}

