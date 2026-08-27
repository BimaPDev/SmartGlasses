/* FUN_2c2cb256 @ 0x2c2cb256 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c2cb280) */

void FUN_2c2cb256(void)

{
  int unaff_r4;
  int unaff_r7;
  
  if (unaff_r7 << 4 < 0) {
    *(int *)(unaff_r4 + 0x68) = unaff_r7 << 4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

