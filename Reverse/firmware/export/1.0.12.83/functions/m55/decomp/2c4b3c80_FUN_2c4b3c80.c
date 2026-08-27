/* FUN_2c4b3c80 @ 0x2c4b3c80 */

void FUN_2c4b3c80(float *param_1,float *param_2)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_38 [8];
  float fStack_18;
  int local_14;
  float *pfVar4;
  
  pfVar6 = local_38;
  local_14 = *DAT_2c4b3d18;
  pfVar5 = param_1;
  do {
    fVar7 = *pfVar5;
    fVar8 = pfVar5[1];
    fVar9 = pfVar5[2];
    pfVar2 = pfVar6;
    pfVar3 = param_2;
    do {
      pfVar4 = pfVar3 + 1;
      *pfVar2 = fVar8 * pfVar3[3] + fVar7 * *pfVar3 + fVar9 * pfVar3[6];
      pfVar2 = pfVar2 + 1;
      pfVar3 = pfVar4;
    } while (param_2 + 3 != pfVar4);
    pfVar5 = pfVar5 + 3;
    pfVar6 = pfVar6 + 3;
  } while (pfVar5 != param_1 + 9);
  pfVar5 = local_38;
  do {
    pfVar2 = param_1 + 4;
    pfVar6 = pfVar5 + 4;
    fVar7 = pfVar5[1];
    fVar8 = pfVar5[2];
    fVar9 = pfVar5[3];
    pfVar3 = pfVar5 + 4;
    *param_1 = *pfVar5;
    param_1[1] = fVar7;
    param_1[2] = fVar8;
    param_1[3] = fVar9;
    piVar1 = DAT_2c4b3d18;
    pfVar5 = pfVar6;
    param_1 = pfVar2;
  } while (pfVar3 != &fStack_18);
  *pfVar2 = *pfVar6;
  if (*piVar1 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

