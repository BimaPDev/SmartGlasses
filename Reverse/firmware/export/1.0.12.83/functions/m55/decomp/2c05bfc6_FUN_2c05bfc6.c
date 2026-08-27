/* FUN_2c05bfc6 @ 0x2c05bfc6 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c05bfc6(int param_1,undefined2 param_2,int param_3,int param_4)

{
  int unaff_r5;
  undefined4 in_cr0;
  undefined4 in_cr2;
  
  *(undefined2 *)(unaff_r5 + 0xe) = param_2;
  coprocessor_loadlong(8,in_cr0,param_3 + 0x380);
  *(short *)(param_1 * 2) = (short)param_1;
  coprocessor_load(2,in_cr2,&stack0x00000384);
  *(int *)((param_4 + 0x5e) * 2) = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

