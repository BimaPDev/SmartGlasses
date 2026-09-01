/* FUN_10093448 @ 0x10093448 */

void FUN_10093448(int *param_1,int param_2,int param_3,int *param_4)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((param_2 != 0) || (param_3 != 0x100)) {
    iVar6 = *param_4;
    iVar8 = *param_1;
    iVar4 = param_4[1];
    iVar7 = param_1[1];
    *param_1 = iVar8 - iVar6;
    param_1[1] = iVar7 - iVar4;
    piVar2 = DAT_10093568;
    if (param_2 == 0) {
      *param_1 = *param_4 + (param_3 * (iVar8 - iVar6) >> 8);
      iVar6 = param_4[1] + (param_3 * (iVar7 - iVar4) >> 8);
    }
    else {
      piVar5 = DAT_1009356c;
      if (*DAT_10093568 != param_2) {
        if (param_2 < 0xe11) {
          iVar4 = param_2;
          if (param_2 < 0) {
            iVar4 = param_2 + 0xe10;
          }
        }
        else {
          iVar4 = param_2 + -0xe10;
        }
        sVar1 = (short)(iVar4 / 10);
        iVar4 = iVar4 % 10;
        iVar6 = FUN_1013d980((int)sVar1);
        iVar7 = FUN_1013d980((int)(short)(sVar1 + 1));
        iVar8 = FUN_1013d980((int)(short)(sVar1 + 0x5a));
        iVar3 = FUN_1013d980((int)(short)(sVar1 + 0x5b));
        piVar5 = DAT_1009356c;
        *DAT_1009356c = ((10 - iVar4) * iVar6 + iVar4 * iVar7) / 10 >> 5;
        *DAT_10093570 = ((10 - iVar4) * iVar8 + iVar4 * iVar3) / 10 >> 5;
        *piVar2 = param_2;
      }
      iVar4 = *DAT_10093570 * *param_1 - *piVar5 * param_1[1];
      iVar7 = *piVar5 * *param_1 + param_1[1] * *DAT_10093570;
      iVar6 = param_4[1];
      if (param_3 != 0x100) {
        *param_1 = *param_4 + (iVar4 * param_3 >> 0x12);
        param_1[1] = iVar6 + (iVar7 * param_3 >> 0x12);
        return;
      }
      *param_1 = *param_4 + (iVar4 >> 10);
      iVar6 = iVar6 + (iVar7 >> 10);
    }
    param_1[1] = iVar6;
  }
  return;
}

