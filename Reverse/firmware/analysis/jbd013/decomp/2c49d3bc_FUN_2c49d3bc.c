/* FUN_2c49d3bc @ 0x2c49d3bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c49d3bc(void)

{
  int iVar1;
  
  iVar1 = _LAB_2c49d3e0;
  if (*(int *)(_LAB_2c49d3e0 + 0x48) != 1) {
    return -1;
  }
  if (0 < *_LAB_2c49d3e4) {
    return *_LAB_2c49d3e4;
  }
  FUN_2c49ce4c(_LAB_2c49d3e0);
  return *(int *)(iVar1 + 0x14);
}

