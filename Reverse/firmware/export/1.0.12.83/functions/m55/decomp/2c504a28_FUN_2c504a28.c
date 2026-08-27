/* FUN_2c504a28 @ 0x2c504a28 */

bool FUN_2c504a28(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_2c478b68();
  bVar1 = false;
  if (iVar2 != 0) {
    iVar2 = (**(code **)(iVar2 + 0xe4))();
    bVar1 = iVar2 == 6;
  }
  return bVar1;
}

