/* FUN_2c31710c @ 0x2c31710c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c3171fe) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c31710c(uint param_1,uint *param_2,uint param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  int unaff_r7;
  int unaff_r9;
  int unaff_r11;
  uint unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr13;
  
  piVar1 = _DAT_2c317420;
  while( true ) {
    *(uint *)((int)register0x00000054 + -4) = unaff_lr;
    *(uint *)((int)register0x00000054 + -8) = unaff_r5;
    *(uint *)((int)register0x00000054 + -0xc) = param_4;
    *(uint *)((int)register0x00000054 + -0x10) = param_1;
    if (in_OV != '\0') break;
    param_1 = *(uint *)(unaff_r11 + 4);
    unaff_r4 = 0x2c3174f8;
    *(uint *)((int)register0x00000054 + 0x2f8) = param_4;
    param_3 = (uint)(byte)param_2[7];
    unaff_r11 = unaff_r11 + 0xa0;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
  }
  uVar2 = *(uint *)(param_4 + 0x6c);
  if (unaff_r7 == 0) {
    param_2[5] = param_3;
    coprocessor_storelong(8,in_cr1,unaff_r9 + -0x98);
    *(uint *)(unaff_r5 + 0x24) = param_3 >> 2;
    *param_2 = param_3 >> 2;
    param_2[1] = (uint)param_2;
    param_2[2] = param_3;
    param_2[3] = uVar2;
    param_2[4] = unaff_r4;
    param_2[5] = unaff_r5;
    param_2[6] = unaff_r5 >> 0x1c;
    param_2[7] = 0x81;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_ZR || in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((unaff_r7 >> 0x16 & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(unaff_r6 + 0x1e) = (short)((param_1 ^ unaff_r6) << 0xc);
  coprocessor_store(4,in_cr13,*piVar1 + -1000);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

