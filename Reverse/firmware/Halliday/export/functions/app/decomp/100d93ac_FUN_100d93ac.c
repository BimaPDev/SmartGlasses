/* FUN_100d93ac @ 0x100d93ac */

void FUN_100d93ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)*DAT_100d93d4;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    uVar1 = FUN_10131c1c();
                    /* WARNING: Could not recover jumptable at 0x100d93cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1,param_2,param_3,param_4);
    return;
  }
  return;
}

