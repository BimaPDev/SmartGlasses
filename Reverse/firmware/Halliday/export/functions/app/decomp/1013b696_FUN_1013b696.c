/* FUN_1013b696 @ 0x1013b696 */

void FUN_1013b696(float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_48 [13];
  float *pfVar4;
  
  pfVar5 = local_48;
  pfVar1 = local_48;
  pfVar2 = param_1;
  do {
    fVar7 = *pfVar2;
    fVar8 = pfVar2[1];
    fVar9 = pfVar2[2];
    pfVar3 = param_2;
    pfVar6 = pfVar5;
    do {
      pfVar4 = pfVar3 + 1;
      *pfVar6 = fVar7 * *pfVar3 + fVar8 * pfVar3[3] + fVar9 * pfVar3[6];
      pfVar6 = pfVar6 + 1;
      pfVar3 = pfVar4;
    } while (param_2 + 3 != pfVar4);
    pfVar2 = pfVar2 + 3;
    pfVar5 = pfVar5 + 3;
  } while (pfVar2 != param_1 + 9);
  do {
    fVar7 = *pfVar1;
    fVar8 = pfVar1[1];
    pfVar1 = pfVar1 + 2;
    *param_1 = fVar7;
    param_1[1] = fVar8;
    param_1 = param_1 + 2;
  } while (pfVar1 != local_48 + 8);
  *param_1 = *pfVar1;
  return;
}

