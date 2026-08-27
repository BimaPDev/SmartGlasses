/* FUN_1409fa6c @ 0x1409fa6c */

byte FUN_1409fa6c(void)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)*DAT_1409fab0;
  if (puVar3 == (uint *)0x0) {
    return 0;
  }
  bVar1 = 0;
  if (*puVar3 != 0) {
    uVar2 = 0;
    while( true ) {
      bVar1 = *(byte *)((int)puVar3 + uVar2 * 0x72 + 0x6b);
      uVar2 = uVar2 + 1 & 0xff;
      if ((bVar1 & 1) != 0) break;
      if (*puVar3 <= uVar2) {
        return bVar1 & 1;
      }
    }
    bVar1 = 1;
  }
  return bVar1;
}

