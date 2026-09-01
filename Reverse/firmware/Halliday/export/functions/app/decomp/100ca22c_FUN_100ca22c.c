/* FUN_100ca22c @ 0x100ca22c */

int FUN_100ca22c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_100ca284;
  iVar5 = 0;
  bVar1 = *DAT_100ca280;
  do {
    if ((int)(bVar1 & 0xf) <= iVar5) {
      return 0;
    }
    iVar3 = FUN_10133764(iVar5 * 0xd0 + iVar2);
    if (iVar3 != 0) {
      if ((*(char *)(iVar3 + 2) == '\x02') &&
         (iVar4 = FUN_1011ea30(param_1,iVar3 + 0x90,6,2,param_4), iVar4 == 0)) {
        return iVar3;
      }
      FUN_100ca13c(iVar3);
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

