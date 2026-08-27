/* FUN_2c607ed0 @ 0x2c607ed0 */

void FUN_2c607ed0(int param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  
  sVar1 = *(short *)(param_1 + 0x14);
  *param_2 = sVar1;
  sVar2 = *(short *)(param_1 + 0x16);
  param_2[1] = sVar2;
  sVar3 = *(short *)(param_1 + 0x18);
  param_2[2] = sVar3;
  sVar4 = *(short *)(param_1 + 0x1a);
  param_2[3] = sVar4;
  if (*(int *)(param_1 + 8) != 0) {
    *param_2 = sVar1 - *(short *)(*(int *)(param_1 + 8) + 0x14);
    param_2[2] = sVar3 + *(short *)(*(int *)(param_1 + 8) + 0x14);
    param_2[1] = sVar2 - *(short *)(*(int *)(param_1 + 8) + 0x14);
    param_2[3] = sVar4 + *(short *)(*(int *)(param_1 + 8) + 0x14);
  }
  return;
}

