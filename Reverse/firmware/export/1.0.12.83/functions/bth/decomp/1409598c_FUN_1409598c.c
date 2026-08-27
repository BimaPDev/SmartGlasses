/* FUN_1409598c @ 0x1409598c */

undefined4 FUN_1409598c(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x10) = param_2;
    return 0;
  }
  return 1;
}

