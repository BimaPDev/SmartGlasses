/* FUN_2c525f1c @ 0x2c525f1c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_2c525f1c(void)

{
  int iVar1;
  
  FUN_2c525874();
  iVar1 = FUN_2c5259c0();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c525f80,0x147,_LAB_2c525f7c,_LAB_2c525f78,*(undefined1 *)(iVar1 + 0x44),
                 *(undefined1 *)(iVar1 + 0x45));
  }
  iVar1 = FUN_2c525e8c();
  if (iVar1 != 2) {
    iVar1 = FUN_2c525e8c();
    return iVar1 == 1;
  }
  return true;
}

