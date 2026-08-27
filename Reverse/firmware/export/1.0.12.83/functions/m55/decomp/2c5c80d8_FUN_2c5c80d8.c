/* FUN_2c5c80d8 @ 0x2c5c80d8 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c80d8(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  FUN_2c5c55d8();
  uVar1 = FUN_2c5c5b3c();
  iVar2 = FUN_2c66b624(uVar1,_LAB_2c5c812c);
  if ((((iVar2 == 0) || (iVar2 = FUN_2c66b624(uVar1,_LAB_2c5c8130), iVar2 == 0)) ||
      (iVar2 = FUN_2c66b624(uVar1,_LAB_2c5c8134), iVar2 == 0)) ||
     (((iVar2 = FUN_2c66b624(uVar1,_LAB_2c5c8138), iVar2 == 0 ||
       (iVar2 = FUN_2c66b624(uVar1,_LAB_2c5c813c), iVar2 == 0)) ||
      (iVar2 = FUN_2c5c5cf8(), iVar2 == 0)))) {
    return;
  }
  piVar3 = (int *)FUN_2c5c55d8();
  if (*piVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c5c5adc,0xfd,DAT_2c5c5ad8,DAT_2c5c5af0);
  }
  iVar2 = FUN_2c5c59bc(piVar3,1);
  if (iVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5c5adc,0x101,DAT_2c5c5ad8,DAT_2c5c5ae0);
}

