/* FUN_2c0b2b4c @ 0x2c0b2b4c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0b2b4c(void)

{
  int in_stack_000003d8;
  
  *(short *)(in_stack_000003d8 + -0xe0) = (short)in_stack_000003d8 + -0xfe;
  *(char *)(in_stack_000003d8 + -0x16e) = (char)in_stack_000003d8 + -0x7d;
  *(int *)(in_stack_000003d8 + -0x1c0) = in_stack_000003d8 + -0x1fc;
  *(int *)((in_stack_000003d8 + -0x27b) * 2) = in_stack_000003d8 + -0x27b;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

