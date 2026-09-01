/* FUN_100d6414 @ 0x100d6414 */

int FUN_100d6414(void)

{
  int iVar1;
  
  iVar1 = FUN_100d456c();
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100d6448 | (DAT_100d6444 - DAT_100d6440) * 0x20 & 0xff00U,DAT_100d6450,
                 DAT_100d644c);
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + 0x5c;
  }
  return iVar1;
}

