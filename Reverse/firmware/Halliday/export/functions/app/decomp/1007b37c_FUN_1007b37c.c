/* FUN_1007b37c @ 0x1007b37c */

void FUN_1007b37c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_1007c388();
  iVar1 = DAT_1007b3b4;
  iVar3 = 0;
  do {
    iVar2 = FUN_1007b2e4();
    if (0 < iVar2) {
      *(short *)(iVar1 + iVar3 * 2 + 0xec) = (short)iVar2;
      FUN_1013cd58(0x14d);
    }
    iVar2 = DAT_1007b3b4;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x1e);
  *(undefined1 *)(DAT_1007b3b4 + 0x156) = 0;
  *(undefined2 *)(iVar2 + 0x152) = 0;
  return;
}

