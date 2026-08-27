/* FUN_2c5b5860 @ 0x2c5b5860 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5b5860(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iStack_2c;
  
  piVar9 = _LAB_2c5b5a50;
  piVar11 = (int *)*param_1;
  piVar12 = (int *)param_1[1];
  uVar4 = _LAB_2c5b5a3c * ((int)piVar12 - (int)piVar11 >> 3);
  if (uVar4 - _LAB_2c5b5a40 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_LAB_2c5b5a4c);
  }
  uVar7 = uVar4;
  if (uVar4 == 0) {
    uVar7 = 1;
  }
  uVar5 = uVar4 + uVar7;
  iStack_2c = _DAT_2c5b5a48;
  if (!CARRY4(uVar4,uVar7)) {
    if (uVar5 == 0) {
      iVar10 = 0x18;
      iVar3 = 0;
      iStack_2c = 0;
      goto LAB_2c5b58a2;
    }
    if (_LAB_2c5b5a40 <= uVar5) {
      uVar5 = _LAB_2c5b5a40;
    }
    iStack_2c = uVar5 * 0x18;
  }
  if (*_LAB_2c5b5a50 == 0) {
    FUN_2c4723c4();
    *piVar9 = 1;
  }
  iVar3 = FUN_2c47245c(0,iStack_2c);
  iStack_2c = iVar3 + iStack_2c;
  iVar10 = iVar3 + 0x18;
LAB_2c5b58a2:
  iVar1 = (int)param_2 + (iVar3 - (int)piVar11);
  *(int *)((int)param_2 + (iVar3 - (int)piVar11)) = iVar1 + 8;
  FUN_2c5b502c(iVar1,*param_3,param_3[1] + *param_3);
  if (param_2 != piVar11) {
    piVar2 = piVar11 + 2;
    piVar6 = (int *)(iVar3 + 8);
    piVar9 = piVar11;
    do {
      piVar8 = piVar9 + 6;
      piVar6[-2] = (int)piVar6;
      if ((int *)*piVar9 == piVar2) {
        iVar13 = piVar2[1];
        iVar1 = piVar2[2];
        iVar10 = piVar2[3];
        *piVar6 = *piVar2;
        piVar6[1] = iVar13;
        piVar6[2] = iVar1;
        piVar6[3] = iVar10;
      }
      else {
        piVar6[-2] = *piVar9;
        *piVar6 = piVar9[2];
      }
      piVar6[-1] = piVar9[1];
      *(undefined1 *)(piVar9 + 2) = 0;
      *piVar9 = (int)piVar2;
      piVar9[1] = 0;
      piVar2 = piVar2 + 6;
      piVar6 = piVar6 + 6;
      piVar9 = piVar8;
    } while (param_2 != piVar8);
    iVar10 = iVar3 + ((_LAB_2c5b5a44 * ((uint)((int)param_2 + (-0x18 - (int)piVar11)) >> 3) &
                      0x1fffffff) + 2) * 0x18;
  }
  if (param_2 != piVar12) {
    piVar2 = param_2 + 2;
    piVar6 = (int *)(iVar10 + 8);
    piVar9 = param_2;
    do {
      piVar8 = piVar9 + 6;
      piVar6[-2] = (int)piVar6;
      if ((int *)*piVar9 == piVar2) {
        iVar14 = piVar2[1];
        iVar13 = piVar2[2];
        iVar1 = piVar2[3];
        *piVar6 = *piVar2;
        piVar6[1] = iVar14;
        piVar6[2] = iVar13;
        piVar6[3] = iVar1;
      }
      else {
        piVar6[-2] = *piVar9;
        *piVar6 = piVar9[2];
      }
      piVar6[-1] = piVar9[1];
      *(undefined1 *)(piVar9 + 2) = 0;
      *piVar9 = (int)piVar2;
      piVar9[1] = 0;
      piVar2 = piVar2 + 6;
      piVar6 = piVar6 + 6;
      piVar9 = piVar8;
    } while (piVar12 != piVar8);
    iVar10 = iVar10 + ((_LAB_2c5b5a44 * ((uint)((int)piVar12 + (-0x18 - (int)param_2)) >> 3) &
                       0x1fffffff) + 1) * 0x18;
  }
  if (piVar11 != piVar12) {
    piVar6 = piVar11 + 2;
    piVar9 = piVar11;
    do {
      if ((int *)piVar6[-2] != piVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      piVar9 = piVar9 + 6;
      piVar6 = piVar6 + 6;
    } while (piVar9 != piVar12);
  }
  if (piVar11 == (int *)0x0) {
    *param_1 = iVar3;
    param_1[1] = iVar10;
    param_1[2] = iStack_2c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,piVar11);
}

