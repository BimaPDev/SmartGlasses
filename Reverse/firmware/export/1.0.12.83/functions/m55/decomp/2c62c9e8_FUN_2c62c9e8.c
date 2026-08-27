/* FUN_2c62c9e8 @ 0x2c62c9e8 */

void FUN_2c62c9e8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar1 = param_1[1];
  while (iVar1 != 0) {
    iVar2 = *(int *)(*param_1 + iVar1 + 4);
    FUN_2c62c998(param_1,iVar1);
    FUN_2c62bea8(iVar1);
    iVar1 = iVar2;
  }
  return;
}

