/* FUN_2c10de16 @ 0x2c10de16 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c10de16(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 unaff_r4;
  uint unaff_r6;
  int unaff_r7;
  
  *(short *)(param_1 + 0x2c) = (short)(unaff_r6 & 0x550055);
  *(undefined1 *)(unaff_r7 + 0x1a) = param_4;
  *(undefined1 *)((unaff_r6 & 0x550055) + 0x1a) = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

