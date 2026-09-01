/* FUN_10111010 @ 0x10111010 */

void FUN_10111010(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_50 [48];
  
  fVar3 = param_2[6] - *param_2;
  fVar2 = param_2[7] - param_2[1];
  fVar1 = fVar2 * fVar2 + fVar3 * fVar3;
  if (fVar2 < 0.0) {
    fVar1 = (float)FUN_10116a20(fVar1);
    fVar1 = (float)FUN_101169b8(fVar3 / fVar1);
    fVar1 = DAT_101110d8 - fVar1;
  }
  else {
    fVar1 = (float)FUN_10116a20(fVar1);
    fVar1 = (float)FUN_101169b8(fVar3 / fVar1);
  }
  FUN_1013b700(auStack_50);
  FUN_1013b722(-*param_2,-param_2[1],auStack_50);
  FUN_1010ee7c(-fVar1,auStack_50);
  FUN_1013bf5e(param_1,param_2,auStack_50);
  FUN_1013bf5e(param_1 + 8,param_2 + 2,auStack_50);
  FUN_1013bf5e(param_1 + 0x10,param_2 + 4,auStack_50);
  FUN_1013bf5e(param_1 + 0x18,param_2 + 6,auStack_50);
  return;
}

