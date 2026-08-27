/* FUN_2c60618c @ 0x2c60618c */

void FUN_2c60618c(undefined4 param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_2 + 4);
  if (iVar5 != 0) {
    sVar2 = FUN_2c605068(iVar5);
    sVar3 = FUN_2c604a44(iVar5);
    sVar1 = *(short *)(iVar5 + 0x16);
    sVar4 = FUN_2c6033b4(iVar5,0,0x10);
    sVar3 = (sVar1 + sVar4) - sVar3;
    *(short *)(param_2 + 0x16) = sVar3;
    *(short *)(param_2 + 0x1a) = sVar3 + -1;
    sVar1 = *(short *)(iVar5 + 0x14);
    sVar3 = FUN_2c6033b4(iVar5,0,0x12);
    *(undefined4 *)(param_2 + 0x1c) = 0xbb76;
    sVar2 = (sVar1 + sVar3) - sVar2;
    *(short *)(param_2 + 0x14) = sVar2;
    *(short *)(param_2 + 0x18) = sVar2 + -1;
    return;
  }
  *(undefined4 *)(param_2 + 0x1c) = 0x1876;
  return;
}

