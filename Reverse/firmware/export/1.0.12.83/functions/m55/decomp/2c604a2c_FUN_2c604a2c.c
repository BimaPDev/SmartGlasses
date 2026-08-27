/* FUN_2c604a2c @ 0x2c604a2c */

int FUN_2c604a2c(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = (int)-*(short *)(*(int *)(param_1 + 8) + 0x10);
  }
  return iVar1;
}

