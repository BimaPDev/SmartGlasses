/* FUN_2c6393b8 @ 0x2c6393b8 */

void FUN_2c6393b8(int param_1,int param_2,int param_3)

{
  if ((*(int *)(param_1 + 0x28) == param_2) && (*(int *)(param_1 + 0x2c) == param_3)) {
    return;
  }
  if ((*(byte *)(param_1 + 100) & 3) != 2) {
    *(int *)(param_1 + 0x30) = param_2;
  }
  *(int *)(param_1 + 0x28) = param_2;
  *(int *)(param_1 + 0x2c) = param_3;
  if (*(int *)(param_1 + 0x24) <= param_3) {
    if (*(int *)(param_1 + 0x24) < param_2) {
      *(int *)(param_1 + 0x24) = param_2;
    }
    FUN_2c607df0();
    return;
  }
  *(int *)(param_1 + 0x24) = param_3;
  if (param_3 < param_2) {
    *(int *)(param_1 + 0x24) = param_2;
  }
  FUN_2c607df0();
  return;
}

