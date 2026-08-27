/* FUN_140da5e8 @ 0x140da5e8 */

float FUN_140da5e8(float param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = ABS(param_1);
  if ((uint)fVar2 < 0x50800000) {
    if (DAT_140da754 < (int)fVar2) {
      fVar3 = (float)FUN_140da798();
      if (DAT_140da790 < (int)fVar2) {
        if (DAT_140da794 < (int)fVar2) {
          iVar1 = 3;
          fVar3 = -1.0 / fVar3;
        }
        else {
          iVar1 = 2;
          fVar3 = (fVar3 - 1.5) / (fVar3 * 1.5 + 1.0);
        }
      }
      else if (DAT_140da790 + -0x680000 < (int)fVar2) {
        iVar1 = 1;
        fVar3 = (fVar3 - 1.0) / (fVar3 + 1.0);
      }
      else {
        iVar1 = 0;
        fVar3 = (fVar3 * 2.0 + -1.0) / (fVar3 + 2.0);
      }
    }
    else {
      if ((uint)fVar2 < 0x31000000) {
        if (1.0 < param_1 + DAT_140da78c) {
          return param_1;
        }
      }
      iVar1 = -1;
      fVar3 = param_1;
    }
    fVar2 = fVar3 * fVar3;
    fVar4 = fVar2 * fVar2;
    fVar5 = (DAT_140da780 +
            (DAT_140da778 + (DAT_140da770 + (DAT_140da768 + fVar4 * DAT_140da760) * fVar4) * fVar4)
            * fVar4) * fVar4;
    fVar2 = (DAT_140da77c +
            (DAT_140da774 +
            (DAT_140da76c + (DAT_140da764 + (DAT_140da75c + fVar4 * DAT_140da758) * fVar4) * fVar4)
            * fVar4) * fVar4) * fVar2;
    if (iVar1 == -1) {
      return fVar3 + -(fVar2 + fVar5) * fVar3;
    }
    fVar2 = *(float *)(DAT_140da788 + iVar1 * 4) -
            ((-*(float *)(DAT_140da784 + iVar1 * 4) + (fVar2 + fVar5) * fVar3) - fVar3);
    if ((int)param_1 < 0) {
      return -fVar2;
    }
  }
  else {
    if (0x7f800000 < (uint)fVar2) {
      return param_1 + param_1;
    }
    fVar2 = (float)((uint)(0 < (int)param_1) * DAT_140da74c +
                   (uint)((int)param_1 < 1) * DAT_140da750);
  }
  return fVar2;
}

