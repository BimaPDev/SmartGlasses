/* FUN_2c08b438 @ 0x2c08b438 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c08b438(undefined4 param_1,int param_2)

{
  undefined1 unaff_r6;
  
  *(undefined1 *)(param_2 + 7) = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

