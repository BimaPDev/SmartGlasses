/* FUN_100d4038 @ 0x100d4038 */

undefined4 FUN_100d4038(void)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*DAT_100d4048 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*DAT_100d4048 + 4), UNRECOVERED_JUMPTABLE != (code *)0x0))
  {
                    /* WARNING: Could not recover jumptable at 0x100d4042. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}

