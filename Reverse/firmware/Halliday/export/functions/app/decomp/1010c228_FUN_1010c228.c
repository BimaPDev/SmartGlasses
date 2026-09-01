/* FUN_1010c228 @ 0x1010c228 */

undefined4 FUN_1010c228(float *param_1,float *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (param_2 == (float *)0x0) {
    param_1[1] = 0.0;
    *param_1 = 1.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    param_1[4] = 1.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    param_1[7] = 0.0;
    param_1[8] = 1.0;
  }
  else {
    fVar8 = param_2[4];
    fVar3 = param_2[8];
    fVar9 = param_2[6];
    fVar12 = param_2[7];
    fVar10 = param_2[5];
    fVar4 = fVar12 * param_2[3] - fVar8 * fVar9;
    fVar7 = fVar10 * fVar9 - fVar3 * param_2[3];
    fVar11 = param_2[1];
    fVar6 = fVar8 * fVar3 - fVar12 * fVar10;
    fVar2 = param_2[2];
    fVar5 = fVar11 * fVar7 + fVar6 * *param_2 + fVar2 * fVar4;
    if (fVar5 == 0.0) {
      return 0;
    }
    fVar5 = 1.0 / fVar5;
    if ((fVar9 == 0.0) && (fVar12 == 0.0)) {
      if (fVar3 == 1.0) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = false;
    }
    *param_1 = fVar6 * fVar5;
    param_1[1] = (fVar12 * fVar2 - fVar3 * fVar11) * fVar5;
    fVar11 = param_2[1];
    param_1[3] = fVar7 * fVar5;
    param_1[2] = (fVar10 * fVar11 - fVar8 * fVar2) * fVar5;
    fVar2 = param_2[2];
    fVar6 = *param_2;
    param_1[4] = (fVar3 * fVar6 - fVar9 * fVar2) * fVar5;
    fVar3 = param_2[3];
    param_1[5] = (fVar2 * fVar3 - fVar10 * fVar6) * fVar5;
    fVar2 = DAT_1010c374;
    if (!bVar1) {
      fVar2 = fVar4 * fVar5;
    }
    param_1[6] = fVar2;
    fVar2 = DAT_1010c374;
    if (!bVar1) {
      fVar2 = (fVar11 * param_2[6] - fVar12 * fVar6) * fVar5;
    }
    param_1[7] = fVar2;
    if (bVar1) {
      fVar5 = 1.0;
    }
    else {
      fVar5 = (fVar6 * param_2[4] - fVar11 * fVar3) * fVar5;
    }
    param_1[8] = fVar5;
  }
  return 1;
}

