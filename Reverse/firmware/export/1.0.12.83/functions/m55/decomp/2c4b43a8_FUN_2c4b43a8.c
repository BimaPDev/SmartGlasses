/* FUN_2c4b43a8 @ 0x2c4b43a8 */

void FUN_2c4b43a8(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar1 = DAT_2c4b445c;
  if (param_1[4] != DAT_2c4b4458) {
    return;
  }
  iVar4 = *DAT_2c4b445c;
  param_1[4] = 0;
  piVar3 = (int *)(iVar4 + 0x20);
  *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + param_1[3];
  piVar2 = (int *)*param_1;
  if ((piVar2 != piVar3) && (piVar2[4] == 0)) {
    param_1[3] = param_1[3] + piVar2[3];
    if ((uint)piVar2[2] < (uint)param_1[2]) {
      param_1[2] = piVar2[2];
    }
    if ((int *)piVar2[1] != (int *)0x0) {
      *(int *)piVar2[1] = *piVar2;
    }
    if (*piVar2 != 0) {
      *(int *)(*piVar2 + 4) = piVar2[1];
    }
    FUN_2c4b4990();
    iVar4 = *piVar1;
    piVar3 = (int *)(iVar4 + 0x20);
  }
  piVar2 = (int *)param_1[1];
  if ((piVar2 != piVar3) && (piVar2[4] == 0)) {
    piVar2[3] = piVar2[3] + param_1[3];
    if ((uint)param_1[2] < (uint)piVar2[2]) {
      piVar2[2] = param_1[2];
    }
    if ((int *)param_1[1] != (int *)0x0) {
      *(int *)param_1[1] = *param_1;
    }
    if (*param_1 != 0) {
      *(int *)(*param_1 + 4) = param_1[1];
    }
    FUN_2c4b4990(param_1);
    iVar4 = *piVar1;
  }
  if (*(int *)(iVar4 + 0x20) != *(int *)(iVar4 + 0x24)) {
    return;
  }
  if ((int *)piVar2[1] != (int *)0x0) {
    *(int *)piVar2[1] = *piVar2;
  }
  if (*piVar2 != 0) {
    *(int *)(*piVar2 + 4) = piVar2[1];
  }
  FUN_2c4b4990(piVar2);
  return;
}

