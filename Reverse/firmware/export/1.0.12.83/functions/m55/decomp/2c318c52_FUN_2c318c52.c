/* FUN_2c318c52 @ 0x2c318c52 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c318c52(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_r4;
  undefined2 unaff_r6;
  undefined4 unaff_r7;
  undefined4 in_cr12;
  undefined8 unaff_d13;
  undefined8 in_d30;
  
  VectorShiftLeft(unaff_d13,in_d30,2,1);
  *(int *)param_1 = param_1;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)(param_1 + 8) = unaff_r4;
  *(undefined4 *)(param_1 + 0xc) = unaff_r7;
  coprocessor_loadlong(9,in_cr12,&stack0xfffffff4);
  *(undefined2 *)(param_1 + 0x22) = unaff_r6;
  software_bkpt(0xc9);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

