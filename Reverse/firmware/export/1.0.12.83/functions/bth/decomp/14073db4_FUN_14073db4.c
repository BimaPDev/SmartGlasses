/* FUN_14073db4 @ 0x14073db4 */

int * FUN_14073db4(undefined4 *param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  if ((int *)*param_1 != (int *)0x0) {
    piVar2 = (int *)*param_1;
    piVar4 = (int *)0x0;
    do {
      piVar3 = piVar2;
      iVar1 = (*param_2)(piVar3,param_3);
      piVar2 = (int *)*piVar3;
      if (iVar1 != 0) {
        if (piVar4 == (int *)0x0) {
          *param_1 = piVar2;
          iVar1 = *piVar3;
        }
        else {
          *piVar4 = (int)piVar2;
          iVar1 = *piVar3;
        }
        if (iVar1 == 0) {
          param_1[1] = piVar4;
          return piVar3;
        }
        *piVar3 = 0;
        return piVar3;
      }
      piVar4 = piVar3;
    } while (piVar2 != (int *)0x0);
  }
  return (int *)0x0;
}

