/* FUN_10068a5c @ 0x10068a5c */

void FUN_10068a5c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_10068a70;
  iVar3 = 0;
  do {
    iVar2 = iVar1 + iVar3;
    iVar3 = iVar3 + 1;
    *(undefined1 *)(iVar2 + 0x300) = 0x20;
  } while (iVar3 != 0x40);
  return;
}

