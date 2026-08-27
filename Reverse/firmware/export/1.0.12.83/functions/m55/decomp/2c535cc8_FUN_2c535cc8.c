/* FUN_2c535cc8 @ 0x2c535cc8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c535cc8(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  iVar6 = param_3[3];
  iVar1 = param_2[3];
  piVar5 = (int *)*param_2;
  iVar9 = *param_3;
  iVar8 = param_3[1];
  piVar2 = (int *)param_2[2];
  iVar4 = _LAB_2c535f30 * ((int)piVar2 - (int)piVar5 >> 2) +
          _LAB_2c535f30 * (iVar9 - iVar8 >> 2) + ((iVar6 - iVar1 >> 2) + -1) * 0x12;
  iVar3 = iVar4 >> 2;
  if (0 < iVar3) {
    do {
      while( true ) {
        piVar7 = (int *)param_2[1];
        iVar4 = iVar1;
        if (((*piVar5 == *param_4) && (piVar5[2] == param_4[2])) && (piVar5[1] == param_4[1]))
        goto LAB_2c535d6a;
        piVar5 = piVar5 + 7;
        *param_2 = (int)piVar5;
        if (piVar2 == piVar5) {
          iVar4 = iVar1 + 4;
          param_2[3] = iVar4;
          piVar7 = *(int **)(iVar1 + 4);
          piVar2 = piVar7 + 0x7e;
          *param_2 = (int)piVar7;
          param_2[1] = (int)piVar7;
          param_2[2] = (int)piVar2;
          piVar5 = piVar7;
        }
        if ((*piVar5 != *param_4) || (piVar5[2] != param_4[2])) break;
        if (piVar5[1] == param_4[1]) goto LAB_2c535d6a;
        *param_2 = (int)(piVar5 + 7);
        if (piVar2 == piVar5 + 7) goto LAB_2c535d90;
LAB_2c535d2a:
        piVar5 = piVar5 + 7;
        iVar1 = iVar4;
        if (*piVar5 != *param_4) goto LAB_2c535d32;
LAB_2c535dac:
        iVar1 = iVar4;
        if (piVar5[2] != param_4[2]) goto LAB_2c535d32;
        if (piVar5[1] == param_4[1]) goto LAB_2c535d6a;
        piVar5 = piVar5 + 7;
        *param_2 = (int)piVar5;
        if (piVar2 == piVar5) goto LAB_2c535dc4;
LAB_2c535d3a:
        if (*piVar5 != *param_4) goto LAB_2c535d42;
LAB_2c535de0:
        if (piVar5[2] != param_4[2]) goto LAB_2c535d42;
        if (piVar5[1] == param_4[1]) {
LAB_2c535d6a:
          *param_1 = (int)piVar5;
          param_1[1] = (int)piVar7;
          param_1[2] = (int)piVar2;
          param_1[3] = iVar4;
          return param_1;
        }
        piVar5 = piVar5 + 7;
        *param_2 = (int)piVar5;
        iVar1 = iVar4;
        if (piVar2 == piVar5) goto LAB_2c535df8;
LAB_2c535d4a:
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) goto LAB_2c535e10;
      }
      *param_2 = (int)(piVar5 + 7);
      if (piVar2 != piVar5 + 7) goto LAB_2c535d2a;
LAB_2c535d90:
      iVar1 = iVar4 + 4;
      param_2[3] = iVar1;
      piVar7 = *(int **)(iVar4 + 4);
      piVar2 = piVar7 + 0x7e;
      *param_2 = (int)piVar7;
      param_2[1] = (int)piVar7;
      param_2[2] = (int)piVar2;
      iVar4 = iVar1;
      piVar5 = piVar7;
      if (*piVar7 == *param_4) goto LAB_2c535dac;
LAB_2c535d32:
      piVar5 = piVar5 + 7;
      *param_2 = (int)piVar5;
      iVar4 = iVar1;
      if (piVar2 != piVar5) goto LAB_2c535d3a;
LAB_2c535dc4:
      iVar4 = iVar1 + 4;
      param_2[3] = iVar4;
      piVar7 = *(int **)(iVar1 + 4);
      piVar2 = piVar7 + 0x7e;
      *param_2 = (int)piVar7;
      param_2[1] = (int)piVar7;
      param_2[2] = (int)piVar2;
      piVar5 = piVar7;
      if (*piVar7 == *param_4) goto LAB_2c535de0;
LAB_2c535d42:
      piVar5 = piVar5 + 7;
      *param_2 = (int)piVar5;
      iVar1 = iVar4;
      if (piVar2 != piVar5) goto LAB_2c535d4a;
LAB_2c535df8:
      iVar1 = iVar4 + 4;
      iVar3 = iVar3 + -1;
      param_2[3] = iVar1;
      piVar5 = *(int **)(iVar4 + 4);
      piVar2 = piVar5 + 0x7e;
      *param_2 = (int)piVar5;
      param_2[1] = (int)piVar5;
      param_2[2] = (int)piVar2;
    } while (iVar3 != 0);
LAB_2c535e10:
    iVar6 = param_3[3];
    iVar9 = *param_3;
    iVar8 = param_3[1];
    iVar4 = _LAB_2c535f30 * ((int)piVar2 - (int)piVar5 >> 2) +
            _LAB_2c535f30 * (iVar9 - iVar8 >> 2) + ((iVar6 - iVar1 >> 2) + -1) * 0x12;
  }
  if (iVar4 == 2) {
    piVar7 = (int *)param_2[1];
LAB_2c535eb6:
    iVar3 = iVar1;
    if (((*piVar5 == *param_4) && (piVar5[2] == param_4[2])) && (piVar5[1] == param_4[1]))
    goto LAB_2c535eec;
    piVar5 = piVar5 + 7;
    *param_2 = (int)piVar5;
    if (piVar2 == piVar5) {
      iVar3 = iVar1 + 4;
      param_2[3] = iVar3;
      piVar5 = *(int **)(iVar1 + 4);
      piVar2 = piVar5 + 0x7e;
      *param_2 = (int)piVar5;
      param_2[1] = (int)piVar5;
      param_2[2] = (int)piVar2;
      piVar7 = piVar5;
    }
  }
  else {
    iVar3 = iVar1;
    if (iVar4 == 3) {
      piVar7 = (int *)param_2[1];
      if (((*piVar5 == *param_4) && (piVar5[2] == param_4[2])) && (piVar5[1] == param_4[1]))
      goto LAB_2c535eec;
      piVar5 = piVar5 + 7;
      *param_2 = (int)piVar5;
      if (piVar2 == piVar5) {
        param_2[3] = iVar1 + 4;
        piVar5 = *(int **)(iVar1 + 4);
        piVar2 = piVar5 + 0x7e;
        *param_2 = (int)piVar5;
        param_2[1] = (int)piVar5;
        param_2[2] = (int)piVar2;
        iVar1 = iVar1 + 4;
        piVar7 = piVar5;
      }
      goto LAB_2c535eb6;
    }
    if (iVar4 != 1) goto LAB_2c535e4c;
    piVar7 = (int *)param_2[1];
  }
  if (((*piVar5 != *param_4) || (piVar5[2] != param_4[2])) || (piVar5[1] != param_4[1])) {
    *param_2 = (int)(piVar5 + 7);
    if (piVar5 + 7 == piVar2) {
      param_2[3] = iVar3 + 4;
      iVar3 = *(int *)(iVar3 + 4);
      *param_2 = iVar3;
      param_2[1] = iVar3;
      param_2[2] = iVar3 + 0x1f8;
    }
    iVar6 = param_3[3];
    iVar9 = *param_3;
    iVar8 = param_3[1];
LAB_2c535e4c:
    iVar3 = param_3[2];
    *param_1 = iVar9;
    param_1[1] = iVar8;
    param_1[2] = iVar3;
    param_1[3] = iVar6;
    return param_1;
  }
LAB_2c535eec:
  param_1[2] = (int)piVar2;
  param_1[3] = iVar3;
  *param_1 = (int)piVar5;
  param_1[1] = (int)piVar7;
  return param_1;
}

