/* FUN_100fbad0 @ 0x100fbad0 */

undefined4 FUN_100fbad0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  
  iVar5 = *(int *)(param_1 + 0x2c);
  piVar6 = *(int **)(param_1 + 0x1c);
  iVar2 = iVar5 + -1;
  piVar1 = piVar6;
  if (-1 < iVar2) {
    do {
      iVar4 = piVar1[-1];
      if (iVar4 <= param_2) {
        if (param_2 <= iVar4) {
          return 0;
        }
        piVar1 = piVar6 + -iVar5 + iVar2 + 1;
        iVar2 = param_2;
        do {
          piVar1 = piVar1 + -1;
          param_2 = *piVar1;
          *piVar1 = iVar2;
          iVar2 = param_2;
        } while (piVar6 + -iVar5 != piVar1);
        break;
      }
      bVar7 = iVar2 != 0;
      iVar2 = iVar2 + -1;
      piVar1 = piVar1 + -1;
    } while (bVar7);
  }
  uVar3 = *(int *)(param_1 + 0x20) - 4;
  *(uint *)(param_1 + 0x20) = uVar3;
  if (uVar3 <= *(uint *)(param_1 + 0x24)) {
    *(undefined4 *)(param_1 + 0x28) = 0x62;
    return 1;
  }
  *(int *)(param_1 + 0x2c) = iVar5 + 1;
  piVar6[-(iVar5 + 1)] = param_2;
  return 0;
}

