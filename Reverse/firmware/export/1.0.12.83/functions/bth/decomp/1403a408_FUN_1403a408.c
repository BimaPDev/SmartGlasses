/* FUN_1403a408 @ 0x1403a408 */

void FUN_1403a408(int *param_1,float *param_2,float *param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int local_3c;
  
  uVar2 = param_4 >> 2;
  local_3c = *param_1;
  param_4 = param_4 & 3;
  if (param_5 == 1) {
    pfVar6 = (float *)param_1[1];
    pfVar7 = (float *)param_1[2];
    do {
      fVar14 = *pfVar7;
      fVar13 = pfVar7[1];
      fVar12 = pfVar7[2];
      fVar16 = pfVar7[3];
      fVar15 = pfVar7[4];
      fVar17 = *pfVar6;
      fVar18 = pfVar6[1];
      fVar22 = pfVar6[2];
      fVar23 = pfVar6[3];
      uVar1 = uVar2;
      pfVar3 = param_3;
      pfVar5 = param_2;
      if (uVar2 != 0) {
        do {
          fVar10 = *pfVar5;
          fVar23 = fVar23 * fVar15 + fVar18 * fVar12 + fVar17 * fVar13 + fVar22 * fVar16 +
                   fVar10 * fVar14;
          *pfVar3 = fVar23;
          fVar11 = pfVar5[1];
          fVar22 = fVar22 * fVar15 + fVar17 * fVar12 + fVar10 * fVar13 + fVar11 * fVar14 +
                   fVar23 * fVar16;
          pfVar3[1] = fVar22;
          fVar18 = pfVar5[2];
          fVar23 = fVar11 * fVar13 + fVar18 * fVar14 + fVar10 * fVar12 + fVar23 * fVar15 +
                   fVar22 * fVar16;
          pfVar3[2] = fVar23;
          fVar17 = pfVar5[3];
          fVar22 = fVar18 * fVar13 + fVar17 * fVar14 + fVar11 * fVar12 + fVar22 * fVar15 +
                   fVar23 * fVar16;
          uVar1 = uVar1 - 1;
          pfVar3[3] = fVar22;
          pfVar3 = pfVar3 + 4;
          pfVar5 = pfVar5 + 4;
        } while (uVar1 != 0);
        param_2 = param_2 + uVar2 * 4;
        pfVar3 = param_3 + uVar2 * 4;
      }
      fVar10 = fVar17;
      fVar11 = fVar22;
      if (param_4 != 0) {
        fVar20 = *param_2;
        fVar21 = fVar18 * fVar12 + fVar17 * fVar13 + fVar22 * fVar16 + fVar23 * fVar15 +
                 fVar14 * fVar20;
        *pfVar3 = fVar21;
        fVar10 = fVar20;
        fVar18 = fVar17;
        fVar11 = fVar21;
        fVar23 = fVar22;
        if (param_4 != 1) {
          fVar19 = param_2[1];
          fVar17 = fVar22 * fVar15 + fVar17 * fVar12 + fVar13 * fVar20 + fVar14 * fVar19 +
                   fVar16 * fVar21;
          pfVar3[1] = fVar17;
          fVar10 = fVar19;
          fVar18 = fVar20;
          fVar11 = fVar17;
          fVar23 = fVar21;
          if (param_4 != 2) {
            fVar10 = param_2[2];
            fVar11 = fVar12 * fVar20 + fVar13 * fVar19 + fVar14 * fVar10 + fVar15 * fVar21 +
                     fVar16 * fVar17;
            pfVar3[2] = fVar11;
            fVar18 = fVar19;
            fVar23 = fVar17;
          }
        }
      }
      local_3c = local_3c + -1;
      *pfVar6 = fVar10;
      pfVar6[1] = fVar18;
      pfVar6[2] = fVar11;
      pfVar6[3] = fVar23;
      param_2 = param_3;
      pfVar6 = pfVar6 + 4;
      pfVar7 = pfVar7 + 5;
    } while (local_3c != 0);
  }
  else {
    iVar4 = param_5 * 0x10 * uVar2;
    pfVar6 = (float *)param_1[1];
    pfVar7 = (float *)param_1[2];
    do {
      fVar14 = *pfVar7;
      fVar13 = pfVar7[1];
      fVar12 = pfVar7[2];
      fVar16 = pfVar7[3];
      fVar15 = pfVar7[4];
      fVar17 = *pfVar6;
      fVar18 = pfVar6[1];
      fVar22 = pfVar6[2];
      fVar23 = pfVar6[3];
      uVar1 = uVar2;
      pfVar3 = param_3;
      pfVar5 = param_2;
      if (uVar2 != 0) {
        do {
          fVar10 = *pfVar5;
          fVar23 = fVar15 * fVar23 + fVar12 * fVar18 + fVar13 * fVar17 + fVar16 * fVar22 +
                   fVar14 * fVar10;
          *pfVar3 = fVar23;
          pfVar9 = pfVar5 + param_5;
          fVar11 = *pfVar9;
          fVar22 = fVar15 * fVar22 + fVar12 * fVar17 + fVar13 * fVar10 + fVar14 * fVar11 +
                   fVar16 * fVar23;
          pfVar8 = pfVar3 + param_5;
          *pfVar8 = fVar22;
          fVar18 = pfVar9[param_5];
          fVar23 = fVar13 * fVar11 + fVar14 * fVar18 + fVar12 * fVar10 + fVar15 * fVar23 +
                   fVar16 * fVar22;
          pfVar8[param_5] = fVar23;
          fVar17 = (pfVar9 + param_5)[param_5];
          fVar22 = fVar13 * fVar18 + fVar14 * fVar17 + fVar12 * fVar11 + fVar15 * fVar22 +
                   fVar16 * fVar23;
          uVar1 = uVar1 - 1;
          (pfVar8 + param_5)[param_5] = fVar22;
          pfVar3 = pfVar3 + param_5 * 4;
          pfVar5 = pfVar5 + param_5 * 4;
        } while (uVar1 != 0);
        param_2 = (float *)((int)param_2 + iVar4);
        pfVar3 = (float *)((int)param_3 + iVar4);
      }
      fVar10 = fVar17;
      fVar11 = fVar22;
      if (param_4 != 0) {
        fVar20 = *param_2;
        fVar21 = fVar12 * fVar18 + fVar13 * fVar17 + fVar16 * fVar22 + fVar15 * fVar23 +
                 fVar14 * fVar20;
        *pfVar3 = fVar21;
        fVar10 = fVar20;
        fVar18 = fVar17;
        fVar11 = fVar21;
        fVar23 = fVar22;
        if (param_4 != 1) {
          fVar19 = param_2[param_5];
          fVar17 = fVar15 * fVar22 + fVar12 * fVar17 + fVar13 * fVar20 + fVar14 * fVar19 +
                   fVar16 * fVar21;
          pfVar3[param_5] = fVar17;
          fVar10 = fVar19;
          fVar18 = fVar20;
          fVar11 = fVar17;
          fVar23 = fVar21;
          if (param_4 != 2) {
            fVar10 = (param_2 + param_5)[param_5];
            fVar11 = fVar12 * fVar20 + fVar13 * fVar19 + fVar14 * fVar10 + fVar15 * fVar21 +
                     fVar16 * fVar17;
            (pfVar3 + param_5)[param_5] = fVar11;
            fVar18 = fVar19;
            fVar23 = fVar17;
          }
        }
      }
      *pfVar6 = fVar10;
      local_3c = local_3c + -1;
      pfVar6[1] = fVar18;
      pfVar6[2] = fVar11;
      pfVar6[3] = fVar23;
      param_2 = param_3;
      pfVar6 = pfVar6 + 4;
      pfVar7 = pfVar7 + 5;
    } while (local_3c != 0);
  }
  return;
}

