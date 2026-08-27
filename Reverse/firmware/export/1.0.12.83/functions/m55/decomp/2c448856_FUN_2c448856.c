/* FUN_2c448856 @ 0x2c448856 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c448856(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_r3;
  undefined4 *unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
  *(short *)(unaff_r7 + 0x10) = (short)unaff_r7;
  if (unaff_r6 == 0x94) {
    uVar1 = (uint)uRam2c448894;
    *(undefined4 *)(uVar1 + 0x30) = *unaff_r5;
    func_0x2ba004f0(0x2c448894,param_2 + 0xc,param_2 + 0xc >> 0x13,uVar1,param_4);
    unaff_r5[0xe0] = extraout_r3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

