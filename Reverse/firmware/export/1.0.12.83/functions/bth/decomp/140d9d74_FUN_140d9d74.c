/* FUN_140d9d74 @ 0x140d9d74 */

float FUN_140d9d74(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = ABS(param_1);
  if ((uint)fVar1 < 0x32000000) {
    if ((int)param_1 == 0) {
      return 1.0;
    }
    fVar3 = param_1 * param_1;
    fVar3 = fVar3 * (DAT_140d9e6c +
                    fVar3 * (DAT_140d9e68 +
                            fVar3 * (DAT_140d9e64 +
                                    fVar3 * (DAT_140d9e60 +
                                            fVar3 * (DAT_140d9e5c + fVar3 * DAT_140d9e58)))));
  }
  else {
    fVar4 = param_1 * param_1;
    fVar3 = (DAT_140d9e6c +
            (DAT_140d9e68 +
            (DAT_140d9e64 + (DAT_140d9e60 + (DAT_140d9e5c + fVar4 * DAT_140d9e58) * fVar4) * fVar4)
            * fVar4) * fVar4) * fVar4;
    if (DAT_140d9e70 < (int)fVar1) {
      if (DAT_140d9e74 < (int)fVar1) {
        fVar2 = 0.71875;
        fVar1 = 0.28125;
      }
      else {
        fVar1 = (float)((int)fVar1 - 0x1000000);
        fVar2 = 1.0 - fVar1;
      }
      return fVar2 - ((-fVar1 + fVar4 * 0.5) - (-(param_2 * param_1) + fVar4 * fVar3));
    }
  }
  return 1.0 - (-(-(param_2 * param_1) + param_1 * param_1 * fVar3) + param_1 * param_1 * 0.5);
}

