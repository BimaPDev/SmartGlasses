/* FUN_1011b2a4 @ 0x1011b2a4 */

void FUN_1011b2a4(int param_1)

{
  int iVar1;
  
  do {
    if (*(int *)(param_1 + 4) == param_1 + 4) {
      return;
    }
    iVar1 = FUN_1011b224(param_1);
  } while (iVar1 != 0);
  return;
}

