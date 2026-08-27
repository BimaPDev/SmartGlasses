/* FUN_2c440d80 @ 0x2c440d80 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c440d80(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int unaff_r5;
  int unaff_r7;
  char in_OV;
  int in_stack_0000024c;
  
  *(short *)(param_1 + 0x12) = (short)param_2;
  param_2 = param_2 >> 0x18;
  if (-1 < param_2) {
    *(int *)((param_4 + unaff_r7) * 0x800 + 0x68) = unaff_r7 << 0x1c;
    uRam00000588 = 0x588;
    iRam0000058c = in_stack_0000024c;
    iRam00000590 = param_4 + 0xe1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_2 != 0 && in_OV == '\x01') {
    *(undefined1 **)(param_4 + 0x50) = &LAB_2c4412fc;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar1 = (int *)(param_1 >> 2);
  *piVar1 = param_1;
  piVar1[1] = param_2;
  piVar1[2] = in_stack_0000024c;
  piVar1[3] = (int)piVar1;
  piVar1[4] = unaff_r5;
  piVar1[5] = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

