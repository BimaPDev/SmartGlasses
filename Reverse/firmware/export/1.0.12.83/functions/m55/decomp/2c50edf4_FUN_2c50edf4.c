/* FUN_2c50edf4 @ 0x2c50edf4 */

void FUN_2c50edf4(int *param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pfVar1 = *(float **)(*(int *)(*param_1 + 0x94) + 0xc);
  uVar2 = VectorFloatToUnsigned(*pfVar1 * DAT_2c50ee54,3);
  uVar3 = VectorFloatToUnsigned(pfVar1[1] * DAT_2c50ee54,3);
  uVar4 = VectorFloatToUnsigned(pfVar1[2] * DAT_2c50ee54,3);
  uVar5 = VectorFloatToUnsigned(pfVar1[3] * DAT_2c50ee54,3);
  FUN_2c50eda4(param_1,uVar2,uVar3,uVar4,uVar5);
  return;
}

