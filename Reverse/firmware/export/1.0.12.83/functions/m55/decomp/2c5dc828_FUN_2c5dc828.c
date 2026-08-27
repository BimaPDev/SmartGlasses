/* FUN_2c5dc828 @ 0x2c5dc828 */

int * FUN_2c5dc828(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = (int)param_2 - (int)param_1 >> 2;
  iVar1 = (int)param_2 - (int)param_1 >> 4;
  if (iVar1 < 1) {
    if (iVar4 == 2) {
      iVar4 = *param_3;
    }
    else {
      if (iVar4 != 3) {
        if (iVar4 != 1) {
          return param_2;
        }
        iVar4 = *param_3;
        goto LAB_2c5dc8d6;
      }
      iVar4 = *param_3;
      if (*param_1 == iVar4) {
        return param_1;
      }
      param_1 = param_1 + 1;
    }
    if (*param_1 == iVar4) {
      return param_1;
    }
    param_1 = param_1 + 1;
LAB_2c5dc8d6:
    if (*param_1 == iVar4) {
      return param_1;
    }
    return param_2;
  }
  iVar4 = *param_3;
  piVar3 = param_1;
  do {
    piVar2 = piVar3;
    if (*piVar2 == iVar4) {
      return piVar2;
    }
    if (iVar4 == piVar2[1]) {
      return piVar2 + 1;
    }
    if (iVar4 == piVar2[2]) {
      return piVar2 + 2;
    }
    if (iVar4 == piVar2[3]) {
      return piVar2 + 3;
    }
    piVar3 = piVar2 + 4;
  } while (param_1 + iVar1 * 4 != piVar3);
  iVar4 = (int)param_2 - (int)piVar3 >> 2;
  if (iVar4 == 2) {
    iVar4 = *param_3;
  }
  else {
    if (iVar4 != 3) {
      if (iVar4 != 1) {
        return param_2;
      }
      iVar4 = *param_3;
      goto LAB_2c5dc89a;
    }
    iVar4 = *param_3;
    if (*piVar3 == iVar4) {
      return piVar3;
    }
    piVar3 = piVar2 + 5;
  }
  if (*piVar3 == iVar4) {
    return piVar3;
  }
  piVar3 = piVar3 + 1;
LAB_2c5dc89a:
  if (*piVar3 == iVar4) {
    return piVar3;
  }
  return param_2;
}

