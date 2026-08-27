/* FUN_2c57e564 @ 0x2c57e564 */

void FUN_2c57e564(int param_1)

{
  int *piVar1;
  
  FUN_2c57dc74(*(undefined4 *)(param_1 + 4));
  piVar1 = *(int **)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = 0;
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c57e57e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x10))();
    return;
  }
  return;
}

