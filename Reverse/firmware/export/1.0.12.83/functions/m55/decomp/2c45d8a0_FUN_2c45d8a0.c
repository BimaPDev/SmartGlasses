/* FUN_2c45d8a0 @ 0x2c45d8a0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c45d8a0(undefined2 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined2 unaff_r4;
  uint unaff_r5;
  uint *unaff_r6;
  int unaff_r7;
  uint unaff_r9;
  int unaff_r11;
  undefined4 unaff_pc;
  
  *(undefined2 *)(param_4 + 0x38) = param_1;
  uVar1 = unaff_r9 | unaff_r11 << 0x13;
  software_interrupt(0xb7);
  *(undefined4 *)(unaff_r7 + -0x2dc) = unaff_pc;
  *(undefined4 **)(unaff_r7 + -0x2d8) = (undefined4 *)(unaff_r7 + -0x2dc);
  *(undefined2 *)(unaff_r6 + 4) = unaff_r4;
  unaff_r6[2] = uVar1;
  *unaff_r6 = uVar1;
  unaff_r6[1] = 0x2c45d40c;
  unaff_r6[2] = 0;
  unaff_r6[3] = unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

