/* FUN_14005d3c @ 0x14005d3c */

int FUN_14005d3c(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x22) & 0x10) == 0) {
    iVar1 = 0x60;
  }
  else {
    iVar1 = 0x20;
  }
  return *(int *)(param_1 + 0x38) + iVar1;
}

