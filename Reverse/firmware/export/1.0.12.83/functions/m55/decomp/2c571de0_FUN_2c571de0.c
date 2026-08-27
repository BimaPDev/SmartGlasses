/* FUN_2c571de0 @ 0x2c571de0 */

void FUN_2c571de0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 8) =
       (param_2 + (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2) + -1) / param_2;
  return;
}

