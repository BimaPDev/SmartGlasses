/* FUN_2c538790 @ 0x2c538790 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c538790(void)

{
  int iVar1;
  
  iVar1 = FUN_2c52e5e0();
  if ((iVar1 != 0) && (iVar1 != 9)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5388cc,0x47,_LAB_2c5388c8,_LAB_2c5388c4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

