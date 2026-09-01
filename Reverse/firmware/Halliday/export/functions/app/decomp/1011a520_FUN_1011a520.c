/* FUN_1011a520 @ 0x1011a520 */

int FUN_1011a520(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    if (iVar2 == 0) {
      return 0;
    }
    uVar1 = param_1[1];
    if (((uVar1 == 0) || ((uint)param_1[2] < uVar1)) && (-1 < param_2)) {
      uVar3 = param_2 + 1 + param_1[2];
      if (uVar3 <= uVar1) {
        return iVar2 + param_1[2];
      }
      if (param_1[4] == 0) {
        if (uVar3 < 0x40000000) {
          iVar4 = uVar3 * 2;
        }
        else {
          if ((int)uVar3 < 0) {
            return 0;
          }
          iVar4 = 0x7fffffff;
        }
        if ((code *)param_1[8] == (code *)0x0) {
          iVar2 = (*(code *)param_1[6])(iVar4);
          if (iVar2 != 0) {
            FUN_1011ea40(iVar2,*param_1,param_1[2] + 1);
            (*(code *)param_1[7])(*param_1);
            goto LAB_1011a598;
          }
        }
        else {
          iVar2 = (*(code *)param_1[8])(iVar2,iVar4);
          if (iVar2 != 0) {
LAB_1011a598:
            *param_1 = iVar2;
            param_1[1] = iVar4;
            return iVar2 + param_1[2];
          }
        }
        (*(code *)param_1[7])(*param_1);
        *param_1 = 0;
        param_1[1] = 0;
        return 0;
      }
    }
  }
  return 0;
}

