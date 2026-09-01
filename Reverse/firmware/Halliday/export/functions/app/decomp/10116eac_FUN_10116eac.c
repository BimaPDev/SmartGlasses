/* FUN_10116eac @ 0x10116eac */

float FUN_10116eac(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = ABS(param_1);
  if (fVar1 == 1.0) {
    return (float)((uint)(0 < (int)param_1) * DAT_101170ac + (uint)((int)param_1 < 1) * DAT_101170b0
                  );
  }
  if ((uint)fVar1 < 0x3f800001) {
    if ((uint)fVar1 < 0x3f000000) {
      if ((uint)fVar1 < 0x23000001) {
        return DAT_101170a8;
      }
      fVar1 = param_1 * param_1;
      return DAT_101170e0 -
             (param_1 -
             (DAT_101170dc +
             -param_1 *
             (((DAT_101170d8 +
               (DAT_101170d0 +
               (DAT_101170c8 +
               (DAT_101170bc + (DAT_101170b8 + fVar1 * DAT_101170b4) * fVar1) * fVar1) * fVar1) *
               fVar1) * fVar1) /
             ((DAT_101170d4 + (DAT_101170cc + (DAT_101170c4 + fVar1 * DAT_101170c0) * fVar1) * fVar1
              ) * fVar1 + 1.0))));
    }
    if (-1 < (int)param_1) {
      fVar3 = (1.0 - param_1) * 0.5;
      fVar2 = (float)FUN_10117358(fVar3);
      fVar1 = (float)((uint)fVar2 & 0xfffff000);
      fVar1 = fVar1 + (fVar3 + -fVar1 * fVar1) / (fVar2 + fVar1) +
                      fVar2 * (((DAT_101170d8 +
                                (DAT_101170d0 +
                                (DAT_101170c8 +
                                (DAT_101170bc + (DAT_101170b8 + fVar3 * DAT_101170b4) * fVar3) *
                                fVar3) * fVar3) * fVar3) * fVar3) /
                              ((DAT_101170d4 +
                               (DAT_101170cc + (DAT_101170c4 + fVar3 * DAT_101170c0) * fVar3) *
                               fVar3) * fVar3 + 1.0));
      return fVar1 + fVar1;
    }
    fVar1 = (param_1 + 1.0) * 0.5;
    fVar3 = DAT_101170d4 + (DAT_101170cc + (DAT_101170c4 + fVar1 * DAT_101170c0) * fVar1) * fVar1;
    fVar4 = DAT_101170d8 +
            (DAT_101170d0 +
            (DAT_101170c8 + (DAT_101170bc + (DAT_101170b8 + fVar1 * DAT_101170b4) * fVar1) * fVar1)
            * fVar1) * fVar1;
    fVar2 = (float)FUN_10117358();
    fVar1 = DAT_101170e8 +
            -(DAT_101170e4 + fVar2 * ((fVar4 * fVar1) / (fVar3 * fVar1 + 1.0)) + fVar2) * 2.0;
  }
  else {
    fVar1 = (param_1 - param_1) / (param_1 - param_1);
  }
  return fVar1;
}

