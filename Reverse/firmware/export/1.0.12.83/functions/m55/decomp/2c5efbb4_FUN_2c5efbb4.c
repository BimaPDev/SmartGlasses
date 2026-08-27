/* FUN_2c5efbb4 @ 0x2c5efbb4 */

int FUN_2c5efbb4(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x20;
  if (*(int *)(param_1 + 0x28) != 0) {
    return iVar1;
  }
  FUN_2c5ee9ac(iVar1);
  return iVar1;
}

