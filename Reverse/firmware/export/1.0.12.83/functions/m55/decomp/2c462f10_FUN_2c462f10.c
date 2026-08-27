/* FUN_2c462f10 @ 0x2c462f10 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c462f10(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_r5;
  int unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_lr;
  char in_NG;
  
  do {
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(undefined4 *)((int)register0x00000054 + -8) = unaff_r7;
    *(int *)((int)register0x00000054 + -0xc) = unaff_r5;
    *(int *)((int)register0x00000054 + -0x10) = param_3;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
    *(undefined4 *)register0x00000054 = param_1;
    unaff_r5 = (int)*(short *)(unaff_r6 + param_3);
  } while (in_NG == '\0');
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

