/* FUN_10127096 @ 0x10127096 */

void FUN_10127096(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar7 = param_1;
  if (param_2 < 0) {
    uVar1 = 0;
    if (param_1 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 4);
    }
    iVar2 = FUN_10126fd2(uVar1);
    param_2 = param_2 + iVar2;
    if (param_1 != 0) goto LAB_101270aa;
  }
  else {
    if (param_1 == 0) goto LAB_101270e0;
LAB_101270aa:
    iVar7 = *(int *)(param_1 + 4);
  }
  if (param_2 < 0) {
    return;
  }
LAB_101270e0:
  iVar2 = FUN_10126fd2(iVar7);
  if ((param_2 < iVar2) && (iVar2 = FUN_10126fda(param_1), param_2 != iVar2)) {
    iVar3 = **(int **)(iVar7 + 8);
    puVar6 = (undefined4 *)(iVar2 * 4 + iVar3);
    puVar4 = (undefined4 *)(param_2 * 4 + iVar3);
    if (param_2 < iVar2) {
      do {
        puVar5 = puVar6 + -1;
        *puVar6 = puVar6[-1];
        puVar6 = puVar5;
      } while (puVar4 != puVar5);
    }
    else {
      for (; puVar4 != puVar6; puVar6 = puVar6 + 1) {
        *puVar6 = puVar6[1];
      }
    }
    *(int *)(iVar3 + param_2 * 4) = param_1;
    FUN_10086f50(iVar7,0x22,0);
    FUN_10125af4(iVar7);
    return;
  }
  return;
}

