/* FUN_10105038 @ 0x10105038 */

void FUN_10105038(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int local_128;
  int local_124;
  int local_120 [65];
  
  piVar7 = &local_128;
  iVar9 = *(int *)(param_1 + 0x18);
  local_124 = param_5 * 4;
  local_128 = param_4 * 4;
  local_120[3] = *(int *)(param_1 + 0x3c);
  local_120[0] = param_2 << 2;
  local_120[2] = *(int *)(param_1 + 0x38);
  local_120[1] = param_3 << 2;
  iVar4 = (param_3 << 2) >> 8;
  if ((((local_124 >> 8 < iVar9) || (iVar4 < iVar9)) || (local_120[3] >> 8 < iVar9)) &&
     (((iVar9 = *(int *)(param_1 + 0x14), iVar9 <= local_124 >> 8 || (iVar9 <= iVar4)) ||
      (iVar9 <= local_120[3] >> 8)))) {
    iVar4 = local_128 + *(int *)(param_1 + 0x38);
    iVar9 = iVar4 + param_2 * -8;
    if (iVar9 < 0) {
      iVar9 = param_2 * 8 - iVar4;
    }
    iVar4 = local_124 + local_120[3] + param_3 * -8;
    if (iVar4 < 0) {
      iVar4 = param_3 * 8 - (local_124 + local_120[3]);
    }
    if (iVar4 < iVar9) {
      iVar4 = iVar9;
    }
    uVar10 = 1;
    for (; 0x40 < iVar4; iVar4 = iVar4 >> 2) {
      uVar10 = uVar10 << 1;
    }
    do {
      while (iVar4 = (int)(-uVar10 & uVar10) >> 1, iVar4 == 0) {
        FUN_10104afc(param_1,*piVar7,piVar7[1]);
        uVar10 = uVar10 - 1;
        piVar7 = piVar7 + -4;
        if (uVar10 == 0) {
          return;
        }
      }
      iVar3 = piVar7[1];
      iVar5 = piVar7[2];
      iVar6 = piVar7[3];
      iVar11 = piVar7[5];
      iVar12 = piVar7[4];
      iVar9 = *piVar7;
      piVar1 = piVar7;
      do {
        piVar7 = piVar1;
        iVar2 = iVar9 + iVar5;
        iVar8 = iVar6 + iVar3;
        iVar5 = iVar5 + iVar12;
        iVar6 = iVar6 + iVar11;
        iVar9 = iVar2 + iVar5 >> 2;
        iVar5 = iVar5 >> 1;
        iVar3 = iVar8 + iVar6 >> 2;
        iVar6 = iVar6 >> 1;
        iVar4 = iVar4 >> 1;
        piVar7[3] = iVar8 >> 1;
        piVar7[8] = iVar12;
        piVar7[9] = iVar11;
        piVar7[4] = iVar9;
        piVar7[6] = iVar5;
        piVar7[2] = iVar2 >> 1;
        piVar7[5] = iVar3;
        piVar7[7] = iVar6;
        piVar1 = piVar7 + 4;
      } while (iVar4 != 0);
      FUN_10104afc(param_1);
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    return;
  }
  *(int *)(param_1 + 0x38) = local_128;
  *(int *)(param_1 + 0x3c) = local_124;
  return;
}

