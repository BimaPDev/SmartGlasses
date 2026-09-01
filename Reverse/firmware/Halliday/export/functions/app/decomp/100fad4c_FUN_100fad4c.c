/* FUN_100fad4c @ 0x100fad4c */

void FUN_100fad4c(int param_1)

{
  if ((param_1 != 0) && (*(code **)(param_1 + 0x18) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x100fad52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x18))();
    return;
  }
  return;
}

