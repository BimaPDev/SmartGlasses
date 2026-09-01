/* FUN_10135464 @ 0x10135464 */

void FUN_10135464(uint *param_1,uint param_2)

{
  *param_1 = *param_1 & ~(1 << (param_2 & 0xff));
  return;
}

