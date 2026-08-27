/* FUN_2c4edf94 @ 0x2c4edf94 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4edf94(undefined4 param_1)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = FUN_2c602408();
  if (uVar1 < 0x12) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x17,_LAB_2c4ee010,_LAB_2c4ee00c,_LAB_2c4ee008,uVar1);
  }
  if ((*_LAB_2c4ee004 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*_LAB_2c4ee004 + 4), UNRECOVERED_JUMPTABLE != (code *)0x0))
  {
                    /* WARNING: Could not recover jumptable at 0x2c4edfb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1);
    return;
  }
  return;
}

