/* FUN_2c469b18 @ 0x2c469b18 */

/* WARNING: Removing unreachable block (ram,0x2c469a64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c469b18(int param_1)

{
  int iVar1;
  
  if ((param_1 == 0) || (iVar1 = *(int *)(param_1 + 4), iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c469ba8,100,_LAB_2c469ba4,_LAB_2c469bac);
  }
  if (iVar1 == 1) {
    if (*_LAB_2c469bb0 == '\0') {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c469ba8,0x6a,_LAB_2c469ba4,_LAB_2c469bb4,1);
  }
  if (iVar1 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c469af4,0x4c,DAT_2c469af0,DAT_2c469aec);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c469ba8,0x75,_LAB_2c469ba4,_LAB_2c469ba0,iVar1);
}

