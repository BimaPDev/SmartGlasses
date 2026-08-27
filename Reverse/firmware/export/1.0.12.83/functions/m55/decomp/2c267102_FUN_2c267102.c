/* FUN_2c267102 @ 0x2c267102 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c267102(void)

{
  int unaff_r6;
  undefined4 in_cr3;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  coprocessor_function(0xe,0xf,7,in_cr14,in_cr15,in_cr14);
  coprocessor_moveto(0,7,7,unaff_r6 << 2,in_cr14,in_cr3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

