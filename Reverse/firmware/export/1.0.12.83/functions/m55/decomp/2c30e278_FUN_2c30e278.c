/* FUN_2c30e278 @ 0x2c30e278 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c30e278(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int *unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 unaff_r7;
  char in_NG;
  char in_CY;
  undefined4 in_cr0;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr7;
  undefined8 in_d0;
  undefined8 unaff_d11;
  
  if (in_NG == '\0') {
    *(int *)(param_3 + unaff_r5) = unaff_r5;
    *unaff_r4 = param_1;
    unaff_r4[1] = param_3;
    unaff_r4[2] = (int)unaff_r4;
    unaff_r4[3] = unaff_r6;
    coprocessor_movefromRt(0,1,0,in_cr7,in_cr4);
    coprocessor_function2(0,0,3,in_cr3,in_cr5,in_cr4);
    coprocessor_function2(0,0,0,in_cr0,in_cr5,in_cr4);
    coprocessor_movefromRt(0,0,1,in_cr5,in_cr4);
    iVar1 = param_1 + 0x120;
    VectorHalvingAdd(unaff_d11,in_d0,1,1);
    *(short *)(param_1 + 0x128) = (short)iVar1;
    param_4 = iVar1 * 0x100;
    *(int *)iVar1 = iVar1;
    *(undefined4 *)(param_1 + 0x124) = param_2;
    *(int *)(param_1 + 0x128) = param_3;
    *(int *)(param_1 + 300) = param_4;
    *(int **)(param_1 + 0x130) = unaff_r4;
    *(int *)(param_1 + 0x134) = unaff_r5;
    *(int *)(param_1 + 0x138) = unaff_r6;
    *(undefined4 *)(param_1 + 0x13c) = unaff_r7;
  }
  else if (in_CY != '\0') {
    func_0x2b38e930(param_1,0x84,param_3,param_4,param_3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(param_4 + 0x28) = param_4;
  UNRECOVERED_JUMPTABLE = (code *)(unaff_r6 >> 0xd);
  *(undefined1 **)((int)unaff_r4 + (int)UNRECOVERED_JUMPTABLE) = &stack0x00000024 + param_4;
                    /* WARNING: Could not recover jumptable at 0x2c30e2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0,UNRECOVERED_JUMPTABLE,(int)unaff_r4 << 7);
  return;
}

