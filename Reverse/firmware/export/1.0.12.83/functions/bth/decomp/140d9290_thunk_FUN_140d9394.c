/* thunk_FUN_140d9394 @ 0x140d9290 */

float thunk_FUN_140d9394(float param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = ABS(param_2);
  if ((0x7f800000 < (uint)fVar3) || (fVar1 = ABS(param_1), 0x7f800000 < (uint)fVar1)) {
    return param_2 + param_1;
  }
  if (param_2 == 1.0) {
    fVar3 = (float)FUN_140da5e8();
    return fVar3;
  }
  uVar2 = (int)param_2 >> 0x1e & 2U | (uint)param_1 >> 0x1f;
  if (fVar1 == 0.0) {
    fVar4 = DAT_140d94d8;
    if (uVar2 != 2) {
      fVar4 = (float)((uint)(uVar2 == 3) * DAT_140d94c8 + (uint)(uVar2 != 3) * (int)param_1);
    }
  }
  else {
    if (fVar3 == 0.0) {
LAB_140d9416:
      return (float)((uint)(-1 < (int)param_1) * (int)DAT_140d94d4 +
                    (uint)(-1 >= (int)param_1) * DAT_140d94d0);
    }
    if (fVar3 == INFINITY) {
      uVar2 = uVar2 - 1;
      if (fVar1 == INFINITY) {
        fVar4 = DAT_140d94e8;
        if (uVar2 < 3) {
          fVar4 = *(float *)(DAT_140d94e4 + uVar2 * 4);
        }
      }
      else {
        fVar4 = DAT_140d94cc;
        if (uVar2 < 3) {
          fVar4 = *(float *)(DAT_140d94dc + uVar2 * 4);
        }
      }
    }
    else {
      if (fVar1 == INFINITY) goto LAB_140d9416;
      fVar4 = DAT_140d94d4;
      if (((int)fVar1 - (int)fVar3 < 0x1e800000) &&
         ((-1 < (int)param_2 || (fVar4 = DAT_140d94cc, -0x3d < (int)fVar1 - (int)fVar3 >> 0x17)))) {
        FUN_140da798(param_1 / param_2);
        fVar4 = (float)FUN_140da5e8();
      }
      if (uVar2 == 1) {
        fVar4 = (float)((int)fVar4 + -0x80000000);
      }
      else if (uVar2 == 2) {
        fVar4 = DAT_140d94d8 - (fVar4 + DAT_140d94e0);
      }
      else if (uVar2 != 0) {
        fVar4 = (fVar4 + DAT_140d94e0) - DAT_140d94d8;
      }
    }
  }
  return fVar4;
}

