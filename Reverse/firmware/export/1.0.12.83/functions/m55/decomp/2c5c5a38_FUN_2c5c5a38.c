/* FUN_2c5c5a38 @ 0x2c5c5a38 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c5c5a38(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c5c5adc,0xfd,DAT_2c5c5ad8,DAT_2c5c5af0);
  }
  iVar1 = FUN_2c5c59bc();
  if (iVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5c5adc,0x101,DAT_2c5c5ad8,DAT_2c5c5ae0);
}

