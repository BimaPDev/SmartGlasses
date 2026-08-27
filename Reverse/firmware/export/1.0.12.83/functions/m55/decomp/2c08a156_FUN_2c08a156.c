/* FUN_2c08a156 @ 0x2c08a156 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c08a0d8) */

void FUN_2c08a156(uint param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_r4;
  int iVar4;
  undefined4 *unaff_r6;
  int unaff_r7;
  int unaff_r9;
  char in_NG;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr5;
  undefined4 in_cr8;
  undefined8 in_d6;
  undefined8 in_d24;
  int in_stack_000000e4;
  int in_stack_00000144;
  undefined4 in_stack_0000029c;
  
  if (in_NG == in_OV) {
    iVar3 = (int)*(short *)((int)unaff_r6 + (param_1 >> 0x10));
    coprocessor_storelong(9,in_cr1,iVar3 + 0x2a4);
    coprocessor_loadlong(9,in_cr1,iVar3 + -0x2cc);
    VectorHalvingSubtract(in_d24,in_d6,1,1);
    uVar2 = *(undefined4 *)*unaff_r6;
    *(char *)(iVar3 + -0x2c9) = (char)((uint)uVar2 >> 0x10);
    *(undefined4 *)(in_stack_000000e4 + 4) = in_stack_0000029c;
    coprocessor_loadlong(0xc,in_cr8,uVar2);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0,0x2c08a716);
    (*pcVar1)();
  }
  iRam00000076 = unaff_r7;
  if (in_OV != '\0') {
    *(undefined4 *)(unaff_r4 + 0x70) = 0x3e;
    *(short *)(unaff_r7 + 0x34) = (short)param_1;
    if (in_OV == '\0') {
      coprocessor_loadlong(0,in_cr5,unaff_r9);
      coprocessor_load(0xc,in_cr0,unaff_r9 + -0x174);
      *(uint *)((param_1 + 4) * 2) = param_1 + 4;
      *(char *)(unaff_r7 + 0xf) = (char)unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar3 = *(int *)(param_1 + 4);
    iVar4 = *(int *)(param_1 + 8);
    *(short *)(param_1 + 0x20) = (short)&stack0x00000104;
    software_interrupt(0x44);
    *(char *)(in_stack_00000144 + 0x19) = (char)iVar3;
    *(int *)(&stack0x0000016c + iVar3) = (iVar4 >> 0x18) << 0xf;
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xe8,0x2c08a59e);
    (*pcVar1)();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

