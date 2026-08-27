/* FUN_2c29cda2 @ 0x2c29cda2 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c29cda2(undefined1 param_1)

{
  int unaff_r7;
  
  *(undefined1 *)(unaff_r7 * 2) = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

