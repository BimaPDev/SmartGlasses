/* FUN_10088388 @ 0x10088388 */

int FUN_10088388(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  iVar2 = FUN_10125ff0();
  if (iVar2 != 0) {
    iVar3 = FUN_1012691c(param_1,0,0x10);
    iVar4 = FUN_1012691c(param_1,0,0x11);
    iVar5 = FUN_10126fd2(param_1);
    uVar1 = DAT_10088484;
    uVar8 = 0x1fffffff;
    for (iVar9 = 0; iVar9 != iVar5; iVar9 = iVar9 + 1) {
      iVar10 = *(int *)(**(int **)(param_1 + 8) + iVar9 * 4);
      iVar6 = FUN_10124cc6(iVar10,uVar1);
      if ((iVar6 == 0) && (iVar6 = FUN_10124cb8(iVar10,0x1000), iVar6 != 0)) {
        if (iVar2 == 2) {
          iVar10 = *(int *)(iVar10 + 0x20);
          iVar6 = *(int *)(param_1 + 0x20) - iVar4;
        }
        else if (iVar2 == 3) {
          iVar10 = *(int *)(iVar10 + 0x18) +
                   ((*(int *)(iVar10 + 0x20) + 1) - *(int *)(iVar10 + 0x18)) / 2;
          iVar6 = *(int *)(param_1 + 0x18) + iVar3 +
                  ((*(int *)(param_1 + 0x20) + (1 - (iVar4 + iVar3))) - *(int *)(param_1 + 0x18)) /
                  2;
        }
        else {
          if (iVar2 != 1) goto LAB_10088448;
          iVar10 = *(int *)(iVar10 + 0x18);
          iVar6 = *(int *)(param_1 + 0x18) + iVar3;
        }
        iVar10 = iVar10 + param_4;
        if (((param_2 <= iVar10) && (iVar10 <= param_3)) &&
           (uVar7 = iVar10 - iVar6,
           (int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f)) <
           (int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f)))) {
          uVar8 = uVar7;
        }
      }
LAB_10088448:
    }
    if (uVar8 != 0x1fffffff) {
      return -uVar8;
    }
  }
  return 0;
}

