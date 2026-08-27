/* FUN_2c012b1c @ 0x2c012b1c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c012b1c(void)

{
  int iVar1;
  int iStack_10;
  int iStack_c;
  
  iStack_c = *_DAT_2c012b6c;
  iStack_10 = 0;
  do {
    iVar1 = FUN_2c012678(&iStack_10);
    FUN_2c013870(iStack_10 << 4);
  } while (iVar1 != 0);
  FUN_2c00b820(4,0x27fd,_DAT_2c012b78,_DAT_2c012b74,_DAT_2c012b70);
  if (*_DAT_2c012b6c == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8();
}

