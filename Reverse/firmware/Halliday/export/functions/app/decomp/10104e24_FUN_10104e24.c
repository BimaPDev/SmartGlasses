/* FUN_10104e24 @ 0x10104e24 */

void FUN_10104e24(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_1bc;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  
  iVar7 = *(int *)(param_1 + 0x38);
  iVar8 = *(int *)(param_1 + 0x3c);
  iVar1 = *(int *)(param_1 + 0x18);
  param_7 = param_7 << 2;
  param_2 = param_2 << 2;
  param_3 = param_3 << 2;
  param_4 = param_4 << 2;
  param_5 = param_5 << 2;
  param_6 = param_6 << 2;
  if (((((iVar1 <= param_7 >> 8) && (iVar1 <= param_5 >> 8)) && (iVar1 <= param_3 >> 8)) &&
      (iVar1 <= iVar8 >> 8)) ||
     (((iVar1 = *(int *)(param_1 + 0x14), param_7 >> 8 < iVar1 && (param_5 >> 8 < iVar1)) &&
      ((param_3 >> 8 < iVar1 && (iVar8 >> 8 < iVar1)))))) {
    *(int *)(param_1 + 0x38) = param_6;
    *(int *)(param_1 + 0x3c) = param_7;
    return;
  }
  local_1bc = iVar8 << 1;
  iVar1 = iVar7 << 1;
  piVar2 = &local_1b0;
  local_1b0 = param_6;
  local_1ac = param_7;
  local_1a8 = param_4;
  local_1a4 = param_5;
  local_1a0 = param_2;
  local_19c = param_3;
  local_198 = iVar7;
  local_194 = iVar8;
  do {
    iVar3 = param_4 * -3 + param_6 * 2 + iVar7;
    if (iVar3 < 0) {
      if (0x80 < (param_4 * 3 + param_6 * -2) - iVar7) goto LAB_10104f36;
LAB_10104eac:
      iVar3 = param_5 * -3 + param_7 * 2 + iVar8;
      if (iVar3 < 0) {
        if ((param_5 * 3 + param_7 * -2) - iVar8 < 0x81) {
          iVar3 = param_2 * -3 + iVar1 + param_6;
          if (-1 < iVar3) goto LAB_10104ecc;
LAB_10104fb8:
          if ((param_2 * 3 + iVar7 * -2) - param_6 < 0x81) goto joined_r0x10104fda;
        }
        goto LAB_10104f36;
      }
      if (0x80 < iVar3) goto LAB_10104f36;
      iVar3 = param_2 * -3 + iVar1 + param_6;
      if (iVar3 < 0) goto LAB_10104fb8;
LAB_10104ecc:
      if (0x80 < iVar3) goto LAB_10104f36;
joined_r0x10104fda:
      iVar3 = param_3 * -3 + local_1bc + param_7;
      if (iVar3 < 0) {
        iVar3 = (param_3 * 3 + iVar8 * -2) - param_7;
      }
      if (0x80 < iVar3) goto LAB_10104f36;
      FUN_10104afc(param_1,param_6,param_7);
      if (piVar2 == &local_1b0) {
        return;
      }
      param_2 = piVar2[-2];
      param_3 = piVar2[-1];
      local_1bc = param_7 << 1;
      iVar1 = param_6 << 1;
      param_4 = piVar2[-4];
      param_5 = piVar2[-3];
      piVar2 = piVar2 + -6;
      iVar7 = param_6;
      iVar8 = param_7;
    }
    else {
      if (iVar3 < 0x81) goto LAB_10104eac;
LAB_10104f36:
      iVar3 = param_4 + param_2 + param_2 + iVar7;
      param_7 = param_7 + param_5;
      iVar4 = param_4 + param_2 + param_6 + param_4;
      iVar6 = param_5 + param_3 + param_3 + iVar8;
      iVar5 = param_7 + param_5 + param_3;
      piVar2[2] = param_6 + param_4 >> 1;
      piVar2[6] = iVar3 + iVar4 >> 3;
      param_2 = param_2 + iVar7 >> 1;
      param_3 = param_3 + iVar8 >> 1;
      param_4 = iVar3 >> 2;
      param_5 = iVar6 >> 2;
      piVar2[0xc] = iVar7;
      piVar2[0xd] = iVar8;
      piVar2[10] = param_2;
      piVar2[8] = param_4;
      piVar2[4] = iVar4 >> 2;
      piVar2[0xb] = param_3;
      piVar2[3] = param_7 >> 1;
      piVar2[7] = iVar6 + iVar5 >> 3;
      piVar2[9] = param_5;
      piVar2[5] = iVar5 >> 2;
      piVar2 = piVar2 + 6;
    }
    param_6 = *piVar2;
    param_7 = piVar2[1];
  } while( true );
}

