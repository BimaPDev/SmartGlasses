/* FUN_2c46366a @ 0x2c46366a */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c46366a(int param_1,int param_2,int param_3)

{
  int iVar1;
  int unaff_r4;
  int iVar2;
  int unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  bool bVar3;
  undefined4 in_cr2;
  undefined4 in_cr9;
  undefined4 in_cr13;
  
  if (in_ZR || in_NG != in_OV) {
    *(int *)unaff_r5 = unaff_r5;
    *(undefined4 *)(unaff_r5 + 4) = unaff_r6;
    iVar1 = param_1 >> 0x20;
    iVar2 = -(uint)((param_1 >> 0x1f & 1U) == 0);
    *(int *)(iVar1 * 2) = iVar1;
    *(undefined4 *)(iVar1 + iVar2 + -0x34004) = unaff_lr;
    *(undefined4 *)(iVar1 + iVar2 + -0x34008) = unaff_r6;
    *(undefined4 *)(iVar1 + iVar2 + -0x3400c) = 0x2c463d20;
    uRam588c7a80 = 0x40;
    *(undefined1 *)(unaff_r4 + 0x2c463cd6) = 0x40;
    *(int *)(unaff_r4 + 0x54) = unaff_r4;
    uRam2c463c98 = 0x8b;
    uRam2c463ccf = 0x2c463c8b;
    *(int *)(unaff_r4 + 0x5d) = unaff_r4 + 9;
    coprocessor_function2(0xc,9,2,in_cr2,in_cr13,in_cr9);
    coprocessor_function2(0xc,0xb,2,in_cr2,in_cr13,in_cr9);
    uRam2c463dc2 = (ushort)bRam2c463db4;
    uRam2c463db6 = (uint)bRam2c463db4;
    _DAT_00000078 = (ushort)bRam2c463db4;
    *(undefined4 *)(uRam2c463db6 + 0x14) = 0x58;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = param_3 >> 0x17 < 0;
  iVar2 = 0x2c4638fc;
  software_bkpt(0x86);
  if (bVar3 != (bool)in_OV) {
    iVar2 = 0x2c4637cc;
  }
  if (bVar3 != (bool)in_OV) {
    *(int *)(param_3 * 2) = unaff_r5;
  }
  if (bVar3 == (bool)in_OV) {
    *(int *)(unaff_r5 + param_1) = iVar2;
  }
  *(short *)(iVar2 + param_2) = (short)iVar2;
  if (param_3 >> 0x17 == 0 || bVar3 != (bool)in_OV) {
    *(char *)(unaff_r5 + 5) = (char)param_1 + 'r';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_3 + 0x2a) = (short)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

