/* FUN_2c650e44 @ 0x2c650e44 */

void FUN_2c650e44(int param_1)

{
  int iVar1;
  
  if (param_1 != DAT_2c650e5c) {
    iVar1 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = iVar1 + -1;
    if (iVar1 < 1) {
      thunk_FUN_2c669588();
    }
  }
  return;
}

