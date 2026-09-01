/* FUN_1012b99e @ 0x1012b99e */

void FUN_1012b99e(int param_1,uint param_2,undefined4 param_3)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = param_2;
  if (0x168 < param_2) {
    uVar7 = param_2 - 0x168;
  }
  uVar3 = (uint)*(ushort *)(param_1 + 0x30);
  if (0x168 < param_2) {
    uVar7 = uVar7 & 0xffff;
  }
  sVar1 = *(ushort *)(param_1 + 0x30) - *(short *)(param_1 + 0x2e);
  iVar5 = (int)sVar1;
  sVar2 = (short)uVar7 - *(short *)(param_1 + 0x2e);
  iVar6 = (int)sVar2;
  if (iVar5 < 0) {
    iVar5 = (int)(short)(sVar1 + 0x168);
  }
  if (iVar6 < 0) {
    iVar6 = (int)(short)(sVar2 + 0x168);
  }
  iVar8 = iVar6 - iVar5;
  if (iVar8 < 0) {
    iVar8 = -iVar8;
  }
  if (iVar8 < 0xb5) {
    uVar4 = uVar7;
    if ((iVar6 < iVar5) || (uVar4 = uVar3, uVar3 = uVar7, iVar5 < iVar6)) {
      FUN_1012b7b8(param_1,uVar4,uVar3,0x20000,param_1,param_1,param_3);
    }
  }
  else {
    FUN_10125af4();
  }
  FUN_1012b8ec();
  *(short *)(param_1 + 0x30) = (short)uVar7;
  FUN_1012b8ec();
  return;
}

