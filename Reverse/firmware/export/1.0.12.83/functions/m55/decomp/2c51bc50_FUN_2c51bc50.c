/* FUN_2c51bc50 @ 0x2c51bc50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c51bc50(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_2c602618(param_2);
  if (iVar1 == 0xd2) {
    FUN_2c51bbf4(param_1);
    return 1;
  }
  if (iVar1 != 0xd4 && iVar1 != 0xe3) {
    if (iVar1 == 0xd3) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c51bcd8,0x3c,_LAB_2c51bcd4,_LAB_2c51bcdc);
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c51bcd8,0x38,_LAB_2c51bcd4,_LAB_2c51bcd0);
}

