/* FUN_10128076 @ 0x10128076 */

void FUN_10128076(int param_1,undefined4 param_2,int *param_3)

{
  if ((0 < (param_3[3] + 1) - param_3[1]) && (0 < (param_3[2] + 1) - *param_3)) {
                    /* WARNING: Could not recover jumptable at 0x10128094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x10))();
    return;
  }
  return;
}

