/* FUN_2c4c4e44 @ 0x2c4c4e44 */

float FUN_2c4c4e44(int param_1)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0x10);
  if (fVar3 == *(float *)(param_1 + 0x14)) {
    fVar1 = *(float *)(param_1 + 0xc);
    if (*(char *)(param_1 + 0x18) != '\0') {
      return fVar1;
    }
    fVar2 = *(float *)(param_1 + 8);
  }
  else {
    fVar1 = *(float *)(param_1 + 0xc);
    fVar2 = (float)VectorUnsignedToFloat
                             (*(undefined4 *)(param_1 + 4),
                              (byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
    *(float *)(param_1 + 0x14) = fVar3;
    *(undefined1 *)(param_1 + 0x18) = 0;
    fVar2 = (fVar3 - fVar1) / fVar2;
    *(float *)(param_1 + 8) = fVar2;
  }
  fVar1 = fVar1 + fVar2;
  *(float *)(param_1 + 0xc) = fVar1;
  if (0.0 < fVar2) {
    fVar3 = *(float *)(param_1 + 0x14);
    if (fVar3 < fVar1) goto LAB_2c4c4eba;
  }
  if ((-1 < (int)((uint)(fVar2 < 0.0) << 0x1f)) ||
     (fVar3 = *(float *)(param_1 + 0x14), -1 < (int)((uint)(fVar1 < fVar3) << 0x1f))) {
    return fVar1;
  }
LAB_2c4c4eba:
  *(float *)(param_1 + 0xc) = fVar3;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return fVar3;
}

