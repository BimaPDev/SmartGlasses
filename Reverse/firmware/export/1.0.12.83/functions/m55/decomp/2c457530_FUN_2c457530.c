/* FUN_2c457530 @ 0x2c457530 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c457530(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  int unaff_r4;
  
  *(undefined1 *)(unaff_r4 + 0x1e) = param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

