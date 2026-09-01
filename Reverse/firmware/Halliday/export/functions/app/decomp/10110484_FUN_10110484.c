/* FUN_10110484 @ 0x10110484 */

int FUN_10110484(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                ,int param_7,undefined4 *param_8,int param_9)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 extraout_r2;
  undefined1 extraout_r2_00;
  undefined1 uVar3;
  undefined1 extraout_r2_01;
  int iVar4;
  int iVar5;
  short sVar6;
  float *pfVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  longlong lVar14;
  
  if (param_7 == 0) {
    return 1;
  }
  fVar15 = *(float *)(param_7 + 0x20);
  lVar14 = (ulonglong)(uint)fVar15 << 0x20;
  if ((int)((uint)(*(float *)(param_7 + 0x74) < fVar15) << 0x1f) < 0) {
    if (*(char *)(param_7 + 0x80) == '\0') {
      bVar9 = true;
      iVar4 = 0;
    }
    else {
      bVar9 = false;
      iVar4 = 1;
    }
  }
  else if ((int)((uint)(*(float *)(param_7 + 0x84) - *(float *)(param_7 + 0x74) < fVar15) << 0x1f) <
           0) {
    bVar9 = *(char *)(param_7 + 0x80) == '\0';
    if (bVar9) {
      iVar4 = 0;
    }
    else {
      iVar4 = 2;
    }
  }
  else {
    bVar9 = false;
    iVar4 = 0;
  }
  if (iVar4 != param_9) {
    return 1;
  }
  sVar6 = *(short *)(param_7 + 2);
  cVar1 = *(char *)(param_7 + 0x8c);
  if ((*(char *)(param_8 + 2) != '\0') && (cVar1 != '\0')) {
    sVar6 = 0x1801;
  }
  iVar4 = param_8[7];
  fVar13 = *(float *)(iVar4 + 0x10) * (float)param_8[4] +
           *(float *)(iVar4 + 0xc) * (float)param_8[3];
  iVar5 = *(int *)(param_7 + 0x60);
  if (DAT_1011081c < fVar13) {
    if ((iVar5 != 0) && (iVar4 = FUN_1013bc22(param_7,iVar4,1), iVar4 != 0)) {
      return iVar4;
    }
    iVar4 = FUN_1013ba4c(param_3,param_4,param_7);
    if (iVar4 != 0) {
      return iVar4;
    }
    iVar4 = FUN_1013bbca(param_5,param_6,param_7);
    if (iVar4 != 0) {
      return iVar4;
    }
    if (*(int *)(param_7 + 0x60) != 0) {
      *(int *)(param_7 + 0x7c) = *(int *)(param_7 + 0x7c) + 1;
    }
    goto LAB_1011054c;
  }
  if ((int)((uint)(fVar13 < DAT_10110820) << 0x1f) < 0) {
    fVar12 = DAT_1011082c;
    if (iVar5 != 0) {
      bVar8 = true;
      lVar14 = CONCAT44(fVar15,DAT_1011082c);
      goto LAB_1011060a;
    }
    lVar14 = CONCAT44(fVar15,DAT_1011082c);
LAB_10110678:
    if (((bVar9) || (param_1 * param_1 < fVar12)) || (param_2 * param_2 < fVar12)) {
      if (*(char *)(param_8 + 2) == '\0') {
        iVar4 = FUN_1013bbca(*param_8,param_8[1],param_7);
        if (iVar4 != 0) {
          return iVar4;
        }
      }
      else if ((cVar1 != '\0') && (param_9 != 0)) {
        pfVar7 = *(float **)(param_7 + 0x38);
        *(undefined1 *)(param_7 + 0x81) = 1;
        *(float *)(param_7 + 100) = param_5 - *pfVar7;
        fVar15 = pfVar7[1];
        *(undefined4 *)(param_7 + 0x78) = 0;
        *(float *)(param_7 + 0x68) = param_6 - fVar15;
        uVar10 = param_8[1];
        uVar2 = *param_8;
        *(int *)(param_7 + 0x60) = param_9;
        *(undefined4 **)(param_7 + 0x6c) = param_8;
        *(undefined4 *)(param_7 + 0x7c) = 0;
        iVar4 = FUN_1013bbca(uVar2,uVar10,param_7);
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar4 = FUN_1013bbca(*pfVar7,pfVar7[1],param_7);
        if (iVar4 != 0) {
          return iVar4;
        }
        *(undefined4 *)(param_7 + 0x70) = *(undefined4 *)(param_7 + 0x38);
LAB_101106e2:
        iVar4 = FUN_1013bbca(param_5,param_6,param_7);
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar4 = *(int *)(param_7 + 0x38);
        *(undefined1 *)(iVar4 + 9) = 3;
        *(undefined4 *)(iVar4 + 0xc) = *param_8;
        *(undefined4 *)(iVar4 + 0x10) = param_8[1];
        *(int *)(param_7 + 0x7c) = *(int *)(param_7 + 0x7c) + 1;
        goto LAB_10110754;
      }
      iVar4 = FUN_1013bbca(param_5,param_6,param_7);
      if (iVar4 != 0) {
        return iVar4;
      }
    }
    else {
      FUN_1013b8d0(param_5,param_6,(int)lVar14,param_8,*(undefined4 *)(param_7 + 0x38));
    }
LAB_10110754:
    if (sVar6 != 0x1801) {
      if (sVar6 == 0x1802) goto LAB_10110810;
      if (sVar6 != 0x1800) goto LAB_1011054c;
      fVar15 = (float)lVar14;
      if (*(float *)(param_7 + 0x28) < fVar15) goto LAB_10110810;
      uVar2 = *(undefined4 *)(param_7 + 0x3c);
LAB_10110788:
      FUN_1013b8d0(param_3,param_4,fVar15,param_8,uVar2);
      goto LAB_1011054c;
    }
    if (fVar13 <= DAT_10110828) {
      iVar4 = FUN_1013ba4c(param_3,param_4,param_7);
      if (iVar4 != 0) {
        return iVar4;
      }
      iVar4 = *(int *)(param_7 + 0x3c);
      *(undefined1 *)(iVar4 + 9) = 3;
      *(undefined4 *)(iVar4 + 0xc) = *param_8;
      *(undefined4 *)(iVar4 + 0x10) = param_8[1];
      goto LAB_1011054c;
    }
LAB_10110810:
    iVar4 = FUN_1013ba4c(param_3,param_4,param_7);
  }
  else {
    fVar11 = *(float *)(iVar4 + 0xc) * (float)param_8[4] -
             (float)param_8[3] * *(float *)(iVar4 + 0x10);
    lVar14 = CONCAT44(fVar15,2.0 / (fVar13 + 1.0));
    bVar8 = 0.0 <= fVar11;
    fVar12 = (fVar15 * fVar15 * (1.0 - fVar13)) / (fVar13 + 1.0) + DAT_10110824;
    if (iVar5 == 0) {
      if (0.0 <= fVar11) goto LAB_10110678;
LAB_10110626:
      if (*(int *)(param_7 + 0x60) != 0) goto LAB_101109d8;
LAB_1011062e:
      if (((bVar9) || (param_1 * param_1 < fVar12)) || (param_2 * param_2 < fVar12)) {
        if (*(char *)(param_8 + 2) == '\0') {
          iVar4 = FUN_1013ba4c(*param_8,param_8[1],param_7);
          if (iVar4 != 0) {
            return iVar4;
          }
        }
        else if ((cVar1 != '\0') && (param_9 != 0)) {
          pfVar7 = *(float **)(param_7 + 0x3c);
          *(undefined1 *)(param_7 + 0x81) = 0;
          *(float *)(param_7 + 100) = param_3 - *pfVar7;
          uVar10 = param_8[1];
          *(float *)(param_7 + 0x68) = param_4 - pfVar7[1];
          uVar2 = *param_8;
          *(int *)(param_7 + 0x60) = param_9;
          *(undefined4 **)(param_7 + 0x6c) = param_8;
          *(undefined4 *)(param_7 + 0x78) = 0;
          *(undefined4 *)(param_7 + 0x7c) = 0;
          iVar4 = FUN_1013ba4c(uVar2,uVar10,param_7);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = FUN_1013ba4c(*pfVar7,pfVar7[1],param_7);
          if (iVar4 != 0) {
            return iVar4;
          }
          *(undefined4 *)(param_7 + 0x70) = *(undefined4 *)(param_7 + 0x3c);
          goto LAB_10110a10;
        }
        iVar4 = FUN_1013ba4c(param_3,param_4,param_7);
        uVar3 = extraout_r2;
        if (iVar4 != 0) {
          return iVar4;
        }
      }
      else {
        FUN_1013b8d0(param_3,param_4,(int)lVar14,param_8,*(undefined4 *)(param_7 + 0x3c));
        uVar3 = extraout_r2_00;
      }
    }
    else {
LAB_1011060a:
      if ((bool)*(char *)(param_7 + 0x81) != bVar8) {
        iVar4 = FUN_1013bc22(param_7,iVar4,1);
        if (iVar4 != 0) {
          return iVar4;
        }
        if (bVar8 != false) {
          if (*(int *)(param_7 + 0x60) == 0) goto LAB_10110678;
          goto LAB_101106ac;
        }
        goto LAB_10110626;
      }
      if (bVar8 != false) {
LAB_101106ac:
        pfVar7 = *(float **)(*(int *)(param_7 + 0x38) + 0x18);
        fVar11 = param_6 - pfVar7[1];
        fVar15 = param_5 - *pfVar7;
        if (fVar11 * *(float *)(param_7 + 0x68) + fVar15 * *(float *)(param_7 + 100) <= 0.0) {
          iVar4 = FUN_1013bc22(param_7,param_8[7],1);
          if (iVar4 != 0) {
            return iVar4;
          }
          if (*(int *)(param_7 + 0x60) == 0) goto LAB_10110678;
        }
        else {
          *(float *)(param_7 + 100) = fVar15;
          *(float *)(param_7 + 0x68) = fVar11;
        }
        goto LAB_101106e2;
      }
LAB_101109d8:
      pfVar7 = *(float **)(*(int *)(param_7 + 0x3c) + 0x1c);
      fVar11 = param_4 - pfVar7[1];
      fVar15 = param_3 - *pfVar7;
      if (fVar11 * *(float *)(param_7 + 0x68) + fVar15 * *(float *)(param_7 + 100) <= 0.0) {
        iVar4 = FUN_1013bc22(param_7,param_8[7],1);
        if (iVar4 != 0) {
          return iVar4;
        }
        if (*(int *)(param_7 + 0x60) == 0) goto LAB_1011062e;
      }
      else {
        *(float *)(param_7 + 100) = fVar15;
        *(float *)(param_7 + 0x68) = fVar11;
      }
LAB_10110a10:
      if (fVar13 <= DAT_10110828) {
        iVar4 = *(int *)(param_7 + 0x3c);
        *(undefined1 *)(iVar4 + 9) = 3;
        *(undefined4 *)(iVar4 + 0xc) = *param_8;
        *(undefined4 *)(iVar4 + 0x10) = param_8[1];
      }
      iVar4 = FUN_1013ba4c(param_3,param_4,param_7);
      if (iVar4 != 0) {
        return iVar4;
      }
      *(int *)(param_7 + 0x7c) = *(int *)(param_7 + 0x7c) + 1;
      uVar3 = extraout_r2_01;
    }
    iVar4 = 0x1801;
    if (sVar6 == 0x1801) {
      if (fVar13 <= DAT_10110828) {
        uVar3 = 3;
        iVar4 = *(int *)(param_7 + 0x38);
      }
      if (fVar13 <= DAT_10110828) {
        *(undefined1 *)(iVar4 + 9) = uVar3;
        *(undefined4 *)(iVar4 + 0xc) = *param_8;
        *(undefined4 *)(iVar4 + 0x10) = param_8[1];
      }
    }
    else if (sVar6 != 0x1802) {
      if (sVar6 != 0x1800) goto LAB_1011054c;
      fVar15 = (float)lVar14;
      if (fVar15 <= *(float *)(param_7 + 0x28)) {
        uVar2 = *(undefined4 *)(param_7 + 0x38);
        param_3 = param_5;
        param_4 = param_6;
        goto LAB_10110788;
      }
    }
    iVar4 = FUN_1013bbca(param_5,param_6,param_7);
  }
  if (iVar4 != 0) {
    return iVar4;
  }
LAB_1011054c:
  if (*(char *)(param_7 + 0x80) != '\0') {
    *(float *)(param_7 + 0x74) = *(float *)(param_7 + 0x74) + (float)param_8[5];
  }
  if ((*(int *)(param_7 + 0x60) != 0) &&
     ((*(char *)(param_8 + 2) == '\x03' ||
      (((*(int *)(param_7 + 0x60) == 1 &&
        ((float)((ulonglong)lVar14 >> 0x20) < *(float *)(param_7 + 0x74))) ||
       (fVar15 = *(float *)(param_7 + 0x78) + (float)param_8[5], *(float *)(param_7 + 0x78) = fVar15
       , 0.125 < fVar15)))))) {
    iVar4 = FUN_1013bc22(param_7,param_8,0);
    return iVar4;
  }
  return 0;
}

