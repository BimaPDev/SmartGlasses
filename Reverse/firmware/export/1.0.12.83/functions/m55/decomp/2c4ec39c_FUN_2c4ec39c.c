/* FUN_2c4ec39c @ 0x2c4ec39c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4ec39c(void)

{
  int iVar1;
  
  iVar1 = FUN_2c602414();
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x20) != 0) {
      FUN_2c60251c(*(int *)(iVar1 + 0x20),_LAB_2c4ec3d8);
      FUN_2c60251c(*(undefined4 *)(iVar1 + 0x20),_LAB_2c4ec3dc);
      *(undefined4 *)(iVar1 + 0x20) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(1,0x139,_LAB_2c4ec3e8,_LAB_2c4ec3e4,_LAB_2c4ec3e0);
}

