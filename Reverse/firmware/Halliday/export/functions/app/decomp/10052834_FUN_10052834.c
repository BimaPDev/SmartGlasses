/* FUN_10052834 @ 0x10052834 */

void FUN_10052834(void)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_100528a4;
  iVar2 = *DAT_100528a8;
  if (DAT_100528a4[0x8d] != '\0') goto LAB_1005287c;
  if (*DAT_100528a4 == '\0') goto LAB_1005287c;
  if (*(short *)(DAT_100528a4 + 4) == 0) goto LAB_1005287c;
  if (*(ushort *)(DAT_100528a4 + 0x28) < 5) goto LAB_1005287c;
  FUN_10115a38(DAT_100528a4 + 0x30);
  pcVar1[0x8d] = '\x01';
  while( true ) {
    if (*DAT_100528a8 == iVar2) break;
    FUN_1013cdc0();
LAB_1005287c:
    FUN_100a5b78((DAT_100528b0 - DAT_100528ac) * 0x20 & 0xff00U | 0x21c0034,DAT_100528b8,
                 DAT_100528b4);
  }
  return;
}

