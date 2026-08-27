/* FUN_14073a58 @ 0x14073a58 */

int * FUN_14073a58(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    *param_1 = iVar1;
    if (iVar1 == 0) {
      param_1[1] = 0;
      return piVar2;
    }
  }
  return piVar2;
}

