/* FUN_100d5f98 @ 0x100d5f98 */

int FUN_100d5f98(void)

{
  int iVar1;
  
  iVar1 = FUN_100d456c();
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100d5fcc | (DAT_100d5fc8 - DAT_100d5fc4) * 0x20 & 0xff00U,DAT_100d5fd4,
                 DAT_100d5fd0);
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + 0x78;
  }
  return iVar1;
}

