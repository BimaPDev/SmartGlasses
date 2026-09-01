/* FUN_100b9fd4 @ 0x100b9fd4 */

void FUN_100b9fd4(void)

{
  int iVar1;
  
  iVar1 = DAT_100b9ffc;
  if ((*(byte *)(DAT_100b9ffc + 0x18e) & 4) == 0) {
    FUN_1011dc20(DAT_100ba000,DAT_100b9ffc + 0x198);
  }
  *(byte *)(iVar1 + 0x18e) = *(byte *)(iVar1 + 0x18e) & 0xfb;
  return;
}

