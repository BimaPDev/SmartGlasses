/* FUN_2c26b98c @ 0x2c26b98c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c26b98c(void)

{
  int iVar1;
  undefined1 unaff_r4;
  int unaff_r6;
  undefined4 unaff_r10;
  
  *(int *)(unaff_r6 + 0x6c) = unaff_r6;
  iVar1 = SignedSaturate(unaff_r10,0);
  SignedDoesSaturate(unaff_r10,0);
  if (*(char *)(iVar1 + 0x1c) != '\0') {
    *(undefined1 *)(_DAT_2c26b7b0 + 3) = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

