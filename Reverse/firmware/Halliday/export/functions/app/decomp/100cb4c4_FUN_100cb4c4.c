/* FUN_100cb4c4 @ 0x100cb4c4 */

void FUN_100cb4c4(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = *DAT_100cb500;
  iVar3 = DAT_100cb504;
  for (iVar4 = 0; iVar4 < (int)(bVar1 & 0xf); iVar4 = iVar4 + 1) {
    iVar2 = FUN_101334a4(iVar3 + 0xcc);
    if (((iVar2 != 0) && (*(byte *)(iVar3 + 0xd) != 0)) && (3 < *(byte *)(iVar3 + 0xd) - 2)) {
      FUN_10133baa(iVar3);
      FUN_101153fc(0x32,0);
    }
    iVar3 = iVar3 + 0xd0;
  }
  return;
}

