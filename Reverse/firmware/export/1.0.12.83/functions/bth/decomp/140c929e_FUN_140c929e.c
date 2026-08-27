/* FUN_140c929e @ 0x140c929e */

void FUN_140c929e(int *param_1)

{
  if ((uint)param_1[2] < (uint)param_1[3]) {
    param_1[2] = param_1[2] + 4;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x140c92b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}

