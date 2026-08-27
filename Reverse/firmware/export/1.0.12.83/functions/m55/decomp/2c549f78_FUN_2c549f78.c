/* FUN_2c549f78 @ 0x2c549f78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c549f78(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = (int)param_1 + *(int *)(*param_1 + -0x14);
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0x14)) = _LAB_2c54a008;
  if (*(int *)(iVar3 + 0x50) != iVar3 + 0x58) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar3 + 0x38) != iVar3 + 0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar3 + 0x20) != iVar3 + 0x28) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  piVar4 = *(int **)(iVar3 + 0x18);
  piVar2 = *(int **)(iVar3 + 0x14);
  if (*(int **)(iVar3 + 0x14) != piVar4) {
    do {
      piVar1 = piVar2 + 0x1f;
      (**(code **)(*piVar2 + 4))(piVar2);
      piVar2 = piVar1;
    } while (piVar4 != piVar1);
    piVar4 = *(int **)(iVar3 + 0x14);
  }
  if (piVar4 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar4);
  }
  piVar4 = *(int **)(iVar3 + 0xc);
  piVar2 = *(int **)(iVar3 + 8);
  if (*(int **)(iVar3 + 8) != piVar4) {
    do {
      piVar1 = piVar2 + 0xf;
      (**(code **)(*piVar2 + 4))(piVar2);
      piVar2 = piVar1;
    } while (piVar4 != piVar1);
    piVar4 = *(int **)(iVar3 + 8);
  }
  if (piVar4 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,iVar3);
}

