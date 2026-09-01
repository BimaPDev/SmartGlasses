/* FUN_10020ebc @ 0x10020ebc */

void FUN_10020ebc(void)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = *DAT_10020ef0;
  cVar2 = '\x1a';
  puVar1 = DAT_10020ef4;
  do {
    cVar2 = cVar2 + -1;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (cVar2 != '\0');
  if (*DAT_10020ef0 != iVar3) {
    FUN_1013cdc0();
  }
  return;
}

