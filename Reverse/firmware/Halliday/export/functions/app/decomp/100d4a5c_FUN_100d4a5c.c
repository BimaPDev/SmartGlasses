/* FUN_100d4a5c @ 0x100d4a5c */

void FUN_100d4a5c(void)

{
  int iVar1;
  undefined4 in_r3;
  
  iVar1 = FUN_100d456c();
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100d4a98 | (DAT_100d4a94 - DAT_100d4a90) * 0x20 & 0xff00U,DAT_100d4aa0,
                 DAT_100d4a9c,in_r3);
    return;
  }
  *(byte *)(iVar1 + 0x38) = *(byte *)(iVar1 + 0x38) | 4;
  return;
}

