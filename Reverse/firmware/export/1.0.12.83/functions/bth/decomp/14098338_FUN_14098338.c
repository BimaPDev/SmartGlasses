/* FUN_14098338 @ 0x14098338 */

undefined4 FUN_14098338(void)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_1409836c;
  if (*DAT_1409836c != '\0') {
    return 0;
  }
  iVar2 = FUN_140e5658(DAT_14098370,0,0x140);
  *(int *)(iVar2 + 0x14) = iVar2 + 0x14;
  *(int *)(iVar2 + 0x18) = iVar2 + 0x14;
  FUN_1408182c(DAT_1409837c,DAT_14098378,DAT_14098374);
  *pcVar1 = '\x01';
  return 0;
}

