/* FUN_2c457d5a @ 0x2c457d5a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c457d5a(void)

{
  undefined4 unaff_r4;
  undefined4 in_cr3;
  undefined4 in_cr8;
  
  coprocessor_storelong(6,in_cr8,unaff_r4);
  coprocessor_movefromRt(3,8,in_cr3);
  coprocessor_movefromRt2(3,8,in_cr3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

