/* FUN_100a42e4 @ 0x100a42e4 */

int FUN_100a42e4(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  puVar4 = DAT_100a4320;
  while( true ) {
    iVar2 = FUN_1011ea18(param_1,*puVar4);
    if (iVar2 == 0) break;
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
    if (iVar3 == 5) {
      return -0x16;
    }
  }
  bVar1 = *(byte *)(DAT_100a4324 + iVar3 * 8 + 4);
  if (-1 < (int)((uint)bVar1 << 0x1f)) {
    return -0x16;
  }
  if ((bVar1 & 2) == 0) {
    return -0x16;
  }
  return iVar3;
}

