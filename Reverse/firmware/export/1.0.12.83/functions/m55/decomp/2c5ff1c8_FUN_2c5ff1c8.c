/* FUN_2c5ff1c8 @ 0x2c5ff1c8 */

void FUN_2c5ff1c8(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_2c62ca10(param_2);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return;
    }
    if (*piVar1 == param_1) break;
    piVar1 = (int *)FUN_2c62ca20(param_2);
  }
  piVar1 = (int *)FUN_2c62ca10();
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return;
    }
    if (*piVar1 == param_1) break;
    piVar1 = (int *)FUN_2c62ca20(param_2);
  }
  FUN_2c62c998();
  FUN_2c62bea8(piVar1);
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 8) + 8) = 0;
  return;
}

