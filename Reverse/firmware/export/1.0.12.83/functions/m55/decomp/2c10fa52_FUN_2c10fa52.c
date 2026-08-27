/* FUN_2c10fa52 @ 0x2c10fa52 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c10fa52(uint param_1,undefined4 param_2,int param_3)

{
  int unaff_r4;
  int unaff_r10;
  
  *(int *)((unaff_r10 + -0x20202020) - (uint)(param_1 < 0xffffff03)) = unaff_r4 - (param_3 >> 0xd);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

