/* FUN_2c5ac3dc @ 0x2c5ac3dc */

void FUN_2c5ac3dc(int param_1,undefined1 param_2)

{
  if (*(int *)(param_1 + 0x180) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x180) + 4) = param_2;
  }
  return;
}

