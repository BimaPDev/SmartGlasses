/* FUN_2c4de6ca @ 0x2c4de6ca */

void FUN_2c4de6ca(int param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 0x1c) == 0 && *(int *)(param_1 + 0x18) == 0) {
    *(undefined2 *)(param_1 + 0x1c) = param_2;
    *(undefined2 *)(param_1 + 0x1e) = param_3;
    *(undefined4 *)(param_1 + 0x18) = param_4;
  }
  return;
}

