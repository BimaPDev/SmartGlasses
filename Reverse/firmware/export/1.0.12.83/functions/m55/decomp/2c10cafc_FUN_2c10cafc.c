/* FUN_2c10cafc @ 0x2c10cafc */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c10cafc(undefined2 param_1,int param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  uint unaff_r4;
  int iVar2;
  int *piVar3;
  int unaff_r6;
  int unaff_r7;
  int unaff_r9;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 in_cr6;
  int iStack00000008;
  int iStack0000010c;
  
  *(undefined2 *)(unaff_r4 + 8) = param_1;
  *(uint *)(unaff_r4 * 0x20 + 0x24) = unaff_r4 * 0x20;
  *(int *)((unaff_r4 >> 0x13) + 0x70) = param_4;
  coprocessor_load(1,in_cr4,unaff_r9 + -0x138);
  coprocessor_load(1,in_cr6,unaff_r9 + -0x3c8);
  *(int *)((unaff_r4 >> 0x13) + 0x20) = unaff_r7;
  if (param_4 == 0) {
    *(short *)(unaff_r6 + 2) = (short)unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iStack0000010c = param_2 >> 0x18;
  coprocessor_store(0xe,in_cr0,unaff_r6 + 0x3fc);
  coprocessor_function2(2,2,0,in_cr0,in_cr2,in_cr4);
  iVar2 = *(int *)((unaff_r7 >> 0xe) + -0xc);
  piVar3 = (int *)(iVar2 + -0x18);
  *piVar3 = (int)&stack0x00000188 * 0x20000;
  *(int **)(iVar2 + -0x14) = piVar3;
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x2c10c41e);
  iStack00000008 = param_2;
  (*pcVar1)();
}

