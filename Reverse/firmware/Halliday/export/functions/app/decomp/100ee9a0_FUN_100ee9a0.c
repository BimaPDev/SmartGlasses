/* FUN_100ee9a0 @ 0x100ee9a0 */

uint FUN_100ee9a0(void)

{
  byte bVar1;
  uint uVar2;
  
  FUN_1011dbf4(DAT_100ee9cc,0xffffffff);
  bVar1 = *(byte *)(DAT_100ee9d0 + 0x51);
  uVar2 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    *(byte *)(DAT_100ee9d0 + 0x51) = bVar1 | 1;
  }
  else {
    uVar2 = 0xffffff88;
  }
  FUN_100ee690();
  return uVar2;
}

