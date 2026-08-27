/* FUN_2c2bf53a @ 0x2c2bf53a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2bf53a(int param_1)

{
  int iVar1;
  undefined4 in_cr2;
  undefined4 in_cr14;
  
  iVar1 = param_1 * 0x10000000 + 0xcf;
  coprocessor_function(0xf,0,7,in_cr14,in_cr2,in_cr14);
  *(int *)(iVar1 * 2) = iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

