/* FUN_1006952c @ 0x1006952c */

void FUN_1006952c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  byte abStack_218 [512];
  
  iVar1 = DAT_10069590;
  uVar6 = 0x200;
  iVar7 = DAT_10069590 + 4;
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    if (param_2 < 0x200) {
      uVar6 = param_2;
    }
    FUN_1013d03e(abStack_218,param_1,uVar6,0x200);
    uVar4 = 0;
    sVar5 = *(short *)(iVar1 + 0x24);
    pbVar3 = abStack_218;
    do {
      uVar4 = uVar4 + 1;
      sVar5 = sVar5 + (ushort)*pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (uVar4 != uVar6);
    *(short *)(iVar1 + 0x24) = sVar5;
    iVar2 = FUN_1011b56c(iVar7,abStack_218,uVar6,0);
    *(int *)(iVar1 + 0x28) = iVar2;
    if (iVar2 != 0) break;
    param_1 = param_1 + uVar6;
    param_2 = param_2 - uVar6;
  }
  return;
}

