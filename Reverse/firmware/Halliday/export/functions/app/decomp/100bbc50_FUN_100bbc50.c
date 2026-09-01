/* FUN_100bbc50 @ 0x100bbc50 */

void FUN_100bbc50(void)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_100bbc8c;
  if (*DAT_100bbc8c != '\0') {
    FUN_100bba48();
    FUN_10136844(1);
    FUN_1013684e(1);
    iVar2 = DAT_100bbc90;
    *pcVar1 = '\0';
    FUN_100a5b78(DAT_100bbc98 | (DAT_100bbc94 - iVar2) * 0x20 & 0xff00U,DAT_100bbca0,DAT_100bbc9c);
    return;
  }
  return;
}

