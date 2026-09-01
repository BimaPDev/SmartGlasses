/* FUN_100d6020 @ 0x100d6020 */

uint FUN_100d6020(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_100d456c();
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100d6058 | (DAT_100d6054 - DAT_100d6050) * 0x20 & 0xff00U,DAT_100d6060,
                 DAT_100d605c);
    uVar2 = 0;
  }
  else {
    uVar2 = (*(byte *)(iVar1 + 0x38) & 3) >> 1;
  }
  return uVar2;
}

