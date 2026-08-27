/* FUN_2c504b9c @ 0x2c504b9c */

void FUN_2c504b9c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0xc);
  piVar2 = *(int **)(param_1 + 8);
  do {
    piVar1 = piVar2;
    if (piVar3 == piVar1) {
      return;
    }
    piVar2 = piVar1 + 1;
  } while (*piVar1 != param_2);
  if (piVar3 != piVar2) {
    FUN_2c673eb8(piVar1,piVar2,(int)piVar3 - (int)piVar2,piVar2,param_4);
    piVar2 = *(int **)(param_1 + 0xc);
  }
  *(int **)(param_1 + 0xc) = piVar2 + -1;
  return;
}

