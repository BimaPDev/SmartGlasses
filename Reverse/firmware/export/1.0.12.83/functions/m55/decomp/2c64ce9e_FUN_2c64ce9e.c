/* FUN_2c64ce9e @ 0x2c64ce9e */

void FUN_2c64ce9e(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (iVar1 == 1) {
    FUN_2c64ce2c();
    thunk_FUN_2c669588(param_1);
    return;
  }
  return;
}

