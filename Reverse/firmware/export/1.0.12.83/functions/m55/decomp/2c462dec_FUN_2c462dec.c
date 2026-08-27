/* FUN_2c462dec @ 0x2c462dec */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c462dec(void)

{
  int in_r3;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  undefined4 in_cr14;
  
  if (unaff_r6 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_storelong(0xb,in_cr14,unaff_r7);
  *(undefined2 *)(*(ushort *)(unaff_r5 + 0x26) + 0x3a) = *(undefined2 *)(unaff_r7 + -0x3fc + in_r3);
  if (in_r3 + unaff_r7 == 0 || in_r3 + unaff_r7 < 0 != SCARRY4(in_r3,unaff_r7)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

