/* FUN_2c311ae6 @ 0x2c311ae6 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c311ae6(int param_1)

{
  int unaff_r4;
  undefined2 unaff_r5;
  int unaff_r7;
  undefined4 unaff_lr;
  char in_NG;
  
  while( true ) {
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -4);
    *(undefined4 *)register0x00000054 = unaff_lr;
    if (in_NG == '\0') break;
    *(undefined2 *)(param_1 + 2) = unaff_r5;
    unaff_r7 = unaff_r7 + -0x83;
    in_NG = unaff_r4 << 3 < 0;
  }
  *(int *)(unaff_r4 + param_1) = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

