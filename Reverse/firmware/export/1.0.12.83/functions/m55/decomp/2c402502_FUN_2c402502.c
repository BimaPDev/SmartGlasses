/* FUN_2c402502 @ 0x2c402502 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c402502(undefined4 param_1,int param_2,int param_3)

{
  int unaff_r4;
  int unaff_r6;
  uint in_stack_00000388;
  
  if (unaff_r4 == 0) {
    *(char *)(param_3 + *(int *)(param_2 + 0x2c402704)) = (char)unaff_r6;
    *(char *)(unaff_r6 + 1) = (char)((unaff_r6 << 2) >> (in_stack_00000388 & 0xff));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

