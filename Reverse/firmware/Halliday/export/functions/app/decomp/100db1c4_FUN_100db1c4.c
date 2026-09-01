/* FUN_100db1c4 @ 0x100db1c4 */

void FUN_100db1c4(undefined4 param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)*DAT_100db1e0;
  uVar1 = FUN_1011ea10();
                    /* WARNING: Could not recover jumptable at 0x100db1de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0x19,param_1,uVar1);
  return;
}

