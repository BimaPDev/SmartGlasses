/* FUN_2c2163b6 @ 0x2c2163b6 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2163b6(void)

{
  undefined4 unaff_r8;
  undefined4 in_cr7;
  undefined4 in_cr8;
  
  coprocessor_moveto(0xd,0,4,unaff_r8,in_cr8,in_cr7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

