/* FUN_2c433054 @ 0x2c433054 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c433054(void)

{
  software_interrupt(10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

