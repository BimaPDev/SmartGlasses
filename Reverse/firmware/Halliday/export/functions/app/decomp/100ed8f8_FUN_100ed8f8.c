/* FUN_100ed8f8 @ 0x100ed8f8 */

undefined4 FUN_100ed8f8(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 < 3) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 * 0x24 + DAT_100ed914 + 0x1c);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100ed90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2);
      return uVar1;
    }
  }
  return 0;
}

