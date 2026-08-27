/* FUN_2c571d78 @ 0x2c571d78 */

bool FUN_2c571d78(int param_1,int param_2)

{
  if ((0 < param_2) && (param_2 <= *(int *)(param_1 + 4))) {
    return *(int *)(param_1 + 4) * (*(int *)(param_1 + 0xc) + -1) + param_2 <=
           *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2;
  }
  return false;
}

