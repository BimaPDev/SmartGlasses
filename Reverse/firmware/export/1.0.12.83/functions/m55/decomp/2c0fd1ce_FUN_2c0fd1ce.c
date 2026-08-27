/* FUN_2c0fd1ce @ 0x2c0fd1ce */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c0fcbce) */

void FUN_2c0fd1ce(undefined1 *param_1,int param_2,int param_3,int param_4)

{
  int unaff_r4;
  int unaff_r5;
  int *unaff_r7;
  
  *(int *)(param_3 + 0x4c) = unaff_r5;
  *(char *)(param_2 + 1) = (char)param_4;
  *unaff_r7 = param_3;
  unaff_r7[1] = param_4;
  unaff_r7[2] = unaff_r4;
  unaff_r7[3] = unaff_r5;
  *param_1 = 0x50;
  *(undefined4 *)(unaff_r5 + 0x5f) = param_1;
  *(undefined4 *)(unaff_r5 + 99) = 0x2c0fd40b;
  *(int *)(unaff_r5 + 0x67) = param_4;
  *(undefined4 **)(unaff_r5 + 0x6b) = (undefined4 *)(unaff_r5 + 0x5f);
  uRam2c0fd43b = (short)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

