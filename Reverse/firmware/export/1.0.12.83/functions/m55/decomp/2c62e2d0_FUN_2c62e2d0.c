/* FUN_2c62e2d0 @ 0x2c62e2d0 */

uint FUN_2c62e2d0(uint param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  
  uVar5 = 0;
  uVar6 = 0x400;
  uVar1 = 0x200;
  iVar2 = 10;
  do {
    while( true ) {
      iVar3 = 0x400 - uVar1;
      uVar4 = uVar1 * uVar1 >> 10;
      uVar4 = (uVar1 * uVar4 >> 10) + (((uint)(iVar3 * iVar3) >> 10) * uVar1 * param_2 * 3 >> 0x14)
              + (uVar4 * param_4 * iVar3 * 3 >> 0x14);
      if (uVar4 <= param_1) break;
      iVar3 = uVar5 + uVar1;
      uVar6 = uVar1;
      if (0x1ff < uVar1) goto LAB_2c62e308;
LAB_2c62e36e:
      iVar2 = iVar2 + -1;
      fVar7 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
      uVar1 = VectorFloatToUnsigned(fVar7 * 0.5 + -0.5,3);
      if (iVar2 == 0) {
        return uVar1;
      }
    }
    if (param_1 == uVar4) {
      fVar7 = 0.5;
      fVar8 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
      if (uVar1 < 0x200) {
        fVar7 = -0.5;
      }
      uVar5 = VectorFloatToUnsigned(fVar8 + fVar7,3);
      return uVar5;
    }
    iVar3 = uVar1 + uVar6;
    uVar5 = uVar1;
    if (uVar1 < 0x200) goto LAB_2c62e36e;
LAB_2c62e308:
    iVar2 = iVar2 + -1;
    fVar7 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
    uVar1 = VectorFloatToUnsigned(fVar7 * 0.5 + 0.5,3);
    if (iVar2 == 0) {
      return uVar1;
    }
  } while( true );
}

