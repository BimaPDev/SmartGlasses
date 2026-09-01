/* FUN_10053f54 @ 0x10053f54 */

int FUN_10053f54(int *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  iVar7 = *param_1;
  uVar5 = *(uint *)(iVar7 + 8);
  if (uVar5 < 0x8000) {
    uVar8 = 4;
  }
  else {
    uVar8 = 8;
  }
  uVar9 = -param_2 & param_2;
  uVar4 = param_2 & ~-param_2;
  if (uVar4 == 0) {
    if (param_2 <= uVar8) {
      iVar7 = FUN_10119f9e(param_1,param_3,0,param_4);
      return iVar7;
    }
    uVar11 = 0;
    uVar10 = uVar9;
  }
  else {
    if (uVar9 <= uVar8) {
      uVar8 = uVar9;
    }
    uVar10 = param_2 - uVar9;
    uVar11 = uVar9;
  }
  if ((uVar10 - 1 & uVar10) != 0) {
    FUN_10119dc2(DAT_100540a0,DAT_1005409c,DAT_10054098,0x10d,param_1,param_2);
    FUN_10119dc2(DAT_100540a4);
    FUN_1011a1f0(DAT_10054098,0x10d,uVar4,uVar5);
  }
  if ((param_3 != 0) && (param_3 >> 3 < *(uint *)(iVar7 + 8))) {
    iVar2 = FUN_10119e76(iVar7,(uVar10 + param_3) - uVar8);
    uVar5 = FUN_10053ce8(iVar7,iVar2);
    if (uVar5 != 0) {
      iVar3 = FUN_10053b4c(iVar7,uVar5);
      if (*(uint *)(iVar7 + 8) < 0x8000) {
        iVar6 = 4;
      }
      else {
        iVar6 = 8;
      }
      iVar3 = (iVar3 + uVar11 + (uVar10 - 1) & -uVar10) - uVar11;
      uVar4 = (iVar3 - iVar6) - iVar7;
      uVar9 = uVar4 >> 3;
      uVar8 = (int)((param_3 + iVar3 + 7 & 0xfffffff8) - iVar7) >> 3;
      if (((uVar4 >> 3 < uVar5) || (uVar8 <= uVar9)) || (iVar2 + uVar5 < uVar8)) {
        FUN_10119dc2(DAT_100540a8,DAT_10054098,0x127);
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(0);
        }
        software_interrupt(2);
      }
      if (uVar5 < uVar9) {
        FUN_10053b8c(iVar7,uVar5,uVar9);
        FUN_10053dd4(iVar7,uVar5);
      }
      iVar2 = FUN_10119e3a(iVar7,uVar9);
      if (uVar8 < iVar2 + uVar9) {
        FUN_10053b8c(iVar7,uVar9,uVar8);
        FUN_10053dd4(iVar7,uVar8);
      }
      FUN_10119e46(iVar7,uVar9,1);
      return iVar3;
    }
  }
  return 0;
}

