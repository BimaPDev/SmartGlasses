/* FUN_2c158e18 @ 0x2c158e18 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c158e18(void)

{
  int unaff_r4;
  undefined4 unaff_r5;
  
  *(undefined4 *)(unaff_r4 + 0x74) = unaff_r5;
  *(undefined4 *)(unaff_r4 + 0x74) = unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

