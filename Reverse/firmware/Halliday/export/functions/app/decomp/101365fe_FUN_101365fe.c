/* FUN_101365fe @ 0x101365fe */

byte FUN_101365fe(void)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_100d456c();
  bVar1 = 0;
  if (iVar2 != 0) {
    bVar1 = *(byte *)(iVar2 + 0x44) & 1;
  }
  return bVar1;
}

