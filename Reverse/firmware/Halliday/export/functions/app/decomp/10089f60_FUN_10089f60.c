/* FUN_10089f60 @ 0x10089f60 */

int FUN_10089f60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_r3;
  int iVar6;
  int iVar7;
  
  iVar2 = FUN_10126fd2();
  uVar1 = DAT_10089ffc;
  iVar7 = DAT_10089ff8;
  for (iVar6 = 0; iVar6 != iVar2; iVar6 = iVar6 + 1) {
    iVar4 = *(int *)(**(int **)(param_1 + 8) + iVar6 * 4);
    iVar3 = FUN_10124cc6(iVar4,uVar1);
    if ((iVar3 == 0) && (iVar3 = *(int *)(iVar4 + 0x20), iVar7 < iVar3)) {
      iVar7 = iVar3;
    }
  }
  iVar2 = FUN_1012691c(param_1,0,0x10);
  iVar6 = FUN_1012691c(param_1,0,0x11);
  iVar3 = FUN_1012691c(param_1,0,0x32);
  if (iVar7 != DAT_10089ff8) {
    iVar7 = iVar7 + ((iVar3 + iVar6) - *(int *)(param_1 + 0x20));
  }
  iVar4 = FUN_1008962c(param_1);
  iVar5 = FUN_10125790(param_1);
  iVar3 = iVar6 + iVar2 + iVar3 * 2;
  iVar6 = FUN_10126008(param_1,iVar6 + iVar2,iVar3,(iVar3 + iVar4) - iVar5);
  iVar2 = extraout_r3 - iVar6;
  if (extraout_r3 - iVar6 < iVar7) {
    iVar2 = iVar7;
  }
  return iVar2;
}

