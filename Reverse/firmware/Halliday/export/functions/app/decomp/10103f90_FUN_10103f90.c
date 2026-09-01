/* FUN_10103f90 @ 0x10103f90 */

void FUN_10103f90(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x14);
  iVar7 = *(int *)(param_1 + 4);
  piVar6 = (int *)(*(int *)(param_1 + 0x28) + iVar3 * 4);
  for (piVar5 = *(int **)(*(int *)(param_1 + 0x28) + iVar3 * 4);
      (piVar5 != (int *)0x0 && (*piVar5 <= iVar7)); piVar5 = (int *)piVar5[3]) {
    piVar6 = piVar5 + 3;
    if (*piVar5 == iVar7) {
      iVar3 = *(int *)(param_1 + 0x1c);
      piVar5[1] = piVar5[1] + *(int *)(param_1 + 0x20);
      piVar5[2] = piVar5[2] + iVar3;
      return;
    }
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (*(int *)(param_1 + 0x30) <= iVar3) {
    FUN_101188d0(DAT_10103ffc);
    iVar3 = *(int *)(param_1 + 0x34);
  }
  iVar4 = *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x34) = iVar3 + 1;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  *(int *)(iVar4 + iVar3 * 0x10) = iVar7;
  iVar4 = iVar4 + iVar3 * 0x10;
  iVar3 = *piVar6;
  *(undefined4 *)(iVar4 + 4) = uVar2;
  *(undefined4 *)(iVar4 + 8) = uVar1;
  *(int *)(iVar4 + 0xc) = iVar3;
  *piVar6 = iVar4;
  return;
}

