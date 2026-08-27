/* FUN_1409e6d4 @ 0x1409e6d4 */

void FUN_1409e6d4(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*DAT_1409e6e4 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*DAT_1409e6e4 + 0x14), UNRECOVERED_JUMPTABLE != (code *)0x0
     )) {
                    /* WARNING: Could not recover jumptable at 0x1409e6de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}

