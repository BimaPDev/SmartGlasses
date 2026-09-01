/* FUN_1012a3cc @ 0x1012a3cc */

void FUN_1012a3cc(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  int iVar1;
  
  if ((param_4 < 2) && (param_1 - 3U < 3)) {
switchD_1012a3e2_caseD_2:
    param_2 = param_2 - param_3;
    *param_6 = 0;
LAB_1012a3f2:
    iVar1 = *param_5 + param_2 / 2;
  }
  else {
    switch(param_1) {
    case 1:
      *param_6 = 0;
      iVar1 = *param_5 + (param_2 - param_3);
      break;
    case 2:
      goto switchD_1012a3e2_caseD_2;
    case 3:
      iVar1 = (param_2 - param_3) / (param_4 + 1);
      *param_6 = iVar1;
      iVar1 = iVar1 + *param_5;
      break;
    case 4:
      param_2 = (param_2 - param_3) / param_4 + *param_6;
      *param_6 = param_2;
      goto LAB_1012a3f2;
    case 5:
      *param_6 = (param_2 - param_3) / (param_4 + -1);
      return;
    default:
      *param_6 = 0;
      return;
    }
  }
  *param_5 = iVar1;
  return;
}

