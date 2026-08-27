/* FUN_2c614a0c @ 0x2c614a0c */

void FUN_2c614a0c(int param_1)

{
  FUN_2c62c3b0(param_1,0x3c);
  *(undefined4 *)(param_1 + 0x2c) = 0xff000000;
  *(undefined1 *)(param_1 + 0x31) = 0xff;
  *(undefined2 *)(param_1 + 2) = 0x100;
  *(undefined1 *)(param_1 + 8) = 0;
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | 1;
  return;
}

