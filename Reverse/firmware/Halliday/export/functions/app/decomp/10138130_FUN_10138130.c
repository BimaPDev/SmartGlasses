/* FUN_10138130 @ 0x10138130 */

void FUN_10138130(uint *param_1,uint param_2)

{
  *param_1 = *param_1 | 1 << (param_2 & 0xff);
  return;
}

