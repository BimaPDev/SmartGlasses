/* FUN_2c28ac2e @ 0x2c28ac2e */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c28ac2e(undefined4 param_1,short *param_2)

{
  int unaff_r4;
  int unaff_r6;
  short unaff_r7;
  undefined4 in_cr3;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  *(char *)(unaff_r6 * 8) = (char)unaff_r6 * '\x04';
  *param_2 = unaff_r7 + 4;
  *(int *)(*(int *)(unaff_r4 + 0x74) + 0x68) = *(int *)(unaff_r4 + 0x74);
  coprocessor_function2(0xf,2,7,in_cr15,in_cr3,in_cr14);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

