/* FUN_100a69b0 @ 0x100a69b0 */

int FUN_100a69b0(int param_1,uint param_2,int param_3,int *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_r3;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  
  iVar6 = *param_4;
  if (iVar6 != 0) {
    iVar9 = param_1;
    uVar11 = FUN_1012dd88();
    uVar2 = (uint)uVar11;
    iVar4 = iVar6 << 0x1e;
    if (iVar4 != 0) {
      uVar12 = extraout_r3;
      FUN_10119dc2(DAT_100a6ab4,DAT_100a6ab0,DAT_100a6aac,0x1fb,uVar11,iVar4,extraout_r3,iVar9);
      FUN_1011a1f0(DAT_100a6aac,0x1fb,iVar4,uVar12);
    }
    if (uVar2 <= param_2) {
      return 2;
    }
    bVar1 = *(byte *)(param_1 + 0x28);
    if (uVar2 < iVar6 + param_2) {
      iVar6 = uVar2 - param_2;
    }
    *param_4 = iVar6;
    if (-1 < (int)((uint)bVar1 << 0x1f)) {
      return 7;
    }
    uVar2 = FUN_1012dcb4(param_1,param_2);
    bVar10 = *(uint *)(param_1 + 0x24) <= *(uint *)(param_1 + 0x1c);
    if (*(uint *)(param_1 + 0x1c) == *(uint *)(param_1 + 0x24)) {
      bVar10 = *(uint *)(param_1 + 0x20) <= *(uint *)(param_1 + 0x18);
    }
    if (bVar10) {
      uVar3 = *(uint *)(param_1 + 0x10);
      uVar7 = *(uint *)(param_1 + 8);
      iVar9 = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x14) + (uint)CARRY4(uVar7,uVar3);
      if (iVar9 == 0 && uVar7 + uVar3 < iVar6 + uVar2) {
        bVar10 = iVar9 == 0;
        if (iVar9 == 0) {
          bVar10 = uVar7 + uVar3 <= uVar2;
        }
        if (bVar10) {
          uVar2 = uVar2 - uVar3;
        }
        else {
          uVar8 = (uVar7 + uVar3) - uVar2;
          uVar5 = uVar8 >> 0xc;
          uVar8 = uVar8 + uVar5 * -0xc;
          iVar9 = FUN_1012dd38(param_1,uVar2,param_3,uVar8);
          if (iVar9 != 0) {
            return iVar9;
          }
          iVar6 = (iVar6 - (uVar7 + uVar3)) + uVar2;
          uVar2 = *(uint *)(param_1 + 8);
          iVar6 = iVar6 + uVar5 * 0xc;
          param_3 = (uVar8 & 0xfffffffc) + param_3;
        }
      }
      iVar6 = FUN_1012dd38(param_1,uVar2,param_3,iVar6);
      return iVar6;
    }
    FUN_1012dd38(param_1,uVar2,param_3,iVar6);
  }
  return 0;
}

