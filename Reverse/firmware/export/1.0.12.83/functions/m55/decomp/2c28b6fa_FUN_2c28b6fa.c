/* FUN_2c28b6fa @ 0x2c28b6fa */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c28b6fa(void)

{
  undefined4 unaff_lr;
  undefined4 in_cr1;
  undefined4 in_cr10;
  
  coprocessor_moveto(0xe,0,0,unaff_lr,in_cr10,in_cr1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

