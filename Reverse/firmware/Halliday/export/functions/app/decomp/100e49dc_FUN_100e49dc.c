/* FUN_100e49dc @ 0x100e49dc */

int FUN_100e49dc(void)

{
  int iVar1;
  
  iVar1 = FUN_100e1fe8(DAT_100e4a04);
  if (iVar1 < 0) {
    FUN_100a5b78(DAT_100e4a10 | (DAT_100e4a0c - DAT_100e4a08) * 0x20 & 0xff00U,DAT_100e4a14,iVar1);
  }
  return iVar1;
}

