/* FUN_2c17c25c @ 0x2c17c25c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c17c25c(undefined4 param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  int *unaff_r5;
  int in_stack_00000394;
  
  iVar1 = (int)unaff_r5 * 4;
  if (-1 < iVar1) {
    *unaff_r5 = iVar1;
    unaff_r5[1] = param_3;
    unaff_r5[2] = in_stack_00000394;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)((int)unaff_r5 * 0x10 + 0x11) = param_2;
  unaff_r5[0x15] = iVar1;
  *(int **)((int)unaff_r5 * 0x10 + 0x54) = unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

