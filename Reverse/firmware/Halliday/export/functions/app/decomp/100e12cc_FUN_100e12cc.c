/* FUN_100e12cc @ 0x100e12cc */

int FUN_100e12cc(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_100e1308;
  iVar4 = 0;
  bVar1 = *DAT_100e1304;
  while( true ) {
    if ((int)((bVar1 & 0x7f) >> 4) <= iVar4) {
      return 0;
    }
    iVar5 = iVar2 + iVar4 * 0x20;
    iVar3 = FUN_1011ea30(iVar5,param_1,6);
    if (iVar3 == 0) break;
    iVar4 = iVar4 + 1;
  }
  return iVar5;
}

