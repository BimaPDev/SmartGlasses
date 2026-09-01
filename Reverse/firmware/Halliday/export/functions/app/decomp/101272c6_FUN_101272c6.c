/* FUN_101272c6 @ 0x101272c6 */

void FUN_101272c6(undefined4 *param_1,undefined4 param_2)

{
  if (param_1[1] != 0) {
    FUN_101272c6();
  }
  if ((code *)*param_1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x101272e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)(param_1,param_2);
    return;
  }
  return;
}

