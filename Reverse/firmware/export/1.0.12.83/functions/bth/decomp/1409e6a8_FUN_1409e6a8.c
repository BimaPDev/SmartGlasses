/* FUN_1409e6a8 @ 0x1409e6a8 */

void FUN_1409e6a8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*DAT_1409e6b8 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*DAT_1409e6b8 + 0x24), UNRECOVERED_JUMPTABLE != (code *)0x0
     )) {
                    /* WARNING: Could not recover jumptable at 0x1409e6b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}

