/* FUN_2c50487c @ 0x2c50487c */

void FUN_2c50487c(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = *(int **)(param_2 + 8);
  if (piVar3 != *(int **)(param_2 + 0xc)) {
    do {
      while( true ) {
        piVar4 = piVar3 + 1;
        piVar2 = (int *)0x0;
        if (*piVar3 != 0) break;
LAB_2c504890:
        (**(code **)(*piVar2 + 0xc))(piVar2);
        piVar3 = piVar4;
        if (*(int **)(param_2 + 0xc) == piVar4) {
          return;
        }
      }
      iVar1 = FUN_2c5ef9d8(param_1);
      if (iVar1 == 0) {
        piVar2 = (int *)*piVar3;
        goto LAB_2c504890;
      }
      (**(code **)(*(int *)*piVar3 + 8))();
      piVar3 = piVar4;
    } while (*(int **)(param_2 + 0xc) != piVar4);
  }
  return;
}

