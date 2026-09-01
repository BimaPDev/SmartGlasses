/* FUN_100ca324 @ 0x100ca324 */

int FUN_100ca324(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_100ca378;
  iVar5 = 0;
  bVar1 = *DAT_100ca374;
  do {
    if ((int)(bVar1 & 0xf) <= iVar5) {
      return 0;
    }
    iVar3 = FUN_10133764(iVar5 * 0xd0 + iVar2);
    if (iVar3 != 0) {
      if ((*(char *)(iVar3 + 2) == '\x01') &&
         (iVar4 = FUN_10133724(iVar3,param_1,param_2), iVar4 != 0)) {
        return iVar3;
      }
      FUN_100ca13c(iVar3);
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

