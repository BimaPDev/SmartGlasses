/* FUN_2c45f4e2 @ 0x2c45f4e2 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c45f4e2(void)

{
  undefined4 unaff_r6;
  undefined4 in_cr11;
  
  coprocessor_storelong(3,in_cr11,unaff_r6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

