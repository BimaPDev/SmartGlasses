/* FUN_2c54f848 @ 0x2c54f848 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c54f848(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = (int)param_1 + *(int *)(*param_1 + -0x14);
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0x14)) = _LAB_2c54f88c;
  piVar3 = *(int **)(iVar4 + 0x20);
  piVar1 = *(int **)(iVar4 + 0x1c);
  if (*(int **)(iVar4 + 0x1c) != piVar3) {
    do {
      piVar2 = piVar1 + 0x2f;
      (**(code **)(*piVar1 + 4))(piVar1);
      piVar1 = piVar2;
    } while (piVar3 != piVar2);
    piVar3 = *(int **)(iVar4 + 0x1c);
  }
  if (piVar3 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar3);
  }
  if (*(int *)(iVar4 + 4) != iVar4 + 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  return iVar4;
}

