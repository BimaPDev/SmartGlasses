/* FUN_2c5f6ef4 @ 0x2c5f6ef4 */

void FUN_2c5f6ef4(int *param_1,int *param_2)

{
  if (param_2 == (int *)0x0) {
    return;
  }
  if ((int *)param_2[1] == (int *)0x0) {
    if ((int *)param_1[9] != param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5f6f4c,0x20b,DAT_2c5f6f48,DAT_2c5f6f44,DAT_2c5f6f40);
    }
    param_1[9] = *param_2;
  }
  else {
    *(int *)param_2[1] = *param_2;
  }
  if (*param_2 != 0) {
    *(int *)(*param_2 + 4) = param_2[1];
  }
                    /* WARNING: Could not recover jumptable at 0x2c5f6f1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_2);
  return;
}

