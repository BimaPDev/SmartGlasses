/* FUN_2c24b72c @ 0x2c24b72c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c24b72c(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  short unaff_r4;
  short sVar1;
  int unaff_r6;
  int iVar2;
  int unaff_r7;
  undefined8 *unaff_r10;
  int unaff_lr;
  char in_OV;
  bool bVar3;
  undefined4 in_cr14;
  undefined8 in_d7;
  
  sVar1 = *(short *)(param_3 + param_2);
  *(char *)(unaff_r6 + unaff_r7) = (char)unaff_r6;
  bVar3 = param_3 >> 1 == 0;
  if (bVar3 || in_OV != '\0') {
    sVar1 = unaff_r4 << 3;
  }
  else {
    coprocessor_loadlong(0xd,in_cr14,unaff_lr + 0x37c);
    if (!bVar3 && in_OV == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(short *)(param_4 + 4) = sVar1;
  iVar2 = (param_4 << 2) >> 1;
  software_bkpt(0);
  *unaff_r10 = in_d7;
  *(char *)(unaff_r6 + 0x1d) = (char)iVar2;
  *(short *)(unaff_r6 + 0x22) = (short)iVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

