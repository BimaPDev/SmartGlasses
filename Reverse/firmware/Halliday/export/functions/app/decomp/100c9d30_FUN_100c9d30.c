/* FUN_100c9d30 @ 0x100c9d30 */

int FUN_100c9d30(void)

{
  int iVar1;
  
  iVar1 = FUN_1013356c(DAT_100c9d60,*DAT_100c9d5c & 0xf);
  if (iVar1 != 0) {
    thunk_FUN_101146e4(iVar1 + 0x60,DAT_100c9d64);
    FUN_10114438(iVar1 + 0x28,DAT_100c9d68);
  }
  return iVar1;
}

