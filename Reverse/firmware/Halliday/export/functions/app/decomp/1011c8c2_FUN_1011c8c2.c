/* FUN_1011c8c2 @ 0x1011c8c2 */

uint FUN_1011c8c2(int param_1,uint param_2)

{
  return *(uint *)(param_1 + ((int)param_2 >> 5) * 4) & 1 << (param_2 & 0x1f);
}

