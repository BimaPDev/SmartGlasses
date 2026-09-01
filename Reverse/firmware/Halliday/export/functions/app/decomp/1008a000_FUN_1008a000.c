/* FUN_1008a000 @ 0x1008a000 */

int FUN_1008a000(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int extraout_r3;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  
  iVar1 = FUN_10125f40(param_1,0,param_3,param_4,param_4);
  if (iVar1 == 1) {
    iVar2 = FUN_1012691c(param_1,0,0x13);
    iVar3 = FUN_1012691c(param_1,0,0x12);
    iVar4 = FUN_1012691c(param_1,0,0x32);
    iVar5 = FUN_10126fd2(param_1);
    iVar1 = 0x1fffffff;
    for (iVar8 = 0; iVar5 != iVar8; iVar8 = iVar8 + 1) {
      iVar9 = *(int *)(**(int **)(param_1 + 8) + iVar8 * 4);
      iVar7 = FUN_10124cc6(iVar9,DAT_1008a0b8);
      if ((iVar7 == 0) && (iVar7 = *(int *)(iVar9 + 0x14), iVar7 <= iVar1)) {
        iVar1 = iVar7;
      }
    }
    iVar5 = DAT_1008a0bc;
    if (iVar1 != 0x1fffffff) {
      iVar5 = (iVar4 + iVar3 + *(int *)(param_1 + 0x14)) - iVar1;
    }
    iVar1 = FUN_1008960c(param_1);
    uVar6 = FUN_10125786(param_1);
    uVar10 = FUN_10125ffe(param_1,uVar6,iVar3 + iVar2,iVar3 + iVar2 + iVar4 * 2 + iVar1);
    iVar1 = (extraout_r3 + (int)uVar10) - (int)((ulonglong)uVar10 >> 0x20);
    if (iVar1 < iVar5) {
      iVar1 = iVar5;
    }
  }
  else {
    iVar1 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      iVar1 = -*(int *)(*(int *)(param_1 + 8) + 0x10);
    }
  }
  return iVar1;
}

