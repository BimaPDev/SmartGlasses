/* FUN_1013868e @ 0x1013868e */

void FUN_1013868e(int param_1)

{
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10138696. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x38))(param_1 + -0x60,param_1);
    return;
  }
  return;
}

