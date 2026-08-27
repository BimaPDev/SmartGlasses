/* FUN_2c49d134 @ 0x2c49d134 */

int FUN_2c49d134(void)

{
  int iVar1;
  
  if (*(int *)(DAT_2c49d14c + 0x48) == 1) {
    iVar1 = *DAT_2c49d150;
    if (iVar1 < 0) {
      return *(int *)(DAT_2c49d14c + 0x20);
    }
  }
  else {
    iVar1 = 0x14;
  }
  return iVar1;
}

