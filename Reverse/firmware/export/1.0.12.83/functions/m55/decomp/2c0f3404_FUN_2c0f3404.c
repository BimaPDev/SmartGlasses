/* FUN_2c0f3404 @ 0x2c0f3404 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0f3404(uint param_1)

{
  int unaff_r5;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined4 in_cr0;
  
  coprocessor_load(5,in_cr0,0xfffffccc);
  *(undefined4 *)(unaff_r5 + 0x54) = unaff_r8;
  *(undefined4 *)(unaff_r5 + 0x58) = unaff_lr;
  *(short *)((param_1 >> 8) + 0x32) = (short)(undefined4 *)(unaff_r5 + 0x54);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

