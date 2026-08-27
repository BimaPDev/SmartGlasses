/* FUN_2c48d594 @ 0x2c48d594 */

int FUN_2c48d594(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar5 = *param_1;
  if (iVar5 == 0) {
    return 0;
  }
  uVar2 = param_1[1];
  if (((uVar2 != 0) && (uVar2 <= (uint)param_1[2])) || (param_2 < 0)) {
    return 0;
  }
  uVar1 = param_2 + 1 + param_1[2];
  if (uVar1 <= uVar2) {
    return iVar5 + param_1[2];
  }
  if (param_1[4] != 0) {
    return 0;
  }
  if (uVar1 < 0x40000000) {
    pcVar3 = (code *)param_1[8];
    iVar4 = uVar1 * 2;
  }
  else {
    if ((int)uVar1 < 0) {
      return 0;
    }
    pcVar3 = (code *)param_1[8];
    iVar4 = 0x7fffffff;
  }
  if (pcVar3 == (code *)0x0) {
    iVar5 = (*(code *)param_1[6])(iVar4);
    if (iVar5 == 0) {
LAB_2c48d612:
      (*(code *)param_1[7])(*param_1);
      *param_1 = 0;
      param_1[1] = 0;
      return 0;
    }
    FUN_2c674668(iVar5,*param_1,param_1[2] + 1);
    (*(code *)param_1[7])(*param_1);
  }
  else {
    iVar5 = (*pcVar3)(iVar5,iVar4);
    if (iVar5 == 0) goto LAB_2c48d612;
  }
  *param_1 = iVar5;
  param_1[1] = iVar4;
  return iVar5 + param_1[2];
}

