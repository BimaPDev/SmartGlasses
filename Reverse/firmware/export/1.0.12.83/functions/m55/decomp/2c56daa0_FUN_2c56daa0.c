/* FUN_2c56daa0 @ 0x2c56daa0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c56daa0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = _LAB_2c56db44 + 0x24;
  param_1[-2] = _LAB_2c56db44;
  iVar4 = param_1[0x10];
  iVar5 = param_1[0x11];
  *param_1 = iVar2;
  if (iVar4 != iVar5) {
    iVar2 = iVar4 + 0x20;
    do {
      if (iVar2 != *(int *)(iVar4 + 0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      piVar1 = (int *)(iVar2 + -0x20);
      iVar3 = iVar4 + 8;
      iVar2 = iVar2 + 0x38;
      iVar4 = iVar4 + 0x38;
      if (*piVar1 != iVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
    } while (iVar5 != iVar4);
    iVar5 = param_1[0x10];
  }
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,iVar5);
  }
  if ((int *)param_1[10] != param_1 + 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((int *)param_1[4] != param_1 + 6) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 0xc))();
  }
  if (param_1[2] != 0) {
    FUN_2c58d410(param_1 + 2);
  }
  if (param_1[1] != 0) {
    FUN_2c58d410(param_1 + 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,param_1 + -2);
}

