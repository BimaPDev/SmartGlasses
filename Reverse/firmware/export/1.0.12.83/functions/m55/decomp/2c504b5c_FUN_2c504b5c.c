/* FUN_2c504b5c @ 0x2c504b5c */

bool FUN_2c504b5c(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = FUN_2c478b68();
  if (iVar1 == 0) {
    bVar3 = false;
  }
  else {
    iVar1 = (**(code **)(iVar1 + 0xc0))();
    bVar3 = iVar1 == 1;
  }
  iVar1 = FUN_2c5ee748();
  if (((iVar1 != 0) && (iVar2 = FUN_2c5efa10(), iVar2 != 0)) &&
     (iVar1 = FUN_2c5ef904(iVar1), iVar1 == 0)) {
    return (bool)(bVar3 + '\x01');
  }
  return bVar3;
}

