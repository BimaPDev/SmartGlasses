/* FUN_10117af4 @ 0x10117af4 */

float FUN_10117af4(float param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((0x31ffffff < (uint)ABS(param_1)) || ((int)param_1 != 0)) {
    fVar3 = param_1 * param_1;
    fVar1 = param_1 * fVar3;
    fVar2 = DAT_10117b78 +
            (DAT_10117b74 + (DAT_10117b70 + (DAT_10117b6c + fVar3 * DAT_10117b68) * fVar3) * fVar3)
            * fVar3;
    if (param_3 == 0) {
      return param_1 + (DAT_10117b7c + fVar3 * fVar2) * fVar1;
    }
    param_1 = param_1 - (-param_2 + (-(fVar2 * fVar1) + param_2 * 0.5) * fVar3 +
                        fVar1 * DAT_10117b80);
  }
  return param_1;
}

