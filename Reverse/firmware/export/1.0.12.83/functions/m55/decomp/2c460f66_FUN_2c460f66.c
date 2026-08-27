/* FUN_2c460f66 @ 0x2c460f66 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c460f66(void)

{
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
  *(int *)(unaff_r6 + 0x114) = unaff_r5 + 0x4e;
  if (unaff_r5 + 0x4e != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (unaff_r7 != 0) {
    DAT_000000a9 = (char)*(undefined4 *)(unaff_r6 + 0x14a);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

