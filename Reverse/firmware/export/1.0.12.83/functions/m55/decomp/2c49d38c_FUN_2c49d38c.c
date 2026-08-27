/* FUN_2c49d38c @ 0x2c49d38c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c49d38c(void)

{
  int iVar1;
  
  iVar1 = _LAB_2c49d3b4;
  if (*(int *)(_LAB_2c49d3b4 + 0x48) != 1) {
    return -1;
  }
  if (-3000 < *_LAB_2c49d3b8) {
    return *_LAB_2c49d3b8;
  }
  FUN_2c49cb44(_LAB_2c49d3b4);
  return *(int *)(iVar1 + 0x2c);
}

