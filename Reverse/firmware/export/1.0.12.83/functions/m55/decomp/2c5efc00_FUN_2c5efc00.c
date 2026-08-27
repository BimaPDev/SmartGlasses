/* FUN_2c5efc00 @ 0x2c5efc00 */

void FUN_2c5efc00(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_2c5fee30(*(undefined4 *)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_2c5efbcc(*(undefined4 *)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (param_1 != 0) {
    FUN_2c473450(**(undefined4 **)(param_1 + 0x2c));
    return;
  }
  return;
}

