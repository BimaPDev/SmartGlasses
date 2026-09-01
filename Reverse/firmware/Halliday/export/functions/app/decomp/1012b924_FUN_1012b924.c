/* FUN_1012b924 @ 0x1012b924 */

void FUN_1012b924(int param_1,uint param_2,undefined4 param_3)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = param_2;
  if (0x168 < param_2) {
    uVar8 = param_2 - 0x168;
  }
  uVar1 = *(ushort *)(param_1 + 0x2e);
  if (0x168 < param_2) {
    uVar8 = uVar8 & 0xffff;
  }
  sVar2 = *(short *)(param_1 + 0x30) - uVar1;
  iVar6 = (int)sVar2;
  sVar4 = (short)uVar8;
  sVar3 = *(short *)(param_1 + 0x30) - sVar4;
  iVar7 = (int)sVar3;
  if (iVar6 < 0) {
    iVar6 = (int)(short)(sVar2 + 0x168);
  }
  if (iVar7 < 0) {
    iVar7 = (int)(short)(sVar3 + 0x168);
  }
  iVar9 = iVar7 - iVar6;
  if (iVar9 < 0) {
    iVar9 = -iVar9;
  }
  if (iVar9 < 0xb5) {
    uVar5 = (uint)uVar1;
    if ((iVar7 < iVar6) || (uVar5 = uVar8, uVar8 = (uint)uVar1, iVar6 < iVar7)) {
      FUN_1012b7b8(param_1,uVar5,uVar8,0x20000,param_1,param_1,param_3);
    }
  }
  else {
    FUN_10125af4();
  }
  FUN_1012b8ec();
  *(short *)(param_1 + 0x2e) = sVar4;
  FUN_1012b8ec();
  return;
}

