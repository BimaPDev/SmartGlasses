/* FUN_2c532454 @ 0x2c532454 */

void FUN_2c532454(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = (int *)param_1[3];
  piVar3 = (int *)param_2[3];
  piVar1 = piVar2 + 1;
  if (piVar1 < piVar3) {
    do {
      piVar2 = piVar1 + 1;
      iVar5 = *piVar1;
      iVar4 = iVar5 + 0x14;
      do {
        piVar1 = *(int **)(iVar4 + -0x10);
        *(undefined4 *)(iVar4 + -0x10) = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
        }
        piVar1 = *(int **)(iVar4 + -0x14);
        *(undefined4 *)(iVar4 + -0x14) = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
        }
        piVar1 = *(int **)(iVar4 + -0xc);
        *(undefined4 *)(iVar4 + -0xc) = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
        }
        piVar1 = *(int **)(iVar4 + -8);
        *(undefined4 *)(iVar4 + -8) = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
          if (*(int **)(iVar4 + -8) != (int *)0x0) {
            (**(code **)(**(int **)(iVar4 + -8) + 4))();
          }
        }
        if (*(int **)(iVar4 + -0xc) != (int *)0x0) {
          (**(code **)(**(int **)(iVar4 + -0xc) + 4))();
        }
        if (*(int **)(iVar4 + -0x10) != (int *)0x0) {
          (**(code **)(**(int **)(iVar4 + -0x10) + 4))();
        }
        if (*(int **)(iVar4 + -0x14) != (int *)0x0) {
          (**(code **)(**(int **)(iVar4 + -0x14) + 4))();
        }
        iVar4 = iVar4 + 0x14;
      } while (iVar4 != iVar5 + 0x208);
      piVar3 = (int *)param_2[3];
      piVar1 = piVar2;
    } while (piVar2 < piVar3);
    piVar2 = (int *)param_1[3];
  }
  iVar4 = *param_1;
  if (piVar2 == piVar3) {
    iVar5 = *param_2;
    if (iVar4 != iVar5) {
      iVar4 = iVar4 + 0x14;
      iVar6 = iVar4;
      while( true ) {
        piVar1 = *(int **)(iVar4 + -0x10);
        *(undefined4 *)(iVar4 + -0x10) = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
        }
        piVar1 = *(int **)(iVar4 + -0x14);
        *(undefined4 *)(iVar4 + -0x14) = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
        }
        piVar1 = *(int **)(iVar4 + -0xc);
        *(undefined4 *)(iVar4 + -0xc) = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
        }
        piVar1 = *(int **)(iVar4 + -8);
        *(undefined4 *)(iVar4 + -8) = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
          if (*(int **)(iVar4 + -8) != (int *)0x0) {
            (**(code **)(**(int **)(iVar4 + -8) + 4))();
          }
        }
        if (*(int **)(iVar4 + -0xc) != (int *)0x0) {
          (**(code **)(**(int **)(iVar4 + -0xc) + 4))();
        }
        if (*(int **)(iVar4 + -0x10) != (int *)0x0) {
          (**(code **)(**(int **)(iVar4 + -0x10) + 4))();
        }
        if (*(int **)(iVar4 + -0x14) != (int *)0x0) {
          (**(code **)(**(int **)(iVar4 + -0x14) + 4))();
        }
        iVar4 = iVar4 + 0x14;
        if (iVar5 == iVar6) break;
        iVar6 = iVar6 + 0x14;
      }
      return;
    }
  }
  else {
    iVar5 = param_1[2];
    if (iVar4 != iVar5) {
      iVar4 = iVar4 + 0x14;
      iVar6 = iVar4;
      while( true ) {
        piVar1 = *(int **)(iVar4 + -0x10);
        *(undefined4 *)(iVar4 + -0x10) = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
        }
        piVar1 = *(int **)(iVar4 + -0x14);
        *(undefined4 *)(iVar4 + -0x14) = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
        }
        piVar1 = *(int **)(iVar4 + -0xc);
        *(undefined4 *)(iVar4 + -0xc) = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
        }
        piVar1 = *(int **)(iVar4 + -8);
        *(undefined4 *)(iVar4 + -8) = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
          if (*(int **)(iVar4 + -8) != (int *)0x0) {
            (**(code **)(**(int **)(iVar4 + -8) + 4))();
          }
        }
        if (*(int **)(iVar4 + -0xc) != (int *)0x0) {
          (**(code **)(**(int **)(iVar4 + -0xc) + 4))();
        }
        if (*(int **)(iVar4 + -0x10) != (int *)0x0) {
          (**(code **)(**(int **)(iVar4 + -0x10) + 4))();
        }
        if (*(int **)(iVar4 + -0x14) != (int *)0x0) {
          (**(code **)(**(int **)(iVar4 + -0x14) + 4))();
        }
        iVar4 = iVar4 + 0x14;
        if (iVar5 == iVar6) break;
        iVar6 = iVar6 + 0x14;
      }
    }
    iVar4 = *param_2;
    if (param_2[1] != iVar4) {
      iVar6 = param_2[1] + 0x14;
      iVar5 = iVar6;
      while( true ) {
        piVar1 = *(int **)(iVar6 + -0x10);
        *(undefined4 *)(iVar6 + -0x10) = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
        }
        piVar1 = *(int **)(iVar6 + -0x14);
        *(undefined4 *)(iVar6 + -0x14) = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
        }
        piVar1 = *(int **)(iVar6 + -0xc);
        *(undefined4 *)(iVar6 + -0xc) = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
        }
        piVar1 = *(int **)(iVar6 + -8);
        *(undefined4 *)(iVar6 + -8) = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
          if (*(int **)(iVar6 + -8) != (int *)0x0) {
            (**(code **)(**(int **)(iVar6 + -8) + 4))();
          }
        }
        if (*(int **)(iVar6 + -0xc) != (int *)0x0) {
          (**(code **)(**(int **)(iVar6 + -0xc) + 4))();
        }
        if (*(int **)(iVar6 + -0x10) != (int *)0x0) {
          (**(code **)(**(int **)(iVar6 + -0x10) + 4))();
        }
        if (*(int **)(iVar6 + -0x14) != (int *)0x0) {
          (**(code **)(**(int **)(iVar6 + -0x14) + 4))();
        }
        iVar6 = iVar6 + 0x14;
        if (iVar4 == iVar5) break;
        iVar5 = iVar5 + 0x14;
      }
    }
  }
  return;
}

