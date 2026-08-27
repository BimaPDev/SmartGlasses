/* FUN_2c658768 @ 0x2c658768 */

undefined4 * FUN_2c658768(undefined4 *param_1,float *param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  uint in_fpscr;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr11;
  double dVar4;
  double dVar5;
  uint uVar6;
  
  fVar3 = (float)(param_4 + param_5);
  if ((uint)param_2[1] < (uint)fVar3) {
    if (param_2[1] == 0.0) {
      fVar2 = 1.54143e-44;
    }
    else {
      fVar2 = 0.0;
    }
    if ((uint)fVar3 < (uint)fVar2) {
      fVar3 = fVar2;
    }
    dVar4 = (double)VectorUnsignedToFloat(fVar3,(byte)(in_fpscr >> 0x16) & 3);
    dVar4 = dVar4 / (double)*param_2;
    dVar5 = (double)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    if (dVar5 <= dVar4) {
      coprocessor_function2(0xb,0xb,2,in_cr6,in_cr11,in_cr6);
      uVar6 = VectorFloatToUnsigned(dVar4 + 1.0,3);
      if (uVar6 < (uint)(param_3 << 1)) {
        uVar6 = param_3 << 1;
      }
      uVar1 = FUN_2c6586d0(param_2,uVar6);
      param_1[1] = uVar1;
      *(undefined1 *)param_1 = 1;
      return param_1;
    }
    coprocessor_function2(0xb,0xb,2,in_cr7,in_cr11,in_cr7);
    fVar3 = (float)VectorFloatToUnsigned((double)*param_2 * dVar5,3);
    param_2[1] = fVar3;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}

