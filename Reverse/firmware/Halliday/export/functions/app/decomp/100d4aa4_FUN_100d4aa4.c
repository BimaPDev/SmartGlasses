/* FUN_100d4aa4 @ 0x100d4aa4 */

uint FUN_100d4aa4(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_100d456c();
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100d4adc | (DAT_100d4ad8 - DAT_100d4ad4) * 0x20 & 0xff00U,DAT_100d4ae4,
                 DAT_100d4ae0);
    uVar2 = 0;
  }
  else {
    uVar2 = (*(byte *)(iVar1 + 0x38) & 7) >> 2;
  }
  return uVar2;
}

