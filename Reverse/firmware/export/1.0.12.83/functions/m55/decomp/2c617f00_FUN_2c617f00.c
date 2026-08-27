/* FUN_2c617f00 @ 0x2c617f00 */

short * FUN_2c617f00(short *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  short sVar8;
  
  sVar2 = FUN_2c6033b4(param_2,0,0x50,param_4,param_4);
  iVar7 = (int)sVar2;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 1;
  }
  sVar3 = FUN_2c6033b4(param_2,0x30000,0x12);
  sVar4 = FUN_2c6033b4(param_2,0x30000,0x13);
  sVar1 = (short)((uint)(iVar7 << 0xf) >> 0x10);
  sVar5 = FUN_2c6033b4(param_2,0x30000,0x10);
  sVar6 = FUN_2c6033b4(param_2,0x30000,0x11);
  sVar8 = *(short *)(param_2 + 0x14) + *(short *)(param_2 + 0x28);
  sVar2 = *(short *)(param_2 + 0x2a);
  param_1[2] = sVar8 + sVar5 + sVar1;
  sVar5 = *(short *)(param_2 + 0x16);
  *param_1 = sVar8 - (sVar3 + sVar1);
  sVar5 = sVar5 + sVar2;
  param_1[1] = sVar5 - (sVar1 + sVar4);
  param_1[3] = sVar1 + sVar6 + sVar5;
  return param_1;
}

