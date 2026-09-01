/* FUN_1013bfa0 @ 0x1013bfa0 */

void FUN_1013bfa0(float param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74 [4];
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  
  fVar13 = 1.0 - param_1;
  local_8c = *param_4;
  local_88 = param_4[2];
  local_84 = param_4[4];
  local_80 = param_4[1];
  local_7c = param_4[3];
  local_78 = param_4[5];
  FUN_1011ea48(local_74,0,0x18);
  pfVar8 = &local_8c;
  local_5c = 1.0;
  local_50 = fVar13;
  local_4c = param_1;
  local_44 = fVar13 * fVar13;
  local_40 = (fVar13 + fVar13) * param_1;
  local_3c = param_1 * param_1;
  iVar3 = 0;
  local_58 = 0.0;
  local_54 = 0.0;
  local_48 = 0.0;
  pfVar4 = pfVar8;
  do {
    pfVar2 = &local_5c;
    iVar5 = 0;
    pfVar1 = (float *)((int)local_74 + iVar3);
    do {
      fVar12 = *pfVar1;
      iVar6 = 3;
      pfVar7 = pfVar4;
      pfVar9 = pfVar2;
      do {
        fVar10 = *pfVar9;
        pfVar9 = pfVar9 + 1;
        fVar11 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        iVar6 = iVar6 + -1;
        fVar12 = fVar12 + fVar10 * fVar11;
      } while (iVar6 != 0);
      iVar5 = iVar5 + 3;
      *pfVar1 = fVar12;
      pfVar2 = pfVar2 + 3;
      pfVar1 = pfVar1 + 1;
    } while (iVar5 != 9);
    iVar3 = iVar3 + 0xc;
    pfVar4 = pfVar4 + 3;
  } while (iVar3 != 0x18);
  *param_2 = local_74[0];
  param_2[1] = local_74[3];
  param_2[2] = local_74[1];
  param_2[3] = local_64;
  param_2[4] = local_74[2];
  param_2[5] = local_60;
  FUN_1011ea48(local_74,0);
  local_5c = fVar13 * fVar13;
  local_58 = (param_1 + param_1) * fVar13;
  local_54 = param_1 * param_1;
  local_4c = fVar13;
  local_48 = param_1;
  local_3c = 1.0;
  local_50 = 0.0;
  local_44 = 0.0;
  local_40 = 0.0;
  iVar3 = 0;
  do {
    pfVar4 = &local_5c;
    iVar5 = 0;
    pfVar2 = (float *)((int)local_74 + iVar3);
    do {
      fVar13 = *pfVar2;
      iVar6 = 3;
      pfVar1 = pfVar4;
      pfVar7 = pfVar8;
      do {
        fVar12 = *pfVar1;
        pfVar1 = pfVar1 + 1;
        fVar10 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        iVar6 = iVar6 + -1;
        fVar13 = fVar13 + fVar12 * fVar10;
      } while (iVar6 != 0);
      iVar5 = iVar5 + 3;
      *pfVar2 = fVar13;
      pfVar4 = pfVar4 + 3;
      pfVar2 = pfVar2 + 1;
    } while (iVar5 != 9);
    iVar3 = iVar3 + 0xc;
    pfVar8 = pfVar8 + 3;
  } while (iVar3 != 0x18);
  *param_3 = local_74[0];
  param_3[1] = local_74[3];
  param_3[2] = local_74[1];
  param_3[3] = local_64;
  param_3[4] = local_74[2];
  param_3[5] = local_60;
  return;
}

