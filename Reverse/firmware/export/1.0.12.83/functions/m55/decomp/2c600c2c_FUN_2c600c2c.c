/* FUN_2c600c2c @ 0x2c600c2c */

int FUN_2c600c2c(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = (int)*(short *)(*(int *)(param_1 + 8) + 0x16);
  }
  return iVar1;
}

