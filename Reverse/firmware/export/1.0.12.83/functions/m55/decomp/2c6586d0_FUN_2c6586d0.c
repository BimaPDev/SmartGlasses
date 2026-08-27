/* FUN_2c6586d0 @ 0x2c6586d0 */

uint FUN_2c6586d0(float *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint in_fpscr;
  undefined4 in_cr7;
  undefined4 in_cr11;
  float fVar5;
  double dVar6;
  
  if (param_2 < 0xe) {
    if (param_2 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = (uint)*(byte *)(DAT_2c65875c + param_2);
      dVar6 = (double)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
      coprocessor_function2(0xb,0xb,2,in_cr7,in_cr11,in_cr7);
      fVar5 = (float)VectorFloatToUnsigned(dVar6 * (double)*param_1,3);
      param_1[1] = fVar5;
    }
  }
  else {
    iVar2 = 0xf9;
    puVar4 = DAT_2c658760;
    do {
      iVar3 = iVar2 >> 1;
      if (puVar4[iVar3] < param_2) {
        puVar4 = puVar4 + iVar3 + 1;
        iVar3 = (iVar2 - iVar3) + -1;
      }
      iVar2 = iVar3;
    } while (0 < iVar2);
    uVar1 = *puVar4;
    if (puVar4 == DAT_2c658764) {
      fVar5 = -NAN;
    }
    else {
      dVar6 = (double)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
      coprocessor_function2(0xb,0xb,2,in_cr7,in_cr11,in_cr7);
      fVar5 = (float)VectorFloatToUnsigned(dVar6 * (double)*param_1,3);
    }
    param_1[1] = fVar5;
  }
  return uVar1;
}

