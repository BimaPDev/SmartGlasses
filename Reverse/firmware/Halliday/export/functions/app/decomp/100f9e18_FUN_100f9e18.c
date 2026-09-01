/* FUN_100f9e18 @ 0x100f9e18 */

int FUN_100f9e18(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*(code **)(*param_1 + 0x20) == (code *)0x0) {
    if (param_3 == 0) {
      return 0;
    }
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x20))();
    if (param_3 == 0) {
      return iVar2;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  iVar2 = *(int *)(param_1[1] + 0x10);
  piVar5 = (int *)(param_1[1] + 0x14);
  piVar1 = piVar5;
  do {
    if (piVar5 + iVar2 <= piVar1) {
      return 0;
    }
    piVar6 = piVar1 + 1;
    piVar3 = (int *)*piVar1;
    piVar1 = piVar6;
  } while (((param_1 == piVar3) || (*(code **)(*piVar3 + 0x20) == (code *)0x0)) ||
          (iVar4 = (**(code **)(*piVar3 + 0x20))(piVar3,param_2), iVar4 == 0));
  return iVar4;
}

