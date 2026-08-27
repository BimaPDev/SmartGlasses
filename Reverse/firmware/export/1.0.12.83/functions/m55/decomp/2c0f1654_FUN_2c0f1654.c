/* FUN_2c0f1654 @ 0x2c0f1654 */

/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_2c0f1654(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  undefined4 in_stack_00000048;
  
  if (unaff_r5 != 0) {
    *param_4 = param_1;
    param_4[1] = param_3;
    param_4[2] = param_4;
    *param_4 = param_2;
    param_4[1] = in_stack_00000048;
    param_4[2] = unaff_r4;
    param_4[3] = 0x2c0f185e;
    param_4[4] = unaff_r6 + -0x168;
    software_bkpt(0x66);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(unaff_r6 + -0xd0 + unaff_r4) = (short)unaff_r7 + -0x3e;
  *(short *)(unaff_r6 + -0x94) = (short)&stack0xfffffff0 + 0x1c0;
  if (unaff_r6 != 0x2c8) {
    return CONCAT44(unaff_r4,param_3);
  }
  *(uint *)((param_3 >> 0x1c) + 0x140) = (uint)*(ushort *)(unaff_r7 + -0x228);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

