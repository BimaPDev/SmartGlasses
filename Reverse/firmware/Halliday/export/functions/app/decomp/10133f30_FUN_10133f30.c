/* FUN_10133f30 @ 0x10133f30 */

void FUN_10133f30(int param_1)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_10133e7c(param_1 + 100);
  uVar1 = *(uint *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x40) = uVar1 | 1;
  if ((-1 < (int)(uVar1 << 0x1f)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 4) + 0x18),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10133f5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1);
    return;
  }
  return;
}

