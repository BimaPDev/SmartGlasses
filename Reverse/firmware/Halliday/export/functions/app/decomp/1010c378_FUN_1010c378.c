/* FUN_1010c378 @ 0x1010c378 */

undefined4 FUN_1010c378(float param_1,float param_2,int *param_3,float *param_4)

{
  int iVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_4 == (float *)0x0) {
    *param_3 = (int)param_1;
    param_3[1] = (int)param_2;
  }
  else {
    if (((((param_4[1] != 0.0) || (param_4[3] != 0.0)) || (param_4[6] != 0.0)) ||
        ((param_4[7] != 0.0 || (param_4[8] != 1.0)))) &&
       ((sVar2 = *(short *)(DAT_1010c49c + 0x7d4), sVar2 == 0x1000 || (sVar2 == 0x2000)))) {
      if (param_1 != 0.0) {
        param_1 = param_1 + 0.5;
      }
      if ((param_2 != 0.0) && (sVar2 == 0x2000)) {
        param_2 = param_2 + 0.5;
      }
    }
    fVar4 = param_2 * param_4[7] + param_1 * param_4[6] + param_4[8];
    if (fVar4 <= 0.0) {
      return 0;
    }
    fVar5 = param_4[1] * param_2 + param_1 * *param_4 + param_4[2];
    fVar3 = fVar5 / fVar4;
    iVar1 = (uint)(fVar5 < 0.0) << 0x1f;
    fVar5 = param_1 * param_4[3] + param_2 * param_4[4] + param_4[5];
    if (iVar1 < 0) {
      fVar3 = fVar3 - 0.5;
    }
    if (-1 < iVar1) {
      fVar3 = fVar3 + 0.5;
    }
    *param_3 = (int)fVar3;
    fVar4 = fVar5 / fVar4;
    if ((int)((uint)(fVar5 < 0.0) << 0x1f) < 0) {
      fVar4 = fVar4 - 0.5;
    }
    else {
      fVar4 = fVar4 + 0.5;
    }
    param_3[1] = (int)fVar4;
  }
  return 1;
}

