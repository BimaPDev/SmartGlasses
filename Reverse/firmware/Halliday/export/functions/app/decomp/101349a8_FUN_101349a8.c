/* FUN_101349a8 @ 0x101349a8 */

void FUN_101349a8(uint *param_1,uint param_2)

{
  *param_1 = *param_1 | 1 << (param_2 & 0xff);
  return;
}

