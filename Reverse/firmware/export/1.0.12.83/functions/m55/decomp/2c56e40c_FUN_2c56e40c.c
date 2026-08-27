/* FUN_2c56e40c @ 0x2c56e40c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c56e40c(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  piVar5 = (int *)param_1[10];
  *param_1 = _LAB_2c56e4ec;
  if (piVar5 != (int *)0x0) {
    if (*(code **)(*piVar5 + 0xc) == _LAB_2c56e4f0) {
      iVar4 = piVar5[0x12];
      iVar6 = piVar5[0x13];
      iVar2 = _LAB_2c56e4f4 + 0x24;
      *piVar5 = _LAB_2c56e4f4;
      piVar5[2] = iVar2;
      if (iVar4 != iVar6) {
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
        } while (iVar6 != iVar4);
        iVar6 = piVar5[0x12];
      }
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0,iVar6);
      }
      if ((int *)piVar5[0xc] != piVar5 + 0xe) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if ((int *)piVar5[6] != piVar5 + 8) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if ((int *)piVar5[5] != (int *)0x0) {
        (**(code **)(*(int *)piVar5[5] + 0xc))();
      }
      if (piVar5[4] != 0) {
        FUN_2c58d410(piVar5 + 4);
      }
      if (piVar5[3] != 0) {
        FUN_2c58d410(piVar5 + 3);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,piVar5);
    }
    (**(code **)(*piVar5 + 0xc))(piVar5);
  }
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 0xc))();
  }
  *param_1 = _LAB_2c56e4f8;
  if ((undefined4 *)param_1[3] != param_1 + 5) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  return param_1;
}

