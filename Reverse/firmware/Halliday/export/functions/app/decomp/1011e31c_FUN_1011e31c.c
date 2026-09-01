/* FUN_1011e31c @ 0x1011e31c */

void FUN_1011e31c(uint *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (param_3 + -1) * 0x10000;
  if (param_7 == 0) {
    if ((param_5 < 0) || (iVar1 < param_5)) {
      iVar1 = -1;
      goto LAB_1011e3a2;
    }
  }
  else {
    if (param_7 < 1) {
      iVar3 = -param_5;
      iVar2 = (param_7 - param_5) + 1 + iVar1;
    }
    else {
      iVar2 = (param_7 - param_5) + -1;
      iVar3 = iVar1 - param_5;
    }
    *param_1 = iVar2 / param_7 & ~(iVar2 / param_7 >> 0x1f);
    if (iVar3 / param_7 < *param_2) {
      *param_2 = iVar3 / param_7;
    }
    else {
      *param_2 = *param_2;
    }
  }
  iVar1 = (param_4 + -1) * 0x10000;
  if (param_8 != 0) {
    if (param_8 < 1) {
      iVar3 = -param_6;
      iVar2 = (param_8 - param_6) + 1 + iVar1;
    }
    else {
      iVar2 = (param_8 - param_6) + -1;
      iVar3 = iVar1 - param_6;
    }
    if ((int)*param_1 < iVar2 / param_8) {
      *param_1 = iVar2 / param_8;
    }
    else {
      *param_1 = *param_1;
    }
    if (iVar3 / param_8 < *param_2) {
      *param_2 = iVar3 / param_8;
      return;
    }
    *param_2 = *param_2;
    return;
  }
  if ((-1 < param_6) && (param_6 <= iVar1)) {
    return;
  }
  iVar1 = *param_1 - 1;
LAB_1011e3a2:
  *param_2 = iVar1;
  return;
}

