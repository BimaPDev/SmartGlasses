/* FUN_1007c4fc @ 0x1007c4fc */

void FUN_1007c4fc(void)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = DAT_1007c53c;
  pbVar1 = (byte *)(DAT_1007c53c + 0x13c);
  *(undefined1 *)(DAT_1007c53c + 0x145) = 0;
  if ((int)((uint)*pbVar1 << 0x1d) < 0) {
    *(byte *)(iVar2 + 0x13c) = *pbVar1 & 0xfb;
  }
  FUN_100a5b78(DAT_1007c548 | (DAT_1007c544 - DAT_1007c540) * 0x20 & 0xff00U,DAT_1007c54c,
               DAT_1007c550);
  FUN_1007c100(0x80000);
  return;
}

