/* FUN_101170ec @ 0x101170ec */

int FUN_101170ec(float param_1,float *param_2)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_1c;
  float local_18;
  float local_14;
  
  fVar3 = ABS(param_1);
  if ((int)fVar3 <= DAT_10117320) {
    *param_2 = param_1;
    param_2[1] = 0.0;
    return 0;
  }
  if ((int)fVar3 <= DAT_10117324) {
    if (0 < (int)param_1) {
      fVar8 = param_1 - DAT_10117328;
      fVar3 = DAT_10117330;
      if (((uint)param_1 & 0x7ffffff0) == DAT_1011732c) {
        fVar8 = fVar8 - DAT_10117340;
        fVar3 = DAT_10117344;
      }
      *param_2 = fVar8 - fVar3;
      param_2[1] = (fVar8 - (fVar8 - fVar3)) - fVar3;
      return 1;
    }
    fVar8 = param_1 + DAT_10117328;
    fVar3 = DAT_10117330;
    if (((uint)param_1 & 0x7ffffff0) == DAT_1011732c) {
      fVar8 = fVar8 + DAT_10117340;
      fVar3 = DAT_10117344;
    }
    *param_2 = fVar8 + fVar3;
    param_2[1] = (fVar8 - (fVar8 + fVar3)) + fVar3;
    return -1;
  }
  if (DAT_10117334 < (int)fVar3) {
    if (0x7f7fffff < (uint)fVar3) {
      param_2[1] = param_1 - param_1;
      *param_2 = param_1 - param_1;
      return 0;
    }
    iVar1 = ((int)fVar3 >> 0x17) + -0x86;
    fVar3 = (float)((int)fVar3 + iVar1 * -0x800000);
    local_1c = (float)VectorSignedToFloat((int)fVar3,(byte)(in_fpscr >> 0x16) & 3);
    fVar3 = (fVar3 - local_1c) * DAT_10117338;
    local_18 = (float)VectorSignedToFloat((int)fVar3,(byte)(in_fpscr >> 0x16) & 3);
    local_14 = (fVar3 - local_18) * DAT_10117338;
    if (local_14 == 0.0) {
      if (local_18 == 0.0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 3;
    }
    iVar1 = FUN_10117464(&local_1c,param_2,iVar1,uVar2,2,DAT_1011733c);
    if (-1 < (int)param_1) {
      return iVar1;
    }
    *param_2 = -*param_2;
    param_2[1] = -param_2[1];
    return -iVar1;
  }
  fVar8 = (float)FUN_1011679c();
  iVar1 = (int)(fVar8 * DAT_10117348 + 0.5);
  fVar6 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  fVar8 = fVar8 + -fVar6 * DAT_10117328;
  fVar9 = fVar6 * DAT_10117330;
  fVar5 = -fVar6;
  if ((iVar1 < 0x20) && (((uint)param_1 & 0x7fffff00) != *(uint *)(DAT_1011734c + (iVar1 + -1) * 4))
     ) {
LAB_10117244:
    fVar7 = fVar8 - fVar9;
    fVar4 = fVar8;
  }
  else {
    fVar7 = fVar8 - fVar9;
    fVar4 = fVar8;
    if (8 < (int)(((uint)fVar3 >> 0x17) - ((uint)ABS(fVar7) >> 0x17))) {
      fVar4 = fVar8 + fVar5 * DAT_10117340;
      fVar9 = -((fVar8 - fVar4) + fVar5 * DAT_10117340) + fVar6 * DAT_10117344;
      fVar7 = fVar4 - fVar9;
      if ((int)(((int)fVar3 >> 0x17) - ((uint)ABS(fVar7) >> 0x17)) < 0x1a) {
        *param_2 = fVar7;
        goto LAB_1011724c;
      }
      fVar8 = fVar4 + fVar5 * DAT_10117350;
      fVar9 = -((fVar4 - fVar8) + fVar5 * DAT_10117350) + fVar6 * DAT_10117354;
      goto LAB_10117244;
    }
  }
  *param_2 = fVar7;
LAB_1011724c:
  fVar9 = (fVar4 - fVar7) - fVar9;
  param_2[1] = fVar9;
  if ((int)param_1 < 0) {
    iVar1 = -iVar1;
    *param_2 = -fVar7;
    param_2[1] = -fVar9;
  }
  return iVar1;
}

