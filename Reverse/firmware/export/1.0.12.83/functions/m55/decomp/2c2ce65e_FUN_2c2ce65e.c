/* FUN_2c2ce65e @ 0x2c2ce65e */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c2ce688) */

void FUN_2c2ce65e(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int unaff_r7;
  
  *(char *)(param_2 + 2) = (char)unaff_r7;
  if (unaff_r7 << 8 < 0) {
    *(int *)(param_4 * 2 + 0x68) = unaff_r7 << 8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

