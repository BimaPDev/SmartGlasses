/* FUN_2c54f7b8 @ 0x2c54f7b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c54f7b8(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = (int)param_1 + *(int *)(*param_1 + -0x14);
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0x14)) = _LAB_2c54f800;
  piVar3 = *(int **)(iVar4 + 0x24);
  piVar1 = *(int **)(iVar4 + 0x20);
  if (*(int **)(iVar4 + 0x20) != piVar3) {
    do {
      piVar2 = piVar1 + 0x2f;
      (**(code **)(*piVar1 + 4))(piVar1);
      piVar1 = piVar2;
    } while (piVar3 != piVar2);
    piVar3 = *(int **)(iVar4 + 0x20);
  }
  if (piVar3 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar3);
  }
  if (*(int *)(iVar4 + 8) != iVar4 + 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  return iVar4;
}

