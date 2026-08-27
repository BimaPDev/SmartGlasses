/* FUN_2c5eea5c @ 0x2c5eea5c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5eea5c(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0xc);
  if (((piVar2 != (int *)0x0) && ((char)piVar2[0x2a] != '\0')) && (*piVar2 != 0)) {
    iVar1 = FUN_2c606b94(piVar2[6],1);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5eeae0,0x29,_LAB_2c5eeadc,_LAB_2c5eead8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5eeae0,0x2e,_LAB_2c5eeadc,_LAB_2c5eeae4);
  }
  return;
}

