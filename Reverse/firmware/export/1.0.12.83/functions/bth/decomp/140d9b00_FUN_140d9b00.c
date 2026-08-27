/* FUN_140d9b00 @ 0x140d9b00 */

int FUN_140d9b00(float param_1,float *param_2)

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
  if ((int)fVar3 <= DAT_140d9d34) {
    *param_2 = param_1;
    param_2[1] = 0.0;
    return 0;
  }
  if ((int)fVar3 <= DAT_140d9d38) {
    if (0 < (int)param_1) {
      fVar8 = param_1 - DAT_140d9d3c;
      fVar3 = DAT_140d9d44;
      if (((uint)param_1 & 0x7ffffff0) == DAT_140d9d40) {
        fVar8 = fVar8 - DAT_140d9d54;
        fVar3 = DAT_140d9d58;
      }
      *param_2 = fVar8 - fVar3;
      param_2[1] = (fVar8 - (fVar8 - fVar3)) - fVar3;
      return 1;
    }
    fVar8 = param_1 + DAT_140d9d3c;
    fVar3 = DAT_140d9d44;
    if (((uint)param_1 & 0x7ffffff0) == DAT_140d9d40) {
      fVar8 = fVar8 + DAT_140d9d54;
      fVar3 = DAT_140d9d58;
    }
    *param_2 = fVar8 + fVar3;
    param_2[1] = (fVar8 - (fVar8 + fVar3)) + fVar3;
    return -1;
  }
  if (DAT_140d9d48 < (int)fVar3) {
    if (0x7f7fffff < (uint)fVar3) {
      param_2[1] = param_1 - param_1;
      *param_2 = param_1 - param_1;
      return 0;
    }
    iVar1 = ((int)fVar3 >> 0x17) + -0x86;
    fVar3 = (float)((int)fVar3 + iVar1 * -0x800000);
    local_1c = (float)VectorSignedToFloat((int)fVar3,(byte)(in_fpscr >> 0x16) & 3);
    fVar3 = (fVar3 - local_1c) * DAT_140d9d4c;
    local_18 = (float)VectorSignedToFloat((int)fVar3,(byte)(in_fpscr >> 0x16) & 3);
    local_14 = (fVar3 - local_18) * DAT_140d9d4c;
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
    iVar1 = FUN_140d9e78(&local_1c,param_2,iVar1,uVar2,2,DAT_140d9d50);
    if (-1 < (int)param_1) {
      return iVar1;
    }
    *param_2 = -*param_2;
    param_2[1] = -param_2[1];
    return -iVar1;
  }
  fVar8 = (float)FUN_140da798();
  iVar1 = (int)(fVar8 * DAT_140d9d5c + 0.5);
  fVar6 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  fVar8 = fVar8 + -fVar6 * DAT_140d9d3c;
  fVar9 = fVar6 * DAT_140d9d44;
  fVar5 = -fVar6;
  if ((iVar1 < 0x20) && (((uint)param_1 & 0x7fffff00) != *(uint *)(DAT_140d9d60 + (iVar1 + -1) * 4))
     ) {
LAB_140d9c58:
    fVar7 = fVar8 - fVar9;
    fVar4 = fVar8;
  }
  else {
    fVar7 = fVar8 - fVar9;
    fVar4 = fVar8;
    if (8 < (int)(((uint)fVar3 >> 0x17) - ((uint)ABS(fVar7) >> 0x17))) {
      fVar4 = fVar8 + fVar5 * DAT_140d9d54;
      fVar9 = -((fVar8 - fVar4) + fVar5 * DAT_140d9d54) + fVar6 * DAT_140d9d58;
      fVar7 = fVar4 - fVar9;
      if ((int)(((int)fVar3 >> 0x17) - ((uint)ABS(fVar7) >> 0x17)) < 0x1a) {
        *param_2 = fVar7;
        goto LAB_140d9c60;
      }
      fVar8 = fVar4 + fVar5 * DAT_140d9d64;
      fVar9 = -((fVar4 - fVar8) + fVar5 * DAT_140d9d64) + fVar6 * DAT_140d9d68;
      goto LAB_140d9c58;
    }
  }
  *param_2 = fVar7;
LAB_140d9c60:
  fVar9 = (fVar4 - fVar7) - fVar9;
  param_2[1] = fVar9;
  if ((int)param_1 < 0) {
    iVar1 = -iVar1;
    *param_2 = -fVar7;
    param_2[1] = -fVar9;
  }
  return iVar1;
}

