/* FUN_2c49d108 @ 0x2c49d108 */

int FUN_2c49d108(void)

{
  int iVar1;
  
  iVar1 = DAT_2c49d12c;
  if (*(int *)(DAT_2c49d12c + 0x48) != 1) {
    return -1;
  }
  if (0 < *DAT_2c49d130) {
    return *DAT_2c49d130;
  }
  FUN_2c49ce4c(DAT_2c49d12c);
  return *(int *)(iVar1 + 0x14);
}

