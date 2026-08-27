/* FUN_2c26c80a @ 0x2c26c80a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c26c80a(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_r5;
  int unaff_r6;
  undefined1 unaff_r7;
  
  *(char *)(param_3 + unaff_r5) = (char)unaff_r5;
  *(undefined1 *)(unaff_r5 + unaff_r6) = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

