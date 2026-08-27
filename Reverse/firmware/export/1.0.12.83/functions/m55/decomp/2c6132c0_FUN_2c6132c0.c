/* FUN_2c6132c0 @ 0x2c6132c0 */

void FUN_2c6132c0(int param_1)

{
  if (*(code **)(param_1 + 0x34) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c6132c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x34))();
    return;
  }
  return;
}

