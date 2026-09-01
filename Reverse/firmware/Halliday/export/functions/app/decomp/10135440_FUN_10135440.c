/* FUN_10135440 @ 0x10135440 */

void FUN_10135440(uint *param_1,uint param_2)

{
  *param_1 = *param_1 | 1 << (param_2 & 0xff);
  return;
}

