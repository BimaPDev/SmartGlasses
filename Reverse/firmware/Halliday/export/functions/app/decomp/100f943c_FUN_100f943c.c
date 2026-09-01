/* FUN_100f943c @ 0x100f943c */

undefined4 FUN_100f943c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return 0x23;
  }
  iVar3 = *(int *)(param_1 + 0x60);
  if (iVar3 != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x80) + 0x3c) + -1;
    *(int *)(*(int *)(param_1 + 0x80) + 0x3c) = iVar2;
    if (0 < iVar2) {
      return 0;
    }
    if (iVar3 != -0x10) {
      for (piVar1 = *(int **)(iVar3 + 0x10); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
        if (param_1 == piVar1[2]) {
          iVar2 = *piVar1;
          iVar4 = *(int *)(iVar3 + 8);
          piVar1 = (int *)piVar1[1];
          if (iVar2 == 0) {
            *(int **)(iVar3 + 0x10) = piVar1;
          }
          else {
            *(int **)(iVar2 + 4) = piVar1;
          }
          if (piVar1 == (int *)0x0) {
            *(int *)(iVar3 + 0x14) = iVar2;
          }
          else {
            *piVar1 = iVar2;
          }
          (**(code **)(iVar4 + 8))(iVar4);
          FUN_100f8ad0(iVar4,param_1,iVar3);
          return 0;
        }
      }
    }
  }
  return 0x23;
}

