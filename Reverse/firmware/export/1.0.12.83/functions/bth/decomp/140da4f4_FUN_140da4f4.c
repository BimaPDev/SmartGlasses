/* FUN_140da4f4 @ 0x140da4f4 */

float FUN_140da4f4(float param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((0x31ffffff < (uint)ABS(param_1)) || ((int)param_1 != 0)) {
    fVar3 = param_1 * param_1;
    fVar1 = param_1 * fVar3;
    fVar2 = DAT_140da578 +
            (DAT_140da574 + (DAT_140da570 + (DAT_140da56c + fVar3 * DAT_140da568) * fVar3) * fVar3)
            * fVar3;
    if (param_3 == 0) {
      return param_1 + (DAT_140da57c + fVar3 * fVar2) * fVar1;
    }
    param_1 = param_1 - (-param_2 + (-(fVar2 * fVar1) + param_2 * 0.5) * fVar3 +
                        fVar1 * DAT_140da580);
  }
  return param_1;
}

