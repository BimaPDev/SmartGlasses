/* FUN_100d6694 @ 0x100d6694 */

void FUN_100d6694(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  
  iVar2 = FUN_100d4778();
  if (iVar2 == 0) {
    bVar1 = *(byte *)(*DAT_100d6718 + 0xa4);
    bVar4 = bVar1 & 4;
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 2) == 0) {
        return;
      }
      *(byte *)(*DAT_100d6718 + 0xa4) = bVar1 & 0xfd;
      FUN_100a5b78((DAT_100d671c - DAT_100d6720) * 0x20 & 0xff00U | 0x800031,DAT_100d6724,
                   DAT_100d672c);
      uVar3 = 4;
      goto LAB_100d66e2;
    }
  }
  bVar1 = *(byte *)(*DAT_100d6718 + 0xa4);
  bVar4 = bVar1 & 2;
  if ((bVar1 & 2) != 0) {
    return;
  }
  *(byte *)(*DAT_100d6718 + 0xa4) = bVar1 | 2;
  FUN_100a5b78((DAT_100d671c - DAT_100d6720) * 0x20 & 0xff00U | 0x7c0031,DAT_100d6724,DAT_100d6728);
  uVar3 = 3;
LAB_100d66e2:
  FUN_100d4038(uVar3,bVar4);
  return;
}

