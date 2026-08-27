/* FUN_2c084bb6 @ 0x2c084bb6 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c084bb6(undefined2 param_1)

{
  uint unaff_r4;
  
  *(undefined2 *)(unaff_r4 + 8) = param_1;
  software_bkpt(0xe9);
  *(short *)((unaff_r4 >> 3) * 0x1000001) = (short)(char)(byte)(unaff_r4 >> 0x1b);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

