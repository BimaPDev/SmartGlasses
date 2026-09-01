/* FUN_1011e560 @ 0x1011e560 */

void FUN_1011e560(short *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = (int)*param_2;
  iVar6 = (int)*param_1;
  if (iVar6 < iVar2) {
    if ((int)param_2[2] <= (int)param_1[2]) goto LAB_1011e5ba;
    iVar4 = (int)param_2[2] - (int)param_1[2];
    iVar5 = iVar2 - iVar6;
    if (iVar4 <= iVar2 - iVar6) {
      iVar5 = iVar4;
    }
LAB_1011e584:
    sVar3 = (short)iVar5;
  }
  else {
LAB_1011e5ba:
    if (iVar2 < iVar6) {
      if ((int)param_2[2] < (int)param_1[2]) {
        iVar4 = (int)param_2[2] - (int)param_1[2];
        iVar5 = iVar2 - iVar6;
        if (iVar2 - iVar6 < iVar4) {
          iVar5 = iVar4;
        }
        goto LAB_1011e584;
      }
    }
    sVar3 = 0;
  }
  iVar6 = (int)param_1[1];
  iVar2 = (int)param_2[1];
  if (iVar6 < iVar2) {
    if ((int)param_1[3] < (int)param_2[3]) {
      iVar5 = (int)param_2[3] - (int)param_1[3];
      if (iVar2 - iVar6 <= iVar5) {
        iVar5 = iVar2 - iVar6;
      }
      sVar1 = (short)iVar5;
      goto LAB_1011e5ac;
    }
  }
  if (iVar2 < iVar6) {
    if ((int)param_2[3] < (int)param_1[3]) {
      iVar5 = (int)param_2[3] - (int)param_1[3];
      if (iVar5 < iVar2 - iVar6) {
        iVar5 = iVar2 - iVar6;
      }
      sVar1 = (short)iVar5;
      goto LAB_1011e5ac;
    }
  }
  sVar1 = 0;
LAB_1011e5ac:
  FUN_1011e50a(param_1,(int)(short)(*param_1 + sVar3),(int)(short)(sVar1 + param_1[1]));
  return;
}

