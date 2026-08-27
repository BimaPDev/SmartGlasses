/* FUN_2c27541a @ 0x2c27541a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c27541a(void)

{
  int in_r3;
  int unaff_r4;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  
  *(undefined4 *)(in_r3 + 0x68) = unaff_r7;
  *(undefined4 *)(unaff_r4 + 100) = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

