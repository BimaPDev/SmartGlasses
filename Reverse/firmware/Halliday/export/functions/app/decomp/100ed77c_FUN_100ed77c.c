/* FUN_100ed77c @ 0x100ed77c */

void FUN_100ed77c(uint param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 != 0) {
    if (2 < param_1) {
      FUN_100a5b78((DAT_100ed7b8 - DAT_100ed7b4) * 0x20 & 0xff00U | 0x1140011,DAT_100ed7bc,
                   DAT_100ed7c0);
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 * 0x24 + DAT_100ed7c4 + 0x14);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100ed7ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_2);
      return;
    }
  }
  return;
}

