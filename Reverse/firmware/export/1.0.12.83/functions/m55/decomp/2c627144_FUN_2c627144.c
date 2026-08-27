/* FUN_2c627144 @ 0x2c627144 */

void FUN_2c627144(int param_1,int param_2,int param_3,int param_4,short *param_5,short *param_6)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  if ((param_4 < 2) && (param_1 - 3U < 3)) {
switchD_2c627152_caseD_2:
    param_2 = param_2 - param_3;
    if (param_2 < 0) {
      param_2 = param_2 + 1;
    }
    *param_6 = 0;
    *param_5 = *param_5 + (short)(param_2 >> 1);
    return;
  }
  sVar1 = (short)param_2;
  sVar2 = (short)param_3;
  switch(param_1) {
  case 1:
    *param_6 = 0;
    *param_5 = (sVar1 - sVar2) + *param_5;
    return;
  case 2:
    goto switchD_2c627152_caseD_2;
  case 3:
    sVar1 = (short)(sVar1 - sVar2) / (short)((short)param_4 + 1);
    *param_6 = sVar1;
    *param_5 = sVar1 + *param_5;
    return;
  case 4:
    sVar1 = (short)((int)(short)(sVar1 - sVar2) / param_4) + *param_6;
    iVar3 = (int)sVar1;
    *param_6 = sVar1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 1;
    }
    *param_5 = *param_5 + (short)(iVar3 >> 1);
    return;
  case 5:
    *param_6 = (short)(sVar1 - sVar2) / (short)((short)param_4 + -1);
    return;
  default:
    *param_6 = 0;
    return;
  }
}

