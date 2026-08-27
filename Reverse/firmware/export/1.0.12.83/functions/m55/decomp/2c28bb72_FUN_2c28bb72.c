/* FUN_2c28bb72 @ 0x2c28bb72 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c28bb72(void)

{
  undefined4 unaff_r5;
  int unaff_r11;
  undefined4 unaff_pc;
  
  *(undefined4 *)(unaff_r11 + 0x110) = unaff_r5;
  *(undefined4 *)(unaff_r11 + 0x114) = unaff_pc;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

