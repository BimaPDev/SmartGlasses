/* FUN_2c53898c @ 0x2c53898c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c53898c(void)

{
  int iVar1;
  
  iVar1 = FUN_2c52e5e0();
  if ((iVar1 != 0) && (iVar1 != 9)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c538aac,0x59,_LAB_2c538aa8,_LAB_2c538aa4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

