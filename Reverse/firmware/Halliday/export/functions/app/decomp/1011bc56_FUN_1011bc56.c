/* FUN_1011bc56 @ 0x1011bc56 */

void FUN_1011bc56(int param_1)

{
  if ((param_1 != 0) && (*(code **)(param_1 + 8) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1011bc5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))();
    return;
  }
  return;
}

