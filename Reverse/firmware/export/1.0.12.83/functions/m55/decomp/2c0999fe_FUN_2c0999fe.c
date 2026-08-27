/* FUN_2c0999fe @ 0x2c0999fe */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0999fe(void)

{
  undefined4 in_r3;
  int unaff_lr;
  undefined4 unaff_pc;
  
  *(undefined4 *)(unaff_lr + -0x88) = unaff_pc;
  *(undefined4 *)(unaff_lr + -0x84) = in_r3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

