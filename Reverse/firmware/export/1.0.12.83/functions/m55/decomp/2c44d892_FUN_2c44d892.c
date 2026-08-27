/* FUN_2c44d892 @ 0x2c44d892 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c44d892(void)

{
  undefined1 in_r3;
  int in_stack_00000238;
  
  *(undefined1 *)(in_stack_00000238 + 9) = in_r3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

