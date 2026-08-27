/* FUN_2c43ba38 @ 0x2c43ba38 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c43ba38(code *param_1,int param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 *unaff_r5;
  int *unaff_r6;
  int unaff_r7;
  char in_NG;
  char in_OV;
  undefined1 in_stack_00000148;
  
  software_bkpt(200);
  *(undefined1 *)((int)unaff_r6 + 10) = param_3;
  if (in_NG != in_OV) {
    piVar1 = (int *)(_DAT_2c43bd5c >> 10);
    param_2 = *piVar1;
    iVar2 = piVar1[1];
    in_stack_00000148 = (undefined1)piVar1[2];
    *(short *)(iVar2 + 0x14) = (short)unaff_r7;
    param_1 = (code *)(int)*(short *)((int)unaff_r6 + param_2);
    *unaff_r6 = (int)param_1;
    unaff_r6[1] = (int)(piVar1 + 4);
    unaff_r6[2] = iVar2;
    unaff_r6[3] = unaff_r7;
    unaff_r6 = unaff_r6 + 4;
    unaff_r5 = &stack0x000002c0;
  }
  unaff_r5[(int)unaff_r6] = in_stack_00000148;
  (*param_1)(param_1,param_2 + -0x71);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

