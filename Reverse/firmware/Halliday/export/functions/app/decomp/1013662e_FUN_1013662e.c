/* FUN_1013662e @ 0x1013662e */

byte FUN_1013662e(void)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_100d456c();
  bVar1 = 0;
  if (iVar2 != 0) {
    bVar1 = *(byte *)(iVar2 + 0x38) >> 7;
  }
  return bVar1;
}

