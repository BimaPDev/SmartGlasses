/* FUN_2c114f60 @ 0x2c114f60 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c114f60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *unaff_r5;
  int unaff_r6;
  int unaff_r7;
  undefined4 unaff_r11;
  bool in_CY;
  undefined4 in_cr2;
  undefined8 in_d0;
  undefined8 in_d30;
  
  *(undefined4 *)(unaff_r6 + 0x50) = param_2;
  if (!in_CY) {
    iVar1 = unaff_r7 >> 0x1a;
    *(char *)(iVar1 + 0x18) = (char)(unaff_r7 >> 0x1a);
    while (((uint)unaff_r5 & 0x40000000) != 0) {
      *unaff_r5 = (char)unaff_r7;
      VectorCompareGreaterThan(0,in_d30,2);
      unaff_r7 = 0;
    }
    *(undefined2 *)(iVar1 * 0x200000 + 0x36) = 0;
    VectorFloatToSignedRound(in_d0,1,4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_loadlong(4,in_cr2,unaff_r11);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

