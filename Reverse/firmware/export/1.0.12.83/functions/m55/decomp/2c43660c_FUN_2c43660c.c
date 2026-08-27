/* FUN_2c43660c @ 0x2c43660c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c43660c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  code *in_r12;
  char in_NG;
  char in_OV;
  int in_register_000003f4;
  undefined4 in_stack_00000110;
  int in_stack_00000188;
  int in_stack_000001bc;
  uint in_stack_000001c4;
  undefined4 in_stack_000001d0;
  undefined4 in_stack_000002bc;
  
  *(int *)param_3 = param_3;
  *(undefined4 *)(param_3 + 4) = unaff_r5;
  *(undefined4 *)(param_3 + 8) = unaff_r6;
  *(undefined4 *)(param_3 + 0xc) = unaff_r7;
  if (in_NG == in_OV) {
    if (!SBORROW4((int)&stack0x0000006c,0x52)) {
      (*in_r12)(&stack0x0000017c,in_stack_000002bc,_LAB_2c436470);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(in_stack_00000188 + 0x1c) = (char)&stack0x0000006c + -0x52;
    _NMI = (short)(in_stack_000001c4 >> 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar1 = (int)*(short *)(param_3 + in_stack_000001bc);
  *(short *)(in_register_000003f4 + 10) = (short)in_stack_00000188;
  if (-1 < in_stack_000001bc + 0xff) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(iVar1 + 5) = iVar1;
  *(int *)(iVar1 + 9) = in_stack_00000188 + -0xdc;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

