/* FUN_2c626be8 @ 0x2c626be8 */

void FUN_2c626be8(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_2c62bea8(param_1);
    return;
  }
  FUN_2c62de2c();
  FUN_2c62bea8(param_1);
  return;
}

