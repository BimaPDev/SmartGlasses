/* FUN_2c525308 @ 0x2c525308 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c525308(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  code *pcVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  pcVar5 = _LAB_2c52554c;
  pcVar7 = _LAB_2c525548;
  iVar12 = param_1[0x39];
  iVar14 = param_1[0x3a];
  if (iVar12 != iVar14) {
    do {
      piVar11 = *(int **)(iVar12 + 4);
      if ((piVar11 != (int *)0x0) && (iVar6 = piVar11[1], piVar11[1] = iVar6 + -1, iVar6 + -1 == 0))
      {
        if (*(code **)(*piVar11 + 8) != pcVar5) {
          (**(code **)(*piVar11 + 8))(piVar11);
        }
        iVar6 = piVar11[2];
        piVar11[2] = iVar6 + -1;
        if (iVar6 + -1 == 0) {
          pcVar3 = *(code **)(*piVar11 + 0xc);
          if (pcVar3 == pcVar7) {
            (**(code **)(*piVar11 + 4))();
          }
          else {
            (*pcVar3)(piVar11);
          }
        }
      }
      iVar12 = iVar12 + 8;
    } while (iVar14 != iVar12);
    iVar14 = param_1[0x39];
  }
  if (iVar14 != 0) {
    thunk_FUN_2c669588(iVar14,param_1[0x3b] - iVar14);
  }
  piVar11 = (int *)param_1[0x38];
  if ((piVar11 != (int *)0x0) && (iVar12 = piVar11[1], piVar11[1] = iVar12 + -1, iVar12 + -1 == 0))
  {
    if (*(code **)(*piVar11 + 8) != _LAB_2c52554c) {
      (**(code **)(*piVar11 + 8))(piVar11);
    }
    iVar12 = piVar11[2];
    piVar11[2] = iVar12 + -1;
    if (iVar12 + -1 == 0) {
      pcVar7 = *(code **)(*piVar11 + 0xc);
      if (pcVar7 == _LAB_2c525548) {
        (**(code **)(*piVar11 + 4))(piVar11);
      }
      else {
        (*pcVar7)(piVar11);
      }
    }
  }
  piVar11 = (int *)param_1[0x36];
  if ((piVar11 != (int *)0x0) && (iVar12 = piVar11[1], piVar11[1] = iVar12 + -1, iVar12 + -1 == 0))
  {
    if (*(code **)(*piVar11 + 8) != _LAB_2c52554c) {
      (**(code **)(*piVar11 + 8))(piVar11);
    }
    iVar12 = piVar11[2];
    piVar11[2] = iVar12 + -1;
    if (iVar12 + -1 == 0) {
      pcVar7 = *(code **)(*piVar11 + 0xc);
      if (pcVar7 == _LAB_2c525548) {
        (**(code **)(*piVar11 + 4))(piVar11);
      }
      else {
        (*pcVar7)(piVar11);
      }
    }
  }
  piVar11 = (int *)param_1[0x34];
  if ((piVar11 != (int *)0x0) && (iVar12 = piVar11[1], piVar11[1] = iVar12 + -1, iVar12 + -1 == 0))
  {
    if (*(code **)(*piVar11 + 8) != _LAB_2c525674) {
      (**(code **)(*piVar11 + 8))(piVar11);
    }
    iVar12 = piVar11[2];
    piVar11[2] = iVar12 + -1;
    if (iVar12 + -1 == 0) {
      pcVar7 = *(code **)(*piVar11 + 0xc);
      if (pcVar7 == _LAB_2c525678) {
        (**(code **)(*piVar11 + 4))(piVar11);
      }
      else {
        (*pcVar7)(piVar11);
      }
    }
  }
  uVar1 = _DAT_2c525550;
  pcVar7 = _LAB_2c52554c;
  piVar8 = (int *)param_1[0x2e];
  piVar4 = (int *)param_1[0x32];
  iVar6 = param_1[0x2d];
  iVar9 = param_1[0x2f];
  iVar12 = param_1[0x2b];
  iVar14 = param_1[0x30];
  piVar11 = piVar8;
  while (piVar11 = piVar11 + 1, piVar11 < piVar4) {
    iVar13 = *piVar11;
    iVar15 = iVar13 + 0x1c;
    do {
      piVar2 = *(int **)(iVar15 + -0x1c);
      *(undefined4 *)(iVar15 + -0x1c) = 0;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
      piVar2 = *(int **)(iVar15 + -0x14);
      *(undefined4 *)(iVar15 + -0x14) = 0;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
      piVar2 = *(int **)(iVar15 + -0x18);
      *(undefined4 *)(iVar15 + -0x18) = 0;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
      piVar2 = *(int **)(iVar15 + -4);
      *(undefined4 *)(iVar15 + -0x10) = uVar1;
      *(undefined4 *)(iVar15 + -8) = 0;
      *(undefined4 *)(iVar15 + -4) = 0;
      if (piVar2 != (int *)0x0) {
        iVar10 = piVar2[1];
        piVar2[1] = iVar10 + -1;
        if (iVar10 + -1 == 0) {
          if (*(code **)(*piVar2 + 8) != pcVar7) {
            (**(code **)(*piVar2 + 8))();
          }
          iVar10 = piVar2[2];
          piVar2[2] = iVar10 + -1;
          if (iVar10 + -1 == 0) {
            pcVar5 = *(code **)(*piVar2 + 0xc);
            if (pcVar5 == _LAB_2c525548) {
              (**(code **)(*piVar2 + 4))();
            }
            else {
              (*pcVar5)();
            }
          }
        }
        piVar2 = *(int **)(iVar15 + -4);
        if ((piVar2 != (int *)0x0) &&
           (iVar10 = piVar2[1], piVar2[1] = iVar10 + -1, iVar10 + -1 == 0)) {
          if (*(code **)(*piVar2 + 8) != pcVar7) {
            (**(code **)(*piVar2 + 8))();
          }
          iVar10 = piVar2[2];
          piVar2[2] = iVar10 + -1;
          if (iVar10 + -1 == 0) {
            pcVar5 = *(code **)(*piVar2 + 0xc);
            if (pcVar5 == _LAB_2c525548) {
              (**(code **)(*piVar2 + 4))();
            }
            else {
              (*pcVar5)();
            }
          }
        }
      }
      if (*(int **)(iVar15 + -0x14) != (int *)0x0) {
        (**(code **)(**(int **)(iVar15 + -0x14) + 4))();
      }
      if (*(int **)(iVar15 + -0x18) != (int *)0x0) {
        (**(code **)(**(int **)(iVar15 + -0x18) + 4))();
      }
      if (*(int **)(iVar15 + -0x1c) != (int *)0x0) {
        (**(code **)(**(int **)(iVar15 + -0x1c) + 4))();
      }
      iVar15 = iVar15 + 0x1c;
    } while (iVar15 != iVar13 + 0x214);
  }
  if (piVar8 == piVar4) {
    for (; iVar12 != iVar9; iVar12 = iVar12 + 0x1c) {
      FUN_2c525228(iVar12);
    }
  }
  else {
    for (; iVar12 != iVar6; iVar12 = iVar12 + 0x1c) {
      FUN_2c525228(iVar12);
    }
    for (; iVar9 != iVar14; iVar14 = iVar14 + 0x1c) {
      FUN_2c525228(iVar14);
    }
  }
  if (param_1[0x29] != 0) {
    if ((undefined4 *)(param_1[0x32] + 4) <= (undefined4 *)param_1[0x2e]) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,*(undefined4 *)param_1[0x2e]);
  }
  if ((int *)param_1[0x22] != param_1 + 0x24) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((int *)param_1[0x1c] != param_1 + 0x1e) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((int *)param_1[0x16] != param_1 + 0x18) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((int *)param_1[0x10] != param_1 + 0x12) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((int *)param_1[10] != param_1 + 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((int *)param_1[4] == param_1 + 6) {
    if ((int *)*param_1 != (int *)0x0) {
      (**(code **)(*(int *)*param_1 + 4))();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0);
}

