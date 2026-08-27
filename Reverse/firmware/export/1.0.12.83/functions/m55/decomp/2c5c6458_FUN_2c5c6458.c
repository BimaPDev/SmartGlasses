/* FUN_2c5c6458 @ 0x2c5c6458 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c6458(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  FUN_2c5c55d8();
  uVar1 = FUN_2c5c5b3c();
  iVar2 = FUN_2c66b624(uVar1,_LAB_2c5c648c);
  if (iVar2 != 0) {
    FUN_2c5c55d8();
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5c585c,0x48,DAT_2c5c5858,DAT_2c5c5854,_LAB_2c5c648c);
  }
  piVar3 = (int *)FUN_2c5c55d8();
  if (*piVar3 != 0) {
    iVar2 = FUN_2c5c59bc(piVar3,0);
    if (iVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5c5adc,0x101,DAT_2c5c5ad8,DAT_2c5c5ae0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c5c5adc,0xfd,DAT_2c5c5ad8,DAT_2c5c5af0);
}

