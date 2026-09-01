/* FUN_10133df0 @ 0x10133df0 */

int * FUN_10133df0(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(int **)(param_1 + 0x54) != (int *)0x0) {
    piVar1 = (int *)0x0;
    piVar2 = *(int **)(param_1 + 0x54);
    while (piVar3 = piVar2 + -2, piVar3 != (int *)0x0) {
      if (*(byte *)(piVar2 + 0x10) == param_2) {
        if (param_3 == 0) {
          return piVar3;
        }
        FUN_10133dc0(param_1 + 0x54,piVar1,piVar2,param_2,param_4);
        return piVar3;
      }
      if (piVar2 == (int *)0x0) {
        return (int *)0x0;
      }
      piVar3 = (int *)*piVar2;
      piVar1 = piVar2;
      piVar2 = piVar3;
      if (piVar3 == (int *)0x0) {
        return (int *)0x0;
      }
    }
  }
  return (int *)0x0;
}

