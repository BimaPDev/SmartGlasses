/* FUN_2c08a0de @ 0x2c08a0de */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c08a0de(int param_1)

{
  int iVar1;
  int unaff_r7;
  undefined4 in_r12;
  bool in_CY;
  
  iVar1 = *(int *)(((param_1 - unaff_r7) - (uint)!in_CY) + 0x40);
  *(undefined4 *)(int)(short)unaff_r7 = in_r12;
  ((undefined4 *)(int)(short)unaff_r7)[1] = iVar1 + -0x75;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

