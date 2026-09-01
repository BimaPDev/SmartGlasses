/* FUN_10089bf8 @ 0x10089bf8 */

void FUN_10089bf8(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  
  pbVar2 = DAT_10089c28;
  if (*DAT_10089c28 == 0) {
    *DAT_10089c28 = 1;
    iVar3 = FUN_10126fa2();
    while( true ) {
      bVar1 = *(byte *)(iVar3 + 0x2a);
      if ((bVar1 & 4) == 0) break;
      *(byte *)(iVar3 + 0x2a) = bVar1 & 0xfb;
      FUN_10089b64(iVar3);
    }
    *pbVar2 = bVar1 & 4;
  }
  return;
}

