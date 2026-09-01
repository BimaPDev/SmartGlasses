/* FUN_10133554 @ 0x10133554 */

void FUN_10133554(uint *param_1,uint param_2)

{
  *param_1 = *param_1 & ~(1 << (param_2 & 0xff));
  return;
}

