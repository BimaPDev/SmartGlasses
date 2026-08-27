/* FUN_2c2e06a6 @ 0x2c2e06a6 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2e06a6(undefined4 param_1,int param_2,ushort param_3)

{
  *(ushort *)(param_2 + 0x14) = (param_3 & 0xfffe) * 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

