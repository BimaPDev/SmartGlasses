/* FUN_10138208 @ 0x10138208 */

void FUN_10138208(int param_1)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x58) = uVar1 | 0x40;
  if (((-1 < (int)(uVar1 << 0x19)) && (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0)) &&
     (UNRECOVERED_JUMPTABLE = (code *)**(undefined4 **)(param_1 + 4),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10138232. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}

