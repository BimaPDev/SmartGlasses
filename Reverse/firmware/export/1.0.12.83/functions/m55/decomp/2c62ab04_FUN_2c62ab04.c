/* FUN_2c62ab04 @ 0x2c62ab04 */

void FUN_2c62ab04(short *param_1,int param_2,int param_3,short *param_4)

{
  short sVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if ((param_2 == 0) && (param_3 == 0x100)) {
    return;
  }
  iVar8 = (int)(short)(*param_1 - *param_4);
  *param_1 = *param_1 - *param_4;
  iVar9 = (int)(short)(param_1[1] - param_4[1]);
  param_1[1] = param_1[1] - param_4[1];
  iVar7 = DAT_2c62ac8c;
  piVar2 = DAT_2c62ac88;
  if (param_2 == 0) {
    *param_1 = *param_4 + (short)((uint)(param_3 * iVar8) >> 8);
    param_1[1] = param_4[1] + (short)((uint)(param_3 * iVar9) >> 8);
    return;
  }
  if (*DAT_2c62ac88 == param_2) {
    iVar7 = *DAT_2c62ac80;
    iVar4 = *DAT_2c62ac84;
  }
  else {
    if (param_2 < 0xe11) {
      iVar8 = param_2;
      if (param_2 < 0) {
        iVar8 = param_2 + 0xe10;
      }
    }
    else {
      iVar8 = param_2 + -0xe10;
    }
    iVar9 = (int)((longlong)DAT_2c62ac8c * (longlong)iVar8 >> 0x22) - (iVar8 >> 0x1f);
    sVar1 = (short)iVar9;
    iVar8 = iVar9 * -10 + iVar8;
    iVar9 = FUN_2c62e208((int)sVar1);
    iVar4 = FUN_2c62e208((int)(short)(sVar1 + 1));
    iVar5 = FUN_2c62e208((int)(short)(sVar1 + 0x5a));
    iVar6 = FUN_2c62e208((int)(short)(sVar1 + 0x5b));
    piVar3 = DAT_2c62ac84;
    iVar4 = (10 - iVar8) * iVar9 + iVar8 * iVar4;
    iVar5 = (10 - iVar8) * iVar5 + iVar8 * iVar6;
    *piVar2 = param_2;
    piVar2 = DAT_2c62ac80;
    iVar9 = (int)param_1[1];
    iVar4 = (int)((longlong)iVar7 * (longlong)iVar4 >> 0x22) - (iVar4 >> 0x1f) >> 5;
    iVar8 = (int)*param_1;
    iVar7 = (int)((longlong)iVar7 * (longlong)iVar5 >> 0x22) - (iVar5 >> 0x1f) >> 5;
    *piVar3 = iVar4;
    *piVar2 = iVar7;
  }
  if (param_3 == 0x100) {
    *param_1 = *param_4 + (short)(iVar7 * iVar8 - iVar4 * iVar9 >> 10);
    param_1[1] = param_4[1] + (short)(iVar4 * iVar8 + iVar9 * iVar7 >> 10);
    return;
  }
  *param_1 = *param_4 + (short)(param_3 * (iVar7 * iVar8 - iVar4 * iVar9) >> 0x12);
  param_1[1] = param_4[1] + (short)(param_3 * (iVar4 * iVar8 + iVar9 * iVar7) >> 0x12);
  return;
}

