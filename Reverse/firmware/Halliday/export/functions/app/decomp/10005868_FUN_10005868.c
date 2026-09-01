/* FUN_10005868 @ 0x10005868 */

int FUN_10005868(int param_1,float *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_78 [3];
  undefined1 local_6c [28];
  float local_50 [2];
  float local_48;
  float local_40;
  float local_38;
  
  if (param_1 == 0) {
    return 1;
  }
  if (param_3 == 0xb) {
    return 0;
  }
  if (param_3 == 0) {
    uVar9 = *(undefined8 *)(param_2 + 2);
    iVar5 = *(int *)(param_1 + 0x30);
    if ((((param_2[2] == *param_2) && (param_2[1] == (float)((ulonglong)uVar9 >> 0x20))) &&
        (uVar9 = *(undefined8 *)(param_2 + 4), param_2[4] == *param_2)) &&
       (param_2[1] == (float)((ulonglong)uVar9 >> 0x20))) {
      fVar6 = param_2[6];
    }
    else {
      fVar6 = (float)uVar9;
    }
    iVar1 = FUN_10110c8c(fVar6,param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
    pfVar3 = *(float **)(param_1 + 0x30);
    *pfVar3 = *param_2;
    pfVar3[1] = param_2[1];
    *(undefined4 *)(iVar5 + 0x14) = 0;
  }
  fVar12 = param_2[6] - *param_2;
  fVar11 = param_2[7] - param_2[1];
  fVar6 = (float)FUN_1011679c((param_2[2] - param_2[6]) * fVar11 -
                              (param_2[3] - param_2[7]) * fVar12);
  fVar7 = (float)FUN_1011679c((param_2[4] - param_2[6]) * fVar11 -
                              (param_2[5] - param_2[7]) * fVar12);
  if (-1 < (int)((uint)((fVar6 + fVar7) * (fVar6 + fVar7) <
                       (fVar11 * fVar11 + fVar12 * fVar12) * 0.25) << 0x1f)) {
    FUN_1013c0fa(0x3f000000,local_78 + 2,local_50,param_2);
    iVar5 = FUN_10005868(param_1,local_78 + 2);
    if (iVar5 != 0) {
      return iVar5;
    }
    iVar5 = FUN_10005868(param_1,local_50,param_3 + 1U & 0xff);
    if (iVar5 != 0) {
      return iVar5;
    }
    if (param_3 != 0) {
      return 0;
    }
    iVar5 = FUN_10110c8c(param_2[6],param_1);
    if (iVar5 == 0) {
      pfVar3 = *(float **)(param_1 + 0x30);
      if ((param_2[6] == param_2[4]) && (param_2[7] == param_2[5])) {
        if ((param_2[6] == param_2[2]) && (param_2[7] == param_2[3])) {
          *pfVar3 = *param_2;
          fVar6 = param_2[1];
        }
        else {
          *pfVar3 = param_2[2];
          fVar6 = param_2[3];
        }
      }
      else {
        *pfVar3 = param_2[4];
        fVar6 = param_2[5];
      }
      pfVar3[1] = fVar6;
      iVar5 = FUN_10110c8c(param_2[6],param_1);
      if (iVar5 == 0) {
        *pfVar3 = param_2[6];
        pfVar3[1] = param_2[7];
        pfVar3[5] = 0.0;
        return 0;
      }
      return iVar5;
    }
    return iVar5;
  }
  fVar11 = *param_2;
  fVar10 = param_2[6];
  fVar12 = param_2[1];
  fVar6 = param_2[7];
  fVar7 = (float)((uint)(fVar10 < fVar11) * (int)fVar10 + (uint)(fVar11 <= fVar10) * (int)fVar11);
  if (fVar6 < fVar12) {
    fVar10 = (float)((uint)(fVar10 < fVar11) * (int)fVar11 + (uint)(fVar11 <= fVar10) * (int)fVar10)
    ;
    fVar11 = fVar6;
    fVar6 = fVar12;
  }
  else {
    fVar10 = (float)((uint)(fVar10 < fVar11) * (int)fVar11 + (uint)(fVar11 <= fVar10) * (int)fVar10)
    ;
    fVar11 = fVar12;
    if (fVar6 < fVar12) {
      fVar6 = fVar12;
    }
  }
  if ((((fVar7 <= param_2[2]) && (param_2[2] <= fVar10)) && (fVar11 <= param_2[3])) &&
     (((param_2[3] <= fVar6 && (fVar7 <= param_2[4])) &&
      ((param_2[4] <= fVar10 && ((fVar11 <= param_2[5] && (param_2[5] <= fVar6))))))))
  goto LAB_10005aa2;
  FUN_10111010(local_50,param_2);
  fVar12 = ((local_50[0] * -3.0 + local_48 * 9.0) - local_40 * 9.0) + local_38 * 3.0;
  fVar7 = (local_50[0] * 6.0 - local_48 * 12.0) + local_40 * 6.0;
  fVar11 = local_50[0] * -3.0 + local_48 * 3.0;
  uVar2 = FUN_10003a58(fVar12);
  uVar2 = FUN_101166f8(uVar2);
  iVar5 = FUN_10003fec(uVar2,extraout_s1,DAT_10005cac,DAT_10005cb0);
  fVar6 = DAT_10005ca8;
  if (iVar5 == 0) {
    fVar11 = fVar7 * fVar7 - fVar12 * 4.0 * fVar11;
    if (fVar11 <= DAT_10005ca8) goto LAB_10005aa2;
    uVar2 = FUN_10003a58(fVar11);
    uVar8 = FUN_10116944(uVar2);
    fVar11 = (float)FUN_100040f8(uVar8,extraout_s1_00);
    fVar11 = (fVar11 - fVar7) / (fVar12 + fVar12);
    iVar5 = 0;
    if ((fVar6 < fVar11) && ((int)((uint)(fVar11 < 1.0) << 0x1f) < 0)) {
      iVar5 = 1;
      local_78[0] = fVar11;
    }
    uVar2 = FUN_10116944(uVar2);
    fVar11 = (float)FUN_100040f8(uVar2,extraout_s1_01);
    fVar7 = (-fVar7 - fVar11) / (fVar12 + fVar12);
    if ((fVar6 < fVar7) && ((int)((uint)(fVar7 < 1.0) << 0x1f) < 0)) {
      local_78[iVar5] = fVar7;
      fVar6 = local_78[0];
      if (iVar5 != 1) goto LAB_10005a94;
      if (local_78[1] < local_78[0]) {
        local_78[0] = local_78[1];
        local_78[1] = fVar6;
      }
      iVar5 = 2;
    }
  }
  else {
    fVar7 = -fVar11 / fVar7;
    if ((fVar7 <= DAT_10005ca8) || (-1 < (int)((uint)(fVar7 < 1.0) << 0x1f))) goto LAB_10005aa2;
    local_78[0] = fVar7;
LAB_10005a94:
    iVar5 = 1;
  }
  pfVar3 = local_78;
  pfVar4 = pfVar3 + iVar5;
  while (pfVar3 != pfVar4) {
    fVar6 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    FUN_1013bed8(fVar6,local_78 + 2,local_6c,param_2);
    iVar5 = FUN_10110c8c(local_78[2],param_1);
    if (iVar5 != 0) {
      return iVar5;
    }
  }
LAB_10005aa2:
  iVar5 = FUN_10110c8c(param_2[6],param_1);
  return iVar5;
}

