/* FUN_2c4169bc @ 0x2c4169bc */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c4169bc(int param_1)

{
  sRam2c416d72 = (short)&stack0xfffffff0 + 800;
  *(short *)(param_1 * 4 + 0x16) = sRam2c416d72;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

