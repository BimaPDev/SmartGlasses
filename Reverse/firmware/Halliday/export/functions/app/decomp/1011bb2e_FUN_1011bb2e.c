/* FUN_1011bb2e @ 0x1011bb2e */

byte FUN_1011bb2e(void)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_1005dc94();
  if (iVar2 == 0) {
    bVar1 = 0xff;
  }
  else {
    bVar1 = *(byte *)(iVar2 + 10) & 0xf;
  }
  return bVar1;
}

