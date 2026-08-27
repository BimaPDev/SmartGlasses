/* FUN_2c607394 @ 0x2c607394 */

int FUN_2c607394(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = FUN_2c6041d4();
  if (iVar5 != 0) {
    sVar1 = *(short *)(iVar5 + 0x16);
    sVar2 = *(short *)(param_1 + 0x16);
    sVar3 = FUN_2c604a38();
    uVar6 = FUN_2c6033b4(iVar5,0,0x10);
    sVar4 = FUN_2c6033b4(iVar5,0,0x32,uVar6,param_4);
    return (int)(short)(((sVar2 - ((short)uVar6 + sVar4)) - sVar1) + sVar3);
  }
  return (int)*(short *)(param_1 + 0x16);
}

