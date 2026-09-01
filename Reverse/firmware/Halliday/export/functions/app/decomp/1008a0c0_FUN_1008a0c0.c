/* FUN_1008a0c0 @ 0x1008a0c0 */

int FUN_1008a0c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int extraout_r3;
  int iVar7;
  
  iVar2 = FUN_10125f40(param_1,0,param_3,param_4,param_4);
  if (iVar2 == 1) {
    iVar3 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    }
  }
  else {
    iVar3 = FUN_10126fd2(param_1);
    uVar1 = DAT_1008a174;
    iVar2 = DAT_1008a170;
    for (iVar7 = 0; iVar3 != iVar7; iVar7 = iVar7 + 1) {
      iVar5 = *(int *)(**(int **)(param_1 + 8) + iVar7 * 4);
      iVar4 = FUN_10124cc6(iVar5,uVar1);
      if ((iVar4 == 0) && (iVar4 = *(int *)(iVar5 + 0x1c), iVar2 < iVar4)) {
        iVar2 = iVar4;
      }
    }
    iVar3 = FUN_1012691c(param_1,0,0x13);
    iVar7 = FUN_1012691c(param_1,0,0x12);
    iVar4 = FUN_1012691c(param_1,0,0x32);
    if (iVar2 != DAT_1008a170) {
      iVar2 = iVar2 + ((iVar4 + iVar3) - *(int *)(param_1 + 0x1c));
    }
    iVar5 = FUN_1008960c(param_1);
    iVar6 = FUN_10125786(param_1);
    iVar4 = iVar7 + iVar3 + iVar4 * 2;
    iVar7 = FUN_10125ffe(param_1,iVar7 + iVar3,iVar4,(iVar4 + iVar5) - iVar6);
    iVar3 = extraout_r3 - iVar7;
    if (extraout_r3 - iVar7 < iVar2) {
      iVar3 = iVar2;
    }
  }
  return iVar3;
}

