/* FUN_1012781e @ 0x1012781e */

void FUN_1012781e(int param_1)

{
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10127822. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x40))();
    return;
  }
  return;
}

