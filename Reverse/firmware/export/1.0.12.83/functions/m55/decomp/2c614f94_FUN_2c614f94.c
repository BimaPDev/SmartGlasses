/* FUN_2c614f94 @ 0x2c614f94 */

void FUN_2c614f94(int param_1,int param_2,undefined4 param_3,undefined4 param_4,short param_5,
                 short param_6)

{
  if (((2 < *(byte *)(param_2 + 0x10)) && (*(short *)(param_2 + 4) != 0)) && (param_5 != param_6)) {
                    /* WARNING: Could not recover jumptable at 0x2c614fba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x10))();
    return;
  }
  return;
}

