/* FUN_100f9880 @ 0x100f9880 */

undefined4 FUN_100f9880(int *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 == (int *)0x0) {
    return 0x24;
  }
  iVar4 = *param_1;
  if (iVar4 != 0) {
    iVar6 = *(int *)(iVar4 + 0x60);
    if (iVar6 == 0) {
      return 0x22;
    }
    if (iVar4 != -0x6c) {
      for (piVar1 = *(int **)(iVar4 + 0x6c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
        if (param_1 == (int *)piVar1[2]) {
          iVar2 = *piVar1;
          iVar5 = *(int *)(iVar6 + 8);
          piVar1 = (int *)piVar1[1];
          if (iVar2 == 0) {
            *(int **)(iVar4 + 0x6c) = piVar1;
          }
          else {
            *(int **)(iVar2 + 4) = piVar1;
          }
          if (piVar1 == (int *)0x0) {
            *(int *)(iVar4 + 0x70) = iVar2;
          }
          else {
            *piVar1 = iVar2;
          }
          (**(code **)(iVar5 + 8))(iVar5);
          if (*(int **)(iVar4 + 0x58) == param_1) {
            *(undefined4 *)(iVar4 + 0x58) = 0;
            if (*(int *)(iVar4 + 0x6c) != 0) {
              *(undefined4 *)(iVar4 + 0x58) = *(undefined4 *)(*(int *)(iVar4 + 0x6c) + 8);
            }
          }
          if ((code *)param_1[2] != (code *)0x0) {
            (*(code *)param_1[2])(param_1);
          }
          pcVar3 = *(code **)(*(int *)(iVar6 + 0xc) + 0x3c);
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(param_1);
          }
          if (param_1[10] != 0) {
            (**(code **)(iVar5 + 8))(iVar5);
          }
          pcVar3 = *(code **)(iVar5 + 8);
          param_1[10] = 0;
          (*pcVar3)(iVar5,param_1);
          return 0;
        }
      }
    }
    return 0x24;
  }
  return 0x23;
}

