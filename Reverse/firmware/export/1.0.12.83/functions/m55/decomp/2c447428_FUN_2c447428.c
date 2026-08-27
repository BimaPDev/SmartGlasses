/* FUN_2c447428 @ 0x2c447428 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c447428(void)

{
  software_bkpt(0xbf);
  software_interrupt(0xbc);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

