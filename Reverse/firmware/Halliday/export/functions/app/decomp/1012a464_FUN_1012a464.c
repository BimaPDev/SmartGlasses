/* FUN_1012a464 @ 0x1012a464 */

int FUN_1012a464(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,
                int *param_7,char param_8)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_2 != 0) {
    iVar4 = 0;
    goto LAB_1012a478;
  }
  if (((param_3 - 4U & 0xff) < 3) && (param_4 = 0, param_5 == 1)) {
    param_3 = 1;
  }
  iVar4 = 0;
  for (piVar2 = param_6; param_6 + param_5 != piVar2; piVar2 = piVar2 + 1) {
    iVar4 = iVar4 + *piVar2 + param_4;
  }
  switch(param_3) {
  case 0:
    *param_7 = 0;
    break;
  case 1:
    iVar4 = (param_4 + param_1) - iVar4;
    iVar4 = iVar4 - (iVar4 >> 0x1f);
    goto LAB_1012a4e6;
  case 2:
    iVar4 = (param_4 + param_1) - iVar4;
    goto LAB_1012a478;
  case 4:
    param_4 = ((param_4 + param_1) - iVar4) / (param_5 + 1);
    *param_7 = param_4;
    break;
  case 5:
    param_4 = ((param_4 + param_1) - iVar4) / param_5;
    iVar4 = param_4 - (param_4 >> 0x1f);
LAB_1012a4e6:
    iVar4 = iVar4 >> 1;
LAB_1012a478:
    *param_7 = iVar4;
    break;
  case 6:
    param_4 = ((param_4 + param_1) - iVar4) / (param_5 + -1);
    *param_7 = 0;
  }
  uVar3 = 0;
  while (uVar3 < param_5 - 1U) {
    piVar2 = param_7 + uVar3;
    piVar1 = param_6 + uVar3;
    uVar3 = uVar3 + 1;
    param_7[uVar3] = *piVar2 + *piVar1 + param_4;
  }
  iVar4 = param_7[param_5 + 0x3fffffff];
  iVar5 = param_6[param_5 + 0x3fffffff];
  iVar6 = *param_7;
  if (param_8 != '\0') {
    for (iVar7 = 0; iVar7 != param_5; iVar7 = iVar7 + 1) {
      param_7[iVar7] = param_1 - (param_7[iVar7] + param_6[iVar7]);
    }
  }
  return (iVar4 + iVar5) - iVar6;
}

