/* FUN_100eea1c @ 0x100eea1c */

void FUN_100eea1c(void)

{
  int iVar1;
  
  iVar1 = DAT_100eea6c;
  FUN_1011dbf4(DAT_100eea70,0xffffffff);
  if (*(char *)(iVar1 + 0x50) != '\0') {
    FUN_100a5b78((DAT_100eea78 - DAT_100eea74) * 0x20 & 0xff00U | 0x850031,DAT_100eea80,DAT_100eea7c
                );
    FUN_100ee748(iVar1 + (*(byte *)(iVar1 + 0x50) - 1) * 0x10,0);
    *(undefined1 *)(iVar1 + 0x50) = 0;
  }
  FUN_100ee690();
  return;
}

