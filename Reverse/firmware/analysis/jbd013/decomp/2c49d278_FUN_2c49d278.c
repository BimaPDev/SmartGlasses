/* FUN_2c49d278 @ 0x2c49d278 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c49d278(void)

{
  int iVar1;
  
  iVar1 = _LAB_2c49d29c;
  if (*(int *)(_LAB_2c49d29c + 0x48) != 1) {
    return -1;
  }
  if (0 < *_LAB_2c49d2a0) {
    return *_LAB_2c49d2a0;
  }
  FUN_2c49ce4c(_LAB_2c49d29c);
  return *(int *)(iVar1 + 0x14);
}

