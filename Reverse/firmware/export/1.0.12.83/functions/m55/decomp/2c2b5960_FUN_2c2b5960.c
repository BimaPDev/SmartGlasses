/* FUN_2c2b5960 @ 0x2c2b5960 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2b5960(void)

{
  undefined2 *in_r3;
  undefined2 unaff_r6;
  
  software_bkpt(0x55);
  *in_r3 = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

