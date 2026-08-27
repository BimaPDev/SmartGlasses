/* FUN_2c519eec @ 0x2c519eec */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c519eec(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_2c5c55d8();
  if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c5c5adc,0xfd,DAT_2c5c5ad8,DAT_2c5c5af0);
  }
  iVar2 = FUN_2c5c59bc(piVar1,0);
  if (iVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5c5adc,0x101,DAT_2c5c5ad8,DAT_2c5c5ae0);
}

