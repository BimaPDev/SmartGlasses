/* FUN_100eec10 @ 0x100eec10 */

int FUN_100eec10(uint param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)(char)(*(char *)(*DAT_100eec3c + 2) + -1);
  iVar3 = iVar2 << 1;
  while( true ) {
    if (iVar2 < 0) {
      return -1;
    }
    puVar1 = (ushort *)(*(int *)(*DAT_100eec3c + 4) + iVar3);
    iVar3 = iVar3 + -2;
    if (*puVar1 == param_1) break;
    iVar2 = (int)(char)((char)iVar2 + -1);
  }
  return iVar2;
}

