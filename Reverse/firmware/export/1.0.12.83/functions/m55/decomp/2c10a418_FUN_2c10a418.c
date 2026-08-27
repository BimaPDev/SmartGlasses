/* FUN_2c10a418 @ 0x2c10a418 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c10a418(undefined4 param_1,undefined2 param_2)

{
  int unaff_r5;
  
  *(undefined2 *)(unaff_r5 + 0x30) = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

