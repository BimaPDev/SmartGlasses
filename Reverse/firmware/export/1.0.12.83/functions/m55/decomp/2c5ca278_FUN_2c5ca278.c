/* FUN_2c5ca278 @ 0x2c5ca278 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5ca278(int param_1)

{
  int iVar1;
  
  FUN_2c5d7694(7,param_1,0xffffffff);
  if (param_1 == 0) {
    return;
  }
  iVar1 = FUN_2c5c685c();
  *(undefined1 *)(iVar1 + 0x490) = 1;
  FUN_2c5229e8();
  FUN_2c5225d4();
  FUN_2c478b68(iVar1 + 0x298);
  iVar1 = FUN_2c471604(1);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5c8dfc,0x232,_LAB_2c5c8e00,_LAB_2c5c8df8);
  }
  return;
}

