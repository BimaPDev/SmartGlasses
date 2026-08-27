/* FUN_2c445846 @ 0x2c445846 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c445846(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int unaff_r9;
  undefined4 in_cr10;
  undefined4 in_cr12;
  undefined4 in_cr14;
  
  while( true ) {
    uVar1 = param_3 >> 0x10;
    do {
      if (SBORROW4(uVar1,0x28)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      unaff_r6 = unaff_r6 + param_4 + (uint)(0x27 < uVar1);
      *(undefined4 *)(unaff_r6 + 0x50) = param_2;
      param_4 = unaff_r7 + 4;
    } while (unaff_r5 == 0);
    if (param_4 != 0) break;
    unaff_r6 = uVar1 << 0x18;
    param_4 = unaff_r7 + -0x51;
    software_interrupt(0xef);
    coprocessor_movefromRt(5,5,3,in_cr12,in_cr10);
    param_2 = 0;
  }
  coprocessor_storelong(0xd,in_cr14,unaff_r9 + 0x3c0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

