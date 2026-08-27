/* FUN_14036ee0 @ 0x14036ee0 */

int FUN_14036ee0(int param_1,short param_2,int *param_3,float *param_4)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar1 = DAT_14036ff4;
  iVar6 = param_1 + -0x32;
  iVar8 = (int)param_2;
  fVar9 = (float)FUN_14036b34(DAT_14036ff4,iVar8,(int)(short)iVar6,1);
  param_1 = param_1 + 0x32;
  fVar10 = (float)FUN_14036b34(uVar1,iVar8,(int)(short)param_1,1);
  iVar3 = iVar6 - param_1;
  do {
    iVar4 = (iVar6 + param_1) / 2;
    if (iVar3 + 0x10U < 0x21) {
      fVar11 = (float)FUN_14036b34(uVar1,iVar8,(int)(short)iVar4,3);
    }
    else {
      fVar11 = (float)FUN_14036b34(uVar1,iVar8,(int)(short)iVar4,2);
    }
    iVar5 = iVar4;
    iVar7 = iVar6;
    fVar2 = fVar11;
    fVar12 = fVar9;
    if (fVar10 < fVar9) {
      iVar6 = param_1;
      iVar5 = param_1;
      iVar7 = iVar4;
      fVar9 = fVar10;
      fVar2 = fVar10;
      fVar12 = fVar11;
    }
    fVar10 = fVar2;
    iVar3 = iVar7 - iVar5;
    if (fVar9 < *param_4) {
      *param_3 = iVar6;
      *param_4 = fVar9;
    }
    param_1 = iVar5;
    iVar6 = iVar7;
    fVar9 = fVar12;
  } while (6 < iVar3 + 3U);
  if (fVar12 <= fVar10) {
    iVar5 = iVar7;
    fVar10 = fVar12;
  }
  if (fVar10 < *param_4) {
    *param_3 = iVar5;
    *param_4 = fVar10;
  }
  iVar6 = *param_3;
  if (iVar5 != iVar6) {
    fVar9 = (float)FUN_14036b34(DAT_14036ff4,iVar8,(int)(short)iVar6,3);
    *param_4 = fVar9;
    if ((int)((uint)(fVar10 < fVar9) << 0x1f) < 0) {
      *param_3 = iVar5;
      *param_4 = fVar10;
    }
    iVar6 = *param_3;
  }
  return iVar6;
}

