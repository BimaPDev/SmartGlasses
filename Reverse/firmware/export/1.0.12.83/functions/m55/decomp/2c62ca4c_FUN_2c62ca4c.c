/* FUN_2c62ca4c @ 0x2c62ca4c */

bool FUN_2c62ca4c(int param_1)

{
  if (param_1 == 0) {
    return true;
  }
  if (*(int *)(param_1 + 4) != 0) {
    return false;
  }
  return *(int *)(param_1 + 8) == 0;
}

