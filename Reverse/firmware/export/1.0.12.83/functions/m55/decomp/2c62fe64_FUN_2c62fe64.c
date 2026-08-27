/* FUN_2c62fe64 @ 0x2c62fe64 */

void FUN_2c62fe64(int param_1,short *param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  
  sVar1 = (short)(param_3 >> 1);
  if (param_4 == 0) {
    sVar1 = param_2[1] - sVar1;
    param_2[1] = sVar1;
    param_2[3] = sVar1 + (short)param_3 + -1;
    *param_2 = *(short *)(param_1 + 0x14);
    sVar1 = *(short *)(param_1 + 0x18);
    param_2[2] = sVar1;
  }
  else {
    sVar1 = *param_2 - sVar1;
    *param_2 = sVar1;
    param_2[2] = sVar1 + (short)param_3 + -1;
    param_2[1] = *(short *)(param_1 + 0x16);
    sVar1 = *(short *)(param_1 + 0x1a);
    param_2[3] = sVar1;
  }
  sVar1 = FUN_2c6033b4(param_1,0x30000,0x12,(int)sVar1,param_4);
  sVar2 = FUN_2c6033b4(param_1,0x30000,0x13);
  sVar3 = FUN_2c6033b4(param_1,0x30000,0x10);
  sVar4 = FUN_2c6033b4(param_1,0x30000,0x11);
  sVar5 = FUN_2c6033b4(param_1,0x30000,0x68);
  sVar6 = FUN_2c6033b4(param_1,0x30000,0x69);
  *param_2 = *param_2 - (sVar1 + sVar5);
  param_2[2] = sVar5 + sVar2 + param_2[2];
  param_2[3] = sVar6 + sVar4 + param_2[3];
  param_2[1] = param_2[1] - (sVar3 + sVar6);
  return;
}

