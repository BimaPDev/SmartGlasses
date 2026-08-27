/* FUN_2c504acc @ 0x2c504acc */

byte FUN_2c504acc(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_2c5ee748();
  if ((iVar2 != 0) && (iVar3 = FUN_2c5efa10(), iVar3 != 0)) {
    bVar1 = FUN_2c5ef904(iVar2);
    return bVar1 ^ 1;
  }
  return 0;
}

