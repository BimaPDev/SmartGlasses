/* FUN_2c6363e0 @ 0x2c6363e0 */

void FUN_2c6363e0(int param_1,short *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  
  sVar1 = FUN_2c6033b4(param_1,0,0x12);
  sVar2 = FUN_2c6033b4(param_1,0,0x13);
  sVar3 = FUN_2c6033b4(param_1,0,0x10);
  sVar4 = FUN_2c6033b4(param_1,0,0x11);
  iVar5 = FUN_2c6073ec(param_1);
  iVar6 = FUN_2c6073f8(param_1);
  if ((iVar5 - sVar1) - (int)sVar2 < (iVar6 - sVar3) - (int)sVar4) {
    iVar5 = FUN_2c6073ec(param_1);
    iVar5 = (iVar5 - sVar1) - (int)sVar2;
  }
  else {
    iVar5 = FUN_2c6073f8(param_1);
    iVar5 = (iVar5 - sVar3) - (int)sVar4;
  }
  if (iVar5 < 0) {
    iVar5 = iVar5 + 1;
  }
  sVar2 = (short)((uint)(iVar5 << 0xf) >> 0x10);
  *param_2 = sVar1 + *(short *)(param_1 + 0x14) + sVar2;
  param_2[1] = sVar2 + sVar3 + *(short *)(param_1 + 0x16);
  *param_3 = sVar2;
  return;
}

