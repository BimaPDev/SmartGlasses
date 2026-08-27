/* FUN_2c538b64 @ 0x2c538b64 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c538b64(void)

{
  int iVar1;
  
  iVar1 = FUN_2c52e5e0();
  if ((iVar1 != 8) && (iVar1 != 0xe)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c538c88,0x69,_LAB_2c538c84,_LAB_2c538c80);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

