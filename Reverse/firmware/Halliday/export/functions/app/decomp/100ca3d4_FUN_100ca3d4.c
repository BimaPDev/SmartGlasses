/* FUN_100ca3d4 @ 0x100ca3d4 */

int FUN_100ca3d4(uint param_1,int param_2,uint param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_100ca43c;
  iVar5 = 0;
  bVar1 = *DAT_100ca438;
  do {
    if ((int)(bVar1 & 0xf) <= iVar5) {
      return 0;
    }
    iVar3 = FUN_10133764(iVar5 * 0xd0 + iVar2);
    if (iVar3 != 0) {
      if (((*(char *)(iVar3 + 2) == '\x01') &&
          (((param_2 == 0 || (iVar4 = FUN_10133724(iVar3,param_1,param_2,1,param_4), iVar4 != 0)) &&
           (*(byte *)(iVar3 + 0xd) == param_3)))) && (*(byte *)(iVar3 + 8) == param_1)) {
        return iVar3;
      }
      FUN_100ca13c(iVar3);
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

