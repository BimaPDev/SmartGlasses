/* FUN_2c573c68 @ 0x2c573c68 */

int FUN_2c573c68(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  if (iVar1 < 0x39) {
    iVar1 = iVar1 >> 2;
  }
  else {
    iVar1 = 0x10;
  }
  return iVar1;
}

