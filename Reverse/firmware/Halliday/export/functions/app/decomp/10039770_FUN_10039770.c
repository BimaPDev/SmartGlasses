/* FUN_10039770 @ 0x10039770 */

void FUN_10039770(void)

{
  int iVar1;
  
  iVar1 = *DAT_100397b8;
  *(undefined1 *)(DAT_100397bc + 10) = 1;
  FUN_100396fc();
  if (*DAT_100397b8 != iVar1) {
    FUN_1013cdc0();
  }
  FUN_100a5b78((DAT_100397c4 - DAT_100397c0) * 0x20 & 0xff00U | 0x610031,DAT_100397cc,DAT_100397c8);
  return;
}

