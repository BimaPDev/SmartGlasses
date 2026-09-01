/* FUN_1013cf62 @ 0x1013cf62 */

void FUN_1013cf62(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  if (param_1 != piVar1) {
    iVar3 = *piVar1;
    piVar2 = (int *)piVar1[1];
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    *piVar1 = 0;
    piVar1[1] = 0;
    FUN_10115ecc();
    return;
  }
  return;
}

