/* FUN_2c63648c @ 0x2c63648c */

void FUN_2c63648c(undefined4 param_1,short *param_2,short param_3,short *param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  
  sVar2 = FUN_2c6033b4(param_1,0x20000,0x50);
  iVar7 = (int)sVar2;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 1;
  }
  uVar8 = FUN_2c636364(param_1);
  sVar2 = (short)((uint)(iVar7 << 0xf) >> 0x10);
  iVar7 = FUN_2c62e208((int)(short)((short)uVar8 + 0x5a));
  iVar9 = FUN_2c62e208(uVar8);
  sVar3 = FUN_2c6033b4(param_1,0x30000,0x12);
  sVar4 = FUN_2c6033b4(param_1,0x30000,0x13);
  sVar5 = FUN_2c6033b4(param_1,0x30000,0x10);
  sVar6 = FUN_2c6033b4(param_1,0x30000,0x11);
  sVar1 = (short)((uint)((short)(param_3 - sVar2) * iVar7 * 2) >> 0x10);
  *param_4 = (*param_2 - (sVar2 + sVar3)) + sVar1;
  param_4[2] = sVar1 + sVar4 + sVar2 + *param_2;
  sVar1 = (short)((uint)((short)(param_3 - sVar2) * iVar9 * 2) >> 0x10);
  param_4[1] = (param_2[1] - (sVar2 + sVar5)) + sVar1;
  param_4[3] = sVar1 + sVar6 + sVar2 + param_2[1];
  return;
}

