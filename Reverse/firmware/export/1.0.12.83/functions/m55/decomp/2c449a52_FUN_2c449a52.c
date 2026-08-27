/* FUN_2c449a52 @ 0x2c449a52 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c449a52(undefined4 param_1,int *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int unaff_r4;
  int unaff_r6;
  int *unaff_r7;
  char in_OV;
  int iStack000001c0;
  
  iVar2 = *unaff_r7;
  iVar3 = unaff_r7[1];
  *(short *)((int)unaff_r7 + iVar3 + 8) = (short)param_3;
  *(char *)((int)unaff_r7 + 0x12) = (char)iVar3;
  *(char *)(unaff_r6 + 0x15) = (char)iVar2;
  *(char *)(param_3 + (int)unaff_r7) = (char)param_3;
  software_bkpt(0x54);
  if (in_OV != '\0') {
    *(short *)(iVar2 + unaff_r4) = (short)param_3;
    *(short *)(unaff_r4 + 6) = (short)param_2;
    software_interrupt(0x55);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_r6 + 0x19) = (char)unaff_r7;
  *param_2 = iVar2;
  param_2[1] = (int)param_2;
  param_2[2] = unaff_r4;
  param_2[3] = param_3;
  param_2[4] = (int)unaff_r7;
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xcc,0x2c4495a2);
  iStack000001c0 = param_3;
  (*pcVar1)();
}

