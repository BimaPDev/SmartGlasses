/* FUN_2c459b44 @ 0x2c459b44 */

void FUN_2c459b44(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined2 unaff_r5;
  int unaff_r6;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000290;
  
  *(undefined2 *)(param_2 + 0x18) = unaff_r5;
  *(short *)(unaff_r6 + 0xe) = (short)param_1;
                    /* WARNING: Could not recover jumptable at 0x2c45a292. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,0xf9,in_stack_00000290,param_3);
  return;
}

