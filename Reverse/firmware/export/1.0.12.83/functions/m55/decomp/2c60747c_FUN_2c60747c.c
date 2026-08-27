/* FUN_2c60747c @ 0x2c60747c */

void FUN_2c60747c(int param_1,short *param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  
  sVar1 = FUN_2c6033b4(param_1,0,0x32,param_4,param_4);
  *param_2 = *(short *)(param_1 + 0x14);
  param_2[1] = *(short *)(param_1 + 0x16);
  param_2[2] = *(short *)(param_1 + 0x18);
  param_2[3] = *(short *)(param_1 + 0x1a);
  FUN_2c62a66c(param_2,(int)-sVar1);
  sVar1 = FUN_2c6033b4(param_1,0,0x12);
  *param_2 = sVar1 + *param_2;
  sVar1 = FUN_2c6033b4(param_1,0,0x13);
  param_2[2] = param_2[2] - sVar1;
  sVar1 = FUN_2c6033b4(param_1,0,0x10);
  param_2[1] = sVar1 + param_2[1];
  sVar1 = FUN_2c6033b4(param_1,0,0x11);
  param_2[3] = param_2[3] - sVar1;
  return;
}

