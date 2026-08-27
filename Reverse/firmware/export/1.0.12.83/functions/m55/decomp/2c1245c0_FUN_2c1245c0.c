/* FUN_2c1245c0 @ 0x2c1245c0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c1245c0(int param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  int extraout_r3;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int iVar4;
  code *unaff_r9;
  undefined4 extraout_r12;
  char in_NG;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined8 uVar5;
  int in_stack_000000a8;
  
  uVar2 = (undefined2)param_3;
  *(undefined2 *)(param_1 + 6) = uVar2;
  *(short *)(unaff_r5 + 0x16) = (short)param_4;
  if (in_NG == '\0') {
    *(undefined2 *)(param_4 + 0x10) = uVar2;
    coprocessor_store(0xd,in_cr6,unaff_r6);
    coprocessor_load(2,in_cr9,&stack0x0000026c);
    iVar4 = *(int *)(param_4 + 4);
    *(char *)(*(int *)(param_1 + 0x68) + iVar4) = (char)param_1;
    *(int *)(unaff_r6 + 0x3f8 + iVar4) = param_1;
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xe8,0x2c1245dc);
    (*pcVar1)();
  }
  iRam00000062 = param_2;
  iRam00000066 = param_4;
  iRam0000006a = unaff_r5;
  *(int *)(param_3 + 8) = param_4;
  *(undefined2 *)(unaff_r4 + 2) = uVar2;
  coprocessor_function2(10,0xe,3,in_cr10,in_cr10,in_cr11);
  *(int *)(in_stack_000000a8 + param_4) = in_stack_000000a8;
  *(short *)(param_2 + 0x14) = (short)param_2;
  uVar5 = func_0x2c1ce7c0(0);
  iVar4 = _DAT_2c124770;
  coprocessor_load(9,in_cr0,extraout_r12);
  software_hlt(7);
  uVar5 = (*unaff_r9)((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),&stack0x000004a8);
  puVar3 = (undefined4 *)uVar5;
  software_hlt(7);
  *(short *)(in_stack_000000a8 + 6) = (short)((ulonglong)uVar5 >> 0x20);
  *puVar3 = (int)((ulonglong)uVar5 >> 0x20);
  puVar3[1] = extraout_r3;
  puVar3[2] = iVar4 + -5 >> 0xb;
  puVar3[3] = unaff_r7;
  *(undefined2 *)(unaff_r7 + 0x16) = 0xc2;
  *(int *)(*(int *)(&stack0x00000554 + (extraout_r3 >> 6)) + 100) =
       *(int *)(&stack0x00000554 + (extraout_r3 >> 6));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

