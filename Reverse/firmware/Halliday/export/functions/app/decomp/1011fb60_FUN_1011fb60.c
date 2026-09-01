/* FUN_1011fb60 @ 0x1011fb60 */

void FUN_1011fb60(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 8) + 4);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 2;
                    /* WARNING: Could not recover jumptable at 0x1011fb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

