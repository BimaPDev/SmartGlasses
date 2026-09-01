/* FUN_101110dc @ 0x101110dc */

int FUN_101110dc(int param_1,float *param_2,int param_3)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 local_60;
  undefined4 local_5c [5];
  float local_48 [2];
  float local_40;
  float local_38;
  
  if (param_1 == 0) {
    return 1;
  }
  if (param_3 != 0xb) {
    if (param_3 == 0) {
      iVar3 = *(int *)(param_1 + 0x30);
      iVar1 = FUN_10110c8c(param_2[2],param_2[3]);
      if (iVar1 != 0) {
        return iVar1;
      }
      pfVar2 = *(float **)(param_1 + 0x30);
      *pfVar2 = *param_2;
      pfVar2[1] = param_2[1];
      *(undefined4 *)(iVar3 + 0x14) = 0;
    }
    fVar9 = param_2[4] - *param_2;
    fVar8 = param_2[5] - param_2[1];
    fVar4 = (float)FUN_1011679c((param_2[2] - param_2[4]) * fVar8 -
                                (param_2[3] - param_2[5]) * fVar9);
    uVar10 = FUN_10003a58(fVar4 * fVar4);
    uVar11 = FUN_10003a58(fVar8 * fVar8 + fVar9 * fVar9);
    uVar11 = FUN_10003b08((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0,DAT_1011131c);
    iVar1 = FUN_10003fec((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar11,
                         (int)((ulonglong)uVar11 >> 0x20));
    if (iVar1 != 0) {
      fVar9 = *param_2;
      fVar6 = param_2[4];
      fVar8 = param_2[1];
      fVar4 = param_2[5];
      if (fVar4 < fVar8) {
        fVar7 = (float)((uint)(fVar6 < fVar9) * (int)fVar9 + (uint)(fVar9 <= fVar6) * (int)fVar6);
        fVar5 = fVar4;
        fVar4 = fVar8;
      }
      else {
        fVar7 = (float)((uint)(fVar6 < fVar9) * (int)fVar9 + (uint)(fVar9 <= fVar6) * (int)fVar6);
        fVar5 = fVar8;
        if (fVar4 < fVar8) {
          fVar4 = fVar8;
        }
      }
      if ((((param_2[2] <
             (float)((uint)(fVar6 < fVar9) * (int)fVar6 + (uint)(fVar9 <= fVar6) * (int)fVar9)) ||
           (fVar7 < param_2[2])) || (param_2[3] < fVar5)) || (fVar4 < param_2[3])) {
        FUN_10110f58(local_48,param_2);
        fVar8 = (local_48[0] - (local_40 + local_40)) + local_38;
        fVar4 = (float)FUN_1011679c(fVar8);
        if (((DAT_10111320 < fVar4) &&
            (fVar8 = (local_48[0] - local_40) / fVar8, DAT_10111320 < fVar8)) &&
           ((int)((uint)(fVar8 < 1.0) << 0x1f) < 0)) {
          FUN_1013be7e(&local_60,local_5c,param_2);
          iVar1 = FUN_10110c8c(local_60,local_5c[0],param_1);
          if (iVar1 != 0) {
            return iVar1;
          }
        }
      }
      iVar1 = FUN_10110c8c(param_2[4],param_2[5],param_1);
      return iVar1;
    }
    FUN_1013bfa0(0x3f000000,&local_60,local_48,param_2);
    iVar1 = FUN_101110dc(param_1,&local_60);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_101110dc(param_1,local_48,param_3 + 1U & 0xff);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_3 == 0) {
      iVar1 = FUN_10110c8c(param_2[4],param_2[5],param_1);
      if (iVar1 != 0) {
        return iVar1;
      }
      pfVar2 = *(float **)(param_1 + 0x30);
      *pfVar2 = param_2[2];
      pfVar2[1] = param_2[3];
      iVar1 = FUN_10110c8c(param_2[4],param_2[5],param_1);
      if (iVar1 != 0) {
        return iVar1;
      }
      *pfVar2 = param_2[4];
      pfVar2[1] = param_2[5];
      pfVar2[5] = 0.0;
      return 0;
    }
  }
  return 0;
}

