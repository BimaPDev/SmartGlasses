/* FUN_2c4b0bba @ 0x2c4b0bba */

/* WARNING: Possible PIC construction at 0x2c4b0d70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c4b119c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c4b106a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c4b1172: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c4b1038: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x2c4b1176) */
/* WARNING: Removing unreachable block (ram,0x2c4b117c) */
/* WARNING: Removing unreachable block (ram,0x2c4b118c) */
/* WARNING: Removing unreachable block (ram,0x2c4b106e) */
/* WARNING: Removing unreachable block (ram,0x2c4b107c) */
/* WARNING: Removing unreachable block (ram,0x2c4b11a0) */
/* WARNING: Removing unreachable block (ram,0x2c4b11a6) */
/* WARNING: Removing unreachable block (ram,0x2c4b11b6) */
/* WARNING: Removing unreachable block (ram,0x2c4b0d74) */
/* WARNING: Removing unreachable block (ram,0x2c4b0d7a) */
/* WARNING: Removing unreachable block (ram,0x2c4b103c) */
/* WARNING: Removing unreachable block (ram,0x2c4b1042) */
/* WARNING: Removing unreachable block (ram,0x2c4b1086) */
/* WARNING: Removing unreachable block (ram,0x2c4b108c) */
/* WARNING: Removing unreachable block (ram,0x2c4b1056) */
/* WARNING: Removing unreachable block (ram,0x2c4b105c) */

int FUN_2c4b0bba(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                ,int param_7,float *param_8,uint param_9)

