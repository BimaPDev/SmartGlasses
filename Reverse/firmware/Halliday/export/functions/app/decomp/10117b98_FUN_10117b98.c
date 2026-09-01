/* FUN_10117b98 @ 0x10117b98 */

float FUN_10117b98(float param_1,int param_2)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  
  fVar2 = ABS(param_1);
  if (fVar2 == 0.0) {
    return param_1;
  }
  if ((uint)fVar2 < 0x7f800000) {
    if (((uint)param_1 & 0x7f800000) == 0) {
      param_1 = param_1 * DAT_10117c6c;
      if (param_2 < DAT_10117c70) {
        return param_1 * DAT_10117c7c;
      }
      uVar3 = ((uint)ABS(param_1) >> 0x17) - 0x19;
    }
    else {
      uVar3 = (uint)fVar2 >> 0x17;
    }
    iVar1 = uVar3 + param_2;
    if (0xfe < iVar1) {
LAB_10117bd8:
      return (float)((uint)(-1 < (int)param_1) * (int)DAT_10117c74 +
                    (uint)(-1 >= (int)param_1) * DAT_10117c78) * DAT_10117c74;
    }
    if (0 < iVar1) {
      return (float)((uint)param_1 & 0x807fffff | iVar1 * 0x800000);
    }
    if (iVar1 < -0x16) {
      if (50000 < param_2) goto LAB_10117bd8;
      param_1 = (float)((uint)(-1 < (int)param_1) * (int)DAT_10117c7c +
                       (uint)(-1 >= (int)param_1) * DAT_10117c80) * DAT_10117c7c;
    }
    else {
      param_1 = (float)((uint)param_1 & 0x807fffff | (iVar1 + 0x19) * 0x800000) * DAT_10117c84;
    }
  }
  else {
    param_1 = param_1 + param_1;
  }
  return param_1;
}

