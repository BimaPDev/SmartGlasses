/* FUN_2c454df2 @ 0x2c454df2 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c454df2(int param_1)

{
  int iVar1;
  undefined4 in_cr14;
  
  iVar1 = *(int *)(param_1 + 4) + -0x2b0;
  coprocessor_storelong(5,in_cr14,iVar1);
  *(short *)(_LAB_2c454fc0 + 0x12) = (short)iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

