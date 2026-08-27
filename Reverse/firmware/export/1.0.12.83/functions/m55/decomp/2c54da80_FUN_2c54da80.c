/* FUN_2c54da80 @ 0x2c54da80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c54da80(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  uVar1 = _LAB_2c54dacc;
  iVar5 = (int)param_1 + *(int *)(*param_1 + -0x14);
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0x14)) = _LAB_2c54dac8;
  piVar4 = *(int **)(iVar5 + 0x28);
  *(undefined4 *)(iVar5 + 0x1c) = uVar1;
  piVar2 = *(int **)(iVar5 + 0x24);
  if (*(int **)(iVar5 + 0x24) != piVar4) {
    do {
      piVar3 = piVar2 + 0x39;
      (**(code **)(*piVar2 + 4))(piVar2);
      piVar2 = piVar3;
    } while (piVar4 != piVar3);
    piVar4 = *(int **)(iVar5 + 0x24);
  }
  if (piVar4 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar4);
  }
  if (*(int *)(iVar5 + 4) != iVar5 + 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  return iVar5;
}

