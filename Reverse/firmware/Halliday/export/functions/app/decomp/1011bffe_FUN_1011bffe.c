/* FUN_1011bffe @ 0x1011bffe */

void FUN_1011bffe(short *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  sVar1 = *param_2;
  sVar2 = *param_1;
  sVar3 = param_2[1];
  sVar4 = param_1[1];
  sVar6 = sVar1;
  if ((int)sVar2 <= (int)sVar1) {
    sVar6 = sVar2;
  }
  sVar7 = sVar3;
  if ((int)sVar4 <= (int)sVar3) {
    sVar7 = sVar4;
  }
  iVar10 = (int)param_2[2] + (int)sVar1;
  iVar9 = (int)param_1[2] + (int)sVar2;
  iVar8 = (int)param_2[3] + (int)sVar3;
  iVar5 = (int)param_1[3] + (int)sVar4;
  *param_1 = sVar6;
  param_1[1] = sVar7;
  if (iVar10 < iVar9) {
    sVar6 = (short)iVar9 - sVar6;
  }
  else {
    sVar6 = (short)iVar10 - sVar6;
  }
  if (iVar8 < iVar5) {
    sVar7 = (short)iVar5 - sVar7;
  }
  else {
    sVar7 = (short)iVar8 - sVar7;
  }
  param_1[2] = sVar6;
  param_1[3] = sVar7;
  return;
}

