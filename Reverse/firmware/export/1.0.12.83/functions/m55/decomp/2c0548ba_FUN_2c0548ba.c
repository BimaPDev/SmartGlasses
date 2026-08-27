/* FUN_2c0548ba @ 0x2c0548ba */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0548ba(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  undefined4 in_cr0;
  undefined4 in_cr3;
  
  *(undefined4 *)(unaff_r5 + 0x48) = unaff_r6;
  coprocessor_movefromRt(2,5,2,in_cr3,in_cr0);
  *(undefined4 *)(param_3 + 0x2c) = unaff_r4;
  if ((param_3 + 8U >> 0xb & 1) == 0 || param_3 + 8U >> 0xc == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

