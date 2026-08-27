/* FUN_2c06121c @ 0x2c06121c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c06121c(int param_1,int param_2,undefined2 param_3)

{
  int unaff_r4;
  char in_CY;
  
  *(undefined2 *)(param_1 + param_2) = param_3;
  if (in_CY == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_r4 + 0x1b) = (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

