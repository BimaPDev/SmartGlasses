/* FUN_2c2dbdfe @ 0x2c2dbdfe */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2dbdfe(undefined4 param_1,int param_2,undefined1 param_3,undefined4 param_4)

{
  int unaff_r4;
  
  *(undefined1 *)(param_2 + 6) = param_3;
  *(undefined4 *)((unaff_r4 * 4 + 0xef) * 0x20) = param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

