/* FUN_1012c34c @ 0x1012c34c */

void FUN_1012c34c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_1012bed4(*(undefined4 *)(param_1 + 0x2c));
  if ((iVar1 == 0xffff) && (iVar1 = FUN_1012bed8(*(undefined4 *)(param_1 + 0x2c)), iVar1 == 0xffff))
  {
    return;
  }
  FUN_1012beba(*(undefined4 *)(param_1 + 0x2c),0xffff);
  *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x48) = 0xffff;
  FUN_10125af4();
  return;
}

