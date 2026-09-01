/* FUN_100cb3d8 @ 0x100cb3d8 */

void FUN_100cb3d8(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  bVar1 = *DAT_100cb4b8;
  iVar4 = DAT_100cb4bc;
  for (iVar5 = 0; iVar5 < (int)(bVar1 & 0xf); iVar5 = iVar5 + 1) {
    if ((*(char *)(iVar4 + 2) == '\x04') && (iVar2 = FUN_101334a4(iVar4 + 0xcc), iVar2 != 0)) {
      if (*(byte *)(iVar4 + 0xd) - 6 < 2) {
        FUN_100cad6c(iVar4,8);
      }
      FUN_10133764(iVar4);
      FUN_100cad6c(iVar4,0);
      FUN_10133792(iVar4);
    }
    iVar4 = iVar4 + 0xd0;
  }
  iVar4 = DAT_100cb4c0;
  for (uVar6 = 0; (bVar1 & 0xf) != uVar6; uVar6 = uVar6 + 1) {
    iVar5 = FUN_101334a4(iVar4 + 0xcc);
    if (((iVar5 != 0) && (uVar3 = (uint)*(byte *)(iVar4 + 0xd), uVar3 != 0)) && (3 < uVar3 - 2)) {
      if (uVar3 - 6 < 2) {
        FUN_100cad6c(iVar4,8);
      }
      if ((*(char *)(iVar4 + 0xd) == '\b') || (*(char *)(iVar4 + 0xd) == '\x01')) {
        FUN_100cad6c(iVar4,0);
      }
      FUN_10133baa(iVar4);
      if (*(char *)(iVar4 + 2) == '\x02') {
        FUN_10133554(iVar4 + 4);
        if (*(int *)(iVar4 + 0xac) != 0) {
          thunk_FUN_10138032();
          *(undefined4 *)(iVar4 + 0xac) = 0;
        }
      }
      FUN_100c9e38(iVar4);
      FUN_101153fc(0x32,0);
      iVar5 = FUN_101334a4(iVar4 + 0xcc);
      if ((iVar5 != 0) && (*(char *)(iVar4 + 2) == '\x02')) {
        FUN_100ca13c(iVar4);
      }
    }
    iVar4 = iVar4 + 0xd0;
  }
  return;
}

