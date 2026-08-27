/* FUN_2c525228 @ 0x2c525228 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c525228(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  *param_1 = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  piVar1 = (int *)param_1[2];
  param_1[2] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  piVar1 = (int *)param_1[1];
  param_1[1] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  piVar1 = (int *)param_1[6];
  param_1[3] = _DAT_2c5252fc;
  param_1[5] = 0;
  param_1[6] = 0;
  if (piVar1 != (int *)0x0) {
    iVar3 = piVar1[1];
    piVar1[1] = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      if (*(code **)(*piVar1 + 8) != _LAB_2c525300) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      iVar3 = piVar1[2];
      piVar1[2] = iVar3 + -1;
      if (iVar3 + -1 == 0) {
        pcVar2 = *(code **)(*piVar1 + 0xc);
        if (pcVar2 == _LAB_2c525304) {
          (**(code **)(*piVar1 + 4))(piVar1);
        }
        else {
          (*pcVar2)(piVar1);
        }
      }
    }
    piVar1 = (int *)param_1[6];
    if ((piVar1 != (int *)0x0) && (iVar3 = piVar1[1], piVar1[1] = iVar3 + -1, iVar3 + -1 == 0)) {
      if (*(code **)(*piVar1 + 8) != _LAB_2c525300) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      iVar3 = piVar1[2];
      piVar1[2] = iVar3 + -1;
      if (iVar3 + -1 == 0) {
        pcVar2 = *(code **)(*piVar1 + 0xc);
        if (pcVar2 == _LAB_2c525304) {
          (**(code **)(*piVar1 + 4))(piVar1);
        }
        else {
          (*pcVar2)(piVar1);
        }
      }
    }
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 4))();
  }
  return param_1;
}

