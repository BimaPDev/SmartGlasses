/* FUN_2c5da928 @ 0x2c5da928 */

void FUN_2c5da928(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x10);
  if (*(int **)(param_1 + 0x14) != piVar4) {
    piVar2 = piVar4 + 1;
    do {
      iVar3 = *piVar4;
      if (iVar3 != 0) {
        FUN_2c5d8430(iVar3);
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0,iVar3);
      }
      piVar1 = piVar2;
      if (*(int **)(param_1 + 0x14) != piVar2) {
        FUN_2c673eb8(piVar4,piVar2,(int)*(int **)(param_1 + 0x14) - (int)piVar2,piVar2,param_4);
        piVar1 = *(int **)(param_1 + 0x14);
      }
      *(int **)(param_1 + 0x14) = piVar1 + -1;
    } while (piVar4 != piVar1 + -1);
    if (*(int **)(param_1 + 0x10) != piVar4) {
      *(int **)(param_1 + 0x14) = *(int **)(param_1 + 0x10);
    }
  }
  return;
}

