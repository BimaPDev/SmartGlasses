/* FUN_2c24c90c @ 0x2c24c90c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c24c90c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int unaff_r4;
  int unaff_r5;
  
  *(char *)(param_3 + unaff_r5) = (char)unaff_r5;
  *(char *)(param_3 + unaff_r5) = (char)unaff_r5;
  iVar1 = *(int *)(unaff_r4 + 4);
  *(undefined1 *)(iVar1 + 0x2c24c95c) = 0x5c;
  *(undefined1 *)(iVar1 + 0x2c24c95c) = 0x5c;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

