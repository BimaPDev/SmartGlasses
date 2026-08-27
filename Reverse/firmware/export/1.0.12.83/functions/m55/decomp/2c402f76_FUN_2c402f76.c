/* FUN_2c402f76 @ 0x2c402f76 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c402f76(void)

{
  int unaff_r4;
  int unaff_r5;
  undefined2 in_stack_000003ac;
  
  *(undefined2 *)(unaff_r5 + 0x3e) = in_stack_000003ac;
  *(short *)(unaff_r4 + 0x3e) = (short)unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

