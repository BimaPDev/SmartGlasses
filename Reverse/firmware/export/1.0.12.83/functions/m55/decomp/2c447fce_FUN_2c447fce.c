/* FUN_2c447fce @ 0x2c447fce */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c447fce(void)

{
  int iVar1;
  int unaff_r5;
  
  iVar1 = *(int *)(*(ushort *)(*(int *)(unaff_r5 + 8) + *(int *)(unaff_r5 + 4)) + 0x14) << 1;
  SignedSaturate(iVar1,0x19);
  SignedDoesSaturate(iVar1,0x19);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

