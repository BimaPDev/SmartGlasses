/* FUN_10067318 @ 0x10067318 */

void FUN_10067318(uint param_1,uint param_2,int param_3,uint param_4,ushort param_5,ushort param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar4 = (uint)param_5;
  uVar3 = (uint)param_6;
  uVar5 = param_1;
  uVar6 = param_2;
  iVar7 = param_3;
  iVar1 = FUN_10067218();
  iVar2 = DAT_100673b4;
  if (iVar1 == 0) {
    *(undefined2 *)(DAT_100673b4 + 0x18) = 2;
    *(uint *)(iVar2 + 0x14) = param_2;
    *(undefined4 *)(iVar2 + 0x10) = 0x10000;
    FUN_1013d9b0(iVar2);
    *(uint *)(iVar2 + 0x38) = uVar4;
    *(uint *)(iVar2 + 0x3c) = uVar3;
    *(undefined4 *)(iVar2 + 0x34) = 0x10000;
    *(uint *)(iVar2 + 0x40) = param_4;
    FUN_1013d9f0(iVar2,1);
    uVar5 = uVar3;
    iVar2 = FUN_1013da10(iVar2,param_3,param_1,uVar4,uVar3,uVar6,iVar7);
    if (-1 < iVar2) {
      return;
    }
  }
  iVar2 = FUN_1011e910(param_1);
  if ((param_2 == uVar4) && (param_4 == param_2)) {
    FUN_1011ea40(iVar2,param_3,uVar3 * param_4,iVar2,uVar5);
  }
  else {
    for (; uVar3 != 0; uVar3 = uVar3 - 1 & 0xffff) {
      iVar2 = FUN_1011ea40(iVar2,param_3,uVar4,iVar2,uVar5);
      iVar2 = iVar2 + param_2;
      param_3 = param_3 + param_4;
    }
  }
  FUN_1011e8e4();
  return;
}

