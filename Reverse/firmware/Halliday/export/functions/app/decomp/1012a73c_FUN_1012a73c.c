/* FUN_1012a73c @ 0x1012a73c */

bool FUN_1012a73c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  return (uint)*(byte *)(iVar1 + 0x10) + *(int *)(iVar1 + 0x20) == *(int *)(iVar1 + 0x1c);
}

