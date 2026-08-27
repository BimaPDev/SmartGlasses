/* FUN_2c51b58c @ 0x2c51b58c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c51b58c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_2c602618(param_2);
  if (iVar1 == 0xd2) {
    FUN_2c51b52c(param_1);
    return 1;
  }
  if (iVar1 != 0xe3 && iVar1 != 0xd4) {
    if (iVar1 == 0xd3) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c51b610,0xf0,_LAB_2c51b60c,_LAB_2c51b614);
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c51b610,0xec,_LAB_2c51b60c,_LAB_2c51b608);
}

