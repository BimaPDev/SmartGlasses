/* FUN_10117360 @ 0x10117360 */

float FUN_10117360(float param_1,float param_2)

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
    fVar3 = fVar3 * (DAT_10117458 +
                    fVar3 * (DAT_10117454 +
                            fVar3 * (DAT_10117450 +
                                    fVar3 * (DAT_1011744c +
                                            fVar3 * (DAT_10117448 + fVar3 * DAT_10117444)))));
  }
  else {
    fVar4 = param_1 * param_1;
    fVar3 = (DAT_10117458 +
            (DAT_10117454 +
            (DAT_10117450 + (DAT_1011744c + (DAT_10117448 + fVar4 * DAT_10117444) * fVar4) * fVar4)
            * fVar4) * fVar4) * fVar4;
    if (DAT_1011745c < (int)fVar1) {
      if (DAT_10117460 < (int)fVar1) {
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

