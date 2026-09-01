/* FUN_100a92f4 @ 0x100a92f4 */

void FUN_100a92f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((code *)*DAT_100a9310 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100a930a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*DAT_100a9310)(param_2,param_3,param_4,param_1);
    return;
  }
  return;
}

