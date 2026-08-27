/* FUN_1408ad10 @ 0x1408ad10 */

int FUN_1408ad10(int param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar4;
  int iVar5;
  int *piVar3;
  
  iVar5 = 0;
  piVar4 = DAT_1408ad4c + 8;
  piVar2 = DAT_1408ad4c;
  do {
    piVar3 = piVar2 + 1;
    if (((*piVar2 != 0) && (iVar1 = *(int *)(*piVar2 + (param_1 + 0x12) * 4), iVar1 != 0)) &&
       (iVar1 = *(int *)(iVar1 + 4), iVar1 != 0)) {
      iVar1 = (*param_2)(iVar1,param_3);
      iVar5 = iVar5 + 1;
      if (iVar1 == 0) {
        return iVar5;
      }
    }
    piVar2 = piVar3;
  } while (piVar3 != piVar4);
  return iVar5;
}

