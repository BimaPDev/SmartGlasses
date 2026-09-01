/* FUN_1013b440 @ 0x1013b440 */

void FUN_1013b440(int param_1)

{
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x400;
  *(undefined4 *)(param_1 + 0xb8) = 1;
  *(undefined2 *)(param_1 + 0xc2) = 0x401;
  FUN_1010c4b4(param_1 + 0xb4);
  return;
}

