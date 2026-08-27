/* FUN_140da7d8 @ 0x140da7d8 */

float FUN_140da7d8(float param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  
  fVar1 = ABS(param_1);
  if (fVar1 == 0.0) {
    return param_1;
  }
  if (0x7f7fffff < (uint)fVar1) {
    return param_1 + param_1;
  }
  if (((uint)param_1 & 0x7f800000) == 0) {
    param_1 = param_1 * DAT_140da89c;
    if (param_2 < DAT_140da8a0) {
      return param_1 * DAT_140da8ac;
    }
    uVar2 = ((uint)ABS(param_1) >> 0x17) - 0x19;
  }
  else {
    uVar2 = (uint)fVar1 >> 0x17;
  }
  iVar3 = uVar2 + param_2;
  if (iVar3 < 0xff) {
    if (0 < iVar3) {
      return (float)((uint)param_1 & 0x807fffff | iVar3 * 0x800000);
    }
    if (-0x17 < iVar3) {
      return (float)((uint)param_1 & 0x807fffff | (iVar3 + 0x19) * 0x800000) * DAT_140da8b4;
    }
    iVar3 = DAT_140da8b0;
    fVar1 = DAT_140da8ac;
    if (param_2 < 0xc351) goto LAB_140da81e;
  }
  iVar3 = DAT_140da8a8;
  fVar1 = DAT_140da8a4;
LAB_140da81e:
  return (float)((uint)(-1 < (int)param_1) * (int)fVar1 + (uint)(-1 >= (int)param_1) * iVar3) *
         fVar1;
}

