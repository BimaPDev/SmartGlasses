/* FUN_2c504a0c @ 0x2c504a0c */

bool FUN_2c504a0c(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_2c478b68();
  bVar1 = false;
  if (iVar2 != 0) {
    iVar2 = (**(code **)(iVar2 + 0xc0))();
    bVar1 = iVar2 == 1;
  }
  return bVar1;
}

