/* FUN_2c5c795c @ 0x2c5c795c */

bool FUN_2c5c795c(void)

{
  int iVar1;
  
  iVar1 = FUN_2c5c685c();
  if (*(int *)(iVar1 + 0x260) != 0) {
    return *(int *)(iVar1 + 0x260) == iVar1 + 0x150;
  }
  return false;
}

