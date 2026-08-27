/* FUN_2c5eabe8 @ 0x2c5eabe8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5eabe8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_2c5e7270(6,1);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x24) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5eac60,0xa7,_LAB_2c5eac5c,_LAB_2c5eac64);
  }
  if ((*(int *)(iVar1 + 0x44) == 0) && (*(char *)(iVar1 + 0x32) == '\x02')) {
    FUN_2c5e9594(_LAB_2c5eac68);
    if (1 < param_1 - 0xd2U) {
      return 1;
    }
    *(int *)(iVar1 + 0x44) = param_1;
    FUN_2c5e9e28();
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5eac60,0xa9,_LAB_2c5eac5c,_LAB_2c5eac58,*(char *)(iVar1 + 0x32));
}

