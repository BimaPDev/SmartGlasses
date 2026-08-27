/* FUN_2c46a5bc @ 0x2c46a5bc */

void FUN_2c46a5bc(int param_1,int param_2)

{
  param_2 = param_2 * 0x10;
  *(undefined1 *)(*(int *)(param_1 + 0x28) + param_2) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x28) + param_2 + 1) = 1;
  FUN_2c46c514(*(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 + 8));
  *(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 + 8) = 0;
  FUN_2c669588(*(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 + 0xc));
  *(undefined4 *)(param_2 + *(int *)(param_1 + 0x28) + 0xc) = 0;
  return;
}

