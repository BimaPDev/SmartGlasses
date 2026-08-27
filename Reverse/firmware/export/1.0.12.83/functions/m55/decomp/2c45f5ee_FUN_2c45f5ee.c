/* FUN_2c45f5ee @ 0x2c45f5ee */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c45f5ee(int param_1)

{
  code *pcVar1;
  int extraout_r1;
  int extraout_r3;
  int unaff_r4;
  int unaff_r5;
  int iVar2;
  int unaff_r6;
  undefined4 *unaff_r7;
  undefined4 in_cr2;
  undefined4 in_cr5;
  undefined4 in_cr11;
  
  *(int *)(param_1 + 0x30) = unaff_r5;
  pcVar1 = pcRam2c45f600;
  (*pcRam2c45f600)();
  func_0x2c125522();
  *(int *)(unaff_r6 + extraout_r3) = extraout_r1;
  coprocessor_load(0xe,in_cr2,pcVar1);
  *(short *)(unaff_r5 + 0x32) = (short)unaff_r6;
  coprocessor_movefromRt(0xf,3,7,in_cr11,in_cr5);
  iVar2 = *(int *)(unaff_r7[2] + 0x30);
  unaff_r7[5] = *unaff_r7;
  unaff_r7[6] = unaff_r7[2];
  unaff_r7[7] = unaff_r7[3];
  unaff_r7[8] = iVar2;
  unaff_r7[9] = unaff_r7[4];
  if (0x35 < unaff_r4) {
    *(int *)(*(ushort *)(iVar2 + 0xc) + 0x48) = *(int *)(extraout_r1 + 0x30) << 5;
    iRam588bf088 = extraout_r1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

