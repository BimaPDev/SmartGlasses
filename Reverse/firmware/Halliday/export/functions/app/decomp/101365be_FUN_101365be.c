/* FUN_101365be @ 0x101365be */

byte FUN_101365be(void)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_100d4684();
  bVar1 = 0;
  if (iVar2 != 0) {
    bVar1 = *(byte *)(iVar2 + 0x3c) & 1;
  }
  return bVar1;
}

