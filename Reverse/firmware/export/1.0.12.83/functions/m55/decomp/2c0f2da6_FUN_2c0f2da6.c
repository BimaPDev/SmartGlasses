/* FUN_2c0f2da6 @ 0x2c0f2da6 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0f2da6(short param_1,uint param_2,undefined4 param_3,int param_4)

{
  uint *unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
  if (unaff_r5 != 0) {
    param_1 = param_1 + -0x8a;
    param_2 = (uint)unaff_r4 >> 0xd;
    if (unaff_r6 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_r7 = unaff_r7 + -0xb8;
  }
  if (unaff_r6 < -0xec) {
    *unaff_r4 = param_2;
    unaff_r4[1] = (uint)unaff_r4;
    unaff_r4[2] = 0x2c0f2fc4;
    unaff_r4[3] = unaff_r6 + 0xecU;
  }
  if ((unaff_r6 + 0xecU != 0) && (unaff_r7 != 0)) {
    iRam2c0f2e38 = param_4 << 1;
    *(short *)(param_2 + 0x1c) = param_1;
    iRam2c0f2e3c = *(int *)(unaff_r6 + 0x4d) + -0x19;
    uRam2c0f2e5c = 0x97;
    uRam2c0f2e80 = (undefined1)-param_4;
    *(undefined1 *)(-param_4 + 8) = uRam2c0f2e80;
    software_bkpt(0x8c);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

