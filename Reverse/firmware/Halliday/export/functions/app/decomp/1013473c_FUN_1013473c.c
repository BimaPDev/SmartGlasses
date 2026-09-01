/* FUN_1013473c @ 0x1013473c */

void FUN_1013473c(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_5;
  if ((param_2 == 0) && (param_4 != 0)) {
    (*UNRECOVERED_JUMPTABLE)();
    UNRECOVERED_JUMPTABLE = (code *)*param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x1013475e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_5,0);
  return;
}

