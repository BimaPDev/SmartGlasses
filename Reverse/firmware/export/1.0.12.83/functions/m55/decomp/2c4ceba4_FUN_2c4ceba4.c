/* FUN_2c4ceba4 @ 0x2c4ceba4 */

void FUN_2c4ceba4(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  iVar7 = 1;
  piVar5 = param_1 + 199;
  do {
    piVar1 = piVar5 + 1;
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      piVar2 = (int *)piVar5[9];
      if (piVar2 != (int *)0x0) {
LAB_2c4cec24:
        if (*piVar2 != 0) {
          FUN_2c4d1070();
          piVar2 = (int *)piVar5[9];
        }
        if (piVar2[0xc] != 0) {
          thunk_FUN_2c4dc570();
        }
        FUN_2c4d1034(piVar5 + 9);
        goto LAB_2c4cec3e;
      }
    }
    else {
      piVar2 = *(int **)(iVar3 + 200);
      if (piVar2 != (int *)0x0) {
        if ((*piVar2 == 0) || (iVar6 != 0)) {
          if (iVar6 != 7) goto LAB_2c4cebd2;
        }
        else {
          FUN_2c4d10cc();
          piVar2 = *(int **)(*piVar1 + 200);
LAB_2c4cebd2:
          iVar3 = piVar5[2];
          if ((iVar3 != 0) && (*(int **)(iVar3 + 200) == piVar2)) {
            *(undefined4 *)(iVar3 + 200) = 0;
            piVar2 = *(int **)(*piVar1 + 200);
          }
        }
        FUN_2c4dc570(piVar2);
        *(undefined4 *)(*piVar1 + 200) = 0;
        iVar3 = *piVar1;
      }
      iVar3 = *(int *)(iVar3 + 0xc4);
      if (iVar3 == 0) {
        piVar2 = (int *)piVar5[9];
        if (piVar2 != (int *)0x0) goto LAB_2c4cec24;
      }
      else {
        if (iVar6 == 7) {
LAB_2c4cec16:
          FUN_2c4d7128(iVar3);
        }
        else {
          iVar4 = param_1[iVar7 + 200];
          if ((iVar4 != 0) && (iVar3 == *(int *)(iVar4 + 0xc4))) {
            *(undefined4 *)(iVar4 + 0xc4) = 0;
          }
          if (iVar6 != 0) {
            iVar3 = *(int *)(*piVar1 + 0xc4);
            goto LAB_2c4cec16;
          }
          FUN_2c4d7128(*(undefined4 *)(param_1[200] + 0xc4));
        }
        *(undefined4 *)(*piVar1 + 0xc4) = 0;
        piVar2 = (int *)piVar5[9];
        if (piVar2 != (int *)0x0) goto LAB_2c4cec24;
LAB_2c4cec3e:
        if (*piVar1 == 0) goto LAB_2c4cec48;
      }
      FUN_2c4d1050(piVar1);
    }
LAB_2c4cec48:
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + 1;
    piVar5 = piVar1;
    if (iVar6 == 8) {
      piVar5 = param_1 + 0xd8;
      do {
        piVar5 = piVar5 + 1;
        if (*piVar5 != 0) {
          FUN_2c4d1084(piVar5);
        }
      } while (param_1 + 0xe8 != piVar5);
      *param_1 = 0;
      param_1[0xb1] = 0;
      param_1[0xac] = 0;
      param_1[param_2 * 5 + 10] = 0;
      return;
    }
  } while( true );
}

