/* FUN_2c48e3f0 @ 0x2c48e3f0 */

int FUN_2c48e3f0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((param_1 != 0) && (piVar2 = *(int **)(param_1 + 8), piVar2 != (int *)0x0)) {
    iVar1 = 0;
    do {
      piVar2 = (int *)*piVar2;
      iVar1 = iVar1 + 1;
    } while (piVar2 != (int *)0x0);
    return iVar1;
  }
  return 0;
}

