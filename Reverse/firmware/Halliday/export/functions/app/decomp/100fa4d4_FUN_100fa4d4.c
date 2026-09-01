/* FUN_100fa4d4 @ 0x100fa4d4 */

void FUN_100fa4d4(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    if (*(short *)(param_1 + 2) == 0) {
      iVar5 = 0;
      iVar6 = 0;
      iVar7 = 0;
      iVar8 = 0;
    }
    else {
      piVar3 = *(int **)(param_1 + 4);
      iVar7 = *piVar3;
      iVar5 = piVar3[1];
      iVar6 = iVar5;
      iVar8 = iVar7;
      if (piVar3 + 2 < piVar3 + *(short *)(param_1 + 2) * 2) {
        piVar4 = piVar3 + 4;
        do {
          iVar1 = piVar4[-2];
          iVar2 = piVar4[-1];
          if (iVar1 <= iVar7) {
            iVar7 = iVar1;
          }
          if (iVar8 < iVar1) {
            iVar8 = iVar1;
          }
          if (iVar2 <= iVar6) {
            iVar6 = iVar2;
          }
          piVar4 = piVar4 + 2;
          if (iVar5 < iVar2) {
            iVar5 = iVar2;
          }
        } while (piVar4 != (int *)((int)piVar3 +
                                  ((int)(piVar3 + *(short *)(param_1 + 2) * 2) + (-9 - (int)piVar3)
                                  & 0xfffffff8U) + 0x18));
      }
    }
    param_2[1] = iVar6;
    param_2[2] = iVar8;
    *param_2 = iVar7;
    param_2[3] = iVar5;
    return;
  }
  return;
}

