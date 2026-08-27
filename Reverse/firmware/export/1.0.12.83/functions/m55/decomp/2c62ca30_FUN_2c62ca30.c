/* FUN_2c62ca30 @ 0x2c62ca30 */

int FUN_2c62ca30(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (int *)0x0) && (iVar2 = param_1[1], iVar2 != 0)) {
    iVar1 = 0;
    do {
      iVar2 = *(int *)(iVar2 + *param_1 + 4);
      iVar1 = iVar1 + 1;
    } while (iVar2 != 0);
    return iVar1;
  }
  return 0;
}

