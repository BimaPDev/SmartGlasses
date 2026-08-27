/* FUN_2c62bebc @ 0x2c62bebc */

int FUN_2c62bebc(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_2c62bf0c;
  if (param_2 == 0) {
    if ((param_1 != 0) && (param_1 != DAT_2c62bf0c)) {
      FUN_2c4726f0();
      return iVar1;
    }
  }
  else {
    if (param_1 == DAT_2c62bf0c) {
      iVar1 = FUN_2c47266c(param_2);
      return iVar1;
    }
    iVar1 = FUN_2c4726f8();
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c62bf18,0x119,DAT_2c62bf14,DAT_2c62bf10);
    }
  }
  return iVar1;
}

