/* FUN_2c50ee58 @ 0x2c50ee58 */

void FUN_2c50ee58(int *param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pfVar1 = *(float **)(*(int *)(*param_1 + 0x98) + 0xc);
  uVar2 = VectorFloatToUnsigned(*pfVar1 * fRam2c50eeb8,3);
  uVar3 = VectorFloatToUnsigned(pfVar1[1] * fRam2c50eeb8,3);
  uVar4 = VectorFloatToUnsigned(pfVar1[2] * fRam2c50eeb8,3);
  uVar5 = VectorFloatToUnsigned(pfVar1[3] * fRam2c50eeb8,3);
  FUN_2c50eda4(param_1,uVar2,uVar3,uVar4,uVar5);
  return;
}

