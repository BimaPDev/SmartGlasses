/* FUN_2c54fc54 @ 0x2c54fc54 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c54fc54(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = (int)param_1 + *(int *)(*param_1 + -0x14);
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0x14)) = _LAB_2c54fcfc;
  piVar4 = *(int **)(iVar3 + 0xb4);
  piVar1 = *(int **)(iVar3 + 0xb0);
  if (*(int **)(iVar3 + 0xb0) != piVar4) {
    do {
      piVar2 = piVar1 + 0x16;
      (**(code **)(*piVar1 + 4))(piVar1);
      piVar1 = piVar2;
    } while (piVar4 != piVar2);
    piVar4 = *(int **)(iVar3 + 0xb0);
  }
  if (piVar4 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar4);
  }
  if (*(int *)(iVar3 + 0x94) != iVar3 + 0x9c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar3 + 0x7c) != iVar3 + 0x84) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar3 + 100) != iVar3 + 0x6c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar3 + 0x4c) != iVar3 + 0x54) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar3 + 0x34) != iVar3 + 0x3c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar3 + 0x1c) != iVar3 + 0x24) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar3 + 4) != iVar3 + 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  return iVar3;
}

