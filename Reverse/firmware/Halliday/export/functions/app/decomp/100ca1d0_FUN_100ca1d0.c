/* FUN_100ca1d0 @ 0x100ca1d0 */

int FUN_100ca1d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_100ca228;
  iVar5 = 0;
  bVar1 = *DAT_100ca224;
  do {
    if ((int)((bVar1 & 0x7f) >> 4) <= iVar5) {
      return 0;
    }
    iVar3 = FUN_10133764(iVar5 * 0xd0 + iVar2);
    if (iVar3 != 0) {
      if ((*(char *)(iVar3 + 2) == '\x04') &&
         (iVar4 = FUN_1011ea30(param_1,*(int *)(iVar3 + 0x90) + 0x90,6,4,param_4), iVar4 == 0)) {
        return iVar3;
      }
      FUN_100ca13c(iVar3);
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

