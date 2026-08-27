/* FUN_2c5a3e3c @ 0x2c5a3e3c */

void FUN_2c5a3e3c(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c5a3edc,0x277,DAT_2c5a3ed8,DAT_2c5a3ee0);
  }
  iVar2 = *param_3;
  if (iVar2 != 0) {
    iVar1 = FUN_2c66b624(iVar2);
    if (iVar1 == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,iVar2);
  }
  iVar2 = FUN_2c66c4ec(*param_2);
  iVar2 = FUN_2c47245c(0,iVar2 + 1);
  *param_3 = iVar2;
  if (iVar2 != 0) {
    iVar1 = FUN_2c66c4ec(*param_2);
    FUN_2c674268(iVar2,0,iVar1 + 1);
    iVar1 = *param_2;
    iVar2 = FUN_2c66c4ec(iVar1);
    FUN_2c674668(*param_3,iVar1,iVar2 + 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c5a3edc,0x283,DAT_2c5a3ed8,DAT_2c5a3ed4);
}

