/* FUN_101309b2 @ 0x101309b2 */

int FUN_101309b2(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = param_2[6];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 7;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar5 = param_2[5] * (iVar4 >> 3);
    iVar6 = *param_2 + iVar5;
    piVar1 = *(int **)(param_1 + 0x40);
    iVar5 = iVar5 + param_2[1];
    if (piVar1 == (int *)0x0) {
      iVar3 = 0x3fffffff;
    }
    else {
      iVar3 = (*piVar1 + piVar1[2]) - piVar1[1];
      if (0x3ffffffe < iVar3) {
        iVar3 = 0x3fffffff;
      }
    }
    if (((1 < param_2[4]) && (piVar1 = *(int **)(param_1 + 0x44), piVar1 != (int *)0x0)) &&
       (iVar2 = (piVar1[2] + *piVar1) - piVar1[1], iVar2 <= iVar3)) {
      iVar3 = iVar2;
    }
  }
  else {
    iVar5 = 0;
    iVar6 = 0;
    iVar3 = 0x3fffffff;
  }
  iVar3 = FUN_100af5dc(param_2,*(undefined4 *)(param_1 + 200),param_3,param_2[4] * iVar3,param_1,
                       param_2,param_3);
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar4 = iVar3 * (iVar4 >> 3);
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_1012d2f0(*(int *)(param_1 + 0x40),iVar6);
    }
    if ((1 < param_2[4]) && (*(int *)(param_1 + 0x44) != 0)) {
      FUN_1012d2f0(*(int *)(param_1 + 0x44),iVar5,iVar4);
    }
  }
  return iVar3;
}

