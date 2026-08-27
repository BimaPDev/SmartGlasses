/* FUN_14036dcc @ 0x14036dcc */

int FUN_14036dcc(undefined4 param_1,int param_2,short param_3,int *param_4,float *param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar7 = (int)param_3;
  iVar5 = param_2 + -0x32;
  param_2 = param_2 + 0x32;
  fVar8 = (float)FUN_14036c5c(param_1,(int)(short)iVar5,iVar7,2);
  fVar9 = (float)FUN_14036c5c(param_1,(int)(short)param_2,iVar7,2);
  iVar2 = iVar5 - param_2;
  do {
    iVar3 = (iVar5 + param_2) / 2;
    if (iVar2 + 7U < 0xf) {
      fVar10 = (float)FUN_14036c5c(param_1,(int)(short)iVar3,iVar7,4);
    }
    else {
      fVar10 = (float)FUN_14036c5c(param_1,(int)(short)iVar3,iVar7,2);
    }
    iVar4 = iVar3;
    iVar6 = iVar5;
    fVar1 = fVar10;
    fVar11 = fVar8;
    if (fVar9 < fVar8) {
      iVar5 = param_2;
      iVar4 = param_2;
      iVar6 = iVar3;
      fVar8 = fVar9;
      fVar1 = fVar9;
      fVar11 = fVar10;
    }
    fVar9 = fVar1;
    iVar2 = iVar6 - iVar4;
    if (fVar8 < *param_5) {
      *param_4 = iVar5;
      *param_5 = fVar8;
    }
    param_2 = iVar4;
    iVar5 = iVar6;
    fVar8 = fVar11;
  } while (2 < iVar2 + 1U);
  if (fVar11 <= fVar9) {
    iVar4 = iVar6;
    fVar9 = fVar11;
  }
  if (fVar9 < *param_5) {
    *param_4 = iVar4;
    *param_5 = fVar9;
  }
  iVar5 = *param_4;
  if (iVar4 != iVar5) {
    fVar8 = (float)FUN_14036b34(param_1,(int)(short)iVar5,iVar7,3);
    *param_5 = fVar8;
    if ((int)((uint)(fVar9 < fVar8) << 0x1f) < 0) {
      *param_4 = iVar4;
      *param_5 = fVar9;
    }
    iVar5 = *param_4;
  }
  return iVar5;
}

