/* FUN_2c524e7c @ 0x2c524e7c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c524e7c(int param_1)

{
  code *pcVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  
  pcVar1 = _LAB_2c525094;
  pcVar5 = _LAB_2c525090;
  iVar9 = *(int *)(param_1 + 0x44);
  iVar11 = *(int *)(param_1 + 0x48);
  if (iVar9 != iVar11) {
    do {
      piVar8 = *(int **)(iVar9 + 4);
      if ((piVar8 != (int *)0x0) && (iVar4 = piVar8[1], piVar8[1] = iVar4 + -1, iVar4 + -1 == 0)) {
        if (*(code **)(*piVar8 + 8) != pcVar5) {
          (**(code **)(*piVar8 + 8))(piVar8);
        }
        iVar4 = piVar8[2];
        piVar8[2] = iVar4 + -1;
        if (iVar4 + -1 == 0) {
          pcVar3 = *(code **)(*piVar8 + 0xc);
          if (pcVar3 == pcVar1) {
            (**(code **)(*piVar8 + 4))();
          }
          else {
            (*pcVar3)(piVar8);
          }
        }
      }
      iVar9 = iVar9 + 8;
    } while (iVar11 != iVar9);
    iVar11 = *(int *)(param_1 + 0x44);
  }
  if (iVar11 != 0) {
    thunk_FUN_2c669588(iVar11,*(int *)(param_1 + 0x4c) - iVar11);
  }
  piVar8 = *(int **)(param_1 + 0x40);
  if ((piVar8 != (int *)0x0) && (iVar9 = piVar8[1], piVar8[1] = iVar9 + -1, iVar9 + -1 == 0)) {
    if (*(code **)(*piVar8 + 8) != _LAB_2c525090) {
      (**(code **)(*piVar8 + 8))(piVar8);
    }
    iVar9 = piVar8[2];
    piVar8[2] = iVar9 + -1;
    if (iVar9 + -1 == 0) {
      pcVar5 = *(code **)(*piVar8 + 0xc);
      if (pcVar5 == _LAB_2c525094) {
        (**(code **)(*piVar8 + 4))(piVar8);
      }
      else {
        (*pcVar5)(piVar8);
      }
    }
  }
  piVar8 = *(int **)(param_1 + 0x38);
  if ((piVar8 != (int *)0x0) && (iVar9 = piVar8[1], piVar8[1] = iVar9 + -1, iVar9 + -1 == 0)) {
    if (*(code **)(*piVar8 + 8) != _LAB_2c525090) {
      (**(code **)(*piVar8 + 8))(piVar8);
    }
    iVar9 = piVar8[2];
    piVar8[2] = iVar9 + -1;
    if (iVar9 + -1 == 0) {
      pcVar5 = *(code **)(*piVar8 + 0xc);
      if (pcVar5 == _LAB_2c525094) {
        (**(code **)(*piVar8 + 4))(piVar8);
      }
      else {
        (*pcVar5)(piVar8);
      }
    }
  }
  piVar8 = *(int **)(param_1 + 0x30);
  if ((piVar8 != (int *)0x0) && (iVar9 = piVar8[1], piVar8[1] = iVar9 + -1, iVar9 + -1 == 0)) {
    if (*(code **)(*piVar8 + 8) != _LAB_2c525220) {
      (**(code **)(*piVar8 + 8))(piVar8);
    }
    iVar9 = piVar8[2];
    piVar8[2] = iVar9 + -1;
    if (iVar9 + -1 == 0) {
      pcVar5 = *(code **)(*piVar8 + 0xc);
      if (pcVar5 == _LAB_2c525224) {
        (**(code **)(*piVar8 + 4))(piVar8);
      }
      else {
        (*pcVar5)(piVar8);
      }
    }
  }
  piVar6 = *(int **)(param_1 + 0x18);
  piVar12 = *(int **)(param_1 + 0x28);
  iVar9 = *(int *)(param_1 + 0xc);
  iVar13 = *(int *)(param_1 + 0x14);
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar11 = *(int *)(param_1 + 0x20);
  piVar8 = piVar6;
  while (piVar8 = piVar8 + 1, piVar8 < piVar12) {
    iVar7 = *piVar8;
    iVar10 = iVar7 + 0x14;
    do {
      piVar2 = *(int **)(iVar10 + -0x10);
      *(undefined4 *)(iVar10 + -0x10) = 0;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
      piVar2 = *(int **)(iVar10 + -0x14);
      *(undefined4 *)(iVar10 + -0x14) = 0;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
      piVar2 = *(int **)(iVar10 + -0xc);
      *(undefined4 *)(iVar10 + -0xc) = 0;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
      piVar2 = *(int **)(iVar10 + -8);
      *(undefined4 *)(iVar10 + -8) = 0;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
        if (*(int **)(iVar10 + -8) != (int *)0x0) {
          (**(code **)(**(int **)(iVar10 + -8) + 4))();
        }
      }
      if (*(int **)(iVar10 + -0xc) != (int *)0x0) {
        (**(code **)(**(int **)(iVar10 + -0xc) + 4))();
      }
      if (*(int **)(iVar10 + -0x10) != (int *)0x0) {
        (**(code **)(**(int **)(iVar10 + -0x10) + 4))();
      }
      if (*(int **)(iVar10 + -0x14) != (int *)0x0) {
        (**(code **)(**(int **)(iVar10 + -0x14) + 4))();
      }
      iVar10 = iVar10 + 0x14;
    } while (iVar7 + 0x208 != iVar10);
  }
  if (piVar6 == piVar12) {
    if (iVar9 != iVar4) {
      iVar9 = iVar9 + 0x14;
      iVar11 = iVar9;
      while( true ) {
        piVar8 = *(int **)(iVar9 + -0x10);
        *(undefined4 *)(iVar9 + -0x10) = 0;
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 4))();
        }
        piVar8 = *(int **)(iVar9 + -0x14);
        *(undefined4 *)(iVar9 + -0x14) = 0;
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 4))();
        }
        piVar8 = *(int **)(iVar9 + -0xc);
        *(undefined4 *)(iVar9 + -0xc) = 0;
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 4))();
        }
        piVar8 = *(int **)(iVar9 + -8);
        *(undefined4 *)(iVar9 + -8) = 0;
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 4))();
          if (*(int **)(iVar9 + -8) != (int *)0x0) {
            (**(code **)(**(int **)(iVar9 + -8) + 4))();
          }
        }
        if (*(int **)(iVar9 + -0xc) != (int *)0x0) {
          (**(code **)(**(int **)(iVar9 + -0xc) + 4))();
        }
        if (*(int **)(iVar9 + -0x10) != (int *)0x0) {
          (**(code **)(**(int **)(iVar9 + -0x10) + 4))();
        }
        if (*(int **)(iVar9 + -0x14) != (int *)0x0) {
          (**(code **)(**(int **)(iVar9 + -0x14) + 4))();
        }
        iVar9 = iVar9 + 0x14;
        if (iVar4 == iVar11) break;
        iVar11 = iVar11 + 0x14;
      }
    }
  }
  else {
    if (iVar9 != iVar13) {
      iVar9 = iVar9 + 0x14;
      iVar7 = iVar9;
      while( true ) {
        piVar8 = *(int **)(iVar9 + -0x10);
        *(undefined4 *)(iVar9 + -0x10) = 0;
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 4))();
        }
        piVar8 = *(int **)(iVar9 + -0x14);
        *(undefined4 *)(iVar9 + -0x14) = 0;
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 4))();
        }
        piVar8 = *(int **)(iVar9 + -0xc);
        *(undefined4 *)(iVar9 + -0xc) = 0;
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 4))();
        }
        piVar8 = *(int **)(iVar9 + -8);
        *(undefined4 *)(iVar9 + -8) = 0;
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 4))();
          if (*(int **)(iVar9 + -8) != (int *)0x0) {
            (**(code **)(**(int **)(iVar9 + -8) + 4))();
          }
        }
        if (*(int **)(iVar9 + -0xc) != (int *)0x0) {
          (**(code **)(**(int **)(iVar9 + -0xc) + 4))();
        }
        if (*(int **)(iVar9 + -0x10) != (int *)0x0) {
          (**(code **)(**(int **)(iVar9 + -0x10) + 4))();
        }
        if (*(int **)(iVar9 + -0x14) != (int *)0x0) {
          (**(code **)(**(int **)(iVar9 + -0x14) + 4))();
        }
        iVar9 = iVar9 + 0x14;
        if (iVar13 == iVar7) break;
        iVar7 = iVar7 + 0x14;
      }
    }
    if (iVar4 != iVar11) {
      iVar11 = iVar11 + 0x14;
      iVar9 = iVar11;
      while( true ) {
        piVar8 = *(int **)(iVar11 + -0x10);
        *(undefined4 *)(iVar11 + -0x10) = 0;
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 4))();
        }
        piVar8 = *(int **)(iVar11 + -0x14);
        *(undefined4 *)(iVar11 + -0x14) = 0;
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 4))();
        }
        piVar8 = *(int **)(iVar11 + -0xc);
        *(undefined4 *)(iVar11 + -0xc) = 0;
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 4))();
        }
        piVar8 = *(int **)(iVar11 + -8);
        *(undefined4 *)(iVar11 + -8) = 0;
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 4))();
          if (*(int **)(iVar11 + -8) != (int *)0x0) {
            (**(code **)(**(int **)(iVar11 + -8) + 4))();
          }
        }
        if (*(int **)(iVar11 + -0xc) != (int *)0x0) {
          (**(code **)(**(int **)(iVar11 + -0xc) + 4))();
        }
        if (*(int **)(iVar11 + -0x10) != (int *)0x0) {
          (**(code **)(**(int **)(iVar11 + -0x10) + 4))();
        }
        if (*(int **)(iVar11 + -0x14) != (int *)0x0) {
          (**(code **)(**(int **)(iVar11 + -0x14) + 4))();
        }
        iVar11 = iVar11 + 0x14;
        if (iVar4 == iVar9) break;
        iVar9 = iVar9 + 0x14;
      }
    }
  }
  if (*(int *)(param_1 + 4) == 0) {
    return param_1;
  }
  if ((undefined4 *)(*(int *)(param_1 + 0x28) + 4) <= *(undefined4 **)(param_1 + 0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,**(undefined4 **)(param_1 + 0x18));
}

