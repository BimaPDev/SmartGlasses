/* FUN_140d2450 @ 0x140d2450 */

void FUN_140d2450(int *param_1)

{
  if ((uint)param_1[2] < (uint)param_1[3]) {
    param_1[2] = param_1[2] + 4;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x140d2462. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}

