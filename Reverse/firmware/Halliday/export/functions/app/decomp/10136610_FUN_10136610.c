/* FUN_10136610 @ 0x10136610 */

int FUN_10136610(void)

{
  int iVar1;
  
  iVar1 = FUN_100d4684();
  if (iVar1 == 0) {
    iVar1 = 0x7f;
  }
  else {
    iVar1 = (int)*(char *)(iVar1 + 0x47);
  }
  return iVar1;
}

