/* FUN_1012dcb4 @ 0x1012dcb4 */

int FUN_1012dcb4(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar4 = *(uint *)(param_1 + 0x18);
  uVar5 = *(uint *)(param_1 + 0x1c);
  bVar7 = *(uint *)(param_1 + 0x24) <= uVar5;
  if (uVar5 == *(uint *)(param_1 + 0x24)) {
    bVar7 = *(uint *)(param_1 + 0x20) <= uVar4;
  }
  uVar2 = (param_2 / 0xff4) * 0xc + 0xc;
  iVar1 = param_2 + uVar4;
  if (bVar7) {
    uVar3 = *(uint *)(param_1 + 0x10);
    uVar6 = uVar5 + CARRY4(uVar4,param_2) + (uint)CARRY4(uVar4 + param_2,uVar2);
    uVar5 = *(int *)(param_1 + 0x14) +
            *(int *)(param_1 + 0xc) + (uint)CARRY4(uVar3,*(uint *)(param_1 + 8));
    bVar7 = uVar5 <= uVar6;
    if (uVar6 == uVar5) {
      bVar7 = uVar3 + *(uint *)(param_1 + 8) <= uVar4 + param_2 + uVar2;
    }
    if (bVar7) {
      iVar1 = iVar1 - uVar3;
    }
  }
  return iVar1 + uVar2;
}

