/* FUN_2c58f4c8 @ 0x2c58f4c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c58f4c8(int *param_1,int *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iStack_3c;
  uint uStack_30;
  int iStack_2c;
  
  piVar9 = _LAB_2c58f730;
  piVar12 = (int *)*param_1;
  piVar13 = (int *)param_1[1];
  iStack_2c = *DAT_2c58f718;
  uVar5 = _LAB_2c58f71c * ((int)piVar13 - (int)piVar12 >> 3);
  if (uVar5 - _LAB_2c58f720 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_LAB_2c58f72c);
  }
  uVar8 = uVar5;
  if (uVar5 == 0) {
    uVar8 = 1;
  }
  uVar6 = uVar5 + uVar8;
  iStack_3c = _DAT_2c58f728;
  if (CARRY4(uVar5,uVar8)) {
LAB_2c58f6e0:
    if (*_LAB_2c58f730 == 0) {
      FUN_2c4723c4();
      *piVar9 = 1;
    }
    iVar4 = FUN_2c47245c(0,iStack_3c);
    iStack_3c = iVar4 + iStack_3c;
    iVar11 = iVar4 + 0x18;
  }
  else {
    if (uVar6 != 0) {
      if (_LAB_2c58f720 <= uVar6) {
        uVar6 = _LAB_2c58f720;
      }
      iStack_3c = uVar6 * 0x18;
      goto LAB_2c58f6e0;
    }
    iVar11 = 0x18;
    iVar4 = 0;
    iStack_3c = 0;
  }
  piVar9 = (int *)((int)param_2 + (iVar4 - (int)piVar12));
  *(int **)((int)param_2 + (iVar4 - (int)piVar12)) = piVar9 + 2;
  uVar5 = FUN_2c66c4ec(param_3);
  uStack_30 = uVar5;
  if (uVar5 < 0x10) {
    puVar1 = *(undefined1 **)((int)param_2 + (iVar4 - (int)piVar12));
    if (uVar5 != 1) {
      if (uVar5 == 0) {
        piVar9[1] = 0;
        *puVar1 = 0;
        goto joined_r0x2c58f5c0;
      }
      goto LAB_2c58f6c4;
    }
    *puVar1 = *param_3;
    iVar2 = *piVar9;
  }
  else {
    puVar1 = (undefined1 *)FUN_2c58d6c0(&uStack_30,0);
    *(undefined1 **)((int)param_2 + (iVar4 - (int)piVar12)) = puVar1;
    piVar9[2] = uStack_30;
LAB_2c58f6c4:
    FUN_2c674668(puVar1,param_3,uVar5);
    iVar2 = *piVar9;
  }
  piVar9[1] = uStack_30;
  *(undefined1 *)(iVar2 + uStack_30) = 0;
joined_r0x2c58f5c0:
  if (param_2 != piVar12) {
    piVar3 = piVar12 + 2;
    piVar7 = (int *)(iVar4 + 8);
    piVar9 = piVar12;
    do {
      piVar10 = piVar9 + 6;
      piVar7[-2] = (int)piVar7;
      if ((int *)*piVar9 == piVar3) {
        iVar14 = piVar3[1];
        iVar2 = piVar3[2];
        iVar11 = piVar3[3];
        *piVar7 = *piVar3;
        piVar7[1] = iVar14;
        piVar7[2] = iVar2;
        piVar7[3] = iVar11;
      }
      else {
        piVar7[-2] = *piVar9;
        *piVar7 = piVar9[2];
      }
      piVar7[-1] = piVar9[1];
      *(undefined1 *)(piVar9 + 2) = 0;
      *piVar9 = (int)piVar3;
      piVar9[1] = 0;
      piVar3 = piVar3 + 6;
      piVar7 = piVar7 + 6;
      piVar9 = piVar10;
    } while (param_2 != piVar10);
    iVar11 = iVar4 + ((DAT_2c58f724 * ((uint)((int)param_2 + (-0x18 - (int)piVar12)) >> 3) &
                      0x1fffffff) + 2) * 0x18;
  }
  if (param_2 != piVar13) {
    piVar3 = param_2 + 2;
    piVar7 = (int *)(iVar11 + 8);
    piVar9 = param_2;
    do {
      piVar10 = piVar9 + 6;
      piVar7[-2] = (int)piVar7;
      if ((int *)*piVar9 == piVar3) {
        iVar15 = piVar3[1];
        iVar14 = piVar3[2];
        iVar2 = piVar3[3];
        *piVar7 = *piVar3;
        piVar7[1] = iVar15;
        piVar7[2] = iVar14;
        piVar7[3] = iVar2;
      }
      else {
        piVar7[-2] = *piVar9;
        *piVar7 = piVar9[2];
      }
      piVar7[-1] = piVar9[1];
      *(undefined1 *)(piVar9 + 2) = 0;
      *piVar9 = (int)piVar3;
      piVar9[1] = 0;
      piVar3 = piVar3 + 6;
      piVar7 = piVar7 + 6;
      piVar9 = piVar10;
    } while (piVar13 != piVar10);
    iVar11 = iVar11 + ((DAT_2c58f724 * ((uint)((int)piVar13 + (-0x18 - (int)param_2)) >> 3) &
                       0x1fffffff) + 1) * 0x18;
  }
  if (piVar12 != piVar13) {
    piVar7 = piVar12 + 2;
    piVar9 = piVar12;
    do {
      if ((int *)piVar7[-2] != piVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      piVar9 = piVar9 + 6;
      piVar7 = piVar7 + 6;
    } while (piVar9 != piVar13);
  }
  if (piVar12 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar12);
  }
  param_1[2] = iStack_3c;
  piVar9 = DAT_2c58f718;
  *param_1 = iVar4;
  param_1[1] = iVar11;
  if (*piVar9 == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

