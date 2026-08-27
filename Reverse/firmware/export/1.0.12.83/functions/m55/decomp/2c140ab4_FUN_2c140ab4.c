/* FUN_2c140ab4 @ 0x2c140ab4 */

int FUN_2c140ab4(int param_1)

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

