/* FUN_2c496af0 @ 0x2c496af0 */

byte FUN_2c496af0(void)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = func_0x2c4be79c();
  bVar2 = iVar1 != 0;
  iVar1 = func_0x2c673f28();
  if (iVar1 != 0) {
    bVar2 = bVar2 | 2;
  }
  iVar1 = func_0x2c4bf1b0();
  if (iVar1 != 0) {
    bVar2 = bVar2 | 4;
  }
  iVar1 = func_0x2c673a38();
  if (iVar1 != 0) {
    bVar2 = bVar2 | 8;
  }
  iVar1 = func_0x2c673cd8();
  if (iVar1 != 0) {
    bVar2 = bVar2 | 0x10;
  }
  return bVar2;
}

