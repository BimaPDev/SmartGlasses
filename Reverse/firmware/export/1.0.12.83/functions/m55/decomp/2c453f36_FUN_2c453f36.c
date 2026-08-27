/* FUN_2c453f36 @ 0x2c453f36 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c453f36(void)

{
  int *unaff_r7;
  
  *(short *)(*unaff_r7 + 0x24) = (short)*unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

