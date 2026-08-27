/* FUN_2c582cc8 @ 0x2c582cc8 */

void FUN_2c582cc8(int param_1)

{
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0xc))();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

