/* FUN_2c5c5cf8 @ 0x2c5c5cf8 */

bool FUN_2c5c5cf8(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_2c5c685c();
  iVar2 = FUN_2c478b68(iVar2 + 0x298);
  bVar1 = false;
  if (iVar2 != 0) {
    iVar2 = (**(code **)(iVar2 + 0xc0))();
    bVar1 = iVar2 == 1;
  }
  return bVar1;
}

