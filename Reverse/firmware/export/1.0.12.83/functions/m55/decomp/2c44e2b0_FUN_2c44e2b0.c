/* FUN_2c44e2b0 @ 0x2c44e2b0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c44e2b0(void)

{
  int unaff_r5;
  
  *(uint *)(unaff_r5 + 0x78) = (uint)*(ushort *)(unaff_r5 + 0x1a);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