{
  int iVar1;
  float *pfVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  int unaff_r4;
  float *unaff_r5;
  int iVar9;
  uint unaff_r6;
  uint unaff_r7;
  int iVar10;
  uint unaff_r8;
  uint uVar11;
  uint unaff_r9;
  uint uVar12;
  undefined4 unaff_lr;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fStack_50;
  float fStack_4c;
  
  fVar15 = *(float *)(param_7 + 0x20);
  pfVar8 = &fStack_50;
  if ((int)((uint)(*(float *)(param_7 + 0x78) < fVar15) << 0x1f) < 0) {
    bVar13 = *(char *)(param_7 + 0x5c) == '\0';
    uVar6 = (uint)!bVar13;
    uVar11 = (uint)bVar13;
  }
  else if ((int)((uint)(*(float *)(param_7 + 0x84) - *(float *)(param_7 + 0x78) < fVar15) << 0x1f) <
           0) {
    if (*(char *)(param_7 + 0x5c) == '\0') {
      uVar11 = 1;
      uVar6 = 0;
    }
    else {
      uVar11 = 0;
      uVar6 = 2;
    }
  }
  else {
    uVar11 = 0;
    uVar6 = 0;
  }
  if (uVar6 != param_9) {
    return 1;
  }
  uVar6 = (uint)*(ushort *)(param_7 + 2);
  uVar12 = (uint)*(byte *)(param_7 + 0x8c);
  if ((*(char *)(param_8 + 2) != '\0') && (uVar12 != 0)) {
    uVar6 = 0x1801;
  }
  pfVar2 = (float *)param_8[7];
  fVar16 = pfVar2[4] * param_8[4] + pfVar2[3] * param_8[3];
  if (fRam2c4b0f08 < fVar16) {
    pfVar7 = *(float **)(param_7 + 0x60);
    if (pfVar7 != (float *)0x0) {
      bVar13 = true;
      unaff_lr = 0x2c4b0d75;
      unaff_r4 = param_7;
      pfVar8 = &fStack_50;
      goto SUB_2c4b0028;
    }
    iVar1 = FUN_2c4aff78(param_3,param_4,param_7);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_2c4affd0(param_5,param_6,param_7);
    if (iVar1 != 0) {
      return iVar1;
    }
    pfVar7 = *(float **)(param_7 + 0x60);
    if (pfVar7 == (float *)0x0) {
      if (*(char *)(param_7 + 0x5c) == '\0') {
        return 0;
      }
      *(float *)(param_7 + 0x78) = *(float *)(param_7 + 0x78) + param_8[5];
      return 0;
    }
    *(int *)(param_7 + 0x80) = *(int *)(param_7 + 0x80) + 1;
    if (*(char *)(param_7 + 0x5c) != '\0') goto LAB_2c4b0c9a;
  }
  else {
    if ((int)((uint)(fVar16 < fRam2c4b0f0c) << 0x1f) < 0) {
      fVar14 = fRam2c4b0f14;
      fVar18 = fRam2c4b0f14;
      if (*(int *)(param_7 + 0x60) == 0) {
LAB_2c4b0f24:
        if (((uVar11 != 0) || (param_1 * param_1 < fVar14)) || (param_2 * param_2 < fVar14)) {
          if (*(char *)(param_8 + 2) == '\0') {
            iVar1 = FUN_2c4affd0(*param_8,param_8[1],param_7);
            if (iVar1 != 0) {
              return iVar1;
            }
          }
          else if ((uVar12 != 0) && (param_9 != 0)) {
            *(uint *)(param_7 + 0x80) = (uint)(param_9 == 0);
            *(uint *)(param_7 + 0x60) = param_9;
            pfVar8 = *(float **)(param_7 + 0x38);
            *(float **)(param_7 + 0x70) = param_8;
            *(undefined1 *)(param_7 + 100) = 1;
            *(undefined4 *)(param_7 + 0x7c) = 0;
            *(float *)(param_7 + 0x68) = param_5 - *pfVar8;
            *(float *)(param_7 + 0x6c) = param_6 - pfVar8[1];
            iVar1 = FUN_2c4affd0(*param_8,param_8[1],param_7);
            if (iVar1 != 0) {
              return iVar1;
            }
            iVar1 = FUN_2c4affd0(*pfVar8,pfVar8[1],param_7);
            if (iVar1 != 0) {
              return iVar1;
            }
            *(undefined4 *)(param_7 + 0x74) = *(undefined4 *)(param_7 + 0x38);
            goto LAB_2c4b0fbc;
          }
          iVar1 = FUN_2c4affd0(param_5,param_6,param_7);
          if (iVar1 != 0) {
            return iVar1;
          }
        }
        else {
          pfVar8 = *(float **)(param_7 + 0x38);
          fVar14 = param_8[1];
          *pfVar8 = *param_8 + (-*param_8 + (param_5 + *pfVar8) * 0.5) * fVar18;
          pfVar8[1] = param_8[1] + (-fVar14 + (param_6 + pfVar8[1]) * 0.5) * fVar18;
        }
      }
      else {
        pfVar7 = (float *)(uint)*(byte *)(param_7 + 100);
        if (pfVar7 != (float *)0x1) {
          bVar13 = true;
          unaff_lr = 0x2c4b106f;
          unaff_r4 = param_7;
          pfVar8 = &fStack_50;
          fStack_50 = param_1;
          fStack_4c = param_2;
          goto SUB_2c4b0028;
        }
LAB_2c4b0d32:
        pfVar7 = *(float **)(*(int *)(param_7 + 0x38) + 0x18);
        fVar14 = pfVar7[1];
        if ((param_6 - fVar14) * *(float *)(param_7 + 0x6c) +
            *(float *)(param_7 + 0x68) * (param_5 - *pfVar7) <= 0.0) {
          bVar13 = true;
          pfVar2 = (float *)param_8[7];
          unaff_lr = 0x2c4b11a1;
          unaff_r4 = param_7;
          pfVar8 = &fStack_50;
          fStack_50 = param_1;
          fStack_4c = param_2;
          goto SUB_2c4b0028;
        }
        *(float *)(param_7 + 0x68) = param_5 - *pfVar7;
        *(float *)(param_7 + 0x6c) = param_6 - fVar14;
LAB_2c4b0fbc:
        iVar1 = FUN_2c4affd0(param_5,param_6,param_7);
        if (iVar1 != 0) {
          return iVar1;
        }
        *(undefined1 *)(*(int *)(param_7 + 0x38) + 9) = 3;
        *(float *)(*(int *)(param_7 + 0x38) + 0xc) = *param_8;
        *(float *)(*(int *)(param_7 + 0x38) + 0x10) = param_8[1];
        *(int *)(param_7 + 0x80) = *(int *)(param_7 + 0x80) + 1;
      }
      if (uVar6 == 0x1801) {
        if (fVar16 <= fRam2c4b0f18) {
          iVar1 = FUN_2c4aff78(param_3,param_4,param_7);
          if (iVar1 != 0) {
            return iVar1;
          }
          *(undefined1 *)(*(int *)(param_7 + 0x3c) + 9) = 3;
          *(float *)(*(int *)(param_7 + 0x3c) + 0xc) = *param_8;
          *(float *)(*(int *)(param_7 + 0x3c) + 0x10) = param_8[1];
          goto LAB_2c4b0ef8;
        }
      }
      else if (uVar6 != 0x1802) {
        if (uVar6 == 0x1800) {
          if (*(float *)(param_7 + 0x28) < fVar18) goto LAB_2c4b1020;
          pfVar8 = *(float **)(param_7 + 0x3c);
          fVar16 = param_8[1];
          *pfVar8 = *param_8 + (-*param_8 + (param_3 + *pfVar8) * 0.5) * fVar18;
          pfVar8[1] = param_8[1] + (-fVar16 + (param_4 + pfVar8[1]) * 0.5) * fVar18;
        }
        goto LAB_2c4b0ef8;
      }
LAB_2c4b1020:
      iVar1 = FUN_2c4aff78(param_3,param_4,param_7);
joined_r0x2c4b10c6:
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    else {
      fVar17 = -(pfVar2[4] * param_8[3]) + pfVar2[3] * param_8[4];
      fVar18 = 2.0 / (fVar16 + 1.0);
      fVar14 = (fVar15 * fVar15 * (1.0 - fVar16)) / (fVar16 + 1.0) + fRam2c4b0f10;
      if (*(int *)(param_7 + 0x60) == 0) {
        if (0.0 <= fVar17) goto LAB_2c4b0f24;
        if (((uVar11 != 0) || (param_1 * param_1 < fVar14)) || (param_2 * param_2 < fVar14)) {
          if (*(char *)(param_8 + 2) == '\0') {
            iVar1 = FUN_2c4aff78(*param_8,param_8[1],param_7);
            if (iVar1 != 0) {
              return iVar1;
            }
          }
          else if (uVar12 != 0) {
            if (param_9 != 0) {
              *(uint *)(param_7 + 0x60) = param_9;
              pfVar8 = *(float **)(param_7 + 0x3c);
              *(bool *)(param_7 + 100) = param_9 == 0;
              *(float **)(param_7 + 0x70) = param_8;
              *(undefined4 *)(param_7 + 0x7c) = 0;
              *(uint *)(param_7 + 0x80) = (uint)(param_9 == 0);
              *(float *)(param_7 + 0x68) = param_3 - *pfVar8;
              *(float *)(param_7 + 0x6c) = param_4 - pfVar8[1];
              iVar1 = FUN_2c4aff78(*param_8,param_8[1],param_7);
              if (iVar1 != 0) {
                return iVar1;
              }
              iVar1 = FUN_2c4aff78(*pfVar8,pfVar8[1],param_7);
              if (iVar1 != 0) {
                return iVar1;
              }
              *(undefined4 *)(param_7 + 0x74) = *(undefined4 *)(param_7 + 0x3c);
              goto LAB_2c4b0eae;
            }
          }
          iVar1 = FUN_2c4aff78(param_3,param_4,param_7);
          if (iVar1 != 0) {
            return iVar1;
          }
        }
        else {
          pfVar8 = *(float **)(param_7 + 0x3c);
          fVar14 = param_8[1];
          *pfVar8 = *param_8 + fVar18 * (-*param_8 + (param_3 + *pfVar8) * 0.5);
          pfVar8[1] = param_8[1] + fVar18 * (-fVar14 + (param_4 + pfVar8[1]) * 0.5);
        }
      }
      else {
        pfVar7 = (float *)(uint)(0.0 <= fVar17);
        if ((float *)(uint)*(byte *)(param_7 + 100) != pfVar7) {
          bVar13 = true;
          unaff_lr = 0x2c4b103d;
          unaff_r4 = param_7;
          fStack_50 = param_1;
          fStack_4c = param_2;
          goto SUB_2c4b0028;
        }
        if (0.0 <= fVar17) goto LAB_2c4b0d32;
        pfVar7 = *(float **)(*(int *)(param_7 + 0x3c) + 0x1c);
        fVar14 = pfVar7[1];
        if ((param_4 - fVar14) * *(float *)(param_7 + 0x6c) +
            *(float *)(param_7 + 0x68) * (param_3 - *pfVar7) <= 0.0) {
          bVar13 = true;
          pfVar2 = (float *)param_8[7];
          unaff_lr = 0x2c4b1177;
          unaff_r4 = param_7;
          pfVar8 = &fStack_50;
          fStack_50 = param_1;
          fStack_4c = param_2;
          goto SUB_2c4b0028;
        }
        *(float *)(param_7 + 0x68) = param_3 - *pfVar7;
        *(float *)(param_7 + 0x6c) = param_4 - fVar14;
LAB_2c4b0eae:
        if (fVar16 <= fRam2c4b0f18) {
          *(undefined1 *)(*(int *)(param_7 + 0x3c) + 9) = 3;
          *(float *)(*(int *)(param_7 + 0x3c) + 0xc) = *param_8;
          *(float *)(*(int *)(param_7 + 0x3c) + 0x10) = param_8[1];
          iVar1 = FUN_2c4aff78(param_3,param_4,param_7);
        }
        else {
          iVar1 = FUN_2c4aff78(param_3,param_4,param_7);
        }
        if (iVar1 != 0) {
          return iVar1;
        }
        *(int *)(param_7 + 0x80) = *(int *)(param_7 + 0x80) + 1;
      }
      if (uVar6 == 0x1801) {
        if (fRam2c4b0f18 < fVar16) goto LAB_2c4b10b6;
        *(undefined1 *)(*(int *)(param_7 + 0x38) + 9) = 3;
        *(float *)(*(int *)(param_7 + 0x38) + 0xc) = *param_8;
        *(float *)(*(int *)(param_7 + 0x38) + 0x10) = param_8[1];
        iVar1 = FUN_2c4affd0(param_5,param_6,param_7);
        goto joined_r0x2c4b10c6;
      }
      if (uVar6 == 0x1802) {
LAB_2c4b10b6:
        iVar1 = FUN_2c4affd0(param_5,param_6,param_7);
        goto joined_r0x2c4b10c6;
      }
      if (uVar6 == 0x1800) {
        if (*(float *)(param_7 + 0x28) < fVar18) goto LAB_2c4b10b6;
        pfVar8 = *(float **)(param_7 + 0x38);
        fVar16 = param_8[1];
        *pfVar8 = *param_8 + fVar18 * (-*param_8 + (param_5 + *pfVar8) * 0.5);
        pfVar8[1] = param_8[1] + fVar18 * (-fVar16 + (param_6 + pfVar8[1]) * 0.5);
      }
    }
LAB_2c4b0ef8:
    if (*(char *)(param_7 + 0x5c) == '\0') {
      pfVar7 = *(float **)(param_7 + 0x60);
    }
    else {
      pfVar7 = *(float **)(param_7 + 0x60);
LAB_2c4b0c9a:
      *(float *)(param_7 + 0x78) = *(float *)(param_7 + 0x78) + param_8[5];
    }
    if (pfVar7 == (float *)0x0) {
      return 0;
    }
  }
  if ((*(char *)(param_8 + 2) != '\x03') &&
     (((pfVar7 != (float *)0x1 || (*(float *)(param_7 + 0x78) <= fVar15)) &&
      (fVar15 = *(float *)(param_7 + 0x7c) + param_8[5], *(float *)(param_7 + 0x7c) = fVar15,
      fVar15 <= 0.125)))) {
    return 0;
  }
  bVar13 = false;
  pfVar2 = param_8;
  param_8 = unaff_r5;
  uVar6 = unaff_r6;
  param_9 = unaff_r7;
  uVar11 = unaff_r8;
  uVar12 = unaff_r9;
  pfVar8 = (float *)register0x00000054;
SUB_2c4b0028:
  if (param_7 == 0) {
    return 1;
  }
  *(undefined4 *)((int)pfVar8 + -4) = unaff_lr;
  *(uint *)((int)pfVar8 + -8) = uVar12;
  *(uint *)((int)pfVar8 + -0xc) = uVar11;
  *(uint *)((int)pfVar8 + -0x10) = param_9;
  *(uint *)((int)pfVar8 + -0x14) = uVar6;
  *(float **)((int)pfVar8 + -0x18) = param_8;
  *(int *)((int)pfVar8 + -0x1c) = unaff_r4;
  *(float **)((int)pfVar8 + -0x20) = pfVar7;
  iVar1 = *(int *)(param_7 + 0x74);
  if (*(char *)(param_7 + 100) == '\0') {
    if (bVar13) {
      iVar9 = *(int *)(param_7 + 0x3c);
      iVar4 = *(int *)(iVar9 + 0x1c);
      *(int *)(param_7 + 0x3c) = iVar4;
      *(undefined4 *)(iVar4 + 0x18) = 0;
    }
    else {
      iVar9 = 0;
    }
    iVar4 = FUN_2c4aff78(*pfVar2,pfVar2[1],param_7);
    if (iVar4 != 0) {
      return iVar4;
    }
    iVar10 = *(int *)(param_7 + 0x3c);
    iVar4 = iVar1;
    while (iVar4 != 0) {
      iVar5 = *(int *)(iVar4 + 0x18);
      *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(iVar4 + 0x1c);
      *(int *)(iVar4 + 0x1c) = iVar5;
      iVar4 = iVar5;
    }
    iVar4 = *(int *)(iVar1 + 0x18);
    *(int *)(iVar10 + 0x1c) = iVar4;
    *(int *)(iVar4 + 0x18) = iVar10;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(int *)(param_7 + 0x3c) = iVar1;
    iVar1 = FUN_2c4aff78(*pfVar2,pfVar2[1],param_7);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_2c4aff78(**(undefined4 **)(param_7 + 0x70),(*(undefined4 **)(param_7 + 0x70))[1],
                         param_7);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_2c4aff78(**(undefined4 **)(iVar10 + 0x18),(*(undefined4 **)(iVar10 + 0x18))[1],
                         param_7);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (bVar13) {
      iVar1 = *(int *)(param_7 + 0x3c);
      *(int *)(iVar9 + 0x1c) = iVar1;
      *(int *)(iVar1 + 0x18) = iVar9;
      *(int *)(param_7 + 0x3c) = iVar9;
    }
  }
  else {
    if (bVar13) {
      iVar9 = *(int *)(param_7 + 0x38);
      iVar4 = *(int *)(iVar9 + 0x18);
      *(int *)(param_7 + 0x38) = iVar4;
      *(undefined4 *)(iVar4 + 0x1c) = 0;
    }
    else {
      iVar9 = 0;
    }
    iVar4 = FUN_2c4affd0(*pfVar2,pfVar2[1],param_7);
    if (iVar4 != 0) {
      return iVar4;
    }
    iVar10 = *(int *)(param_7 + 0x38);
    iVar4 = iVar1;
    while (iVar4 != 0) {
      iVar5 = *(int *)(iVar4 + 0x1c);
      uVar3 = *(undefined4 *)(iVar4 + 0x18);
      *(int *)(iVar4 + 0x18) = iVar5;
      *(undefined4 *)(iVar4 + 0x1c) = uVar3;
      iVar4 = iVar5;
    }
    *(undefined4 *)(iVar10 + 0x18) = *(undefined4 *)(iVar1 + 0x1c);
    *(int *)(*(int *)(iVar1 + 0x1c) + 0x1c) = iVar10;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(int *)(param_7 + 0x38) = iVar1;
    iVar1 = FUN_2c4affd0(*pfVar2,pfVar2[1],param_7);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_2c4affd0(**(undefined4 **)(param_7 + 0x70),(*(undefined4 **)(param_7 + 0x70))[1],
                         param_7);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_2c4affd0(**(undefined4 **)(iVar10 + 0x1c),(*(undefined4 **)(iVar10 + 0x1c))[1],
                         param_7);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (bVar13) {
      iVar1 = *(int *)(param_7 + 0x38);
      *(int *)(iVar9 + 0x18) = iVar1;
      *(int *)(iVar1 + 0x1c) = iVar9;
      *(int *)(param_7 + 0x38) = iVar9;
    }
  }
  *(undefined4 *)(param_7 + 0x60) = 0;
  return 0;
}

