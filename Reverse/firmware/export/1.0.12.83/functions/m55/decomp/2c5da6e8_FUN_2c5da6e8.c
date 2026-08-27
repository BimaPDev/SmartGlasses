/* FUN_2c5da6e8 @ 0x2c5da6e8 */

void FUN_2c5da6e8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar2 = *(int **)(param_1 + 0x10);
  piVar6 = *(int **)(param_1 + 0x14);
  iVar1 = (int)piVar6 - (int)piVar2;
  piVar3 = piVar6;
  if (0 < iVar1 >> 4) {
    piVar4 = piVar2 + (iVar1 >> 4) * 4;
    do {
      iVar1 = FUN_2c5d8bdc(*piVar2);
      if (param_2 == iVar1) goto LAB_2c5da732;
      iVar1 = FUN_2c5d8bdc(piVar2[1]);
      if (param_2 == iVar1) {
        piVar2 = piVar2 + 1;
        goto LAB_2c5da732;
      }
      iVar1 = FUN_2c5d8bdc(piVar2[2]);
      if (param_2 == iVar1) {
        piVar2 = piVar2 + 2;
        goto LAB_2c5da732;
      }
      iVar1 = FUN_2c5d8bdc(piVar2[3]);
      if (param_2 == iVar1) {
        piVar2 = piVar2 + 3;
        goto LAB_2c5da732;
      }
      piVar2 = piVar2 + 4;
    } while (piVar2 != piVar4);
    iVar1 = (int)piVar6 - (int)piVar2;
  }
  iVar1 = iVar1 >> 2;
  if (iVar1 == 2) {
LAB_2c5da7b8:
    iVar1 = FUN_2c5d8bdc(*piVar2);
    if (param_2 != iVar1) {
      piVar2 = piVar2 + 1;
LAB_2c5da792:
      iVar1 = FUN_2c5d8bdc(*piVar2);
      if (param_2 != iVar1) goto LAB_2c5da754;
    }
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 != 1) goto LAB_2c5da754;
      goto LAB_2c5da792;
    }
    iVar1 = FUN_2c5d8bdc(*piVar2);
    if (param_2 != iVar1) {
      piVar2 = piVar2 + 1;
      goto LAB_2c5da7b8;
    }
  }
LAB_2c5da732:
  if (piVar2 != piVar6) {
    piVar4 = piVar2 + 1;
    while (piVar3 = piVar2, piVar5 = piVar4, piVar6 != piVar4) {
      while( true ) {
        piVar4 = piVar5 + 1;
        iVar1 = FUN_2c5d8bdc(*piVar5);
        if (param_2 == iVar1) break;
        *piVar2 = *piVar5;
        piVar3 = piVar2 + 1;
        piVar2 = piVar2 + 1;
        piVar5 = piVar4;
        if (piVar6 == piVar4) goto LAB_2c5da754;
      }
    }
  }
LAB_2c5da754:
  piVar2 = piVar3;
  if (piVar3 != *(int **)(param_1 + 0x14)) {
    do {
      piVar6 = piVar2 + 1;
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        FUN_2c5d8430(iVar1);
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0,iVar1);
      }
      piVar2 = piVar6;
    } while (*(int **)(param_1 + 0x14) != piVar6);
    if (piVar3 != piVar6) {
      *(int **)(param_1 + 0x14) = piVar3;
    }
  }
  return;
}

