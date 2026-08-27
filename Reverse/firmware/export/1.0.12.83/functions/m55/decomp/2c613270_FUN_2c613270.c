/* FUN_2c613270 @ 0x2c613270 */

void FUN_2c613270(int param_1)

{
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c613274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x40))();
    return;
  }
  return;
}

