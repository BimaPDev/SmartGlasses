/* FUN_1013cfea @ 0x1013cfea */

void FUN_1013cfea(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0xa8);
  if ((piVar1 != (int *)(param_1 + 0xa8)) && (piVar1 != (int *)0x0)) {
    if (piVar1 == *(int **)(param_1 + 0xac)) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)*piVar1;
    }
    while (param_2 != piVar1) {
      if (piVar2 == (int *)0x0) {
        return;
      }
      piVar1 = piVar2;
      if (piVar2 == *(int **)(param_1 + 0xac)) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)*piVar2;
      }
    }
    iVar3 = *param_2;
    piVar1 = (int *)param_2[1];
    *piVar1 = iVar3;
    *(int **)(iVar3 + 4) = piVar1;
    *param_2 = 0;
    param_2[1] = 0;
  }
  return;
}

