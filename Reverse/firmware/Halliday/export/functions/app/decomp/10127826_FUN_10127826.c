/* FUN_10127826 @ 0x10127826 */

void FUN_10127826(int param_1)

{
  if (*(code **)(param_1 + 0x44) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1012782a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x44))();
    return;
  }
  return;
}

