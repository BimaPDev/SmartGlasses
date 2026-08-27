/* FUN_2c57fd9c @ 0x2c57fd9c */

void FUN_2c57fd9c(int param_1,undefined4 param_2)

{
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 0xc) != 0)) {
    FUN_2c55fea0();
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc) = param_2;
    return;
  }
  return;
}

