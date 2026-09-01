/* FUN_1011bea2 @ 0x1011bea2 */

uint FUN_1011bea2(int param_1,uint param_2)

{
  if (param_2 < 2) {
    return *(int *)(param_1 + 8) >> (param_2 & 0xff) & 1;
  }
  return 0;
}

