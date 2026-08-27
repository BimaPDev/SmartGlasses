/* FUN_2c2c59b2 @ 0x2c2c59b2 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2c59b2(undefined4 param_1,int *param_2)

{
  int unaff_r5;
  int in_r12;
  undefined4 in_cr0;
  undefined4 in_cr5;
  undefined4 in_cr13;
  undefined1 auStack_20 [12];
  
  coprocessor_function2(0,8,6,in_cr0,in_cr13,in_cr5);
  *(char *)(unaff_r5 + 7) = (char)uRam2c2c59c4;
  *(int *)((int)auStack_20 * *param_2 + param_2[3]) = param_2[6];
  coprocessor_store(0,in_cr0,in_r12 + -0x250);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

