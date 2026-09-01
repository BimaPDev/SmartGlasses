/* FUN_1013cf7e @ 0x1013cf7e */

void FUN_1013cf7e(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  if (param_1 != piVar1) {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
      iVar3 = piVar1[2];
      if (iVar3 != 0) {
        iVar3 = iVar3 + -0x60;
      }
      if (param_3 == iVar3) {
        iVar3 = *piVar1;
        piVar2 = (int *)piVar1[1];
        *piVar2 = iVar3;
        *(int **)(iVar3 + 4) = piVar2;
        *piVar1 = 0;
        piVar1[1] = 0;
        FUN_10115ecc();
        return;
      }
      if (piVar1 == (int *)param_1[1]) {
        return;
      }
    }
  }
  return;
}

