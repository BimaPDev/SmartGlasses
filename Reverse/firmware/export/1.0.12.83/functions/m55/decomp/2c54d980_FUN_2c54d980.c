/* FUN_2c54d980 @ 0x2c54d980 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c54d980(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = (int)param_1 + *(int *)(*param_1 + -0x14);
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0x14)) = _LAB_2c54d9b4;
  piVar3 = *(int **)(iVar4 + 0xc);
  piVar1 = *(int **)(iVar4 + 8);
  if (*(int **)(iVar4 + 8) != piVar3) {
    do {
      piVar2 = piVar1 + 0x39;
      (**(code **)(*piVar1 + 4))(piVar1);
      piVar1 = piVar2;
    } while (piVar3 != piVar2);
    piVar3 = *(int **)(iVar4 + 8);
  }
  if (piVar3 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar3);
  }
  return iVar4;
}

