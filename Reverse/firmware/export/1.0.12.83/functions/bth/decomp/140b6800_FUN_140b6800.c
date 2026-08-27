/* FUN_140b6800 @ 0x140b6800 */

void FUN_140b6800(undefined4 *param_1,int param_2)

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
LAB_140b6880:
        if (*piVar2 != 0) {
          FUN_140b7044();
          piVar2 = (int *)piVar5[9];
        }
        if (piVar2[0xc] != 0) {
          thunk_FUN_140b94c4();
        }
        FUN_140b7008(piVar5 + 9);
        goto LAB_140b689a;
      }
    }
    else {
      piVar2 = *(int **)(iVar3 + 200);
      if (piVar2 != (int *)0x0) {
        if ((*piVar2 == 0) || (iVar6 != 0)) {
          if (iVar6 != 7) goto LAB_140b682e;
        }
        else {
          FUN_140b70a0();
          piVar2 = *(int **)(*piVar1 + 200);
LAB_140b682e:
          iVar3 = piVar5[2];
          if ((iVar3 != 0) && (*(int **)(iVar3 + 200) == piVar2)) {
            *(undefined4 *)(iVar3 + 200) = 0;
            piVar2 = *(int **)(*piVar1 + 200);
          }
        }
        FUN_140b94c4(piVar2);
        *(undefined4 *)(*piVar1 + 200) = 0;
        iVar3 = *piVar1;
      }
      iVar3 = *(int *)(iVar3 + 0xc4);
      if (iVar3 == 0) {
        piVar2 = (int *)piVar5[9];
        if (piVar2 != (int *)0x0) goto LAB_140b6880;
      }
      else {
        if (iVar6 == 7) {
LAB_140b6872:
          FUN_140b94f8(iVar3);
        }
        else {
          iVar4 = param_1[iVar7 + 200];
          if ((iVar4 != 0) && (iVar3 == *(int *)(iVar4 + 0xc4))) {
            *(undefined4 *)(iVar4 + 0xc4) = 0;
          }
          if (iVar6 != 0) {
            iVar3 = *(int *)(*piVar1 + 0xc4);
            goto LAB_140b6872;
          }
          FUN_140b94f8(*(undefined4 *)(param_1[200] + 0xc4));
        }
        *(undefined4 *)(*piVar1 + 0xc4) = 0;
        piVar2 = (int *)piVar5[9];
        if (piVar2 != (int *)0x0) goto LAB_140b6880;
LAB_140b689a:
        if (*piVar1 == 0) goto LAB_140b68a4;
      }
      FUN_140b7024(piVar1);
    }
LAB_140b68a4:
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + 1;
    piVar5 = piVar1;
    if (iVar6 == 8) {
      piVar5 = param_1 + 0xd8;
      do {
        piVar5 = piVar5 + 1;
        if (*piVar5 != 0) {
          FUN_140b7058(piVar5);
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

