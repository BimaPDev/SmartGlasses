/* FUN_2c531984 @ 0x2c531984 */

int * FUN_2c531984(int *param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = (int)param_2 - (int)param_1;
  if (0 < iVar4 >> 5) {
    uVar3 = *param_3;
    piVar2 = param_1 + (iVar4 >> 5) * 8;
    do {
      iVar4 = FUN_2c66c4ec(uVar3);
      if (*param_1 == iVar4) {
        if (iVar4 == 0) {
          return param_1;
        }
        iVar1 = FUN_2c66960c(param_1[1],uVar3,iVar4);
        if (iVar1 == 0) {
          return param_1;
        }
      }
      if ((iVar4 == param_1[2]) &&
         ((iVar4 == 0 || (iVar1 = FUN_2c66960c(param_1[3],uVar3,iVar4), iVar1 == 0)))) {
        return param_1 + 2;
      }
      if ((param_1[4] == iVar4) &&
         ((iVar4 == 0 || (iVar1 = FUN_2c66960c(param_1[5],uVar3,iVar4), iVar1 == 0)))) {
        return param_1 + 4;
      }
      if ((iVar4 == param_1[6]) &&
         ((iVar4 == 0 || (iVar4 = FUN_2c66960c(param_1[7],uVar3,iVar4), iVar4 == 0)))) {
        return param_1 + 6;
      }
      param_1 = param_1 + 8;
    } while (param_1 != piVar2);
    iVar4 = (int)param_2 - (int)param_1;
  }
  iVar4 = iVar4 >> 3;
  if (iVar4 == 2) {
    uVar3 = *param_3;
    iVar4 = FUN_2c66c4ec(uVar3);
  }
  else {
    if (iVar4 != 3) {
      if (iVar4 != 1) {
        return param_2;
      }
      uVar3 = *param_3;
      iVar4 = FUN_2c66c4ec(uVar3);
      goto LAB_2c531a40;
    }
    uVar3 = *param_3;
    iVar4 = FUN_2c66c4ec(uVar3);
    if (iVar4 == *param_1) {
      if (iVar4 == 0) {
        return param_1;
      }
      iVar1 = FUN_2c66960c(param_1[1],uVar3,iVar4);
      if (iVar1 == 0) {
        return param_1;
      }
    }
    param_1 = param_1 + 2;
  }
  if (*param_1 == iVar4) {
    if (iVar4 == 0) {
      return param_1;
    }
    iVar4 = FUN_2c66960c(param_1[1],uVar3,iVar4);
    if (iVar4 == 0) {
      return param_1;
    }
    iVar4 = FUN_2c66c4ec(uVar3);
  }
  param_1 = param_1 + 2;
LAB_2c531a40:
  piVar2 = param_2;
  if (((iVar4 == *param_1) && (piVar2 = param_1, iVar4 != 0)) &&
     (iVar4 = FUN_2c66960c(param_1[1],uVar3,iVar4,*param_1,param_4), iVar4 != 0)) {
    piVar2 = param_2;
  }
  return piVar2;
}

