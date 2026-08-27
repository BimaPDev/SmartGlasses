/* FUN_2c458832 @ 0x2c458832 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c458832(undefined4 param_1,int param_2)

{
  int unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  undefined4 in_cr14;
  
  *(char *)(unaff_r4 + 0x19) = (char)unaff_r6;
  software_bkpt(2);
  coprocessor_store(0xc,in_cr14,unaff_r5 + -0x19c);
  *(undefined4 *)(param_2 + 0x78) = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

