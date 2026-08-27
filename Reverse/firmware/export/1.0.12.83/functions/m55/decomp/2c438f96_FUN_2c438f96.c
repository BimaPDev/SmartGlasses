/* FUN_2c438f96 @ 0x2c438f96 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c438f96(undefined4 param_1,int param_2,undefined4 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined1 unaff_r5;
  int unaff_r7;
  undefined4 in_r12;
  undefined4 in_cr3;
  
  *param_4 = (char)param_2;
  coprocessor_load(7,in_cr3,in_r12);
  iVar1 = *(int *)(param_2 + -0x1c8);
  *(undefined1 *)(param_2 + unaff_r7) = unaff_r5;
  *(char *)(iVar1 + 6) = (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

