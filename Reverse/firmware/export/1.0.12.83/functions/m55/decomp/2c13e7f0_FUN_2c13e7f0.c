/* FUN_2c13e7f0 @ 0x2c13e7f0 */

void FUN_2c13e7f0(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_2 < param_1) && (param_1 - param_2 < param_3)) {
    uVar1 = param_1 + param_3 & 3;
    if (param_3 < 4) {
      uVar1 = param_3;
    }
                    /* WARNING: Could not recover jumptable at 0x2c13e814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_2c13e818 + (uint)(byte)(&DAT_2c13e818)[uVar1] * 2))
              (param_1,param_2 - param_1,param_3 - uVar1,(param_1 + param_3) - 1);
    return;
  }
  uVar1 = -param_1 & 3;
  if (param_3 < 4) {
    uVar1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x2c13e908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_2c13e90c + (uint)(byte)(&DAT_2c13e90c)[uVar1] * 2))
            (param_1,param_2 - param_1,param_3 - uVar1,param_1);
  return;
}

