/* FUN_2c61319c @ 0x2c61319c */

void FUN_2c61319c(int param_1,undefined4 param_2,short *param_3)

{
  if ((0 < (short)((param_3[3] + 1) - param_3[1])) && (0 < (short)((param_3[2] + 1) - *param_3))) {
                    /* WARNING: Could not recover jumptable at 0x2c6131c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0xc))();
    return;
  }
  return;
}

