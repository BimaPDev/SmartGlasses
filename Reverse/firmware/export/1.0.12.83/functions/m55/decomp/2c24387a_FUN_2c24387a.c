/* FUN_2c24387a @ 0x2c24387a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c24387a(int param_1,undefined1 *param_2)

{
  int unaff_r4;
  int unaff_r5;
  char unaff_r7;
  
  *param_2 = (char)(unaff_r5 << 1);
  *(int *)(param_2 + param_1) = unaff_r5 << 1;
  *(char *)(unaff_r4 >> 5) = unaff_r7 << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

