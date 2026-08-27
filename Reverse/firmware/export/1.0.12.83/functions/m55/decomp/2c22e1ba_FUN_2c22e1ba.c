/* FUN_2c22e1ba @ 0x2c22e1ba */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c22e1ba(undefined4 param_1,int param_2)

{
  uint unaff_r5;
  undefined2 unaff_r7;
  undefined4 in_cr0;
  undefined4 in_cr14;
  
  *(undefined2 *)(unaff_r5 + 6) = unaff_r7;
  coprocessor_function(0,0xe,5,in_cr0,in_cr14,in_cr0);
  *(char *)(param_2 + 4) = (char)(unaff_r5 >> 9);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

