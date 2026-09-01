/* FUN_1012bcb4 @ 0x1012bcb4 */

void FUN_1012bcb4(int param_1,int param_2,int param_3)

{
  if ((*(int *)(param_1 + 0x30) == param_2) && (*(int *)(param_1 + 0x34) == param_3)) {
    return;
  }
  *(int *)(param_1 + 0x30) = param_2;
  *(int *)(param_1 + 0x34) = param_3;
  if ((*(byte *)(param_1 + 0x6c) & 3) != 2) {
    *(int *)(param_1 + 0x38) = param_2;
  }
  if (param_3 < *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x2c) = param_3;
    FUN_1012bbea(param_1,param_3,0);
  }
  if (*(int *)(param_1 + 0x2c) < param_2) {
    *(int *)(param_1 + 0x2c) = param_2;
    FUN_1012bbea(param_1,param_2,0);
  }
  FUN_10125af4(param_1);
  return;
}

